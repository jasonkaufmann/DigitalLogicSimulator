using System;
using System.Runtime.InteropServices;
using UnityEngine;

public class FullscreenCheck : MonoBehaviour
{
    private const int MONITOR_DEFAULTTONULL = 0;
    private const int MONITOR_DEFAULTTOPRIMARY = 1;
    private const int MONITOR_DEFAULTTONEAREST = 2;
    public bool AllowFullscreenMode; // Set this flag if we actually want Fullscreen mode

    private IntPtr _hWnd; // Main window handle
    private bool _repositionWindow; // Internally flags to reposition main window after switching out of fullscreen
    private float _timeElapsed; // Accumulates amount of time since last check

    // Start is called before the first frame update
    private void Start()
    {
        AllowFullscreenMode = false;

        _timeElapsed = 0;
        _repositionWindow = false;

        // This *should* return the handle for Standalone Player's main window
        _hWnd = FindWindow("UnityWndClass", null);
    }

    // Update is called once per frame
    private void Update()
    {
        if (AllowFullscreenMode || _hWnd == IntPtr.Zero) return;

        _timeElapsed += Time.deltaTime;

        // Poll FullScreenMode periodically and not every frame
        if (_timeElapsed < 0.25) return;

        _timeElapsed = 0;

        // Switch back to 'Windowed' mode if we ever find ourselves in Fullscreen
        // However the size of the window is generally too large and clipped by edge of the display
        if (Screen.fullScreenMode != FullScreenMode.Windowed)
        {
            Screen.fullScreenMode = FullScreenMode.Windowed;

            // Must wait 1 frame to mode change to settle before adjusting window position and size
            _repositionWindow = true;
        }
        else if (_repositionWindow)
        {
            // Get the monitor the Unity game window is currently on
            var monitor = MonitorFromWindow(_hWnd, MONITOR_DEFAULTTONEAREST);

            var info = new MONITORINFO();
            info.Init();

            // Move/resize the window to fit within the WorkArea (usable desktop space) of the current monitor
            if (monitor != IntPtr.Zero && GetMonitorInfo(monitor, ref info))
            {
                var width = info.WorkArea.Right - info.WorkArea.Left;
                var height = info.WorkArea.Bottom - info.WorkArea.Top;

                MoveWindow(_hWnd, info.WorkArea.Left, info.WorkArea.Top, width, height, false);

                // NOTE: On Windows 10 there will still be a gap between the window and the edge of the screen.
                // This is because the frame of a resizeable window (i.e. chrome) is invisible
            }

            _repositionWindow = false;
        }
    }

    [DllImport("user32.dll", CharSet = CharSet.Ansi)]
    private static extern IntPtr FindWindow(string className, string windowName);

    [DllImport("user32.dll")]
    private static extern bool SetWindowPos(IntPtr hWnd, IntPtr hWndInsertAfter, int x, int y, int cx, int cy,
        uint uFlags);

    [DllImport("user32.dll")]
    private static extern bool MoveWindow(IntPtr hWnd, int X, int Y, int nWidth, int nHeight, bool bRepaint);

    [DllImport("user32.dll")]
    private static extern IntPtr MonitorFromWindow(IntPtr hwnd, uint dwFlags);

    [DllImport("user32.dll", CharSet = CharSet.Auto)]
    private static extern bool GetMonitorInfo(IntPtr hMonitor, ref MONITORINFO lpmi);

    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Auto)]
    internal struct MONITORINFO
    {
        public int Size;
        public RectStruct Monitor;
        public RectStruct WorkArea;
        public uint Flags;

        public void Init()
        {
            Size = 40;
        }
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct RectStruct
    {
        public int Left;
        public int Top;
        public int Right;
        public int Bottom;
    }
}