using NUnit.Framework;
using System.Collections;
using System.Linq;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine.TestTools;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class PropertyDrawerTests
{
    class PropertyDrawerTestsWindow : EditorWindow
    {
        public Navigation navigation;

        SerializedObject serializedObject;

        void CreateGUI()
        {
            serializedObject = new SerializedObject(this);

            Add(nameof(navigation));

            rootVisualElement.Bind(serializedObject);
        }

        void Add(string propertyName)
        {
            rootVisualElement.Add(new PropertyField() { bindingPath = propertyName });
        }

        public SerializedProperty Property(string propertyName) => serializedObject.FindProperty(propertyName);

        public void Rebuild() => rootVisualElement.Bind(serializedObject);
    }

    static PropertyDrawerTestsWindow window;

    [OneTimeSetUp]
    [MenuItem("Tests/Open Property Drawer Test Window")]
    public static void OneTimeSetUp() => window = EditorWindow.GetWindow<PropertyDrawerTestsWindow>();

    [OneTimeTearDown]
    public void OneTimeTearDown() => window.Close();

    [Test]
    public static void NavigationDrawer_IsVisible()
    {
        Assert.IsNotNull(window.rootVisualElement.Query<VisualElement>("Navigation").Build().First());
    }

    // Fake expected result in order to make TestCaseAttribute to work with UnityTest
    [UnityTest]
    [TestCase(new object[] { (int)Navigation.Mode.None, 0}, ExpectedResult = null)]
    [TestCase(new object[] { (int)Navigation.Mode.Horizontal, 1 }, ExpectedResult = null)]
    [TestCase(new object[] { (int)Navigation.Mode.Vertical, 1 }, ExpectedResult = null)]
    [TestCase(new object[] { (int)Navigation.Mode.Automatic, 0 }, ExpectedResult = null)]
    [TestCase(new object[] { (int)Navigation.Mode.Explicit, 4 }, ExpectedResult = null)]
    [TestCase(new object[] { (int)(Navigation.Mode.Explicit | Navigation.Mode.Horizontal), 0 }, ExpectedResult = null)]
    [TestCase(new object[] { (int)(Navigation.Mode.Automatic | Navigation.Mode.Explicit), 0 }, ExpectedResult = null)]
    public static IEnumerator NavigationDrawer_ShowsCorrectAdditionalControlCount(int mode, int expectedCount)
    {
        window.Property("navigation.m_Mode").enumValueFlag = mode;
        window.Rebuild();
        yield return null;

        var indent = window.rootVisualElement.Query<VisualElement>("Navigation").Build().First().Query<VisualElement>("Indent").Build().First();
        var visibleChildren = indent.Children().Count(child => child.resolvedStyle.display != DisplayStyle.None);
        Assert.AreEqual(expectedCount, visibleChildren, $"{expectedCount} additional Navigation object properties should be " +
            $"visible when 'Mode' is set to '{(Navigation.Mode)window.Property("navigation.m_Mode").enumValueFlag}'");
    }
}
