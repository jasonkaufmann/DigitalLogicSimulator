#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// Mono.Math.BigInteger
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B;
// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2F711231B5142B5CF16AF94E2BBD10112DFDFD46;
IL2CPP_EXTERN_C String_t* _stringLiteral320DA2233DCCC5359A1A5EA863847EB34DE6BD1F;
IL2CPP_EXTERN_C String_t* _stringLiteral3227BC5517316F41D601A40DC84532F3C724DC04;
IL2CPP_EXTERN_C String_t* _stringLiteral32C78D941B97C930AACD7D6E8DB23C25EEB4F0DC;
IL2CPP_EXTERN_C String_t* _stringLiteral387F7E2809830195F02BCCAE39C49D389AC99CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF;
IL2CPP_EXTERN_C String_t* _stringLiteral5B8103E2B806098B7F46CF08C6D72C8755B125FC;
IL2CPP_EXTERN_C String_t* _stringLiteral5F0552FD39D0662CC057CFE2B43FEC612634CD8B;
IL2CPP_EXTERN_C String_t* _stringLiteral5F6CA27A9C002B63386F4AB67AC0CE31874F8329;
IL2CPP_EXTERN_C String_t* _stringLiteral7574434A66B8CE95810DD546D39A94210FA34C93;
IL2CPP_EXTERN_C String_t* _stringLiteral80581756DEDCE88293CE555E5A87B00CD4001098;
IL2CPP_EXTERN_C String_t* _stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99;
IL2CPP_EXTERN_C String_t* _stringLiteralD50495FC91A1C7AEC9A992D5D9500D59B15669C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_modInverse_m741905D9CCEC274288E9144E69BC4862576082A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimalityTests_RabinMillerTest_m8CB7357EAAB8F33F542625238BEDA04D02D3FEE1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Mono.Math.BigInteger
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08  : public RuntimeObject
{
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___data_1;
};

struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields
{
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * ___rng_3;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * ___Empty_0;
};

// Mono.Math.Prime.PrimalityTests
struct PrimalityTests_tDB9CA9A8AD178FFA67DA3B23F4C3E76D6B4F8F20  : public RuntimeObject
{
};

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372  : public RuntimeObject
{
};

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Mono.Math.BigInteger/Kernel
struct Kernel_t3E9C89E842E791BDCEC06BE4D7788BC552315ED2  : public RuntimeObject
{
};

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF  : public RuntimeObject
{
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___constant_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___categoryForLatin1_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175  : public PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2__padding[10];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct __StaticArrayInitTypeSizeU3D14_tD64C3B04E72E021106FEF390BE10E9F6143CED65 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_tD64C3B04E72E021106FEF390BE10E9F6143CED65__padding[14];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t3FAE08F10A75268B585F7B017FEEB774F4E15776 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t3FAE08F10A75268B585F7B017FEEB774F4E15776__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t2D0DEE853BDA1AD8D9861536BB032DC5710596AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t2D0DEE853BDA1AD8D9861536BB032DC5710596AB__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct __StaticArrayInitTypeSizeU3D3132_tB22FE8E689088D29959DAC48B057906D10762D61 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_tB22FE8E689088D29959DAC48B057906D10762D61__padding[3132];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t98F70AA7E629F6A93A37486AFFD45279759B86C3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t98F70AA7E629F6A93A37486AFFD45279759B86C3__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_t02BDA49745B091399292B3B370DB4FE5B9D6DDB5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t02BDA49745B091399292B3B370DB4FE5B9D6DDB5__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_tCF0B8F5E7316E215622AB02BE64B168AFC5FCCC7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_tCF0B8F5E7316E215622AB02BE64B168AFC5FCCC7__padding[9];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::12D04472A8285260EA12FD3813CDFA9F2D2B548C
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::13A35EF1A549297C70E2AD46045BBD2ECA17852D
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1;
	// System.Int64 <PrivateImplementationDetails>::16968835DEF6DD3BB86EABA9DEC53BF41851CD6D
	int64_t ___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::235D99572263B22ADFEE10FDA0C25E12F4D94FFC
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130
	__StaticArrayInitTypeSizeU3D14_tD64C3B04E72E021106FEF390BE10E9F6143CED65  ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::320B018758ECE3752FFEDBAEB1A6DB67C80B9359
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334  ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::3E3442C7396F3F2BB4C7348F4A2074C7DC677D68
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4E3B533C39447AAEB59A8E48FABD7E15B5B5D195
	__StaticArrayInitTypeSizeU3D48_t02BDA49745B091399292B3B370DB4FE5B9D6DDB5  ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::56DFA5053B3131883637F53219E7D88CCEF35949
	__StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2  ___56DFA5053B3131883637F53219E7D88CCEF35949_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_tCF0B8F5E7316E215622AB02BE64B168AFC5FCCC7  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132 <PrivateImplementationDetails>::6E5DC824F803F8565AF31B42199DAE39FE7F4EA9
	__StaticArrayInitTypeSizeU3D3132_tB22FE8E689088D29959DAC48B057906D10762D61  ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11;
	// System.Int64 <PrivateImplementationDetails>::6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF
	int64_t ___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::736D39815215889F11249D9958F6ED12D37B9F57
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___736D39815215889F11249D9958F6ED12D37B9F57_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::86F4F563FA2C61798AE6238D789139739428463A
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___86F4F563FA2C61798AE6238D789139739428463A_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::97FB30C84FF4A41CD4625B44B2940BFC8DB43003
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334  ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A323DB0813C4D072957BA6FDA79D9776674CD06B
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___A323DB0813C4D072957BA6FDA79D9776674CD06B_18;
	// System.Int64 <PrivateImplementationDetails>::AEA5F1CC5CFE1660539EDD691FE017F775F63A0D
	int64_t ___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BE1BDEC0AA74B4DCB079943E70528096CCA985F8
	__StaticArrayInitTypeSizeU3D20_t3FAE08F10A75268B585F7B017FEEB774F4E15776  ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::BF477463CE2F5EF38FC4C644BBBF4DF109E7670A
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::CF0B42666EF5E37EDEA0AB8E173E42C196D03814
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334  ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE
	__StaticArrayInitTypeSizeU3D32_t98F70AA7E629F6A93A37486AFFD45279759B86C3  ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::D2C5BAE967587C6F3D9F2C4551911E0575A1101F
	__StaticArrayInitTypeSizeU3D256_t2D0DEE853BDA1AD8D9861536BB032DC5710596AB  ___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E75835D001C843F156FBA01B001DFE1B8029AC17
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334  ___E75835D001C843F156FBA01B001DFE1B8029AC17_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11
	__StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2  ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::EC83FB16C20052BEE2B4025159BC2ED45C9C70C3
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F  ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27;
};

// Mono.Math.Prime.ConfidenceFactor
struct ConfidenceFactor_tFC67485C5A11DE15A0129C6002A35CAE070C82C2 
{
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// Mono.Math.BigInteger/Sign
struct Sign_t11F5CBC3891B31BE851882342D832361A761F404 
{
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_11;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B  : public MulticastDelegate_t
{
};

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;
};

struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_StaticFields
{
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66  : public RuntimeArray
{
	ALIGN_FIELD (8) BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * m_Items[1];

	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, uint32_t ___ui0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, uint32_t ___ui1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA * __this, String_t* ___message0, const RuntimeMethod* method);
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC (int32_t ___value0, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * Kernel_Subtract_mEBC7BB392F4EDBC7050684F8626424ED8DB82142 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___big0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___small1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t * __this, const RuntimeMethod* method);
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_DwordMod_m076999ABA0D65211B6CB6F53E225E4043B7805E8 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___n0, uint32_t ___d1, const RuntimeMethod* method);
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_multiByteDivide_mC719C7FBCF592D8720F30B4CD8B74F8DD95385D6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, int32_t ___sign0, uint32_t ___len1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Multiply_m7AAB50B2C6C1E0F696E1CC9E8AC5BE5299BE44B8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, uint32_t ___xOffset1, uint32_t ___xLen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, uint32_t ___yOffset4, uint32_t ___yLen5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___d6, uint32_t ___dOffset7, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, int32_t ___n1, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, int32_t ___n1, const RuntimeMethod* method);
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * RandomNumberGenerator_Create_mA8AC78824FF028898D2CEA52AF9B5BE6D6081009 (const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * BigInteger_get_Rng_m60AF9F9656E3A53330A19B61A1F31B9E994A75CB (const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_GenerateRandom_mF80D714145C0298E0CAED6DAFFB00D5D153FBDF5 (int32_t ___bits0, RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * ___rng1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m60B275C4579C541B806FECB49EBBDA1579DA70BE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, uint32_t ___bitNum0, bool ___value1, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, int32_t ___bitNum0, const RuntimeMethod* method);
// System.Int32 Mono.Math.BigInteger::BitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, uint32_t ___radix0, String_t* ___characterSet1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_SingleByteDivideInPlace_m449DBBAD9250C051D8DE7331770FE47548E786CA (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___n0, uint32_t ___d1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m7B8F0C5A75587F235E5EB82AF07817B90C9AC830 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, uint32_t ___ui1, const RuntimeMethod* method);
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m02A324A776BF09756B1BB3B6BFF6DBD7EA98852D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, uint32_t ___radix0, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * Kernel_modInverse_m741905D9CCEC274288E9144E69BC4862576082A6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___modulus1, const RuntimeMethod* method);
// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequentialSearchPrimeGeneratorBase__ctor_mFE1A43FA14390E871ED0C9025B57B84D9A7AA754 (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray * ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5  ___fldHandle1, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Division_mE30CB264DE7622B5EFBC03D42881F5E6C5EBDFD0 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MultiplyMod2p32pmod_m6A2EB428755580C05A03D6831BD77AEAE2EDDBEA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOffset1, int32_t ___xLen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, int32_t ___yOffest4, int32_t ___yLen5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___d6, int32_t ___dOffset7, int32_t ___mod8, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_mE13A82E3B45939FB4614756D81930A0C8E59401C (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MinusEq_mBED90EC10DF65E164E9A5CB80D19BAB81F80F0D6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___big0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___small1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_PlusEq_m8AE5BF895CCCA850E8B1BCE05824CA22BBE22196 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mC840A5F96C2E572E4DA967F778348FEEFDF09F7E (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mB88C29784044E8CDBE75D9ADFB72725093EA0665 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___x0, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___b1, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___k1, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Implicit_mA366B11D70EEA5E05CB0A27A253EA22DC3D47F3E (uint32_t ___value0, const RuntimeMethod* method);
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_DwordDivMod_m5D1999F64EAD588314733A5857FFFFA5C45A0C6A (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___n0, uint32_t ___d1, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_LeftShift_m83EA1C925821636CC6E2788E6FFA9F1E31D21EB4 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_RightShift_m338EE513BA46D08DFDA593D76CC1FD60B594D0E8 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mD26E0224E82674AFA9A6E4BF4F0674BB0B7BECBF (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, uint32_t ___len1, const RuntimeMethod* method);
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, uint32_t ___ui1, const RuntimeMethod* method);
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_modInverse_m6AC9B89937D3B998F633DEABB5272EAFE22EC00E (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, uint32_t ___modulus1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___modulus0, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___b1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Mono.Math.Prime.PrimalityTests::GetSPPRounds(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, int32_t ___confidence1, const RuntimeMethod* method);
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_LowestSetBit_m6443AF5F1F7C864A65365DD731FC7DAC1495DE20 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ModulusRing_Pow_m9F2BB905682A6999D33B598EE7A61755DC240C6D (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, uint32_t ___b0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___exp1, const RuntimeMethod* method);
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_GenerateRandom_mA6D7DE4D0B18C143D555FFF251F5FC9BDC47A1DB (int32_t ___bits0, const RuntimeMethod* method);
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method);
// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimalityTest__ctor_m73483F9E5D166F74E0340F479376C61D9280266A (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m3E67DE35B0E691FCB886C60252CAAFC3FCB92A39 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, uint32_t ___bitNum0, const RuntimeMethod* method);
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552 (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, int32_t ___confidence1, const RuntimeMethod* method);
// System.Void Mono.Math.BigInteger::Incr2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Incr2_mE5DCADCC1DEDD4F3E48E326940D3C926E1A37808 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method);
// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimeGeneratorBase__ctor_mECF0CD5B964A7E6FCE4F504719164114B8A678E9 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler__ctor_m5B52F3B7F5A33F1A0BDC378D304EF8F681A1D8FB (KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
}
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA (KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107 * __this, RuntimeObject * ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* delegateArrayToInvoke = __this->___delegates_11;
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->___method_ptr_0;
		RuntimeObject* targetThis = currentDelegate->___m_target_2;
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->___method_3);
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->___method_is_virtual_10)
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtualActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtualActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, int32_t ___sign0, uint32_t ___len1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___length_0 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint32_t L_0 = ___len1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_1);
		uint32_t L_2 = ___len1;
		__this->___length_0 = L_2;
		return;
	}
}
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___length_0 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi0;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
		NullCheck((RuntimeArray *)L_1);
		RuntimeObject * L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray *)L_1, NULL);
		__this->___data_1 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3 = ___bi0;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length_0;
		__this->___length_0 = L_4;
		return;
	}
}
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mD26E0224E82674AFA9A6E4BF4F0674BB0B7BECBF (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, uint32_t ___len1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		__this->___length_0 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint32_t L_0 = ___len1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_1);
		V_0 = 0;
		goto IL_0031;
	}

IL_001d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data_1;
		uint32_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = ___bi0;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_8);
		uint32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0031:
	{
		uint32_t L_10 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_11 = ___bi0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___length_0;
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_12))))
		{
			goto IL_001d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_13 = ___bi0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___length_0;
		__this->___length_0 = L_14;
		return;
	}
}
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		__this->___length_0 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inData0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		___inData0 = L_1;
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___inData0;
		NullCheck(L_2);
		__this->___length_0 = ((int32_t)((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))>>2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___inData0;
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))&(int32_t)3));
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = __this->___length_0;
		__this->___length_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_003b:
	{
		uint32_t L_6 = __this->___length_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___data_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___inData0;
		NullCheck(L_8);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), (int32_t)1));
		V_2 = 0;
		goto IL_0083;
	}

IL_0056:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->___data_1;
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___inData0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)3));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___inData0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)2));
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___inData0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___inData0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_18<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_22<<(int32_t)8))))|(int32_t)L_26)));
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)4));
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)3)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_30 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)))
		{
			case 0:
			{
				goto IL_009d;
			}
			case 1:
			{
				goto IL_00b1;
			}
			case 2:
			{
				goto IL_00cb;
			}
		}
	}
	{
		goto IL_00ea;
	}

IL_009d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___data_1;
		uint32_t L_32 = __this->___length_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___inData0;
		NullCheck(L_33);
		int32_t L_34 = 0;
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1))), (uint32_t)L_35);
		goto IL_00ea;
	}

IL_00b1:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___data_1;
		uint32_t L_37 = __this->___length_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___inData0;
		NullCheck(L_38);
		int32_t L_39 = 0;
		uint8_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___inData0;
		NullCheck(L_41);
		int32_t L_42 = 1;
		uint8_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1))), (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_40<<(int32_t)8))|(int32_t)L_43)));
		goto IL_00ea;
	}

IL_00cb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = __this->___data_1;
		uint32_t L_45 = __this->___length_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___inData0;
		NullCheck(L_46);
		int32_t L_47 = 0;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___inData0;
		NullCheck(L_49);
		int32_t L_50 = 1;
		uint8_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___inData0;
		NullCheck(L_52);
		int32_t L_53 = 2;
		uint8_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1))), (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_48<<(int32_t)((int32_t)16)))|(int32_t)((int32_t)((int32_t)L_51<<(int32_t)8))))|(int32_t)L_54)));
	}

IL_00ea:
	{
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(__this, NULL);
		return;
	}
}
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, uint32_t ___ui0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___length_0 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		uint32_t L_2 = ___ui0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_2);
		__this->___data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_1);
		return;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Implicit_mA366B11D70EEA5E05CB0A27A253EA22DC3D47F3E (uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___value0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0010:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_4, 0, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA * L_6 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F711231B5142B5CF16AF94E2BBD10112DFDFD46)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7_RuntimeMethod_var)));
	}

IL_0024:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = ___bi21;
		int32_t L_9;
		L_9 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_7, L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)(-1))))
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0049;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0042:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_11;
		L_11 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		return L_11;
	}

IL_0049:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_12 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_13 = ___bi21;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_14;
		L_14 = Kernel_Subtract_mEBC7BB392F4EDBC7050684F8626424ED8DB82142(L_12, L_13, NULL);
		return L_14;
	}

IL_0051:
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA * L_15 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F711231B5142B5CF16AF94E2BBD10112DFDFD46)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7_RuntimeMethod_var)));
	}

IL_005c:
	{
		Exception_t * L_16 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7_RuntimeMethod_var)));
	}
}
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, uint32_t ___ui1, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi0;
		uint32_t L_1 = ___ui1;
		uint32_t L_2;
		L_2 = Kernel_DwordMod_m076999ABA0D65211B6CB6F53E225E4043B7805E8(L_0, L_1, NULL);
		return L_2;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi21;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_2;
		L_2 = Kernel_multiByteDivide_mC719C7FBCF592D8720F30B4CD8B74F8DD95385D6(L_0, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Division_mE30CB264DE7622B5EFBC03D42881F5E6C5EBDFD0 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi21;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_2;
		L_2 = Kernel_multiByteDivide_mC719C7FBCF592D8720F30B4CD8B74F8DD95385D6(L_0, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_0 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_0, 0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_2, 0, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4;
		L_4 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		return L_4;
	}

IL_0019:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = ___bi10;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		NullCheck(L_6);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7 = ___bi10;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___length_0;
		if ((((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))) >= ((int64_t)((int64_t)((uint64_t)L_8)))))
		{
			goto IL_0036;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82 * L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F6CA27A9C002B63386F4AB67AC0CE31874F8329)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE_RuntimeMethod_var)));
	}

IL_0036:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_10 = ___bi21;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_1;
		NullCheck(L_11);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_12 = ___bi21;
		NullCheck(L_12);
		uint32_t L_13 = L_12->___length_0;
		if ((((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))) >= ((int64_t)((int64_t)((uint64_t)L_13)))))
		{
			goto IL_0053;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82 * L_14 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral387F7E2809830195F02BCCAE39C49D389AC99CAA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE_RuntimeMethod_var)));
	}

IL_0053:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_15 = ___bi10;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_17 = ___bi21;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_19 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_19, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_18)), /*hidden argument*/NULL);
		V_0 = L_19;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_20 = ___bi10;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_22 = ___bi10;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_24 = ___bi21;
		NullCheck(L_24);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_26 = ___bi21;
		NullCheck(L_26);
		uint32_t L_27 = L_26->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_28 = V_0;
		NullCheck(L_28);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = L_28->___data_1;
		Kernel_Multiply_m7AAB50B2C6C1E0F696E1CC9E8AC5BE5299BE44B8(L_21, 0, L_23, L_25, 0, L_27, L_29, 0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_30 = V_0;
		NullCheck(L_30);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_30, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_31 = V_0;
		return L_31;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_LeftShift_m83EA1C925821636CC6E2788E6FFA9F1E31D21EB4 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		int32_t L_1 = ___shiftVal1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2;
		L_2 = Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD(L_0, L_1, NULL);
		return L_2;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_op_RightShift_m338EE513BA46D08DFDA593D76CC1FD60B594D0E8 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		int32_t L_1 = ___shiftVal1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2;
		L_2 = Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * BigInteger_get_Rng_m60AF9F9656E3A53330A19B61A1F31B9E994A75CB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * L_0 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng_3;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * L_1;
		L_1 = RandomNumberGenerator_Create_mA8AC78824FF028898D2CEA52AF9B5BE6D6081009(NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng_3), (void*)L_1);
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * L_2 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng_3;
		return L_2;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_GenerateRandom_mF80D714145C0298E0CAED6DAFFB00D5D153FBDF5 (int32_t ___bits0, RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * ___rng1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = ___bits0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)5));
		int32_t L_1 = ___bits0;
		V_1 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)));
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0010:
	{
		int32_t L_4 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_5, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_6<<(int32_t)2)));
		V_3 = L_7;
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * L_8 = ___rng1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_3;
		NullCheck(L_8);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_8, L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_11 = V_2;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_1;
		int32_t L_13 = V_0;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray *)L_10, 0, (RuntimeArray *)L_12, 0, ((int32_t)((int32_t)L_13<<(int32_t)2)), NULL);
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_15 = V_1;
		V_4 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1))&(int32_t)((int32_t)31)))));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_16 = V_2;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		uint32_t* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)))));
		int32_t L_20 = *((uint32_t*)L_19);
		uint32_t L_21 = V_4;
		*((int32_t*)L_19) = (int32_t)((int32_t)((int32_t)L_20|(int32_t)L_21));
		int32_t L_22 = V_1;
		V_4 = ((int32_t)((uint32_t)(-1)>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_22))&(int32_t)((int32_t)31)))));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_23 = V_2;
		NullCheck(L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___data_1;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		uint32_t* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)))));
		int32_t L_27 = *((uint32_t*)L_26);
		uint32_t L_28 = V_4;
		*((int32_t*)L_26) = (int32_t)((int32_t)((int32_t)L_27&(int32_t)L_28));
		goto IL_0094;
	}

IL_007d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_29 = V_2;
		NullCheck(L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___data_1;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		uint32_t* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1)))));
		int32_t L_33 = *((uint32_t*)L_32);
		*((int32_t*)L_32) = (int32_t)((int32_t)((int32_t)L_33|(int32_t)((int32_t)-2147483648LL)));
	}

IL_0094:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_34 = V_2;
		NullCheck(L_34);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_34, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_35 = V_2;
		return L_35;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_GenerateRandom_mA6D7DE4D0B18C143D555FFF251F5FC9BDC47A1DB (int32_t ___bits0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___bits0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * L_1;
		L_1 = BigInteger_get_Rng_m60AF9F9656E3A53330A19B61A1F31B9E994A75CB(NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2;
		L_2 = BigInteger_GenerateRandom_mF80D714145C0298E0CAED6DAFFB00D5D153FBDF5(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 Mono.Math.BigInteger::BitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_1;
		uint32_t L_1 = __this->___length_0;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		V_1 = ((int32_t)-2147483648LL);
		V_2 = ((int32_t)32);
		goto IL_0029;
	}

IL_0021:
	{
		uint32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		uint32_t L_5 = V_1;
		V_1 = ((int32_t)((uint32_t)L_5>>1));
	}

IL_0029:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) > ((uint32_t)0))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		if (!((int32_t)((int32_t)L_7&(int32_t)L_8)))
		{
			goto IL_0021;
		}
	}

IL_0032:
	{
		uint32_t L_9 = V_2;
		uint32_t L_10 = __this->___length_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1))<<(int32_t)5))));
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, int32_t ___bitNum0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = ___bitNum0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82 * L_1 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32C78D941B97C930AACD7D6E8DB23C25EEB4F0DC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___bitNum0;
		V_0 = ((int32_t)((uint32_t)L_2>>5));
		int32_t L_3 = ___bitNum0;
		V_1 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31)))));
		uint8_t L_4 = V_1;
		V_2 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___data_1;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		uint32_t L_9 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data_1;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		uint32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return (bool)((((int32_t)((int32_t)((int32_t)L_8|(int32_t)L_9))) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m3E67DE35B0E691FCB886C60252CAAFC3FCB92A39 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, uint32_t ___bitNum0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___bitNum0;
		BigInteger_SetBit_m60B275C4579C541B806FECB49EBBDA1579DA70BE(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m60B275C4579C541B806FECB49EBBDA1579DA70BE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, uint32_t ___bitNum0, bool ___value1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___bitNum0;
		V_0 = ((int32_t)((uint32_t)L_0>>5));
		uint32_t L_1 = V_0;
		uint32_t L_2 = __this->___length_0;
		if ((!(((uint32_t)L_1) < ((uint32_t)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_3 = ___bitNum0;
		V_1 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))));
		bool L_4 = ___value1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___data_1;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = *((uint32_t*)L_7);
		uint32_t L_9 = V_1;
		*((int32_t*)L_7) = (int32_t)((int32_t)((int32_t)L_8|(int32_t)L_9));
		return;
	}

IL_002c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data_1;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		uint32_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)));
		int32_t L_13 = *((uint32_t*)L_12);
		uint32_t L_14 = V_1;
		*((int32_t*)L_12) = (int32_t)((int32_t)((int32_t)L_13&(int32_t)((~L_14))));
	}

IL_003e:
	{
		return;
	}
}
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_LowestSetBit_m6443AF5F1F7C864A65365DD731FC7DAC1495DE20 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(__this, 0, NULL);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_0013;
	}

IL_000f:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Byte[] Mono.Math.BigInteger::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(__this, 0, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		return L_1;
	}

IL_0010:
	{
		int32_t L_2;
		L_2 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(__this, NULL);
		int32_t L_3 = L_2;
		V_0 = ((int32_t)((int32_t)L_3>>(int32_t)3));
		if (!((int32_t)((int32_t)L_3&(int32_t)7)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0022:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		int32_t L_7 = V_0;
		V_2 = ((int32_t)((int32_t)L_7&(int32_t)3));
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		V_2 = 4;
	}

IL_0032:
	{
		V_3 = 0;
		uint32_t L_9 = __this->___length_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		goto IL_007e;
	}

IL_0040:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		int32_t L_14 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		goto IL_006d;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		int32_t L_16 = V_3;
		int32_t L_17 = V_6;
		uint32_t L_18 = V_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)255))))));
		uint32_t L_19 = V_5;
		V_5 = ((int32_t)((uint32_t)L_19>>8));
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_21 = V_6;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23));
		V_2 = 4;
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
	}

IL_007e:
	{
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		return L_26;
	}
}
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, uint32_t ___ui1, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___bi10;
		NullCheck(L_2);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_2, NULL);
	}

IL_000f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3 = ___bi10;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = ___bi10;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		uint32_t L_9 = ___ui1;
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m7B8F0C5A75587F235E5EB82AF07817B90C9AC830 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, uint32_t ___ui1, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___bi10;
		NullCheck(L_2);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_2, NULL);
	}

IL_000f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3 = ___bi10;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = ___bi10;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		uint32_t L_9 = ___ui1;
		return (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0027:
	{
		return (bool)1;
	}
}
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi21;
		if ((!(((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_0) == ((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_6 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7 = ___bi21;
		int32_t L_8;
		L_8 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi21;
		if ((!(((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_0) == ((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)1;
	}

IL_001a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_6 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7 = ___bi21;
		int32_t L_8;
		L_8 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_6, L_7, NULL);
		return (bool)((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mB88C29784044E8CDBE75D9ADFB72725093EA0665 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m6B49D00910D0474566294F331B8E2959414C87C7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mC840A5F96C2E572E4DA967F778348FEEFDF09F7E (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_mE13A82E3B45939FB4614756D81930A0C8E59401C (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m02A324A776BF09756B1BB3B6BFF6DBD7EA98852D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, uint32_t ___radix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___radix0;
		String_t* L_1;
		L_1 = BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D(__this, L_0, _stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99, NULL);
		return L_1;
	}
}
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, uint32_t ___radix0, String_t* ___characterSet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_1 = NULL;
	uint32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = ___characterSet1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		uint32_t L_2 = ___radix0;
		if ((((int64_t)((int64_t)((int64_t)L_1))) >= ((int64_t)((int64_t)((uint64_t)L_2)))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 * L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B8103E2B806098B7F46CF08C6D72C8755B125FC)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral320DA2233DCCC5359A1A5EA863847EB34DE6BD1F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D_RuntimeMethod_var)));
	}

IL_001b:
	{
		uint32_t L_4 = ___radix0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 * L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7574434A66B8CE95810DD546D39A94210FA34C93)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80581756DEDCE88293CE555E5A87B00CD4001098)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D_RuntimeMethod_var)));
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(__this, 0, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		return _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(__this, 1, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		return _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
	}

IL_004d:
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_8, __this, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_007a;
	}

IL_005c:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_9 = V_1;
		uint32_t L_10 = ___radix0;
		uint32_t L_11;
		L_11 = Kernel_SingleByteDivideInPlace_m449DBBAD9250C051D8DE7331770FE47548E786CA(L_9, L_10, NULL);
		V_2 = L_11;
		String_t* L_12 = ___characterSet1;
		uint32_t L_13 = V_2;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		V_3 = L_14;
		String_t* L_15;
		L_15 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		String_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_15, L_16, NULL);
		V_0 = L_17;
	}

IL_007a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = BigInteger_op_Inequality_m7B8F0C5A75587F235E5EB82AF07817B90C9AC830(L_18, 0, NULL);
		if (L_19)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_20 = V_0;
		return L_20;
	}
}
// System.Void Mono.Math.BigInteger::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method)
{
	{
		goto IL_0010;
	}

IL_0002:
	{
		uint32_t L_0 = __this->___length_0;
		__this->___length_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
	}

IL_0010:
	{
		uint32_t L_1 = __this->___length_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)0))))
		{
			goto IL_002a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data_1;
		uint32_t L_3 = __this->___length_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0002;
		}
	}

IL_002a:
	{
		uint32_t L_6 = __this->___length_0;
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		uint32_t L_7 = __this->___length_0;
		__this->___length_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0040:
	{
		return;
	}
}
// System.Int32 Mono.Math.BigInteger::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_mEAB87BB7A4882FEAF1D7D65B6713E31C0A6F07EE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0015;
	}

IL_0006:
	{
		uint32_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___data_1;
		uint32_t L_2 = V_1;
		NullCheck(L_1);
		uint32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_4));
		uint32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0015:
	{
		uint32_t L_6 = V_1;
		uint32_t L_7 = __this->___length_0;
		if ((!(((uint32_t)L_6) >= ((uint32_t)L_7))))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// System.String Mono.Math.BigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m80A151A5EF5ABF1F5FF16660E78042B85241E3E9 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = BigInteger_ToString_m02A324A776BF09756B1BB3B6BFF6DBD7EA98852D(__this, ((int32_t)10), NULL);
		return L_0;
	}
}
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_mEC32AE6F06C0C113291158D434ED2A92B07E6453 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___o0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_2 = ___o0;
		if ((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___o0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_3, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
		return L_4;
	}

IL_0023:
	{
		return (bool)0;
	}

IL_0025:
	{
		RuntimeObject * L_5 = ___o0;
		V_0 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)IsInstClass((RuntimeObject*)L_5, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_6, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)NULL, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = V_0;
		int32_t L_9;
		L_9 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(__this, L_8, NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_ModInverse_m7E87B8BE468B504ED2BD533629D4E9089E5768E5 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___modulus0, const RuntimeMethod* method)
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___modulus0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1;
		L_1 = Kernel_modInverse_m741905D9CCEC274288E9144E69BC4862576082A6(__this, L_0, NULL);
		return L_1;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * BigInteger_GeneratePseudoPrime_mB8FFD10652E0D48BECE2AF33F7B29B64A0BC89E1 (int32_t ___bits0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175 * L_0 = (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175 *)il2cpp_codegen_object_new(SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175_il2cpp_TypeInfo_var);
		SequentialSearchPrimeGeneratorBase__ctor_mFE1A43FA14390E871ED0C9025B57B84D9A7AA754(L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___bits0;
		NullCheck(L_0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2;
		L_2 = VirtualFuncInvoker1< BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *, int32_t >::Invoke(7 /* Mono.Math.BigInteger Mono.Math.Prime.Generator.PrimeGeneratorBase::GenerateNewPrime(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Mono.Math.BigInteger::Incr2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Incr2_mE5DCADCC1DEDD4F3E48E326940D3C926E1A37808 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_1;
		NullCheck(L_0);
		uint32_t* L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_2 = *((uint32_t*)L_1);
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___data_1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) < ((uint32_t)2))))
		{
			goto IL_006b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___data_1;
		int32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		V_0 = L_8;
		NullCheck(L_6);
		uint32_t* L_9 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)));
		int32_t L_10 = *((uint32_t*)L_9);
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		goto IL_0046;
	}

IL_0035:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->___data_1;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		uint32_t* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)));
		int32_t L_14 = *((uint32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0046:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___data_1;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if (!L_19)
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_20 = __this->___length_0;
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_006b;
		}
	}
	{
		uint32_t L_22 = __this->___length_0;
		__this->___length_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006b:
	{
		return;
	}
}
// System.Void Mono.Math.BigInteger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__cctor_m276F063532FC0A35DE1FACAF95D0EB2D6C2B2AAD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)783));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray *)L_1, L_2, NULL);
		((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___smallPrimes_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___smallPrimes_2), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___modulus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___modulus0;
		__this->___mod_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mod_0), (void*)L_0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = __this->___mod_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___length_0;
		V_0 = ((int32_t)((int32_t)L_2<<(int32_t)1));
		uint32_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_4, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		__this->___constant_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constant_1), (void*)L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = __this->___constant_1;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = __this->___constant_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_9 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_10;
		L_10 = BigInteger_op_Division_mE30CB264DE7622B5EFBC03D42881F5E6C5EBDFD0(L_8, L_9, NULL);
		__this->___constant_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constant_1), (void*)L_10);
		return;
	}
}
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_4 = NULL;
	uint32_t V_5 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_6 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_7 = NULL;
	uint32_t G_B7_0 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = __this->___mod_0;
		V_0 = L_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = V_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___length_0;
		V_1 = L_2;
		uint32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		uint32_t L_4 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = ___x0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___length_0;
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = ___x0;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_1;
		NullCheck(L_9);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_10 = ___x0;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___length_0;
		if ((((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))) >= ((int64_t)((int64_t)((uint64_t)L_11)))))
		{
			goto IL_003d;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82 * L_12 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD50495FC91A1C7AEC9A992D5D9500D59B15669C1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5_RuntimeMethod_var)));
	}

IL_003d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_13 = ___x0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___length_0;
		uint32_t L_15 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_16 = __this->___constant_1;
		NullCheck(L_16);
		uint32_t L_17 = L_16->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_18 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_18, 1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)L_17)), /*hidden argument*/NULL);
		V_4 = L_18;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_19 = ___x0;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_1;
		uint32_t L_21 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_22 = ___x0;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___length_0;
		uint32_t L_24 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_25 = __this->___constant_1;
		NullCheck(L_25);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = L_25->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_27 = __this->___constant_1;
		NullCheck(L_27);
		uint32_t L_28 = L_27->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_29 = V_4;
		NullCheck(L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___data_1;
		Kernel_Multiply_m7AAB50B2C6C1E0F696E1CC9E8AC5BE5299BE44B8(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), L_26, 0, L_28, L_30, 0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_31 = ___x0;
		NullCheck(L_31);
		uint32_t L_32 = L_31->___length_0;
		uint32_t L_33 = V_2;
		if ((!(((uint32_t)L_32) <= ((uint32_t)L_33))))
		{
			goto IL_009d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_34 = ___x0;
		NullCheck(L_34);
		uint32_t L_35 = L_34->___length_0;
		G_B7_0 = L_35;
		goto IL_009e;
	}

IL_009d:
	{
		uint32_t L_36 = V_2;
		G_B7_0 = L_36;
	}

IL_009e:
	{
		V_5 = G_B7_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_37 = ___x0;
		uint32_t L_38 = V_5;
		NullCheck(L_37);
		L_37->___length_0 = L_38;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_39 = ___x0;
		NullCheck(L_39);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_39, NULL);
		uint32_t L_40 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_41 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_41, 1, L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_42 = V_4;
		NullCheck(L_42);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = L_42->___data_1;
		uint32_t L_44 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_45 = V_4;
		NullCheck(L_45);
		uint32_t L_46 = L_45->___length_0;
		uint32_t L_47 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = L_48->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_50 = V_0;
		NullCheck(L_50);
		uint32_t L_51 = L_50->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_52 = V_6;
		NullCheck(L_52);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52->___data_1;
		uint32_t L_54 = V_2;
		Kernel_MultiplyMod2p32pmod_m6A2EB428755580C05A03D6831BD77AEAE2EDDBEA(L_43, L_44, ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), L_49, 0, L_51, L_53, 0, L_54, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_55 = V_6;
		NullCheck(L_55);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_55, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_56 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_57 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = BigInteger_op_LessThanOrEqual_mE13A82E3B45939FB4614756D81930A0C8E59401C(L_56, L_57, NULL);
		if (!L_58)
		{
			goto IL_00fe;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_59 = ___x0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_60 = V_6;
		Kernel_MinusEq_mBED90EC10DF65E164E9A5CB80D19BAB81F80F0D6(L_59, L_60, NULL);
		goto IL_012d;
	}

IL_00fe:
	{
		uint32_t L_61 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_62 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_62, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1)), /*hidden argument*/NULL);
		V_7 = L_62;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_63 = V_7;
		NullCheck(L_63);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = L_63->___data_1;
		uint32_t L_65 = V_2;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (uint32_t)1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_66 = V_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_67 = V_6;
		Kernel_MinusEq_mBED90EC10DF65E164E9A5CB80D19BAB81F80F0D6(L_66, L_67, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_68 = ___x0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_69 = V_7;
		Kernel_PlusEq_m8AE5BF895CCCA850E8B1BCE05824CA22BBE22196(L_68, L_69, NULL);
		goto IL_012d;
	}

IL_0126:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_70 = ___x0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_71 = V_0;
		Kernel_MinusEq_mBED90EC10DF65E164E9A5CB80D19BAB81F80F0D6(L_70, L_71, NULL);
	}

IL_012d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_72 = ___x0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_73 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = BigInteger_op_GreaterThanOrEqual_mC840A5F96C2E572E4DA967F778348FEEFDF09F7E(L_72, L_73, NULL);
		if (L_74)
		{
			goto IL_0126;
		}
	}
	{
		return;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_0 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_0, 0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_2, 0, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4;
		L_4 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		return L_4;
	}

IL_0019:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = ___a0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_6 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_GreaterThan_mB88C29784044E8CDBE75D9ADFB72725093EA0665(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = ___a0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_9 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_10;
		L_10 = BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D(L_8, L_9, NULL);
		___a0 = L_10;
	}

IL_0035:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_11 = ___b1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_12 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BigInteger_op_GreaterThan_mB88C29784044E8CDBE75D9ADFB72725093EA0665(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_14 = ___b1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_15 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_16;
		L_16 = BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D(L_14, L_15, NULL);
		___b1 = L_16;
	}

IL_0051:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_17 = ___a0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_18 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_19;
		L_19 = BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE(L_17, L_18, NULL);
		V_0 = L_19;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_20 = V_0;
		ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5(__this, L_20, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_21 = V_0;
		return L_21;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_1 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___a0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___b1;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)(-1))))
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_0039;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4;
		L_4 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		return L_4;
	}

IL_0025:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = ___a0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_6 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7;
		L_7 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_003f;
	}

IL_002f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = ___b1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_9 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_10;
		L_10 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_003f;
	}

IL_0039:
	{
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD_RuntimeMethod_var)));
	}

IL_003f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_12 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_13 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = BigInteger_op_GreaterThanOrEqual_mC840A5F96C2E572E4DA967F778348FEEFDF09F7E(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_15 = V_1;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_17 = __this->___mod_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___length_0;
		if ((!(((uint32_t)L_16) >= ((uint32_t)((int32_t)((int32_t)L_18<<(int32_t)1))))))
		{
			goto IL_0071;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_19 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_20 = __this->___mod_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_21;
		L_21 = BigInteger_op_Modulus_m98F6CFD9441247CCBBB866E72F26356E62A61E6D(L_19, L_20, NULL);
		V_1 = L_21;
		goto IL_0078;
	}

IL_0071:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_22 = V_1;
		ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5(__this, L_22, NULL);
	}

IL_0078:
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0089;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_24 = __this->___mod_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_25 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_26;
		L_26 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_24, L_25, NULL);
		V_1 = L_26;
	}

IL_0089:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_27 = V_1;
		return L_27;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___a0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___k1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_0 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_0, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___k1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_1, 0, NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = ___a0;
		V_1 = L_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = ___k1;
		NullCheck(L_5);
		bool L_6;
		L_6 = BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7 = ___a0;
		V_0 = L_7;
	}

IL_001f:
	{
		V_2 = 1;
		goto IL_0042;
	}

IL_0023:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_9 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_10;
		L_10 = ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A(__this, L_8, L_9, NULL);
		V_1 = L_10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_11 = ___k1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003e;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_14 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_15 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_16;
		L_16 = ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A(__this, L_14, L_15, NULL);
		V_0 = L_16;
	}

IL_003e:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_18 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_19 = ___k1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0023;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_21 = V_0;
		return L_21;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ModulusRing_Pow_m9F2BB905682A6999D33B598EE7A61755DC240C6D (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * __this, uint32_t ___b0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___exp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___b0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_1, L_0, /*hidden argument*/NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___exp1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3;
		L_3 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(__this, L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * Kernel_Subtract_mEBC7BB392F4EDBC7050684F8626424ED8DB82142 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___big0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___small1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___big0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_2, 1, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_1;
		V_1 = L_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = ___big0;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		V_2 = L_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7 = ___small1;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___data_1;
		V_3 = L_8;
		V_4 = 0;
		V_5 = 0;
	}

IL_0028:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_3;
		uint32_t L_10 = V_4;
		NullCheck(L_9);
		uint32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = L_12;
		uint32_t L_13 = V_6;
		uint32_t L_14 = V_5;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		V_6 = L_15;
		uint32_t L_16 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_1;
		uint32_t L_18 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		uint32_t L_20 = V_4;
		NullCheck(L_19);
		uint32_t L_21 = L_20;
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		uint32_t L_23 = V_6;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23));
		V_7 = L_24;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)L_24);
		uint32_t L_25 = V_7;
		uint32_t L_26 = V_6;
		if (!((int32_t)((int32_t)((!(((uint32_t)L_15) >= ((uint32_t)L_16)))? 1 : 0)|(int32_t)((!(((uint32_t)L_25) <= ((uint32_t)((~L_26)))))? 1 : 0))))
		{
			goto IL_0057;
		}
	}
	{
		V_5 = 1;
		goto IL_005a;
	}

IL_0057:
	{
		V_5 = 0;
	}

IL_005a:
	{
		uint32_t L_27 = V_4;
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		V_4 = L_28;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_29 = ___small1;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___length_0;
		if ((!(((uint32_t)L_28) >= ((uint32_t)L_30))))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_31 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_32 = ___big0;
		NullCheck(L_32);
		uint32_t L_33 = L_32->___length_0;
		if ((((int32_t)L_31) == ((int32_t)L_33)))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_34 = V_5;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}

IL_0078:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_1;
		uint32_t L_36 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_2;
		uint32_t L_38 = V_4;
		NullCheck(L_37);
		uint32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_2;
		uint32_t L_42 = V_4;
		uint32_t L_43 = L_42;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		NullCheck(L_41);
		uint32_t L_44 = L_43;
		uint32_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if (L_45)
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_46 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_47 = ___big0;
		NullCheck(L_47);
		uint32_t L_48 = L_47->___length_0;
		if ((!(((uint32_t)L_46) >= ((uint32_t)L_48))))
		{
			goto IL_0078;
		}
	}

IL_0097:
	{
		uint32_t L_49 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_50 = ___big0;
		NullCheck(L_50);
		uint32_t L_51 = L_50->___length_0;
		if ((((int32_t)L_49) == ((int32_t)L_51)))
		{
			goto IL_00b8;
		}
	}

IL_00a1:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_1;
		uint32_t L_53 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_2;
		uint32_t L_55 = V_4;
		NullCheck(L_54);
		uint32_t L_56 = L_55;
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint32_t)L_57);
		uint32_t L_58 = V_4;
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		V_4 = L_59;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_60 = ___big0;
		NullCheck(L_60);
		uint32_t L_61 = L_60->___length_0;
		if ((!(((uint32_t)L_59) >= ((uint32_t)L_61))))
		{
			goto IL_00a1;
		}
	}

IL_00b8:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_62 = V_0;
		NullCheck(L_62);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_62, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_63 = V_0;
		return L_63;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MinusEq_mBED90EC10DF65E164E9A5CB80D19BAB81F80F0D6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___big0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___small1, const RuntimeMethod* method)
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___big0;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
		V_0 = L_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___small1;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_1;
		V_1 = L_3;
		V_2 = 0;
		V_3 = 0;
	}

IL_0012:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_1;
		uint32_t L_5 = V_2;
		NullCheck(L_4);
		uint32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		uint32_t L_8 = V_4;
		uint32_t L_9 = V_3;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		V_4 = L_10;
		uint32_t L_11 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		uint32_t L_13 = V_2;
		NullCheck(L_12);
		uint32_t* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)));
		int32_t L_15 = *((uint32_t*)L_14);
		uint32_t L_16 = V_4;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16));
		V_5 = L_17;
		*((int32_t*)L_14) = (int32_t)L_17;
		uint32_t L_18 = V_5;
		uint32_t L_19 = V_4;
		if (!((int32_t)((int32_t)((!(((uint32_t)L_10) >= ((uint32_t)L_11)))? 1 : 0)|(int32_t)((!(((uint32_t)L_18) <= ((uint32_t)((~L_19)))))? 1 : 0))))
		{
			goto IL_003f;
		}
	}
	{
		V_3 = 1;
		goto IL_0041;
	}

IL_003f:
	{
		V_3 = 0;
	}

IL_0041:
	{
		uint32_t L_20 = V_2;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		V_2 = L_21;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_22 = ___small1;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___length_0;
		if ((!(((uint32_t)L_21) >= ((uint32_t)L_23))))
		{
			goto IL_0012;
		}
	}
	{
		uint32_t L_24 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_25 = ___big0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___length_0;
		if ((((int32_t)L_24) == ((int32_t)L_26)))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_27 = V_3;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0089;
		}
	}

IL_005b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_0;
		uint32_t L_29 = V_2;
		NullCheck(L_28);
		uint32_t* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)));
		int32_t L_31 = *((uint32_t*)L_30);
		*((int32_t*)L_30) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_0;
		uint32_t L_33 = V_2;
		uint32_t L_34 = L_33;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		NullCheck(L_32);
		uint32_t L_35 = L_34;
		uint32_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if (L_36)
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_37 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_38 = ___big0;
		NullCheck(L_38);
		uint32_t L_39 = L_38->___length_0;
		if ((!(((uint32_t)L_37) >= ((uint32_t)L_39))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0089;
	}

IL_007b:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_40 = ___big0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_41 = L_40;
		NullCheck(L_41);
		uint32_t L_42 = L_41->___length_0;
		NullCheck(L_41);
		L_41->___length_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1));
	}

IL_0089:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_43 = ___big0;
		NullCheck(L_43);
		uint32_t L_44 = L_43->___length_0;
		if ((!(((uint32_t)L_44) > ((uint32_t)0))))
		{
			goto IL_00a3;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_45 = ___big0;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_47 = ___big0;
		NullCheck(L_47);
		uint32_t L_48 = L_47->___length_0;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1));
		uint32_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if (!L_50)
		{
			goto IL_007b;
		}
	}

IL_00a3:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_51 = ___big0;
		NullCheck(L_51);
		uint32_t L_52 = L_51->___length_0;
		if (L_52)
		{
			goto IL_00b9;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_53 = ___big0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_54 = L_53;
		NullCheck(L_54);
		uint32_t L_55 = L_54->___length_0;
		NullCheck(L_54);
		L_54->___length_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_00b9:
	{
		return;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_PlusEq_m8AE5BF895CCCA850E8B1BCE05824CA22BBE22196 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	uint64_t V_7 = 0;
	bool V_8 = false;
	uint32_t V_9 = 0;
	{
		V_4 = 0;
		V_5 = (bool)0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___bi21;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___length_0;
		if ((!(((uint32_t)L_1) < ((uint32_t)L_3))))
		{
			goto IL_0035;
		}
	}
	{
		V_5 = (bool)1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = ___bi21;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		V_0 = L_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_6 = ___bi21;
		NullCheck(L_6);
		uint32_t L_7 = L_6->___length_0;
		V_3 = L_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = ___bi10;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_1;
		V_1 = L_9;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_10 = ___bi10;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___length_0;
		V_2 = L_11;
		goto IL_0051;
	}

IL_0035:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_12 = ___bi10;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data_1;
		V_0 = L_13;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_14 = ___bi10;
		NullCheck(L_14);
		uint32_t L_15 = L_14->___length_0;
		V_3 = L_15;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_1;
		V_1 = L_17;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_18 = ___bi21;
		NullCheck(L_18);
		uint32_t L_19 = L_18->___length_0;
		V_2 = L_19;
	}

IL_0051:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_20 = ___bi10;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___data_1;
		V_6 = L_21;
		V_7 = ((int64_t)((int64_t)0));
	}

IL_005d:
	{
		uint64_t L_22 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		uint32_t L_24 = V_4;
		NullCheck(L_23);
		uint32_t L_25 = L_24;
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_1;
		uint32_t L_28 = V_4;
		NullCheck(L_27);
		uint32_t L_29 = L_28;
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_26)), (int64_t)((int64_t)((uint64_t)L_30))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_6;
		uint32_t L_32 = V_4;
		uint64_t L_33 = V_7;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint32_t)((int32_t)((uint32_t)L_33)));
		uint64_t L_34 = V_7;
		V_7 = ((int64_t)((uint64_t)L_34>>((int32_t)32)));
		uint32_t L_35 = V_4;
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		V_4 = L_36;
		uint32_t L_37 = V_2;
		if ((!(((uint32_t)L_36) >= ((uint32_t)L_37))))
		{
			goto IL_005d;
		}
	}
	{
		uint64_t L_38 = V_7;
		V_8 = (bool)((!(((uint64_t)L_38) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_40 = V_4;
		uint32_t L_41 = V_3;
		if ((!(((uint32_t)L_40) < ((uint32_t)L_41))))
		{
			goto IL_00bb;
		}
	}

IL_0097:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_6;
		uint32_t L_43 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_0;
		uint32_t L_45 = V_4;
		NullCheck(L_44);
		uint32_t L_46 = L_45;
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
		V_9 = L_48;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (uint32_t)L_48);
		uint32_t L_49 = V_9;
		V_8 = (bool)((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
		uint32_t L_50 = V_4;
		int32_t L_51 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		V_4 = L_51;
		uint32_t L_52 = V_3;
		bool L_53 = V_8;
		if (((int32_t)((int32_t)((!(((uint32_t)L_51) >= ((uint32_t)L_52)))? 1 : 0)&(int32_t)L_53)))
		{
			goto IL_0097;
		}
	}

IL_00bb:
	{
		bool L_54 = V_8;
		if (!L_54)
		{
			goto IL_00d3;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_6;
		uint32_t L_56 = V_4;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (uint32_t)1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_57 = ___bi10;
		uint32_t L_58 = V_4;
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		V_4 = L_59;
		NullCheck(L_57);
		L_57->___length_0 = L_59;
		return;
	}

IL_00d3:
	{
		bool L_60 = V_5;
		if (!L_60)
		{
			goto IL_00f1;
		}
	}
	{
		uint32_t L_61 = V_4;
		uint32_t L_62 = V_3;
		if ((!(((uint32_t)L_61) < ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)1))))))
		{
			goto IL_00f1;
		}
	}

IL_00de:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_6;
		uint32_t L_64 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_0;
		uint32_t L_66 = V_4;
		NullCheck(L_65);
		uint32_t L_67 = L_66;
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_68);
		uint32_t L_69 = V_4;
		int32_t L_70 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
		V_4 = L_70;
		uint32_t L_71 = V_3;
		if ((!(((uint32_t)L_70) >= ((uint32_t)L_71))))
		{
			goto IL_00de;
		}
	}

IL_00f1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_72 = ___bi10;
		uint32_t L_73 = V_3;
		NullCheck(L_72);
		L_72->___length_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_74 = ___bi10;
		NullCheck(L_74);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_74, NULL);
		return;
	}
}
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		V_0 = L_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___bi21;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___length_0;
		V_1 = L_3;
		goto IL_0014;
	}

IL_0010:
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
	}

IL_0014:
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) > ((uint32_t)0))))
		{
			goto IL_002a;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_6 = ___bi10;
		NullCheck(L_6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___data_1;
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		uint32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
	}

IL_002a:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) > ((uint32_t)0))))
		{
			goto IL_003a;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_13 = ___bi21;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___data_1;
		uint32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if (!L_17)
		{
			goto IL_0026;
		}
	}

IL_003a:
	{
		uint32_t L_18 = V_0;
		if (L_18)
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_19 = V_1;
		if (L_19)
		{
			goto IL_0042;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0042:
	{
		uint32_t L_20 = V_0;
		uint32_t L_21 = V_1;
		if ((!(((uint32_t)L_20) < ((uint32_t)L_21))))
		{
			goto IL_0048;
		}
	}
	{
		return (int32_t)((-1));
	}

IL_0048:
	{
		uint32_t L_22 = V_0;
		uint32_t L_23 = V_1;
		if ((!(((uint32_t)L_22) > ((uint32_t)L_23))))
		{
			goto IL_004e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_004e:
	{
		uint32_t L_24 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		goto IL_0058;
	}

IL_0054:
	{
		uint32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
	}

IL_0058:
	{
		uint32_t L_26 = V_2;
		if (!L_26)
		{
			goto IL_006d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_27 = ___bi10;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data_1;
		uint32_t L_29 = V_2;
		NullCheck(L_28);
		uint32_t L_30 = L_29;
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_32 = ___bi21;
		NullCheck(L_32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = L_32->___data_1;
		uint32_t L_34 = V_2;
		NullCheck(L_33);
		uint32_t L_35 = L_34;
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((((int32_t)L_31) == ((int32_t)L_36)))
		{
			goto IL_0054;
		}
	}

IL_006d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_37 = ___bi10;
		NullCheck(L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37->___data_1;
		uint32_t L_39 = V_2;
		NullCheck(L_38);
		uint32_t L_40 = L_39;
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_42 = ___bi21;
		NullCheck(L_42);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = L_42->___data_1;
		uint32_t L_44 = V_2;
		NullCheck(L_43);
		uint32_t L_45 = L_44;
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((!(((uint32_t)L_41) < ((uint32_t)L_46))))
		{
			goto IL_0081;
		}
	}
	{
		return (int32_t)((-1));
	}

IL_0081:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_47 = ___bi10;
		NullCheck(L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = L_47->___data_1;
		uint32_t L_49 = V_2;
		NullCheck(L_48);
		uint32_t L_50 = L_49;
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_52 = ___bi21;
		NullCheck(L_52);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52->___data_1;
		uint32_t L_54 = V_2;
		NullCheck(L_53);
		uint32_t L_55 = L_54;
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		if ((!(((uint32_t)L_51) > ((uint32_t)L_56))))
		{
			goto IL_0095;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0095:
	{
		return (int32_t)(0);
	}
}
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_SingleByteDivideInPlace_m449DBBAD9250C051D8DE7331770FE47548E786CA (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___n0, uint32_t ___d1, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = ((int64_t)((int64_t)0));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___n0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		V_1 = L_1;
		goto IL_002f;
	}

IL_000c:
	{
		uint64_t L_2 = V_0;
		V_0 = ((int64_t)((int64_t)L_2<<(int32_t)((int32_t)32)));
		uint64_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = ___n0;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		uint32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)((int64_t)L_3|(int64_t)((int64_t)((uint64_t)L_8))));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_9 = ___n0;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_1;
		uint32_t L_11 = V_1;
		uint64_t L_12 = V_0;
		uint32_t L_13 = ___d1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)((uint32_t)((int64_t)((uint64_t)(int64_t)L_12/(uint64_t)(int64_t)((int64_t)((uint64_t)L_13)))))));
		uint64_t L_14 = V_0;
		uint32_t L_15 = ___d1;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_14%(uint64_t)(int64_t)((int64_t)((uint64_t)L_15))));
	}

IL_002f:
	{
		uint32_t L_16 = V_1;
		uint32_t L_17 = L_16;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		if ((!(((uint32_t)L_17) <= ((uint32_t)0))))
		{
			goto IL_000c;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_18 = ___n0;
		NullCheck(L_18);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_18, NULL);
		uint64_t L_19 = V_0;
		return ((int32_t)((uint32_t)L_19));
	}
}
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_DwordMod_m076999ABA0D65211B6CB6F53E225E4043B7805E8 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___n0, uint32_t ___d1, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = ((int64_t)((int64_t)0));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___n0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		V_1 = L_1;
		goto IL_0022;
	}

IL_000c:
	{
		uint64_t L_2 = V_0;
		V_0 = ((int64_t)((int64_t)L_2<<(int32_t)((int32_t)32)));
		uint64_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = ___n0;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		uint32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)((int64_t)L_3|(int64_t)((int64_t)((uint64_t)L_8))));
		uint64_t L_9 = V_0;
		uint32_t L_10 = ___d1;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_9%(uint64_t)(int64_t)((int64_t)((uint64_t)L_10))));
	}

IL_0022:
	{
		uint32_t L_11 = V_1;
		uint32_t L_12 = L_11;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		if ((!(((uint32_t)L_12) <= ((uint32_t)0))))
		{
			goto IL_000c;
		}
	}
	{
		uint64_t L_13 = V_0;
		return ((int32_t)((uint32_t)L_13));
	}
}
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_DwordDivMod_m5D1999F64EAD588314733A5857FFFFA5C45A0C6A (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___n0, uint32_t ___d1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_0 = NULL;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_3 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___n0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_2, 1, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = ((int64_t)((int64_t)0));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3 = ___n0;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length_0;
		V_2 = L_4;
		goto IL_003c;
	}

IL_0019:
	{
		uint64_t L_5 = V_1;
		V_1 = ((int64_t)((int64_t)L_5<<(int32_t)((int32_t)32)));
		uint64_t L_6 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7 = ___n0;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___data_1;
		uint32_t L_9 = V_2;
		NullCheck(L_8);
		uint32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int64_t)((int64_t)L_6|(int64_t)((int64_t)((uint64_t)L_11))));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data_1;
		uint32_t L_14 = V_2;
		uint64_t L_15 = V_1;
		uint32_t L_16 = ___d1;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)((int32_t)((uint32_t)((int64_t)((uint64_t)(int64_t)L_15/(uint64_t)(int64_t)((int64_t)((uint64_t)L_16)))))));
		uint64_t L_17 = V_1;
		uint32_t L_18 = ___d1;
		V_1 = ((int64_t)((uint64_t)(int64_t)L_17%(uint64_t)(int64_t)((int64_t)((uint64_t)L_18))));
	}

IL_003c:
	{
		uint32_t L_19 = V_2;
		uint32_t L_20 = L_19;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		if ((!(((uint32_t)L_20) <= ((uint32_t)0))))
		{
			goto IL_0019;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_21 = V_0;
		NullCheck(L_21);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_21, NULL);
		uint64_t L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_23;
		L_23 = BigInteger_op_Implicit_mA366B11D70EEA5E05CB0A27A253EA22DC3D47F3E(((int32_t)((uint32_t)L_22)), NULL);
		V_3 = L_23;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_24 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_25 = L_24;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_26);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_27 = L_25;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_28 = V_3;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_28);
		return L_27;
	}
}
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_multiByteDivide_mC719C7FBCF592D8720F30B4CD8B74F8DD95385D6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi10, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_6 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_13 = NULL;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	int32_t V_18 = 0;
	uint64_t V_19 = 0;
	uint32_t V_20 = 0;
	uint64_t V_21 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi21;
		int32_t L_2;
		L_2 = Kernel_Compare_mF966D0878812817B24C5E375C0CB895E9D8FB7BC(L_0, L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_3 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5;
		L_5 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_5);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_6 = L_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_8);
		return L_6;
	}

IL_0023:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_9 = ___bi10;
		NullCheck(L_9);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_9, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_10 = ___bi21;
		NullCheck(L_10);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_10, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_11 = ___bi21;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___length_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_13 = ___bi10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_14 = ___bi21;
		NullCheck(L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___data_1;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_18;
		L_18 = Kernel_DwordDivMod_m5D1999F64EAD588314733A5857FFFFA5C45A0C6A(L_13, L_17, NULL);
		return L_18;
	}

IL_0047:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_19 = ___bi10;
		NullCheck(L_19);
		uint32_t L_20 = L_19->___length_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_21 = ___bi21;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___length_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		V_2 = ((int32_t)-2147483648LL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_23 = ___bi21;
		NullCheck(L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_25 = ___bi21;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___length_0;
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		uint32_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = L_28;
		V_4 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_29 = ___bi10;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_31 = ___bi21;
		NullCheck(L_31);
		uint32_t L_32 = L_31->___length_0;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_32));
		goto IL_008d;
	}

IL_0083:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		uint32_t L_34 = V_2;
		V_2 = ((int32_t)((uint32_t)L_34>>1));
	}

IL_008d:
	{
		uint32_t L_35 = V_2;
		if (!L_35)
		{
			goto IL_0095;
		}
	}
	{
		uint32_t L_36 = V_3;
		uint32_t L_37 = V_2;
		if (!((int32_t)((int32_t)L_36&(int32_t)L_37)))
		{
			goto IL_0083;
		}
	}

IL_0095:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_38 = ___bi10;
		NullCheck(L_38);
		uint32_t L_39 = L_38->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_40 = ___bi21;
		NullCheck(L_40);
		uint32_t L_41 = L_40->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_42 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_42, 1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_41)), (int32_t)1)), /*hidden argument*/NULL);
		V_6 = L_42;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_43 = ___bi10;
		int32_t L_44 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_45;
		L_45 = BigInteger_op_LeftShift_m83EA1C925821636CC6E2788E6FFA9F1E31D21EB4(L_43, L_44, NULL);
		V_7 = L_45;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_46 = V_7;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data_1;
		V_8 = L_47;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_48 = ___bi21;
		int32_t L_49 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_50;
		L_50 = BigInteger_op_LeftShift_m83EA1C925821636CC6E2788E6FFA9F1E31D21EB4(L_48, L_49, NULL);
		___bi21 = L_50;
		uint32_t L_51 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_52 = ___bi21;
		NullCheck(L_52);
		uint32_t L_53 = L_52->___length_0;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_53));
		uint32_t L_54 = V_0;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_55 = ___bi21;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_57 = ___bi21;
		NullCheck(L_57);
		uint32_t L_58 = L_57->___length_0;
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1));
		uint32_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_11 = L_60;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_61 = ___bi21;
		NullCheck(L_61);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = L_61->___data_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_63 = ___bi21;
		NullCheck(L_63);
		uint32_t L_64 = L_63->___length_0;
		NullCheck(L_62);
		int32_t L_65 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)2));
		uint32_t L_66 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_12 = ((int64_t)((uint64_t)L_66));
		goto IL_0233;
	}

IL_0100:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_8;
		int32_t L_68 = V_10;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_8;
		int32_t L_72 = V_10;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)1));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int64_t L_75 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_70))<<(int32_t)((int32_t)32))), (int64_t)((int64_t)((uint64_t)L_74))));
		uint32_t L_76 = V_11;
		V_14 = ((int64_t)((uint64_t)(int64_t)L_75/(uint64_t)(int64_t)((int64_t)((uint64_t)L_76))));
		uint32_t L_77 = V_11;
		V_15 = ((int64_t)((uint64_t)(int64_t)L_75%(uint64_t)(int64_t)((int64_t)((uint64_t)L_77))));
	}

IL_011f:
	{
		uint64_t L_78 = V_14;
		if ((((int64_t)L_78) == ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_0141;
		}
	}
	{
		uint64_t L_79 = V_14;
		uint64_t L_80 = V_12;
		uint64_t L_81 = V_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = V_8;
		int32_t L_83 = V_10;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)2));
		uint32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_79, (int64_t)L_80))) > ((uint64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_81<<(int32_t)((int32_t)32))), (int64_t)((int64_t)((uint64_t)L_85))))))))
		{
			goto IL_015d;
		}
	}

IL_0141:
	{
		uint64_t L_86 = V_14;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_86, (int64_t)((int64_t)((int64_t)1))));
		uint64_t L_87 = V_15;
		uint32_t L_88 = V_11;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_87, (int64_t)((int64_t)((uint64_t)L_88))));
		uint64_t L_89 = V_15;
		if ((!(((uint64_t)L_89) >= ((uint64_t)((int64_t)4294967296LL)))))
		{
			goto IL_011f;
		}
	}

IL_015d:
	{
		V_17 = 0;
		int32_t L_90 = V_10;
		int32_t L_91 = V_1;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)L_91)), (int32_t)1));
		V_19 = ((int64_t)((int64_t)0));
		uint64_t L_92 = V_14;
		V_20 = ((int32_t)((uint32_t)L_92));
	}

IL_0171:
	{
		uint64_t L_93 = V_19;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_94 = ___bi21;
		NullCheck(L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = L_94->___data_1;
		uint32_t L_96 = V_17;
		NullCheck(L_95);
		uint32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		uint32_t L_99 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_98)), (int64_t)((int64_t)((uint64_t)L_99))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = V_8;
		int32_t L_101 = V_18;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		uint32_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_16 = L_103;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = V_8;
		int32_t L_105 = V_18;
		NullCheck(L_104);
		uint32_t* L_106 = ((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105)));
		int32_t L_107 = *((uint32_t*)L_106);
		uint64_t L_108 = V_19;
		*((int32_t*)L_106) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_107, (int32_t)((int32_t)((uint32_t)L_108))));
		uint64_t L_109 = V_19;
		V_19 = ((int64_t)((uint64_t)L_109>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = V_8;
		int32_t L_111 = V_18;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		uint32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		uint32_t L_114 = V_16;
		if ((!(((uint32_t)L_113) > ((uint32_t)L_114))))
		{
			goto IL_01b2;
		}
	}
	{
		uint64_t L_115 = V_19;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, (int64_t)((int64_t)((int64_t)1))));
	}

IL_01b2:
	{
		uint32_t L_116 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		int32_t L_117 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		uint32_t L_118 = V_17;
		int32_t L_119 = V_1;
		if ((((int64_t)((int64_t)((uint64_t)L_118))) < ((int64_t)((int64_t)((int64_t)L_119)))))
		{
			goto IL_0171;
		}
	}
	{
		int32_t L_120 = V_10;
		int32_t L_121 = V_1;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_120, (int32_t)L_121)), (int32_t)1));
		V_17 = 0;
		uint64_t L_122 = V_19;
		if (!L_122)
		{
			goto IL_0216;
		}
	}
	{
		uint32_t L_123 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_123, (int32_t)1));
		V_21 = ((int64_t)((int64_t)0));
	}

IL_01de:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = V_8;
		int32_t L_125 = V_18;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		uint32_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_128 = ___bi21;
		NullCheck(L_128);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = L_128->___data_1;
		uint32_t L_130 = V_17;
		NullCheck(L_129);
		uint32_t L_131 = L_130;
		uint32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		uint64_t L_133 = V_21;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_127)), (int64_t)((int64_t)((uint64_t)L_132)))), (int64_t)L_133));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = V_8;
		int32_t L_135 = V_18;
		uint64_t L_136 = V_21;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(L_135), (uint32_t)((int32_t)((uint32_t)L_136)));
		uint64_t L_137 = V_21;
		V_21 = ((int64_t)((uint64_t)L_137>>((int32_t)32)));
		uint32_t L_138 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1));
		int32_t L_139 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
		uint32_t L_140 = V_17;
		int32_t L_141 = V_1;
		if ((((int64_t)((int64_t)((uint64_t)L_140))) < ((int64_t)((int64_t)((int64_t)L_141)))))
		{
			goto IL_01de;
		}
	}

IL_0216:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_142 = V_6;
		NullCheck(L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = L_142->___data_1;
		int32_t L_144 = V_5;
		int32_t L_145 = L_144;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_145, (int32_t)1));
		uint32_t L_146 = V_20;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_145), (uint32_t)L_146);
		int32_t L_147 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_147, (int32_t)1));
		int32_t L_148 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)1));
	}

IL_0233:
	{
		int32_t L_149 = V_9;
		if ((((int32_t)L_149) > ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_150 = V_6;
		NullCheck(L_150);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_150, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_151 = V_7;
		NullCheck(L_151);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_151, NULL);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_152 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_153 = L_152;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_154 = V_6;
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, L_154);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_154);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_155 = L_153;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_156 = V_7;
		NullCheck(L_155);
		ArrayElementTypeCheck (L_155, L_156);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_156);
		V_13 = L_155;
		int32_t L_157 = V_4;
		if (!L_157)
		{
			goto IL_0271;
		}
	}
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_158 = V_13;
		NullCheck(L_158);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 ** L_159 = ((L_158)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_160 = *((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 **)L_159);
		int32_t L_161 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_162;
		L_162 = BigInteger_op_RightShift_m338EE513BA46D08DFDA593D76CC1FD60B594D0E8(L_160, L_161, NULL);
		*((RuntimeObject **)L_159) = (RuntimeObject *)L_162;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_159, (void*)(RuntimeObject *)L_162);
	}

IL_0271:
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_163 = V_13;
		return L_163;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		int32_t L_0 = ___n1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___bi0;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___length_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_4 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_mD26E0224E82674AFA9A6E4BF4F0674BB0B7BECBF(L_4, L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return L_4;
	}

IL_0012:
	{
		int32_t L_5 = ___n1;
		V_0 = ((int32_t)((int32_t)L_5>>(int32_t)5));
		int32_t L_6 = ___n1;
		___n1 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7 = ___bi0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___length_0;
		int32_t L_9 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_10 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_10, 1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), (int32_t)L_9)), /*hidden argument*/NULL);
		V_1 = L_10;
		V_2 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_11 = ___bi0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___length_0;
		V_3 = L_12;
		int32_t L_13 = ___n1;
		if (!L_13)
		{
			goto IL_009d;
		}
	}
	{
		V_5 = 0;
		goto IL_006f;
	}

IL_003e:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_14 = ___bi0;
		NullCheck(L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___data_1;
		uint32_t L_16 = V_2;
		NullCheck(L_15);
		uint32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_19 = V_1;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_1;
		uint32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_21)), (int64_t)((int64_t)((int64_t)L_22))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD_RuntimeMethod_var);
		uint32_t L_23 = V_4;
		int32_t L_24 = ___n1;
		uint32_t L_25 = V_5;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_21)), (int64_t)((int64_t)((int64_t)L_22)))))), (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23<<(int32_t)((int32_t)((int32_t)L_24&(int32_t)((int32_t)31)))))|(int32_t)L_25)));
		uint32_t L_26 = V_4;
		int32_t L_27 = ___n1;
		V_5 = ((int32_t)((uint32_t)L_26>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_27))&(int32_t)((int32_t)31)))));
		uint32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006f:
	{
		uint32_t L_29 = V_2;
		uint32_t L_30 = V_3;
		if ((!(((uint32_t)L_29) >= ((uint32_t)L_30))))
		{
			goto IL_003e;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_31 = V_1;
		NullCheck(L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___data_1;
		uint32_t L_33 = V_2;
		int32_t L_34 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_33)), (int64_t)((int64_t)((int64_t)L_34))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD_RuntimeMethod_var);
		uint32_t L_35 = V_5;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_33)), (int64_t)((int64_t)((int64_t)L_34)))))), (uint32_t)L_35);
		goto IL_00a1;
	}

IL_0084:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_36 = V_1;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_1;
		uint32_t L_38 = V_2;
		int32_t L_39 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_38)), (int64_t)((int64_t)((int64_t)L_39))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_m9CEBA619E5AC2F607F9E40F6B93C75CBD38C23AD_RuntimeMethod_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_40 = ___bi0;
		NullCheck(L_40);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data_1;
		uint32_t L_42 = V_2;
		NullCheck(L_41);
		uint32_t L_43 = L_42;
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_38)), (int64_t)((int64_t)((int64_t)L_39)))))), (uint32_t)L_44);
		uint32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_009d:
	{
		uint32_t L_46 = V_2;
		uint32_t L_47 = V_3;
		if ((!(((uint32_t)L_46) >= ((uint32_t)L_47))))
		{
			goto IL_0084;
		}
	}

IL_00a1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_48 = V_1;
		NullCheck(L_48);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_48, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_49 = V_1;
		return L_49;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = ___n1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		int32_t L_3 = ___n1;
		V_0 = ((int32_t)((int32_t)L_3>>(int32_t)5));
		int32_t L_4 = ___n1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_5 = ___bi0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___length_0;
		int32_t L_7 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_8, 1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_9 = V_1;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_1;
		NullCheck(L_10);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), (int32_t)1));
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)31))))
		{
			goto IL_007e;
		}
	}
	{
		V_4 = 0;
		goto IL_005f;
	}

IL_0035:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_11 = ___bi0;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_1;
		uint32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_13)), (int64_t)((int64_t)((int64_t)L_14))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B_RuntimeMethod_var);
		NullCheck(L_12);
		intptr_t L_15 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_13)), (int64_t)((int64_t)((int64_t)L_14)))));
		uint32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_17 = V_1;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_1;
		uint32_t L_19 = V_2;
		uint32_t L_20 = V_3;
		int32_t L_21 = ___n1;
		uint32_t L_22 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_20>>((int32_t)((int32_t)L_21&(int32_t)((int32_t)31)))))|(int32_t)L_22)));
		uint32_t L_23 = V_3;
		int32_t L_24 = ___n1;
		V_4 = ((int32_t)((int32_t)L_23<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_24))&(int32_t)((int32_t)31)))));
	}

IL_005f:
	{
		uint32_t L_25 = V_2;
		uint32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		if ((!(((uint32_t)L_26) <= ((uint32_t)0))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0086;
	}

IL_0069:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_27 = V_1;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data_1;
		uint32_t L_29 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_30 = ___bi0;
		NullCheck(L_30);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = L_30->___data_1;
		uint32_t L_32 = V_2;
		int32_t L_33 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_32)), (int64_t)((int64_t)((int64_t)L_33))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_RightShift_mEC7E9AAD72738A600FF11DC8BED7457F66CB104B_RuntimeMethod_var);
		NullCheck(L_31);
		intptr_t L_34 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((uint64_t)L_32)), (int64_t)((int64_t)((int64_t)L_33)))));
		uint32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)L_35);
	}

IL_007e:
	{
		uint32_t L_36 = V_2;
		uint32_t L_37 = L_36;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
		if ((!(((uint32_t)L_37) <= ((uint32_t)0))))
		{
			goto IL_0069;
		}
	}

IL_0086:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_38 = V_1;
		NullCheck(L_38);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_38, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_39 = V_1;
		return L_39;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Multiply_m7AAB50B2C6C1E0F696E1CC9E8AC5BE5299BE44B8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, uint32_t ___xOffset1, uint32_t ___xLen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, uint32_t ___yOffset4, uint32_t ___yLen5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___d6, uint32_t ___dOffset7, const RuntimeMethod* method)
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t* V_10 = NULL;
	uint64_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_3 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_3;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_3;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___y3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		V_4 = L_5;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_4;
		NullCheck(L_6);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		goto IL_0033;
	}

IL_0029:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_4;
		NullCheck(L_7);
		V_1 = (uint32_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0033:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___d6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_5 = L_9;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_5;
		NullCheck(L_10);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))
		{
			goto IL_0045;
		}
	}

IL_0040:
	{
		V_2 = (uint32_t*)((uintptr_t)0);
		goto IL_004f;
	}

IL_0045:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_5;
		NullCheck(L_11);
		V_2 = (uint32_t*)((uintptr_t)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_004f:
	{
		uint32_t* L_12 = V_0;
		uint32_t L_13 = ___xOffset1;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_13)), (int64_t)((int64_t)((int64_t)4)))))));
		uint32_t* L_14 = V_6;
		uint32_t L_15 = ___xLen2;
		V_7 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_15)), (int64_t)((int64_t)((int64_t)4)))))));
		uint32_t* L_16 = V_1;
		uint32_t L_17 = ___yOffset4;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_17)), (int64_t)((int64_t)((int64_t)4)))))));
		uint32_t* L_18 = V_8;
		uint32_t L_19 = ___yLen5;
		V_9 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_19)), (int64_t)((int64_t)((int64_t)4)))))));
		uint32_t* L_20 = V_2;
		uint32_t L_21 = ___dOffset7;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_21)), (int64_t)((int64_t)((int64_t)4)))))));
		goto IL_00e3;
	}

IL_0088:
	{
		uint32_t* L_22 = V_6;
		int32_t L_23 = *((uint32_t*)L_22);
		if (!L_23)
		{
			goto IL_00d7;
		}
	}
	{
		V_11 = ((int64_t)((int64_t)0));
		uint32_t* L_24 = V_10;
		V_12 = L_24;
		uint32_t* L_25 = V_8;
		V_13 = L_25;
		goto IL_00c7;
	}

IL_009b:
	{
		uint64_t L_26 = V_11;
		uint32_t* L_27 = V_6;
		int32_t L_28 = *((uint32_t*)L_27);
		uint32_t* L_29 = V_13;
		int32_t L_30 = *((uint32_t*)L_29);
		uint32_t* L_31 = V_12;
		int32_t L_32 = *((uint32_t*)L_31);
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_28)))), (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_30)))))), (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_32))))))));
		uint32_t* L_33 = V_12;
		uint64_t L_34 = V_11;
		*((int32_t*)L_33) = (int32_t)((int32_t)((uint32_t)L_34));
		uint64_t L_35 = V_11;
		V_11 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint32_t* L_36 = V_13;
		V_13 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_36, (int32_t)4));
		uint32_t* L_37 = V_12;
		V_12 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_37, (int32_t)4));
	}

IL_00c7:
	{
		uint32_t* L_38 = V_13;
		uint32_t* L_39 = V_9;
		if ((!(((uintptr_t)L_38) >= ((uintptr_t)L_39))))
		{
			goto IL_009b;
		}
	}
	{
		uint64_t L_40 = V_11;
		if (!L_40)
		{
			goto IL_00d7;
		}
	}
	{
		uint32_t* L_41 = V_12;
		uint64_t L_42 = V_11;
		*((int32_t*)L_41) = (int32_t)((int32_t)((uint32_t)L_42));
	}

IL_00d7:
	{
		uint32_t* L_43 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_43, (int32_t)4));
		uint32_t* L_44 = V_10;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_44, (int32_t)4));
	}

IL_00e3:
	{
		uint32_t* L_45 = V_6;
		uint32_t* L_46 = V_7;
		if ((!(((uintptr_t)L_45) >= ((uintptr_t)L_46))))
		{
			goto IL_0088;
		}
	}
	{
		V_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		return;
	}
}
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MultiplyMod2p32pmod_m6A2EB428755580C05A03D6831BD77AEAE2EDDBEA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOffset1, int32_t ___xLen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, int32_t ___yOffest4, int32_t ___yLen5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___d6, int32_t ___dOffset7, int32_t ___mod8, const RuntimeMethod* method)
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t* V_10 = NULL;
	uint32_t* V_11 = NULL;
	uint64_t V_12 = 0;
	uint32_t* V_13 = NULL;
	uint32_t* V_14 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_3 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_3;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_3;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___y3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		V_4 = L_5;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_4;
		NullCheck(L_6);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		goto IL_0033;
	}

IL_0029:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_4;
		NullCheck(L_7);
		V_1 = (uint32_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0033:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___d6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_5 = L_9;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_5;
		NullCheck(L_10);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))
		{
			goto IL_0045;
		}
	}

IL_0040:
	{
		V_2 = (uint32_t*)((uintptr_t)0);
		goto IL_004f;
	}

IL_0045:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_5;
		NullCheck(L_11);
		V_2 = (uint32_t*)((uintptr_t)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_004f:
	{
		uint32_t* L_12 = V_0;
		int32_t L_13 = ___xOffset1;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_13), (int32_t)4))));
		uint32_t* L_14 = V_6;
		int32_t L_15 = ___xLen2;
		V_7 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_15), (int32_t)4))));
		uint32_t* L_16 = V_1;
		int32_t L_17 = ___yOffest4;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_17), (int32_t)4))));
		uint32_t* L_18 = V_8;
		int32_t L_19 = ___yLen5;
		V_9 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_19), (int32_t)4))));
		uint32_t* L_20 = V_2;
		int32_t L_21 = ___dOffset7;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_21), (int32_t)4))));
		uint32_t* L_22 = V_10;
		int32_t L_23 = ___mod8;
		V_11 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)4))));
		goto IL_00ef;
	}

IL_0088:
	{
		uint32_t* L_24 = V_6;
		int32_t L_25 = *((uint32_t*)L_24);
		if (!L_25)
		{
			goto IL_00e3;
		}
	}
	{
		V_12 = ((int64_t)((int64_t)0));
		uint32_t* L_26 = V_10;
		V_13 = L_26;
		uint32_t* L_27 = V_8;
		V_14 = L_27;
		goto IL_00c7;
	}

IL_009b:
	{
		uint64_t L_28 = V_12;
		uint32_t* L_29 = V_6;
		int32_t L_30 = *((uint32_t*)L_29);
		uint32_t* L_31 = V_14;
		int32_t L_32 = *((uint32_t*)L_31);
		uint32_t* L_33 = V_13;
		int32_t L_34 = *((uint32_t*)L_33);
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_28, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_30)))), (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_32)))))), (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_34))))))));
		uint32_t* L_35 = V_13;
		uint64_t L_36 = V_12;
		*((int32_t*)L_35) = (int32_t)((int32_t)((uint32_t)L_36));
		uint64_t L_37 = V_12;
		V_12 = ((int64_t)((uint64_t)L_37>>((int32_t)32)));
		uint32_t* L_38 = V_14;
		V_14 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_38, (int32_t)4));
		uint32_t* L_39 = V_13;
		V_13 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_39, (int32_t)4));
	}

IL_00c7:
	{
		uint32_t* L_40 = V_14;
		uint32_t* L_41 = V_9;
		if ((!(((uintptr_t)L_40) < ((uintptr_t)L_41))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t* L_42 = V_13;
		uint32_t* L_43 = V_11;
		if ((!(((uintptr_t)L_42) >= ((uintptr_t)L_43))))
		{
			goto IL_009b;
		}
	}

IL_00d3:
	{
		uint64_t L_44 = V_12;
		if (!L_44)
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t* L_45 = V_13;
		uint32_t* L_46 = V_11;
		if ((!(((uintptr_t)L_45) < ((uintptr_t)L_46))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t* L_47 = V_13;
		uint64_t L_48 = V_12;
		*((int32_t*)L_47) = (int32_t)((int32_t)((uint32_t)L_48));
	}

IL_00e3:
	{
		uint32_t* L_49 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_49, (int32_t)4));
		uint32_t* L_50 = V_10;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_50, (int32_t)4));
	}

IL_00ef:
	{
		uint32_t* L_51 = V_6;
		uint32_t* L_52 = V_7;
		if ((!(((uintptr_t)L_51) >= ((uintptr_t)L_52))))
		{
			goto IL_0088;
		}
	}
	{
		V_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		return;
	}
}
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_modInverse_m6AC9B89937D3B998F633DEABB5272EAFE22EC00E (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, uint32_t ___modulus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint32_t L_0 = ___modulus1;
		V_0 = L_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1 = ___bi0;
		uint32_t L_2 = ___modulus1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F(L_1, L_2, NULL);
		V_1 = L_3;
		V_2 = 0;
		V_3 = 1;
		goto IL_0039;
	}

IL_0010:
	{
		uint32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		uint32_t L_5 = V_3;
		return L_5;
	}

IL_0016:
	{
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)L_8)), (int32_t)L_9))));
		uint32_t L_10 = V_0;
		uint32_t L_11 = V_1;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)L_11));
		uint32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		uint32_t L_14 = ___modulus1;
		uint32_t L_15 = V_2;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
	}

IL_002d:
	{
		uint32_t L_16 = V_3;
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_0;
		uint32_t L_19 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((uint32_t)(int32_t)L_17/(uint32_t)(int32_t)L_18)), (int32_t)L_19))));
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_0;
		V_1 = ((int32_t)((uint32_t)(int32_t)L_20%(uint32_t)(int32_t)L_21));
	}

IL_0039:
	{
		uint32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0010;
		}
	}

IL_003c:
	{
		return 0;
	}
}
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * Kernel_modInverse_m741905D9CCEC274288E9144E69BC4862576082A6 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___modulus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_0 = NULL;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_1 = NULL;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_2 = NULL;
	int32_t V_3 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_4 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_5 = NULL;
	ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * V_6 = NULL;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_7 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_8 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___modulus1;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = ___bi0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3 = ___modulus1;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint32_t L_7;
		L_7 = Kernel_modInverse_m6AC9B89937D3B998F633DEABB5272EAFE22EC00E(L_2, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8;
		L_8 = BigInteger_op_Implicit_mA366B11D70EEA5E05CB0A27A253EA22DC3D47F3E(L_7, NULL);
		return L_8;
	}

IL_001d:
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_9 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_10 = L_9;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_11;
		L_11 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_11);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_12 = L_10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_13;
		L_13 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(1, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_13);
		V_0 = L_12;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_14 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_14;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_15 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_16 = L_15;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_17;
		L_17 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_17);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_18 = L_16;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_19;
		L_19 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(0, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_19);
		V_2 = L_18;
		V_3 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_20 = ___modulus1;
		V_4 = L_20;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_21 = ___bi0;
		V_5 = L_21;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_22 = ___modulus1;
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * L_23 = (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF *)il2cpp_codegen_object_new(ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A(L_23, L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		goto IL_00c1;
	}

IL_0068:
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) <= ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * L_25 = V_6;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_35;
		L_35 = BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE(L_31, L_34, NULL);
		NullCheck(L_25);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_36;
		L_36 = ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD(L_25, L_28, L_35, NULL);
		V_8 = L_36;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_37 = V_0;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_40);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_41 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_42 = V_8;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_42);
	}

IL_008e:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_43 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_44 = V_5;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_45;
		L_45 = Kernel_multiByteDivide_mC719C7FBCF592D8720F30B4CD8B74F8DD95385D6(L_43, L_44, NULL);
		V_7 = L_45;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_46 = V_1;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_49);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_50 = V_1;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_51 = V_7;
		NullCheck(L_51);
		int32_t L_52 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_53);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_54 = V_2;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_55 = V_2;
		NullCheck(L_55);
		int32_t L_56 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_57);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_57);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_58 = V_2;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_59 = V_7;
		NullCheck(L_59);
		int32_t L_60 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)L_61);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_62 = V_5;
		V_4 = L_62;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_63 = V_7;
		NullCheck(L_63);
		int32_t L_64 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_5 = L_65;
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_00c1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_67 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = BigInteger_op_Inequality_m7B8F0C5A75587F235E5EB82AF07817B90C9AC830(L_67, 0, NULL);
		if (L_68)
		{
			goto IL_0068;
		}
	}
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_69 = V_2;
		NullCheck(L_69);
		int32_t L_70 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = BigInteger_op_Inequality_m7B8F0C5A75587F235E5EB82AF07817B90C9AC830(L_71, 1, NULL);
		if (!L_72)
		{
			goto IL_00e1;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA * L_73 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_73, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F0552FD39D0662CC057CFE2B43FEC612634CD8B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kernel_modInverse_m741905D9CCEC274288E9144E69BC4862576082A6_RuntimeMethod_var)));
	}

IL_00e1:
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * L_74 = V_6;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_75 = V_0;
		NullCheck(L_75);
		int32_t L_76 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_81 = V_1;
		NullCheck(L_81);
		int32_t L_82 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_84;
		L_84 = BigInteger_op_Multiply_m2182A109D6378FF4DC89B2C0C0D05131DE978BCE(L_80, L_83, NULL);
		NullCheck(L_74);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_85;
		L_85 = ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD(L_74, L_77, L_84, NULL);
		return L_85;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimalityTest__ctor_m73483F9E5D166F74E0340F479376C61D9280266A (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552 (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, int32_t ___confidence1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* delegateArrayToInvoke = __this->___delegates_11;
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->___method_ptr_0;
		RuntimeObject* targetThis = currentDelegate->___m_target_2;
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->___method_3);
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___bi0, ___confidence1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___bi0, ___confidence1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->___method_is_virtual_10)
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, int32_t >::Invoke(targetMethod, ___bi0, ___confidence1);
					else
						result = GenericVirtualFuncInvoker1< bool, int32_t >::Invoke(targetMethod, ___bi0, ___confidence1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___bi0, ___confidence1);
					else
						result = VirtualFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___bi0, ___confidence1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___bi0, ___confidence1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef bool (*FunctionPointerType) (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___bi0, ___confidence1, targetMethod);
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___bi0, ___confidence1, targetMethod);
			}
		}
	}
	return result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Mono.Math.Prime.PrimalityTests::GetSPPRounds(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, int32_t ___confidence1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___bi0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)100))))
		{
			goto IL_0011;
		}
	}
	{
		V_1 = ((int32_t)27);
		goto IL_008f;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)150))))
		{
			goto IL_001e;
		}
	}
	{
		V_1 = ((int32_t)18);
		goto IL_008f;
	}

IL_001e:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)200))))
		{
			goto IL_002b;
		}
	}
	{
		V_1 = ((int32_t)15);
		goto IL_008f;
	}

IL_002b:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)250))))
		{
			goto IL_0038;
		}
	}
	{
		V_1 = ((int32_t)12);
		goto IL_008f;
	}

IL_0038:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)300))))
		{
			goto IL_0045;
		}
	}
	{
		V_1 = ((int32_t)9);
		goto IL_008f;
	}

IL_0045:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)350))))
		{
			goto IL_0051;
		}
	}
	{
		V_1 = 8;
		goto IL_008f;
	}

IL_0051:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)400))))
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 7;
		goto IL_008f;
	}

IL_005d:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)500))))
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 6;
		goto IL_008f;
	}

IL_0069:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)600))))
		{
			goto IL_0075;
		}
	}
	{
		V_1 = 5;
		goto IL_008f;
	}

IL_0075:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)800))))
		{
			goto IL_0081;
		}
	}
	{
		V_1 = 4;
		goto IL_008f;
	}

IL_0081:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)1250))))
		{
			goto IL_008d;
		}
	}
	{
		V_1 = 3;
		goto IL_008f;
	}

IL_008d:
	{
		V_1 = 2;
	}

IL_008f:
	{
		int32_t L_13 = ___confidence1;
		switch (L_13)
		{
			case 0:
			{
				goto IL_00af;
			}
			case 1:
			{
				goto IL_00ba;
			}
			case 2:
			{
				goto IL_00c5;
			}
			case 3:
			{
				goto IL_00c7;
			}
			case 4:
			{
				goto IL_00cb;
			}
			case 5:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_00da;
	}

IL_00af:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14>>(int32_t)2));
		int32_t L_15 = V_1;
		if (L_15)
		{
			goto IL_00b8;
		}
	}
	{
		return 1;
	}

IL_00b8:
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_00ba:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)((int32_t)L_17>>(int32_t)1));
		int32_t L_18 = V_1;
		if (L_18)
		{
			goto IL_00c3;
		}
	}
	{
		return 1;
	}

IL_00c3:
	{
		int32_t L_19 = V_1;
		return L_19;
	}

IL_00c5:
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_00c7:
	{
		int32_t L_21 = V_1;
		return ((int32_t)((int32_t)L_21<<(int32_t)1));
	}

IL_00cb:
	{
		int32_t L_22 = V_1;
		return ((int32_t)((int32_t)L_22<<(int32_t)2));
	}

IL_00cf:
	{
		Exception_t * L_23 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3227BC5517316F41D601A40DC84532F3C724DC04)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57_RuntimeMethod_var)));
	}

IL_00da:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * L_24 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57_RuntimeMethod_var)));
	}
}
// System.Boolean Mono.Math.Prime.PrimalityTests::RabinMillerTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimalityTests_RabinMillerTest_m8CB7357EAAB8F33F542625238BEDA04D02D3FEE1 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___n0, int32_t ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_2 = NULL;
	int32_t V_3 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_4 = NULL;
	ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_6 = NULL;
	int32_t V_7 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_8 = NULL;
	int32_t V_9 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_0 = ___n0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3;
		L_3 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(L_2, NULL);
		int32_t L_4 = ___confidence1;
		int32_t L_5;
		L_5 = PrimalityTests_GetSPPRounds_m7FEAADFD0D1ECC40855567E4B7EE927D78E53C57(L_3, L_4, NULL);
		V_1 = L_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_6 = ___n0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_7;
		L_7 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(1, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_8;
		L_8 = BigInteger_op_Subtraction_mA77D9B0690E545E5E81E024DE2D005A4E5904CA7(L_6, L_7, NULL);
		V_2 = L_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = BigInteger_LowestSetBit_m6443AF5F1F7C864A65365DD731FC7DAC1495DE20(L_9, NULL);
		V_3 = L_10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_11 = V_2;
		int32_t L_12 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_13;
		L_13 = BigInteger_op_RightShift_m338EE513BA46D08DFDA593D76CC1FD60B594D0E8(L_11, L_12, NULL);
		V_4 = L_13;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_14 = ___n0;
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * L_15 = (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF *)il2cpp_codegen_object_new(ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A(L_15, L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		V_6 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)NULL;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_16 = ___n0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0052;
		}
	}
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * L_18 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_19 = V_4;
		NullCheck(L_18);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_20;
		L_20 = ModulusRing_Pow_m9F2BB905682A6999D33B598EE7A61755DC240C6D(L_18, 2, L_19, NULL);
		V_6 = L_20;
	}

IL_0052:
	{
		V_7 = 0;
		goto IL_00ed;
	}

IL_005a:
	{
		int32_t L_21 = V_7;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_22 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = BigInteger_op_Equality_mD2A10886EA565159572D083855080AD55FC517D7(L_22, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)NULL, NULL);
		if (!L_23)
		{
			goto IL_009a;
		}
	}

IL_0069:
	{
		V_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *)NULL;
	}

IL_006c:
	{
		int32_t L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_25;
		L_25 = BigInteger_GenerateRandom_mA6D7DE4D0B18C143D555FFF251F5FC9BDC47A1DB(L_24, NULL);
		V_8 = L_25;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_26 = V_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_27;
		L_27 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(2, NULL);
		bool L_28;
		L_28 = BigInteger_op_LessThanOrEqual_mE13A82E3B45939FB4614756D81930A0C8E59401C(L_26, L_27, NULL);
		if (!L_28)
		{
			goto IL_008d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_29 = V_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = BigInteger_op_GreaterThanOrEqual_mC840A5F96C2E572E4DA967F778348FEEFDF09F7E(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_006c;
		}
	}

IL_008d:
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * L_32 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_33 = V_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_34 = V_4;
		NullCheck(L_32);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_35;
		L_35 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(L_32, L_33, L_34, NULL);
		V_6 = L_35;
	}

IL_009a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_36 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_36, 1, NULL);
		if (L_37)
		{
			goto IL_00e7;
		}
	}
	{
		V_9 = 0;
		goto IL_00cc;
	}

IL_00a9:
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF * L_38 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_39 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_40;
		L_40 = BigInteger_op_Implicit_m62A62BEDAE7A2C4349BF7139FD915204A599EEAC(2, NULL);
		NullCheck(L_38);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_41;
		L_41 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(L_38, L_39, L_40, NULL);
		V_6 = L_41;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_42 = V_6;
		bool L_43;
		L_43 = BigInteger_op_Equality_m95C17323F96738CA91AC0402D8E4E1FB26829FFB(L_42, 1, NULL);
		if (!L_43)
		{
			goto IL_00c6;
		}
	}
	{
		return (bool)0;
	}

IL_00c6:
	{
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00cc:
	{
		int32_t L_45 = V_9;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_00db;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_47 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_48 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_47, L_48, NULL);
		if (L_49)
		{
			goto IL_00a9;
		}
	}

IL_00db:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_50 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_51 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = BigInteger_op_Inequality_m026BCC8D6A527AD7D1BF20E5BC10187D8CF324FC(L_50, L_51, NULL);
		if (!L_52)
		{
			goto IL_00e7;
		}
	}
	{
		return (bool)0;
	}

IL_00e7:
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_00ed:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = V_1;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimeGeneratorBase_get_Confidence_m8A53DA3C670504B629434C990508D4B77642B875 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B * PrimeGeneratorBase_get_PrimalityTest_m96C5E1866F96043982AF493BE7EAB5969F770E1D (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimalityTests_RabinMillerTest_m8CB7357EAAB8F33F542625238BEDA04D02D3FEE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B * L_0 = (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B *)il2cpp_codegen_object_new(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B_il2cpp_TypeInfo_var);
		PrimalityTest__ctor_m73483F9E5D166F74E0340F479376C61D9280266A(L_0, NULL, ((intptr_t)PrimalityTests_RabinMillerTest_m8CB7357EAAB8F33F542625238BEDA04D02D3FEE1_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m706A348C994861A2B92CE9156FE20DCF7474E286 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)4000);
	}
}
// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimeGeneratorBase__ctor_mECF0CD5B964A7E6FCE4F504719164114B8A678E9 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_mD12A7AC0A052FA228E0F4918BBA1B2B59AD605CE (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175 * __this, int32_t ___bits0, RuntimeObject * ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___bits0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1;
		L_1 = BigInteger_GenerateRandom_mA6D7DE4D0B18C143D555FFF251F5FC9BDC47A1DB(L_0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2 = L_1;
		NullCheck(L_2);
		BigInteger_SetBit_m3E67DE35B0E691FCB886C60252CAAFC3FCB92A39(L_2, 0, NULL);
		return L_2;
	}
}
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m6AC834873702FE49B85FB261931CA31BC239FFCD (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175 * __this, int32_t ___bits0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___bits0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_1;
		L_1 = VirtualFuncInvoker2< BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *, int32_t, RuntimeObject * >::Invoke(9 /* Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object) */, __this, L_0, NULL);
		return L_1;
	}
}
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m6599A58FA9EBD14FEB9D18073419FF8341365B8B (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175 * __this, int32_t ___bits0, RuntimeObject * ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___bits0;
		RuntimeObject * L_1 = ___context1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_2;
		L_2 = VirtualFuncInvoker2< BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *, int32_t, RuntimeObject * >::Invoke(8 /* Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object) */, __this, L_0, L_1);
		V_0 = L_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F(L_3, ((int32_t)-1060120681), NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds() */, __this);
		V_2 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___smallPrimes_2;
		V_3 = L_6;
	}

IL_0022:
	{
		uint32_t L_7 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_7%(uint32_t)(int32_t)3)))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_8 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_8%(uint32_t)(int32_t)5)))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_9 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_9%(uint32_t)(int32_t)7)))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_10 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)((int32_t)11))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_11 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_11%(uint32_t)(int32_t)((int32_t)13))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_12 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_12%(uint32_t)(int32_t)((int32_t)17))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_13%(uint32_t)(int32_t)((int32_t)19))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_14 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_14%(uint32_t)(int32_t)((int32_t)23))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_15 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_15%(uint32_t)(int32_t)((int32_t)29))))
		{
			goto IL_009d;
		}
	}
	{
		V_4 = ((int32_t)10);
		goto IL_006d;
	}

IL_005b:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_3;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		uint32_t L_21;
		L_21 = BigInteger_op_Modulus_m6A12610F6997190C6C35ED211AE4AEE01683E92F(L_16, L_20, NULL);
		if (!L_21)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_23 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_3;
		NullCheck(L_24);
		if ((((int32_t)L_23) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_007d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_2;
		if ((((int64_t)((int64_t)((uint64_t)L_28))) <= ((int64_t)((int64_t)((int64_t)L_29)))))
		{
			goto IL_005b;
		}
	}

IL_007d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_30 = V_0;
		RuntimeObject * L_31 = ___context1;
		bool L_32;
		L_32 = VirtualFuncInvoker2< bool, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 *, RuntimeObject * >::Invoke(10 /* System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object) */, __this, L_30, L_31);
		if (!L_32)
		{
			goto IL_009d;
		}
	}
	{
		PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B * L_33;
		L_33 = VirtualFuncInvoker0< PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B * >::Invoke(5 /* Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest() */, __this);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_34 = V_0;
		int32_t L_35;
		L_35 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence() */, __this);
		NullCheck(L_33);
		bool L_36;
		L_36 = PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552(L_33, L_34, L_35, NULL);
		if (!L_36)
		{
			goto IL_009d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_37 = V_0;
		return L_37;
	}

IL_009d:
	{
		uint32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)2));
		uint32_t L_39 = V_1;
		if ((!(((uint32_t)L_39) >= ((uint32_t)((int32_t)-1060120681)))))
		{
			goto IL_00b1;
		}
	}
	{
		uint32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)((int32_t)-1060120681)));
	}

IL_00b1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * L_41 = V_0;
		NullCheck(L_41);
		BigInteger_Incr2_mE5DCADCC1DEDD4F3E48E326940D3C926E1A37808(L_41, NULL);
		goto IL_0022;
	}
}
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m2682AEC2B91FC89D1EB0799BFE5DA4C0F7F8C1D0 (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175 * __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08 * ___bi0, RuntimeObject * ___context1, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequentialSearchPrimeGeneratorBase__ctor_mFE1A43FA14390E871ED0C9025B57B84D9A7AA754 (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175 * __this, const RuntimeMethod* method)
{
	{
		PrimeGeneratorBase__ctor_mECF0CD5B964A7E6FCE4F504719164114B8A678E9(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m5FD260C639BDBF6B570A90B23653DE3779848418 (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->___m_stringLength_0;
		return L_0;
	}
}
