#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>

#include "icalls/mscorlib/System.Diagnostics/Debugger.h"
#include "icalls/mscorlib/System.Diagnostics/StackFrame.h"
#include "icalls/mscorlib/System.Diagnostics/StackTrace.h"

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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Diagnostics.StackFrame>
struct List_1_tECF3D3C28087C516811A22319C02931F38CE1E95;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Assembly
struct Assembly_t;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.Generic.ByteEqualityComparer
struct ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275;
// System.Collections.Concurrent.CDSCollectionETWBCLProvider
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Diagnostics.ConditionalAttribute
struct ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tE5FA22579082706F95769C94BB410B4F6F84F029;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t740910A61F1059C34799A71D1FA6A187F7DACA60;
// System.Diagnostics.DebuggerDisplayAttribute
struct DebuggerDisplayAttribute_tAB6587DCD1F68BCE5256E7CD76854FE39271B279;
// System.Diagnostics.DebuggerHiddenAttribute
struct DebuggerHiddenAttribute_tE96DA64E5ECBBE621607F69CC79CC2B80870F097;
// System.Diagnostics.DebuggerNonUserCodeAttribute
struct DebuggerNonUserCodeAttribute_t28DC10F33E9844CEB00D3FD609F8443221F06269;
// System.Diagnostics.DebuggerStepThroughAttribute
struct DebuggerStepThroughAttribute_tE925F628A0E6E2F8A29D3962A4823DA9F7D98006;
// System.Diagnostics.DebuggerTypeProxyAttribute
struct DebuggerTypeProxyAttribute_tAB3939448E11EC344885F7C52A9CC9AF481CD2F7;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83;
// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
// System.Exception
struct Exception_t;
// System.Collections.IComparer
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Collections.Generic.InternalStringComparer
struct InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t01C6F0A583661ACCA85234683F50A4D4F82C9B7E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Generic.NonRandomizedStringEqualityComparer
struct NonRandomizedStringEqualityComparer_t3FC62504CCD0585A41CCDD1B769DAE3E72B20CE3;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Collections.Generic.ObjectEqualityComparer
struct ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Collections.SortedList
struct SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3;
// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47;
// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443;
// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Reflection.TypeFilter
struct TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.__Il2CppComDelegate
struct __Il2CppComDelegate_tE313EB555AAD1E798653E4C254A0FABD6BA2BB27;
// System.__Il2CppComObject
struct Il2CppComObject;
// System.Collections.SortedList/SortedListEnumerator
struct SortedListEnumerator_t919E734DA3C634A506AAE72CC80BBF7FFC05BF9F;
// System.Collections.SortedList/ValueList
struct ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331;
// System.Collections.Stack/StackEnumerator
struct StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedListEnumerator_t919E734DA3C634A506AAE72CC80BBF7FFC05BF9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____6CEE45445AFD150B047A5866FFA76AA651CDB7B7_57_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral012D19DEDB7F268C61672C79B02816C18D097BF4;
IL2CPP_EXTERN_C String_t* _stringLiteral052F16D71B2E10244ED0ACB1335E8644055DE808;
IL2CPP_EXTERN_C String_t* _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFEBF342B2EC9E1B2887EEA1FC41C532F92A6B5;
IL2CPP_EXTERN_C String_t* _stringLiteral0F6F9EAE7D2F05E9B73C193601B3E6BEE5E50332;
IL2CPP_EXTERN_C String_t* _stringLiteral0FB28D215F1C062EDB535A58AD8714B5A5FE4064;
IL2CPP_EXTERN_C String_t* _stringLiteral15CB2E622D7D277FACF794D7CC4B489940CCEBD3;
IL2CPP_EXTERN_C String_t* _stringLiteral1A09185860153B4BC6DD6BAFD7F3988481D6646F;
IL2CPP_EXTERN_C String_t* _stringLiteral1B0C93330E9DD2B87A22B6324E499950A892FE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral1D429E066663E8F2FE75C06B462A453AEC63D86F;
IL2CPP_EXTERN_C String_t* _stringLiteral1F82196A6F25AC4E97E6DAE2D0F20D7DFE1A48F8;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral457BF4072EA28A68960C6F36D3FB2B96D339A700;
IL2CPP_EXTERN_C String_t* _stringLiteral48F1B2E34DB21FCB5F2135CD6BDC706B5EC88DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral5CAB87F6B3ED1D0AB3511FC787A210897543525E;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECED4A9B5D8B5F2668BE1F6B53E9E164EF0C60E;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral7F9797AAADC6DFCEFE4DC6E7F721ADA268A60793;
IL2CPP_EXTERN_C String_t* _stringLiteral80B69DF6F2C78282CF453F1F8A92F520650673FF;
IL2CPP_EXTERN_C String_t* _stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1;
IL2CPP_EXTERN_C String_t* _stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralAE2588A0F953A2D4AC7E032D8E7B443C2662296A;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCA0AA89382EC9FBF76CB9BBEAB1872B5A701BEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralD6856754C069BB887EACADAC5402DFC04DF58E7C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34;
IL2CPP_EXTERN_C String_t* _stringLiteralF224A334AF1CFC62B512F53E3DAF372FDB579B18;
IL2CPP_EXTERN_C String_t* _stringLiteralF306962EA63DA79E4806D8A7307784E9100B53CC;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEC460DC61811C6FD0F0A356298DC095225A991;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisRuntimeObject_m586C24F8E6C6C072C85103BCCD409E9E880BA630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebuggerBrowsableAttribute__ctor_mA78466747C5C6154F71F0100F7F16B97571A02F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebuggerTypeProxyAttribute__ctor_m0B22B1DC018FAA2B0B799840E67DDB8D0CD9ABCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_GetBaseDefinition_m657ACC51B77BC5FA526A03CD84BAD2598FFEE585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_GetCustomAttributes_m423CD35D2871D134280695AE712288B2F31B4919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_GetCustomAttributes_mD5792E69819FDD68F0CC2F08941A3ECE82630560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_GetMethodImplementationFlags_m71676A3F96318FBBF03F5C5F5A683B34810D699D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_GetParameters_m28516BAD1E304AD8BF7FE55D10E7BB171C52DBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_Invoke_mDFB2DDC157A4F93D2BE60A41ED5E2AFBFF616C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_IsDefined_m7930AAF2AD816CDDC6FEF4BEA46758C38B825EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_get_Attributes_m60B6E0D7453F2ABA6068FE0E9F7A9D8D854DFF13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_get_DeclaringType_mF4A862CBE7BEA370DD8BDF35D9778EB50754FD4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_get_MethodHandle_m706080C466E95FC96B32229F1B4524518C3B3AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_get_Name_mBDFB261638832F2976AADF0065812666EA23E21D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicMethod_get_ReflectedType_mF98D112B539EC8B0A8381E4BE2581BA72BCF52E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource_ToString_mCE97BD92DABC5BC98019BA9C9E158433E63A1674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m66920BDFDDBAFDFA21C637D727CDA29F7B90A4DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackEnumerator_MoveNext_m7546F84C5380ED4CB0EA5776C83AFAEF33BA8AA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackEnumerator_Reset_mDA888FAA77A784E91C188BDCF3543603FB3138E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackEnumerator_get_Current_m25ED88304D983AB82147BDB2B0E909DA3ED29978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_Peek_mCE1FD35FFBA060C183EE87C761042E6B70EC2BA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_Pop_mEB2BEADDD7173A13FD7AF514E27F3258270AF3BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack__ctor_m19ADC1D26A734E0BA311F9B4DB7A4E4C9502D73A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_mCF7A8540CD52C39F8262F7F8C01ACE4821CFB7B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedMarshal__ctor_mB83C597E314D06E9DC785181527144689CACF092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Add_m0740BE32C77E40AE45D17304D0A3017D90AD874E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Clear_m9296A743A508B3CE438CB8FE30307EFFF13964F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_CopyTo_mB7B4E22EE87A663035D4B768C8482501459A9AE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Insert_m626E75AA6860028AD51996D0719A1E2B878688C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_RemoveAt_mF872C0EBE8362635C463D30FA7AAB4D8AFAED53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Remove_m90A7EFBC612BEA34049C8E5C478EE77A9A298767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_set_Item_mFD910F3F7564190A0FF6BDABDE1D5B5846F70B26_RuntimeMethod_var;
struct Assembly_t_marshaled_com;
struct Assembly_t_marshaled_pinvoke;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_0;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_1;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_2;
};

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8 * ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A  : public RuntimeObject
{
};

struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A * ___defaultComparer_0;
};

// System.Collections.Generic.List`1<System.Diagnostics.StackFrame>
struct List_1_tECF3D3C28087C516811A22319C02931F38CE1E95  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;
};

struct List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_StaticFields
{
	// T[] System.Collections.Generic.List`1::_emptyArray
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ____emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.Collections.Generic.CollectionExtensions
struct CollectionExtensions_t182A00BC503C9791010A3F71F412C76ABDD4D10D  : public RuntimeObject
{
};

// System.Diagnostics.Contracts.Contract
struct Contract_tD9FCC48E522DA4471B12BD7298721B5814BF91A6  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472 * ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A * ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B * ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472 * ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A * ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B * ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Diagnostics.Debugger
struct Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF  : public RuntimeObject
{
};

struct Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_StaticFields
{
	// System.String System.Diagnostics.Debugger::DefaultCategory
	String_t* ___DefaultCategory_0;
};

// System.Collections.Generic.DictionaryHashHelpers
struct DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1  : public RuntimeObject
{
};

struct DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Generic.DictionaryHashHelpers::<SerializationInfoTable>k__BackingField
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858 * ___U3CSerializationInfoTableU3Ek__BackingField_0;
};

// System.Collections.Generic.IntrospectiveSortUtilities
struct IntrospectiveSortUtilities_tD784154D54CAE81D6BD1F950B40A8C89EF328402  : public RuntimeObject
{
};

// System.Collections.Generic.KeyValuePair
struct KeyValuePair_t7874AE3B9245A56073B459BA3A218A817370F597  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Collections.Generic.ObjectEqualityComparer
struct ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D  : public RuntimeObject
{
};

struct ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D_StaticFields
{
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D * ___Default_0;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Collections.SortedList
struct SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3  : public RuntimeObject
{
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * ___valueList_5;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_6;
};

struct SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3_StaticFields
{
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___emptyArray_7;
};

// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47  : public RuntimeObject
{
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;
};

// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443  : public RuntimeObject
{
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Int64 System.Diagnostics.StackFrame::methodAddress
	int64_t ___methodAddress_3;
	// System.UInt32 System.Diagnostics.StackFrame::methodIndex
	uint32_t ___methodIndex_4;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t * ___methodBase_5;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_6;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_7;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_8;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_9;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t * ___methodBase_5;
	char* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	char* ___internalMethodName_9;
};
// Native definition for COM marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t * ___methodBase_5;
	Il2CppChar* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	Il2CppChar* ___internalMethodName_9;
};

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853  : public RuntimeObject
{
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___frames_1;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_2;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_3;
};

struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields
{
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_4;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_5;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C  : public RuntimeObject
{
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

// System.Collections.SortedList/SortedListDebugView
struct SortedListDebugView_t365683FFEEACDEAF9A7E023D73C7D8D577DDAEBA  : public RuntimeObject
{
};

// System.Collections.SortedList/SortedListEnumerator
struct SortedListEnumerator_t919E734DA3C634A506AAE72CC80BBF7FFC05BF9F  : public RuntimeObject
{
	// System.Collections.SortedList System.Collections.SortedList/SortedListEnumerator::sortedList
	SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * ___sortedList_0;
	// System.Object System.Collections.SortedList/SortedListEnumerator::key
	RuntimeObject * ___key_1;
	// System.Object System.Collections.SortedList/SortedListEnumerator::value
	RuntimeObject * ___value_2;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::index
	int32_t ___index_3;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::startIndex
	int32_t ___startIndex_4;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::endIndex
	int32_t ___endIndex_5;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::version
	int32_t ___version_6;
	// System.Boolean System.Collections.SortedList/SortedListEnumerator::current
	bool ___current_7;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::getObjectRetType
	int32_t ___getObjectRetType_8;
};

// System.Collections.SortedList/ValueList
struct ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331  : public RuntimeObject
{
	// System.Collections.SortedList System.Collections.SortedList/ValueList::sortedList
	SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * ___sortedList_0;
};

// System.Collections.Stack/StackDebugView
struct StackDebugView_t0623502C1272C6DB2F946F048EB1378A8FA0C63A  : public RuntimeObject
{
};

// System.Collections.Stack/StackEnumerator
struct StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522  : public RuntimeObject
{
	// System.Collections.Stack System.Collections.Stack/StackEnumerator::_stack
	Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * ____stack_0;
	// System.Int32 System.Collections.Stack/StackEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Stack/StackEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack/StackEnumerator::currentElement
	RuntimeObject * ___currentElement_3;
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

// System.Collections.Generic.ByteEqualityComparer
struct ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275  : public EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8
{
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

// System.Diagnostics.ConditionalAttribute
struct ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.ConditionalAttribute::m_conditionString
	String_t* ___m_conditionString_0;
};

// System.Diagnostics.DebuggerDisplayAttribute
struct DebuggerDisplayAttribute_tAB6587DCD1F68BCE5256E7CD76854FE39271B279  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.DebuggerDisplayAttribute::name
	String_t* ___name_0;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::value
	String_t* ___value_1;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::type
	String_t* ___type_2;
};

// System.Diagnostics.DebuggerHiddenAttribute
struct DebuggerHiddenAttribute_tE96DA64E5ECBBE621607F69CC79CC2B80870F097  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.DebuggerNonUserCodeAttribute
struct DebuggerNonUserCodeAttribute_t28DC10F33E9844CEB00D3FD609F8443221F06269  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.DebuggerStepThroughAttribute
struct DebuggerStepThroughAttribute_tE925F628A0E6E2F8A29D3962A4823DA9F7D98006  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.DebuggerTypeProxyAttribute
struct DebuggerTypeProxyAttribute_tAB3939448E11EC344885F7C52A9CC9AF481CD2F7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.DebuggerTypeProxyAttribute::typeName
	String_t* ___typeName_0;
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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3 * ____fastRng_14;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Collections.Generic.InternalStringComparer
struct InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B  : public EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Collections.Generic.NonRandomizedStringEqualityComparer
struct NonRandomizedStringEqualityComparer_t3FC62504CCD0585A41CCDD1B769DAE3E72B20CE3  : public EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.__Il2CppComDelegate
struct __Il2CppComDelegate_tE313EB555AAD1E798653E4C254A0FABD6BA2BB27  : public Il2CppComObject
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4__padding[10];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018
struct __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55__padding[1018];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1080
struct __StaticArrayInitTypeSizeU3D1080_t3360B03BFB249C3D1127B8802F837EA773DEA7E1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1080_t3360B03BFB249C3D1127B8802F837EA773DEA7E1__padding[1080];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=11614
struct __StaticArrayInitTypeSizeU3D11614_t71A7AD6E0C25F483127D03920CF581C9C39D1B2E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D11614_t71A7AD6E0C25F483127D03920CF581C9C39D1B2E__padding[11614];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208
struct __StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284__padding[1208];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130
struct __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E__padding[130];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct __StaticArrayInitTypeSizeU3D14_t9CDF898C349F668C2BD2F8CA97FD0D16E081D897 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t9CDF898C349F668C2BD2F8CA97FD0D16E081D897__padding[14];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450
struct __StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C__padding[1450];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472
struct __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070__padding[1472];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=162
struct __StaticArrayInitTypeSizeU3D162_t617FF4EAF2B9EA224C649348AE07C5AB9C6150C0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D162_t617FF4EAF2B9EA224C649348AE07C5AB9C6150C0__padding[162];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665
struct __StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D__padding[1665];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174
struct __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6__padding[174];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t548A67B8FAEBE929F5BE1C5FA92A7708E5A34C85 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t548A67B8FAEBE929F5BE1C5FA92A7708E5A34C85__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
struct __StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355__padding[2048];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100
struct __StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE__padding[2100];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212
struct __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A__padding[212];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=21252
struct __StaticArrayInitTypeSizeU3D21252_tC61E127598BEAE7B6E908A3DB606CD7456E5BC16 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D21252_tC61E127598BEAE7B6E908A3DB606CD7456E5BC16__padding[21252];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350
struct __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC__padding[2350];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382
struct __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630__padding[2382];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240
struct __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265__padding[240];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262
struct __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37__padding[262];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51__padding[288];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct __StaticArrayInitTypeSizeU3D3132_tF0F1005A79A2387D724DFD9EE4EDC366B0A4914C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_tF0F1005A79A2387D724DFD9EE4EDC366B0A4914C__padding[3132];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=320
struct __StaticArrayInitTypeSizeU3D320_t6D99BECB3D1BE952DC466088E42905F3469DB557 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D320_t6D99BECB3D1BE952DC466088E42905F3469DB557__padding[320];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360
struct __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00__padding[360];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
struct __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E__padding[38];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096
struct __StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669__padding[4096];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42
struct __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A__padding[42];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE__padding[44];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89__padding[52];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct __StaticArrayInitTypeSizeU3D56_tCF60E23359634B97A792A75277ACC2176949BCE7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_tCF60E23359634B97A792A75277ACC2176949BCE7__padding[56];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B__padding[6];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=640
struct __StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109__padding[640];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC__padding[72];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61__padding[76];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84
struct __StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3__padding[84];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_t98303845223FCBD0DB35D4D5CF715E1BA61D4294 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t98303845223FCBD0DB35D4D5CF715E1BA61D4294__padding[9];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94
struct __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B__padding[94];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998
struct __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E__padding[998];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::0392525BCB01691D1F319D89F2C12BF93A478467
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143  ___0392525BCB01691D1F319D89F2C12BF93A478467_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::0588059ACBD52F7EA2835882F977A9CF72EB9775
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___0588059ACBD52F7EA2835882F977A9CF72EB9775_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84 <PrivateImplementationDetails>::0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C
	__StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3  ___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::121EC59E23F7559B28D338D562528F6299C2DE22
	__StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265  ___121EC59E23F7559B28D338D562528F6299C2DE22_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::12D04472A8285260EA12FD3813CDFA9F2D2B548C
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::13A35EF1A549297C70E2AD46045BBD2ECA17852D
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::1730F09044E91DB8371B849EFF5E6D17BDE4AED0
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14  ___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669  ___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5
	__StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355  ___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1FE6CE411858B3D864679DE2139FB081F08BFACD
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3  ___1FE6CE411858B3D864679DE2139FB081F08BFACD_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::235D99572263B22ADFEE10FDA0C25E12F4D94FFC
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::25420D0055076FA8D3E4DD96BC53AE24DE6E619F
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208 <PrivateImplementationDetails>::25CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E
	__StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284  ___25CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::29C1A61550F0E3260E1953D4FAD71C256218EF40
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A  ___29C1A61550F0E3260E1953D4FAD71C256218EF40_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::2B33BEC8C30DFDC49DAFE20D3BDE19487850D717
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373  ___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::2BA840FF6020B8FF623DBCB7188248CF853FAF4F
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4  ___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::2C840AFA48C27B9C05593E468C1232CA1CC74AFD
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2D1DA5BB407F0C11C3B5116196C0C6374D932B20
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3  ___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130
	__StaticArrayInitTypeSizeU3D14_t9CDF898C349F668C2BD2F8CA97FD0D16E081D897  ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::320B018758ECE3752FFEDBAEB1A6DB67C80B9359
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5  ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::34476C29F6F81C989CFCA42F7C06E84C66236834
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___34476C29F6F81C989CFCA42F7C06E84C66236834_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382 <PrivateImplementationDetails>::35EED060772F2748D13B745DAEC8CD7BD3B87604
	__StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630  ___35EED060772F2748D13B745DAEC8CD7BD3B87604_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38 <PrivateImplementationDetails>::375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3
	__StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E  ___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450 <PrivateImplementationDetails>::379C06C9E702D31469C29033F0DD63931EB349F5
	__StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C  ___379C06C9E702D31469C29033F0DD63931EB349F5_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::399BD13E240F33F808CA7940293D6EC4E6FD5A00
	__StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4  ___399BD13E240F33F808CA7940293D6EC4E6FD5A00_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::39C9CE73C7B0619D409EF28344F687C1B5C130FE
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___39C9CE73C7B0619D409EF28344F687C1B5C130FE_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=320 <PrivateImplementationDetails>::3C53AFB51FEC23491684C7BEDBC6D4E0F409F851
	__StaticArrayInitTypeSizeU3D320_t6D99BECB3D1BE952DC466088E42905F3469DB557  ___3C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::3E3442C7396F3F2BB4C7348F4A2074C7DC677D68
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3E823444D2DFECF0F90B436B88F02A533CB376F1
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373  ___3E823444D2DFECF0F90B436B88F02A533CB376F1_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3FE6C283BCF384FD2C8789880DFF59664E2AB4A1
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665 <PrivateImplementationDetails>::40981BAA39513E58B28DCF0103CC04DE2A0A0444
	__StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D  ___40981BAA39513E58B28DCF0103CC04DE2A0A0444_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::40E7C49413D261F3F38AD3A870C0AC69C8BDA048
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::421EC7E82F2967DF6CA8C3605514DC6F29EE5845
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::433175D38B13FFE177FDD661A309F1B528B3F6E2
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143  ___433175D38B13FFE177FDD661A309F1B528B3F6E2_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::46232052BC757E030490D851F265FB47FA100902
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413  ___46232052BC757E030490D851F265FB47FA100902_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::4858DB4AA76D3933F1CA9E6712D4FDB16903F628
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4E3B533C39447AAEB59A8E48FABD7E15B5B5D195
	__StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116  ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::4F7A8890F332B22B8DE0BD29D36FA7364748D76A
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::536422B321459B242ADED7240B7447E904E083E3
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___536422B321459B242ADED7240B7447E904E083E3_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1080 <PrivateImplementationDetails>::5382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3
	__StaticArrayInitTypeSizeU3D1080_t3360B03BFB249C3D1127B8802F837EA773DEA7E1  ___5382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::56DFA5053B3131883637F53219E7D88CCEF35949
	__StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4  ___56DFA5053B3131883637F53219E7D88CCEF35949_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::57218C316B6921E2CD61027A2387EDC31A2D9471
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___57218C316B6921E2CD61027A2387EDC31A2D9471_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::57F320D62696EC99727E0FE2045A05F1289CC0C6
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___57F320D62696EC99727E0FE2045A05F1289CC0C6_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A  ___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::5BBDF8058D4235C33F2E8DCF76004031B6187A2F
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4  ___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF
	__StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51  ___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::5BFE2819B4778217C56416C7585FF0E56EBACD89
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___5BFE2819B4778217C56416C7585FF0E56EBACD89_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::5EDFD8200B7AD157878FBA46F22A1C345662F2E3
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89  ___5EDFD8200B7AD157878FBA46F22A1C345662F2E3_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::609C0E8D8DA86A09D6013D301C86BA8782C16B8C
	__StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF  ___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::62BAB0F245E66C3EB982CF5A7015F0A7C3382283
	__StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116  ___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::646036A65DECCD6835C914A46E6E44B729433B60
	__StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355  ___646036A65DECCD6835C914A46E6E44B729433B60_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::65E32B4E150FD8D24B93B0D42A17F1DAD146162B
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::6770974FEF1E98B9C1864370E2B5B786EB0EA39E
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89  ___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::67EEAD805D708D9AA4E14BF747E44CED801744F3
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___67EEAD805D708D9AA4E14BF747E44CED801744F3_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::6C71197D228427B2864C69B357FEF73D8C9D59DF
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413  ___6C71197D228427B2864C69B357FEF73D8C9D59DF_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6CEE45445AFD150B047A5866FFA76AA651CDB7B7
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3  ___6CEE45445AFD150B047A5866FFA76AA651CDB7B7_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t98303845223FCBD0DB35D4D5CF715E1BA61D4294  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::6D797C11E1D4FB68B6570CF2A92B792433527065
	__StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355  ___6D797C11E1D4FB68B6570CF2A92B792433527065_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132 <PrivateImplementationDetails>::6E5DC824F803F8565AF31B42199DAE39FE7F4EA9
	__StaticArrayInitTypeSizeU3D3132_tF0F1005A79A2387D724DFD9EE4EDC366B0A4914C  ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::6FC754859E4EC74E447048364B216D825C6F8FE7
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61  ___6FC754859E4EC74E447048364B216D825C6F8FE7_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::704939CD172085D1295FCE3F1D92431D685D7AA2
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___704939CD172085D1295FCE3F1D92431D685D7AA2_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::7088AAE49F0627B72729078DE6E3182DDCF8ED99
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14  ___7088AAE49F0627B72729078DE6E3182DDCF8ED99_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::7341C933A70EAE383CC50C4B945ADB8E08F06737
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___7341C933A70EAE383CC50C4B945ADB8E08F06737_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::736D39815215889F11249D9958F6ED12D37B9F57
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___736D39815215889F11249D9958F6ED12D37B9F57_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472 <PrivateImplementationDetails>::75E0C38E75E507EDE41C1C4F5F5612852B31A4EF
	__StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070  ___75E0C38E75E507EDE41C1C4F5F5612852B31A4EF_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::7F42F2EDC974BE29B2746957416ED1AEFA605F47
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669  ___7F42F2EDC974BE29B2746957416ED1AEFA605F47_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=21252 <PrivateImplementationDetails>::811A927B7DADD378BE60BBDE794B9277AA9B50EC
	__StaticArrayInitTypeSizeU3D21252_tC61E127598BEAE7B6E908A3DB606CD7456E5BC16  ___811A927B7DADD378BE60BBDE794B9277AA9B50EC_69;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::81917F1E21F3C22B9F916994547A614FB03E968E
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4  ___81917F1E21F3C22B9F916994547A614FB03E968E_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::823566DA642D6EA356E15585921F2A4CA23D6760
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___823566DA642D6EA356E15585921F2A4CA23D6760_71;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::82C2A59850B2E85BCE1A45A479537A384DF6098D
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373  ___82C2A59850B2E85BCE1A45A479537A384DF6098D_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4
	__StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE  ___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_73;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::86F4F563FA2C61798AE6238D789139739428463A
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___86F4F563FA2C61798AE6238D789139739428463A_74;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::871B9CF85DB352BAADF12BAE8F19857683E385AC
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___871B9CF85DB352BAADF12BAE8F19857683E385AC_75;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::89A040451C8CC5C8FB268BE44BDD74964C104155
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3  ___89A040451C8CC5C8FB268BE44BDD74964C104155_76;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8CAA092E783257106251246FF5C97F88D28517A6
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___8CAA092E783257106251246FF5C97F88D28517A6_77;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100 <PrivateImplementationDetails>::8D231DD55FE1AD7631BBD0905A17D5EB616C2154
	__StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE  ___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_78;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8E10AC2F34545DFBBF3FCBC06055D797A8C99991
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_79;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::8F22C9ECE1331718CBD268A9BBFD2F5E451441E3
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143  ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_80;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=640 <PrivateImplementationDetails>::90A0542282A011472F94E97CEAE59F8B3B1A3291
	__StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109  ___90A0542282A011472F94E97CEAE59F8B3B1A3291_81;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::93A63E90605400F34B49F0EB3361D23C89164BDA
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373  ___93A63E90605400F34B49F0EB3361D23C89164BDA_82;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::94841DD2F330CCB1089BF413E4FA9B04505152E2
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___94841DD2F330CCB1089BF413E4FA9B04505152E2_83;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::95264589E48F94B7857CFF398FB72A537E13EEE2
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373  ___95264589E48F94B7857CFF398FB72A537E13EEE2_84;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::95C48758CAE1715783472FB073AB158AB8A0AB2A
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___95C48758CAE1715783472FB073AB158AB8A0AB2A_85;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::973417296623D8DC6961B09664E54039E44CA5D8
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___973417296623D8DC6961B09664E54039E44CA5D8_86;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::97FB30C84FF4A41CD4625B44B2940BFC8DB43003
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_87;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669  ___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_88;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5  ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_89;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_90;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::A0074C15377C0C870B055927403EA9FA7A349D12
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___A0074C15377C0C870B055927403EA9FA7A349D12_91;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130 <PrivateImplementationDetails>::A1319B706116AB2C6D44483F60A7D0ACEA543396
	__StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E  ___A1319B706116AB2C6D44483F60A7D0ACEA543396_92;
	// System.Int64 <PrivateImplementationDetails>::A13AA52274D951A18029131A8DDECF76B569A15D
	int64_t ___A13AA52274D951A18029131A8DDECF76B569A15D_93;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A323DB0813C4D072957BA6FDA79D9776674CD06B
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___A323DB0813C4D072957BA6FDA79D9776674CD06B_94;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::A5444763673307F6828C748D4B9708CFC02B0959
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A  ___A5444763673307F6828C748D4B9708CFC02B0959_95;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A6732F8E7FC23766AB329B492D6BF82E3B33233F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___A6732F8E7FC23766AB329B492D6BF82E3B33233F_96;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::A705A106D95282BD15E13EEA6B0AF583FF786D83
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6  ___A705A106D95282BD15E13EEA6B0AF583FF786D83_97;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018 <PrivateImplementationDetails>::A8A491E4CED49AE0027560476C10D933CE70C8DF
	__StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55  ___A8A491E4CED49AE0027560476C10D933CE70C8DF_98;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::AC791C4F39504D1184B73478943D0636258DA7B1
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___AC791C4F39504D1184B73478943D0636258DA7B1_99;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::AFCD4E1211233E99373A3367B23105A3D624B1F2
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89  ___AFCD4E1211233E99373A3367B23105A3D624B1F2_100;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::B472ED77CB3B2A66D49D179F1EE2081B70A6AB61
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_101;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3  ___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_102;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143  ___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_103;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669  ___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_104;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998 <PrivateImplementationDetails>::B881DA88BE0B68D8A6B6B6893822586B8B2CFC45
	__StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E  ___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_105;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=162 <PrivateImplementationDetails>::B8864ACB9DD69E3D42151513C840AAE270BF21C8
	__StaticArrayInitTypeSizeU3D162_t617FF4EAF2B9EA224C649348AE07C5AB9C6150C0  ___B8864ACB9DD69E3D42151513C840AAE270BF21C8_106;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360 <PrivateImplementationDetails>::B8F87834C3597B2EEF22BA6D3A392CC925636401
	__StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00  ___B8F87834C3597B2EEF22BA6D3A392CC925636401_107;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::B9B670F134A59FB1107AF01A9FE8F8E3980B3093
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_108;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BE1BDEC0AA74B4DCB079943E70528096CCA985F8
	__StaticArrayInitTypeSizeU3D20_t548A67B8FAEBE929F5BE1C5FA92A7708E5A34C85  ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_109;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::BEBC9ECC660A13EFC359BA3383411F698CFF25DB
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_110;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_111;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::BF477463CE2F5EF38FC4C644BBBF4DF109E7670A
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_112;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::BF5EB60806ECB74EE484105DD9D6F463BF994867
	__StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B  ___BF5EB60806ECB74EE484105DD9D6F463BF994867_113;
	// System.Int64 <PrivateImplementationDetails>::C1A1100642BA9685B30A84D97348484E14AA1865
	int64_t ___C1A1100642BA9685B30A84D97348484E14AA1865_114;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C6F364A0AD934EFED8909446C215752E565D77C1
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3  ___C6F364A0AD934EFED8909446C215752E565D77C1_115;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::CE5835130F5277F63D716FC9115526B0AC68FFAD
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6  ___CE5835130F5277F63D716FC9115526B0AC68FFAD_116;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::CE93C35B755802BC4B3D180716B048FC61701EF7
	__StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B  ___CE93C35B755802BC4B3D180716B048FC61701EF7_117;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::CF0B42666EF5E37EDEA0AB8E173E42C196D03814
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5  ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_118;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143  ___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_119;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D117188BE8D4609C0D531C51B0BB911A4219DEBE
	__StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0  ___D117188BE8D4609C0D531C51B0BB911A4219DEBE_120;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE
	__StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0  ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_121;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::D2C5BAE967587C6F3D9F2C4551911E0575A1101F
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143  ___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_122;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636
	__StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE  ___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_123;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::DA19DB47B583EFCF7825D2E39D661D2354F28219
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61  ___DA19DB47B583EFCF7825D2E39D661D2354F28219_124;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82
	__StaticArrayInitTypeSizeU3D56_tCF60E23359634B97A792A75277ACC2176949BCE7  ___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_125;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89  ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_126;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::E1827270A5FE1C85F5352A66FD87BA747213D006
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4  ___E1827270A5FE1C85F5352A66FD87BA747213D006_127;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::E45BAB43F7D5D038672B3E3431F92E34A7AF2571
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_128;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E75835D001C843F156FBA01B001DFE1B8029AC17
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5  ___E75835D001C843F156FBA01B001DFE1B8029AC17_129;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89  ___E92B39D8233061927D9ACDE54665E68E7535635A_130;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::EA9506959484C55CFE0C139C624DF6060E285866
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373  ___EA9506959484C55CFE0C139C624DF6060E285866_131;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262 <PrivateImplementationDetails>::EB5E9A80A40096AB74D2E226650C7258D7BC5E9D
	__StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37  ___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_132;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::EBF68F411848D603D059DFDEA2321C5A5EA78044
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5  ___EBF68F411848D603D059DFDEA2321C5A5EA78044_133;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11
	__StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4  ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_134;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::EC83FB16C20052BEE2B4025159BC2ED45C9C70C3
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312  ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_135;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::EC89C317EA2BF49A70EFF5E89C691E34733D7C37
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_136;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::F06E829E62F3AFBC045D064E10A4F5DF7C969612
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08  ___F06E829E62F3AFBC045D064E10A4F5DF7C969612_137;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=11614 <PrivateImplementationDetails>::F073AA332018FDA0D572E99448FFF1D6422BD520
	__StaticArrayInitTypeSizeU3D11614_t71A7AD6E0C25F483127D03920CF581C9C39D1B2E  ___F073AA332018FDA0D572E99448FFF1D6422BD520_138;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::F34B0E10653402E8F788F8BC3F7CD7090928A429
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413  ___F34B0E10653402E8F788F8BC3F7CD7090928A429_139;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::F37E34BEADB04F34FCC31078A59F49856CA83D5B
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC  ___F37E34BEADB04F34FCC31078A59F49856CA83D5B_140;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94 <PrivateImplementationDetails>::F512A9ABF88066AAEB92684F95CC05D8101B462B
	__StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B  ___F512A9ABF88066AAEB92684F95CC05D8101B462B_141;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::F8FAABB821300AA500C2CEC6091B3782A7FB44A4
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373  ___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_142;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350 <PrivateImplementationDetails>::FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B
	__StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC  ___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_143;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_tDBBE7B4127320FEB2399B0DB25647B88BF248D1B 
{
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;
};

// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
};

struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_StaticFields
{
	// System.Byte[] System.Diagnostics.Tracing.EventSource::namespaceBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___namespaceBytes_1;
	// System.Guid System.Diagnostics.Tracing.EventSource::AspNetEventSourceGuid
	Guid_t  ___AspNetEventSourceGuid_2;
};

struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_ThreadStaticFields
{
	// System.Byte System.Diagnostics.Tracing.EventSource::m_EventSourceExceptionRecurenceCount
	uint8_t ___m_EventSourceExceptionRecurenceCount_0;
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

// System.Collections.Generic.InsertionBehavior
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	// System.Byte System.Collections.Generic.InsertionBehavior::value__
	uint8_t ___value___2;
};

// System.Reflection.MethodAttributes
struct MethodAttributes_t11E7256A890B759AB3FAECB4F0E92376724657E0 
{
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___2;
};

// System.Reflection.MethodImplAttributes
struct MethodImplAttributes_tF5B03D3615C5C686582A636F1681C7404466AD4D 
{
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.Reflection.ParameterAttributes
struct ParameterAttributes_tDAEC8B3C5986B042F8F9B0845505D0FC15F92E68 
{
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;
};

// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t0137AE3945304BDCA61E1142A9FDCDE41B26EEA9 
{
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;
};

// System.Diagnostics.StackTrace/TraceFormat
struct TraceFormat_t6061CD4509052E9C003B4467E458C031FDC5B9D5 
{
	// System.Int32 System.Diagnostics.StackTrace/TraceFormat::value__
	int32_t ___value___2;
};

// System.Collections.Concurrent.CDSCollectionETWBCLProvider
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};

struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields
{
	// System.Collections.Concurrent.CDSCollectionETWBCLProvider System.Collections.Concurrent.CDSCollectionETWBCLProvider::Log
	CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999 * ___Log_3;
};

// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tE5FA22579082706F95769C94BB410B4F6F84F029  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;
};

// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t740910A61F1059C34799A71D1FA6A187F7DACA60  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;
};

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83  : public MethodInfo_t
{
};

// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0  : public RuntimeObject
{
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_2;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_3;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_4;
	// System.String System.Reflection.Module::name
	String_t* ___name_5;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_6;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_7;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_8;
};

struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_StaticFields
{
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA * ___FilterTypeNameIgnoreCase_1;
};
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_pinvoke
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_pinvoke* ___assembly_3;
	char* ___fqname_4;
	char* ___name_5;
	char* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t01C6F0A583661ACCA85234683F50A4D4F82C9B7E * ___marshalAs_6;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t01C6F0A583661ACCA85234683F50A4D4F82C9B7E * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t01C6F0A583661ACCA85234683F50A4D4F82C9B7E * ___marshalAs_6;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B  ____impl_9;
};

struct Type_t_StaticFields
{
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 * ___defaultBinder_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Security.SecurityException
struct SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_17;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
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

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// Unity.ThrowStub
struct ThrowStub_t98574FADF548B70B1F425B46CC940CEC3C38FB5F  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7  : public RuntimeArray
{
	ALIGN_FIELD (8) StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * m_Items[1];

	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF  : public RuntimeArray
{
	ALIGN_FIELD (8) StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * m_Items[1];

	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F * m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t * m_Items[1];

	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m586C24F8E6C6C072C85103BCCD409E9E880BA630_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, RuntimeObject * ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2__ctor_m853F59C8991DABC257AA9EE373CF4061CDD53E94_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared (EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_gshared (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void System.Collections.SortedList/SortedListEnumerator::.ctor(System.Collections.SortedList,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListEnumerator__ctor_mB3F872ABD50AC8A0C601F769E21A83D802185C73 (SortedListEnumerator_t919E734DA3C634A506AAE72CC80BBF7FFC05BF9F * __this, SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * ___sortedList0, int32_t ___index1, int32_t ___count2, int32_t ___getObjRetType3, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32,System.Int32)
inline int32_t Array_IndexOf_TisRuntimeObject_m586C24F8E6C6C072C85103BCCD409E9E880BA630 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, RuntimeObject * ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m586C24F8E6C6C072C85103BCCD409E9E880BA630_gshared)(___array0, ___value1, ___startIndex2, ___count3, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Collections.Stack::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack__ctor_m19ADC1D26A734E0BA311F9B4DB7A4E4C9502D73A (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, int32_t ___initialCapacity0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray * __this, RuntimeObject * ___value0, int32_t ___index1, const RuntimeMethod* method);
// System.Void System.Collections.Stack/StackEnumerator::.ctor(System.Collections.Stack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackEnumerator__ctor_mDFF10633A7D78478B3544DF76A293BA81E931872 (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522 * __this, Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * ___stack0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider__ctor_m0A733DDB35201F79E9DED7B044B5D8484FC5448D (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1 (int32_t ___capacity0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F (StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::.ctor()
inline void ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858 *, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m853F59C8991DABC257AA9EE373CF4061CDD53E94_gshared)(__this, method);
}
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 System.String::GetLegacyNonRandomizedHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_GetLegacyNonRandomizedHashCode_m9A0C6441EF2B38DCED9C15D8715625FCF4C84F36 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.EqualityComparer`1<System.String>::.ctor()
inline void EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C (EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A * __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A *, const RuntimeMethod*))EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.ObjectEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEqualityComparer__ctor_mC957E29D57913E7D406A56FC281E013767277A7A (ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D * __this, const RuntimeMethod* method);
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method);
// System.Int32 System.Buffer::IndexOfByte(System.Byte*,System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Buffer_IndexOfByte_m276C9999C9E045F990E434EFADF4F96B7C1230DE (uint8_t* ___src0, uint8_t ___value1, int32_t ___index2, int32_t ___count3, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
inline void EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8 * __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8 *, const RuntimeMethod*))EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_gshared)(__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::SetErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25 (Exception_t * __this, int32_t ___hr0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295 * __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37 * ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677  ___context1, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Diagnostics.Debugger::IsAttached_internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debugger_IsAttached_internal_m66F9B753AF577AA9BE52EEF791345F6EA6C229C9 (const RuntimeMethod* method);
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackFrame_get_frame_info_m15B0BAD3B611A4E4C966C3A08C06A81A911BADD4 (int32_t ___skip0, bool ___needFileInfo1, MethodBase_t ** ___method2, int32_t* ___iloffset3, int32_t* ___native_offset4, String_t** ___file5, int32_t* ___line6, int32_t* ___column7, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::op_Equality(System.Reflection.MethodBase,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_op_Equality_m6A01E665278ED7A85822F5BC6B961A8FF0DC62E5 (MethodBase_t * ___left0, MethodBase_t * ___right1, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6 (String_t* ___msg0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_GetSecureFileName_mE683AA07D71320222C830C4F468444AB1456911C (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Diagnostics.StackFrame>::.ctor()
inline void List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 *, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Diagnostics.StackFrame>::Add(T)
inline void List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 * __this, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 *, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 *, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared)(__this, ___item0, method);
}
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackFrame__ctor_m4A3FF044DB0118EF4B019E29E7B79AEA394FDFC6 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::op_Inequality(System.Reflection.MethodBase,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_op_Inequality_m867339DE9EBA4C07B538DEA80722A9B9EB95349C (MethodBase_t * ___left0, MethodBase_t * ___right1, const RuntimeMethod* method);
// T[] System.Collections.Generic.List`1<System.Diagnostics.StackFrame>::ToArray()
inline StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3 (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 * __this, const RuntimeMethod* method)
{
	return ((  StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* (*) (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 *, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, Exception_t * ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, const RuntimeMethod* method);
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* StackTrace_get_trace_mBB469C6E81D250CB717B75A94841D7A64E9B81A7 (Exception_t * ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, const RuntimeMethod* method);
// System.String System.Reflection.Assembly::GetAotId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Assembly_GetAotId_mF06072334185B668F5706DD46B3F9EEBC3D6F037 (const RuntimeMethod* method);
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830 (Guid_t * __this, String_t* ___g0, const RuntimeMethod* method);
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833 (Guid_t * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StackFrame_GetInternalMethodName_mE432F77894FD3B046810EEDD739DCC81D45069DF_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.StackFrame::GetMethodAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t StackFrame_GetMethodAddress_mF387B1090E102E17E676896A16D21E5EB5649F9A_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void System.Diagnostics.StackTrace::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace_GetFullNameForStackTrace_mA68FA00EB15AD3EF889DB5005EE5B91A7DE37424 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, StringBuilder_t * ___sb0, MethodBase_t * ___mi1, const RuntimeMethod* method);
// System.UInt32 System.Diagnostics.StackFrame::GetMethodIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t StackFrame_GetMethodIndex_mDD134EBF64B083B759B883B35757CE0C68363CE8_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.Diagnostics.StackTrace::GetAotId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_GetAotId_m91E687449F5715990ADF614F07C859481208260F (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Diagnostics.StackTrace::AddFrames(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackTrace_AddFrames_m479F62FE2902C223B3E45955D5F76313ED91EBE1 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray * ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5  ___fldHandle1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.__Il2CppComObject::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_mB15B8304E8D3CB19D3B938761922CDF7F7A3CB6F (Il2CppComObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.SortedList/ValueList::.ctor(System.Collections.SortedList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList__ctor_mFD434CD322530A97A8723C2EC530BF94E4BAD12A (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * ___sortedList0, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_0 = ___sortedList0;
		__this->___sortedList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sortedList_0), (void*)L_0);
		return;
	}
}
// System.Int32 System.Collections.SortedList/ValueList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_get_Count_m628D3D6EE30B8B7BF02BAB61955609839A5F5A2E (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, const RuntimeMethod* method)
{
	{
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_0 = __this->___sortedList_0;
		int32_t L_1 = L_0->____size_2;
		return L_1;
	}
}
// System.Boolean System.Collections.SortedList/ValueList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_get_IsReadOnly_m312328E4435C92F023F6F29D645A595337C371E4 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Collections.SortedList/ValueList::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_get_IsFixedSize_mD2BEE3F974858DF5CC55B9B0A63D4DE7A91B0C77 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Object System.Collections.SortedList/ValueList::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ValueList_get_SyncRoot_m2B37A05B6BA901E88A7461B8E6388E322FB0EAE0 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, const RuntimeMethod* method)
{
	{
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_0 = __this->___sortedList_0;
		RuntimeObject * L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject * >::Invoke(23 /* System.Object System.Collections.SortedList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.SortedList/ValueList::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_Add_m0740BE32C77E40AE45D17304D0A3017D90AD874E (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Add_m0740BE32C77E40AE45D17304D0A3017D90AD874E_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.SortedList/ValueList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Clear_m9296A743A508B3CE438CB8FE30307EFFF13964F2 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Clear_m9296A743A508B3CE438CB8FE30307EFFF13964F2_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.SortedList/ValueList::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Contains_mBF78B9CCE37182699477EF672A63E67656D01C18 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_0 = __this->___sortedList_0;
		RuntimeObject * L_1 = ___value0;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject * >::Invoke(27 /* System.Boolean System.Collections.SortedList::ContainsValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.SortedList/ValueList::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_CopyTo_mB7B4E22EE87A663035D4B768C8482501459A9AE4 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, RuntimeArray * ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		RuntimeArray * L_0 = ___array0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeArray * L_1 = ___array0;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 * L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_CopyTo_mB7B4E22EE87A663035D4B768C8482501459A9AE4_RuntimeMethod_var)));
	}

IL_001c:
	{
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_5 = __this->___sortedList_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5->___values_1;
		RuntimeArray * L_7 = ___array0;
		int32_t L_8 = ___arrayIndex1;
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_9 = __this->___sortedList_0;
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.SortedList::get_Count() */, L_9);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray *)L_6, 0, L_7, L_8, L_10, NULL);
		return;
	}
}
// System.Void System.Collections.SortedList/ValueList::Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Insert_m626E75AA6860028AD51996D0719A1E2B878688C7 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Insert_m626E75AA6860028AD51996D0719A1E2B878688C7_RuntimeMethod_var)));
	}
}
// System.Object System.Collections.SortedList/ValueList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ValueList_get_Item_mCE2A538AF07E8B36FAE6B90B04CB05872596F865 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_0 = __this->___sortedList_0;
		int32_t L_1 = ___index0;
		RuntimeObject * L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject *, int32_t >::Invoke(29 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.SortedList/ValueList::set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_set_Item_mFD910F3F7564190A0FF6BDABDE1D5B5846F70B26 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_set_Item_mFD910F3F7564190A0FF6BDABDE1D5B5846F70B26_RuntimeMethod_var)));
	}
}
// System.Collections.IEnumerator System.Collections.SortedList/ValueList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_GetEnumerator_mCC1578449CBC25F27DA1139E8D8B4AB695C1B17B (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedListEnumerator_t919E734DA3C634A506AAE72CC80BBF7FFC05BF9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_0 = __this->___sortedList_0;
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_1 = __this->___sortedList_0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.SortedList::get_Count() */, L_1);
		SortedListEnumerator_t919E734DA3C634A506AAE72CC80BBF7FFC05BF9F * L_3 = (SortedListEnumerator_t919E734DA3C634A506AAE72CC80BBF7FFC05BF9F *)il2cpp_codegen_object_new(SortedListEnumerator_t919E734DA3C634A506AAE72CC80BBF7FFC05BF9F_il2cpp_TypeInfo_var);
		SortedListEnumerator__ctor_mB3F872ABD50AC8A0C601F769E21A83D802185C73(L_3, L_0, 0, L_2, 2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 System.Collections.SortedList/ValueList::IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_IndexOf_m598681F0002D4B37D126089644E56857216CDFF7 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisRuntimeObject_m586C24F8E6C6C072C85103BCCD409E9E880BA630_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_0 = __this->___sortedList_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0->___values_1;
		RuntimeObject * L_2 = ___value0;
		SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3 * L_3 = __this->___sortedList_0;
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.SortedList::get_Count() */, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisRuntimeObject_m586C24F8E6C6C072C85103BCCD409E9E880BA630(L_1, L_2, 0, L_4, Array_IndexOf_TisRuntimeObject_m586C24F8E6C6C072C85103BCCD409E9E880BA630_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void System.Collections.SortedList/ValueList::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Remove_m90A7EFBC612BEA34049C8E5C478EE77A9A298767 (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_Remove_m90A7EFBC612BEA34049C8E5C478EE77A9A298767_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.SortedList/ValueList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_RemoveAt_mF872C0EBE8362635C463D30FA7AAB4D8AFAED53F (ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueList_RemoveAt_mF872C0EBE8362635C463D30FA7AAB4D8AFAED53F_RuntimeMethod_var)));
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
// System.Void System.Collections.Stack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack__ctor_m4E3FE5A70C400B82DAB9E38E61A934E4E4DE01A7 (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->____array_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_0), (void*)L_0);
		__this->____size_1 = 0;
		__this->____version_2 = 0;
		return;
	}
}
// System.Void System.Collections.Stack::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack__ctor_m19ADC1D26A734E0BA311F9B4DB7A4E4C9502D73A (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, int32_t ___initialCapacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___initialCapacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A09185860153B4BC6DD6BAFD7F3988481D6646F)), L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack__ctor_m19ADC1D26A734E0BA311F9B4DB7A4E4C9502D73A_RuntimeMethod_var)));
	}

IL_001f:
	{
		int32_t L_3 = ___initialCapacity0;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0028;
		}
	}
	{
		___initialCapacity0 = ((int32_t)10);
	}

IL_0028:
	{
		int32_t L_4 = ___initialCapacity0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->____array_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_0), (void*)L_5);
		__this->____size_1 = 0;
		__this->____version_2 = 0;
		return;
	}
}
// System.Int32 System.Collections.Stack::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_get_Count_m055BAF05AD795275B6B4BF41CB72350B65966F42 (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
// System.Object System.Collections.Stack::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_get_SyncRoot_m82CE43D1A6B9FB5DE7ED43EF4639683A394C2F0D (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = __this->____syncRoot_3;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject ** L_1 = (&__this->____syncRoot_3);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject *>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject * L_4 = __this->____syncRoot_3;
		return L_4;
	}
}
// System.Void System.Collections.Stack::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_Clear_m072E156916E3979C871855E94D9E174C5720F1FF (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____array_0;
		int32_t L_1 = __this->____size_1;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray *)L_0, 0, L_1, NULL);
		__this->____size_1 = 0;
		int32_t L_2 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		return;
	}
}
// System.Object System.Collections.Stack::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_Clone_mDB477E4CD7604E77E2BB1FCB632CFFCE78B9909C (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * V_0 = NULL;
	{
		int32_t L_0 = __this->____size_1;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_1 = (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 *)il2cpp_codegen_object_new(Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47_il2cpp_TypeInfo_var);
		Stack__ctor_m19ADC1D26A734E0BA311F9B4DB7A4E4C9502D73A(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_2 = V_0;
		int32_t L_3 = __this->____size_1;
		L_2->____size_1 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____array_0;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5->____array_0;
		int32_t L_7 = __this->____size_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray *)L_4, 0, (RuntimeArray *)L_6, 0, L_7, NULL);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_8 = V_0;
		int32_t L_9 = __this->____version_2;
		L_8->____version_2 = L_9;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129 * L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 * L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___index1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_7;
		L_7 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E_RuntimeMethod_var)));
	}

IL_0040:
	{
		RuntimeArray * L_9 = ___array0;
		int32_t L_10;
		L_10 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_9, NULL);
		int32_t L_11 = ___index1;
		int32_t L_12 = __this->____size_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11))) >= ((int32_t)L_12)))
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 * L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_CopyTo_m1509CC9F532CA580CE98DE6E3DDB63B19373770E_RuntimeMethod_var)));
	}

IL_0060:
	{
		V_0 = 0;
		RuntimeArray * L_15 = ___array0;
		if (!((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_15, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)))
		{
			goto IL_00b5;
		}
	}
	{
		RuntimeArray * L_16 = ___array0;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_16, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		goto IL_008d;
	}

IL_0073:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = ___index1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->____array_0;
		int32_t L_21 = __this->____size_1;
		int32_t L_22 = V_0;
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)), (int32_t)1));
		RuntimeObject * L_24 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		ArrayElementTypeCheck (L_17, L_24);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19))), (RuntimeObject *)L_24);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_008d:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = __this->____size_1;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_0097:
	{
		RuntimeArray * L_28 = ___array0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = __this->____array_0;
		int32_t L_30 = __this->____size_1;
		int32_t L_31 = V_0;
		int32_t L_32 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)), (int32_t)1));
		RuntimeObject * L_33 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = V_0;
		int32_t L_35 = ___index1;
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_28, L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35)), NULL);
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_37 = V_0;
		int32_t L_38 = __this->____size_1;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0097;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_GetEnumerator_mB4CE45FB1D15BF08D44D544F6C5E9BD0EC2ECE51 (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522 * L_0 = (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522 *)il2cpp_codegen_object_new(StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522_il2cpp_TypeInfo_var);
		StackEnumerator__ctor_mDFF10633A7D78478B3544DF76A293BA81E931872(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object System.Collections.Stack::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_Peek_mCE1FD35FFBA060C183EE87C761042E6B70EC2BA0 (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->____size_1;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB * L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_Peek_mCE1FD35FFBA060C183EE87C761042E6B70EC2BA0_RuntimeMethod_var)));
	}

IL_0018:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array_0;
		int32_t L_4 = __this->____size_1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		RuntimeObject * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.Object System.Collections.Stack::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_Pop_mEB2BEADDD7173A13FD7AF514E27F3258270AF3BA (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size_1;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB * L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Stack_Pop_mEB2BEADDD7173A13FD7AF514E27F3258270AF3BA_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_3 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____array_0;
		int32_t L_5 = __this->____size_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_0;
		__this->____size_1 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____array_0;
		int32_t L_11 = __this->____size_1;
		ArrayElementTypeCheck (L_10, NULL);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (RuntimeObject *)NULL);
		return L_9;
	}
}
// System.Void System.Collections.Stack::Push(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_Push_m1C40D68127367AAD24A0B246B1A51AAEC8DA149A (Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____size_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))))
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))));
		V_0 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____array_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = __this->____size_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray *)L_4, 0, (RuntimeArray *)L_5, 0, L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		__this->____array_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_0), (void*)L_7);
	}

IL_003b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____array_0;
		int32_t L_9 = __this->____size_1;
		V_1 = L_9;
		int32_t L_10 = V_1;
		__this->____size_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_1;
		RuntimeObject * L_12 = ___obj0;
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (RuntimeObject *)L_12);
		int32_t L_13 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
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
// System.Void System.Collections.Stack/StackEnumerator::.ctor(System.Collections.Stack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackEnumerator__ctor_mDFF10633A7D78478B3544DF76A293BA81E931872 (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522 * __this, Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * ___stack0, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_0 = ___stack0;
		__this->____stack_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_0), (void*)L_0);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_1 = __this->____stack_0;
		int32_t L_2 = L_1->____version_2;
		__this->____version_2 = L_2;
		__this->____index_1 = ((int32_t)-2);
		__this->___currentElement_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentElement_3), (void*)NULL);
		return;
	}
}
// System.Object System.Collections.Stack/StackEnumerator::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StackEnumerator_Clone_m5DEB8385FE52D4FCA935223B76F8AD67850FA8CE (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Collections.Stack/StackEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackEnumerator_MoveNext_m7546F84C5380ED4CB0EA5776C83AFAEF33BA8AA2 (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = __this->____version_2;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_1 = __this->____stack_0;
		int32_t L_2 = L_1->____version_2;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB * L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackEnumerator_MoveNext_m7546F84C5380ED4CB0EA5776C83AFAEF33BA8AA2_RuntimeMethod_var)));
	}

IL_0023:
	{
		int32_t L_5 = __this->____index_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0068;
		}
	}
	{
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_6 = __this->____stack_0;
		int32_t L_7 = L_6->____size_1;
		__this->____index_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		int32_t L_8 = __this->____index_1;
		int32_t L_9 = ((((int32_t)((((int32_t)L_8) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B4_0 = L_9;
		if (!L_9)
		{
			G_B5_0 = L_9;
			goto IL_0067;
		}
	}
	{
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_10 = __this->____stack_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10->____array_0;
		int32_t L_12 = __this->____index_1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		__this->___currentElement_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentElement_3), (void*)L_14);
		G_B5_0 = G_B4_0;
	}

IL_0067:
	{
		return (bool)G_B5_0;
	}

IL_0068:
	{
		int32_t L_15 = __this->____index_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_0073;
		}
	}
	{
		return (bool)0;
	}

IL_0073:
	{
		int32_t L_16 = __this->____index_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_0;
		__this->____index_1 = L_17;
		int32_t L_18 = V_0;
		int32_t L_19 = ((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B9_0 = L_19;
		if (!L_19)
		{
			G_B10_0 = L_19;
			goto IL_00a6;
		}
	}
	{
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_20 = __this->____stack_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20->____array_0;
		int32_t L_22 = __this->____index_1;
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		__this->___currentElement_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentElement_3), (void*)L_24);
		return (bool)G_B9_0;
	}

IL_00a6:
	{
		__this->___currentElement_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentElement_3), (void*)NULL);
		return (bool)G_B10_0;
	}
}
// System.Object System.Collections.Stack/StackEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StackEnumerator_get_Current_m25ED88304D983AB82147BDB2B0E909DA3ED29978 (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->____index_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB * L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackEnumerator_get_Current_m25ED88304D983AB82147BDB2B0E909DA3ED29978_RuntimeMethod_var)));
	}

IL_001a:
	{
		int32_t L_3 = __this->____index_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB * L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackEnumerator_get_Current_m25ED88304D983AB82147BDB2B0E909DA3ED29978_RuntimeMethod_var)));
	}

IL_0033:
	{
		RuntimeObject * L_6 = __this->___currentElement_3;
		return L_6;
	}
}
// System.Void System.Collections.Stack/StackEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackEnumerator_Reset_mDA888FAA77A784E91C188BDCF3543603FB3138E4 (StackEnumerator_t3E73D1C68F8320FD8038C706914BBF73B45D7522 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->____version_2;
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47 * L_1 = __this->____stack_0;
		int32_t L_2 = L_1->____version_2;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB * L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackEnumerator_Reset_mDA888FAA77A784E91C188BDCF3543603FB3138E4_RuntimeMethod_var)));
	}

IL_0023:
	{
		__this->____index_1 = ((int32_t)-2);
		__this->___currentElement_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentElement_3), (void*)NULL);
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
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider__ctor_m0A733DDB35201F79E9DED7B044B5D8484FC5448D (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_il2cpp_TypeInfo_var);
		EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider__cctor_mFD602D577C7D6D92AD8EB0C9D71AFB7BDB56D017 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999 * L_0 = (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999 *)il2cpp_codegen_object_new(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		CDSCollectionETWBCLProvider__ctor_m0A733DDB35201F79E9DED7B044B5D8484FC5448D(L_0, /*hidden argument*/NULL);
		((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log_3), (void*)L_0);
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
// System.String System.Collections.Generic.KeyValuePair::PairToString(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyValuePair_PairToString_m3E001B2DF3968E358925027C032B0FFBC25CC575 (RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0;
		L_0 = StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1(((int32_t)16), NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)91), NULL);
		RuntimeObject * L_3 = ___key0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_4 = V_0;
		RuntimeObject * L_5 = ___key0;
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_4, L_5, NULL);
	}

IL_001c:
	{
		StringBuilder_t * L_7 = V_0;
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		RuntimeObject * L_9 = ___value1;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		StringBuilder_t * L_10 = V_0;
		RuntimeObject * L_11 = ___value1;
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_10, L_11, NULL);
	}

IL_0033:
	{
		StringBuilder_t * L_13 = V_0;
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)93), NULL);
		StringBuilder_t * L_15 = V_0;
		String_t* L_16;
		L_16 = StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F(L_15, NULL);
		return L_16;
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
// System.Int32 System.Collections.Generic.IntrospectiveSortUtilities::FloorLog2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntrospectiveSortUtilities_FloorLog2_m19DE04B4FF099C76E594C8B5EF9F4B696391C817 (int32_t ___n0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000d;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = ___n0;
		___n0 = ((int32_t)((int32_t)L_1/(int32_t)2));
	}

IL_000d:
	{
		int32_t L_2 = ___n0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Collections.Generic.IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m66920BDFDDBAFDFA21C637D727CDA29F7B90A4DF (RuntimeObject * ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___comparer0;
		String_t* L_1;
		L_1 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FB28D215F1C062EDB535A58AD8714B5A5FE4064)), L_0, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 * L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m66920BDFDDBAFDFA21C637D727CDA29F7B90A4DF_RuntimeMethod_var)));
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
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Generic.DictionaryHashHelpers::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858 * DictionaryHashHelpers_get_SerializationInfoTable_m26AE8F601D004D1F5AEFB7C10B07F5FFF798A584 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858 * L_0 = ((DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_StaticFields*)il2cpp_codegen_static_fields_for(DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_il2cpp_TypeInfo_var))->___U3CSerializationInfoTableU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.DictionaryHashHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryHashHelpers__cctor_m3946E017BF8B5929FD93116E6F163142BB6DF650 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858 * L_0 = (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858 *)il2cpp_codegen_object_new(ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5(L_0, /*hidden argument*/ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5_RuntimeMethod_var);
		((DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_StaticFields*)il2cpp_codegen_static_fields_for(DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_il2cpp_TypeInfo_var))->___U3CSerializationInfoTableU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_StaticFields*)il2cpp_codegen_static_fields_for(DictionaryHashHelpers_t90F74D297B0BC2FA3E4B947A3E1E6F21DB05FEB1_il2cpp_TypeInfo_var))->___U3CSerializationInfoTableU3Ek__BackingField_0), (void*)L_0);
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
// System.Boolean System.Collections.Generic.NonRandomizedStringEqualityComparer::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonRandomizedStringEqualityComparer_Equals_m0AC6D2CF272CA66F2B442EACEE785EB8427131EF (NonRandomizedStringEqualityComparer_t3FC62504CCD0585A41CCDD1B769DAE3E72B20CE3 * __this, String_t* ___x0, String_t* ___y1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___x0;
		String_t* L_1 = ___y1;
		bool L_2;
		L_2 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.NonRandomizedStringEqualityComparer::GetHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NonRandomizedStringEqualityComparer_GetHashCode_m7DA9D2C0183B8EDD422C16172E4E596CB21A9620 (NonRandomizedStringEqualityComparer_t3FC62504CCD0585A41CCDD1B769DAE3E72B20CE3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		String_t* L_1 = ___obj0;
		int32_t L_2;
		L_2 = String_GetLegacyNonRandomizedHashCode_m9A0C6441EF2B38DCED9C15D8715625FCF4C84F36(L_1, NULL);
		return L_2;
	}
}
// System.Void System.Collections.Generic.NonRandomizedStringEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonRandomizedStringEqualityComparer__ctor_mB7CB2635E24D49D367535D1B413045B4FB2D0ED6 (NonRandomizedStringEqualityComparer_t3FC62504CCD0585A41CCDD1B769DAE3E72B20CE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C(__this, EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var);
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
// System.Void System.Collections.Generic.ObjectEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEqualityComparer__ctor_mC957E29D57913E7D406A56FC281E013767277A7A (ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 System.Collections.Generic.ObjectEqualityComparer::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectEqualityComparer_System_Collections_IEqualityComparer_GetHashCode_mC83793CDB5DAC3DFBCEB9ABE58B13F4200463893 (ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.ObjectEqualityComparer::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectEqualityComparer_System_Collections_IEqualityComparer_Equals_m556A774E92CDBEBCF2EA10B4CEA8EE75EDCEB611 (ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0008:
	{
		RuntimeObject * L_2 = ___y1;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_3 = ___x0;
		RuntimeObject * L_4 = ___y1;
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		return L_5;
	}
}
// System.Void System.Collections.Generic.ObjectEqualityComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEqualityComparer__cctor_m66329268BCBD2854CDF286B42F1E9C8012C2389E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D * L_0 = (ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D *)il2cpp_codegen_object_new(ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D_il2cpp_TypeInfo_var);
		ObjectEqualityComparer__ctor_mC957E29D57913E7D406A56FC281E013767277A7A(L_0, /*hidden argument*/NULL);
		((ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_tABED61B8B6374C7A38FD3F65F5C8A391E9A0320D_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
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
// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteEqualityComparer_Equals_m4ABF0097A06636549CB7BB4ED696CB0D3B98563E (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275 * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_GetHashCode_m019849C226C9A0E22213E1EC02550F6739CFCF3B (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275 * __this, uint8_t ___b0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___b0), NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::IndexOf(System.Byte[],System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275 * __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129 * L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___startIndex2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___count3;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_6;
		L_6 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_0041:
	{
		int32_t L_8 = ___count3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___array0;
		int32_t L_10 = ___startIndex2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10)))))
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_11;
		L_11 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 * L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_005a:
	{
		int32_t L_13 = ___count3;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		return (-1);
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		V_1 = L_15;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		if (((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))
		{
			goto IL_006f;
		}
	}

IL_006a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0078;
	}

IL_006f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		V_0 = (uint8_t*)((uintptr_t)((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0078:
	{
		uint8_t* L_18 = V_0;
		uint8_t L_19 = ___value1;
		int32_t L_20 = ___startIndex2;
		int32_t L_21 = ___count3;
		int32_t L_22;
		L_22 = Buffer_IndexOfByte_m276C9999C9E045F990E434EFADF4F96B7C1230DE(L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::LastIndexOf(System.Byte[],System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_LastIndexOf_m8A5A08F15AC6060CA70CC8AC280C32ADFBB749ED (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275 * __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex2;
		int32_t L_1 = ___count3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1));
		int32_t L_2 = ___startIndex2;
		V_1 = L_2;
		goto IL_0017;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___array0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		uint8_t L_7 = ___value1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0013:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteEqualityComparer_Equals_m9B113E83537F9F939D54627EAFAF81E463C1A468 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		return (bool)((!(((RuntimeObject*)(ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275 *)((ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275 *)IsInstClass((RuntimeObject*)L_0, ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_GetHashCode_mC71878E73D9E43C3DA44DA3BD0FD34A1337556E7 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.ByteEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteEqualityComparer__ctor_m6A7EE7FCB7B4275069DC078346C35ED9B6F71AAE (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD(__this, EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var);
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
// System.Int32 System.Collections.Generic.InternalStringComparer::GetHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalStringComparer_GetHashCode_m4EC162DE81A1F8235C20BD7ADFD2ED0BB12FD7C6 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		String_t* L_1 = ___obj0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.InternalStringComparer::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalStringComparer_Equals_m788524086ADC25F1E939088DF22FF301DF3018B0 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B * __this, String_t* ___x0, String_t* ___y1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_1 = ___y1;
		return (bool)((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0008:
	{
		String_t* L_2 = ___x0;
		String_t* L_3 = ___y1;
		if ((!(((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(String_t*)L_3))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		String_t* L_4 = ___x0;
		String_t* L_5 = ___y1;
		bool L_6;
		L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Collections.Generic.InternalStringComparer::IndexOf(System.String[],System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalStringComparer_IndexOf_mE69D32A9D7690C656336174756E70C54C457067D (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B * __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, String_t* ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex2;
		int32_t L_1 = ___count3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___startIndex2;
		V_1 = L_2;
		goto IL_001e;
	}

IL_0009:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___array0;
		int32_t L_4 = V_1;
		String_t* L_5;
		L_5 = IL2CPP_ARRAY_UNSAFE_LOAD(L_3, L_4);
		String_t* L_6 = ___value1;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0009;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Collections.Generic.InternalStringComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalStringComparer__ctor_m06A4CE888A27763DE6BD47DD2C2CF45C68736108 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C(__this, EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var);
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
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m4650AA08FA75F015089EA648572674FC6511E8DF (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral457BF4072EA28A68960C6F36D3FB2B96D339A700);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(_stringLiteral457BF4072EA28A68960C6F36D3FB2B96D339A700, NULL);
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(__this, L_0, NULL);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(__this, ((int32_t)-2146232969), NULL);
		return;
	}
}
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(__this, L_0, NULL);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(__this, ((int32_t)-2146232969), NULL);
		return;
	}
}
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m546AE2CB4D7CBD6EA8E321CD8F1AE3D53ACFD29C (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E * __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37 * ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37 * L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677  L_1 = ___context1;
		SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879(__this, L_0, L_1, NULL);
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
// System.Void System.Diagnostics.ConditionalAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalAttribute__ctor_m948BC90599397308C76C433D98236C3BD81BF27F (ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0 * __this, String_t* ___conditionString0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___conditionString0;
		__this->___m_conditionString_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_conditionString_0), (void*)L_0);
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
// System.Void System.Diagnostics.DebuggerStepThroughAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerStepThroughAttribute__ctor_m234010EF8ABF85EFCA7E148C1F707782432DB443 (DebuggerStepThroughAttribute_tE925F628A0E6E2F8A29D3962A4823DA9F7D98006 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Diagnostics.DebuggerHiddenAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerHiddenAttribute__ctor_m0FFFF90465675AA29346825F8E8F8C7355704F6D (DebuggerHiddenAttribute_tE96DA64E5ECBBE621607F69CC79CC2B80870F097 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Diagnostics.DebuggerNonUserCodeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerNonUserCodeAttribute__ctor_mCB1CDB28B1C8B3FFCBF13FDD091F4EBF4E92FEDD (DebuggerNonUserCodeAttribute_t28DC10F33E9844CEB00D3FD609F8443221F06269 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_mEA1D84CE13056A4092BCB1B1DD5D664EDB71482D (DebuggableAttribute_tE5FA22579082706F95769C94BB410B4F6F84F029 * __this, int32_t ___modes0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___modes0;
		__this->___m_debuggingModes_0 = L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mA78466747C5C6154F71F0100F7F16B97571A02F1 (DebuggerBrowsableAttribute_t740910A61F1059C34799A71D1FA6A187F7DACA60 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___state0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___state0;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0019;
		}
	}

IL_000e:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCA0AA89382EC9FBF76CB9BBEAB1872B5A701BEAA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerBrowsableAttribute__ctor_mA78466747C5C6154F71F0100F7F16B97571A02F1_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___state0;
		__this->___state_0 = L_3;
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
// System.Void System.Diagnostics.DebuggerTypeProxyAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerTypeProxyAttribute__ctor_m0B22B1DC018FAA2B0B799840E67DDB8D0CD9ABCA (DebuggerTypeProxyAttribute_tAB3939448E11EC344885F7C52A9CC9AF481CD2F7 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t * L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, (Type_t *)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129 * L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerTypeProxyAttribute__ctor_m0B22B1DC018FAA2B0B799840E67DDB8D0CD9ABCA_RuntimeMethod_var)));
	}

IL_001a:
	{
		Type_t * L_3 = ___type0;
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		__this->___typeName_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___typeName_0), (void*)L_4);
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
// System.Void System.Diagnostics.DebuggerDisplayAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerDisplayAttribute__ctor_mB04D0624105DB5AF34A45AD2CCF438C5B5C604CF (DebuggerDisplayAttribute_tAB6587DCD1F68BCE5256E7CD76854FE39271B279 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		__this->___value_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		goto IL_001d;
	}

IL_0016:
	{
		String_t* L_1 = ___value0;
		__this->___value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_1);
	}

IL_001d:
	{
		__this->___name_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___type_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Boolean System.Diagnostics.Debugger::get_IsAttached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debugger_get_IsAttached_mFE52BA5101227C49531025ABDF999C2A52CB5F23 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Debugger_IsAttached_internal_m66F9B753AF577AA9BE52EEF791345F6EA6C229C9(NULL);
		return L_0;
	}
}
// System.Boolean System.Diagnostics.Debugger::IsAttached_internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debugger_IsAttached_internal_m66F9B753AF577AA9BE52EEF791345F6EA6C229C9 (const RuntimeMethod* method)
{
	typedef bool (*Debugger_IsAttached_internal_m66F9B753AF577AA9BE52EEF791345F6EA6C229C9_ftn) ();
	using namespace il2cpp::icalls;
	return ((Debugger_IsAttached_internal_m66F9B753AF577AA9BE52EEF791345F6EA6C229C9_ftn)mscorlib::System::Diagnostics::Debugger::IsAttached_internal) ();
}
// System.Boolean System.Diagnostics.Debugger::IsLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debugger_IsLogging_mBE2E26165D7EA4E538A6B36D71A3661A6989B07C (const RuntimeMethod* method)
{
	typedef bool (*Debugger_IsLogging_mBE2E26165D7EA4E538A6B36D71A3661A6989B07C_ftn) ();
	using namespace il2cpp::icalls;
	return ((Debugger_IsLogging_mBE2E26165D7EA4E538A6B36D71A3661A6989B07C_ftn)mscorlib::System::Diagnostics::Debugger::IsLogging) ();
}
// System.Void System.Diagnostics.Debugger::Log(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_Log_m688C19D9C4BAA009D817EA98B4562F3BEF8E1151 (int32_t ___level0, String_t* ___category1, String_t* ___message2, const RuntimeMethod* method)
{
	typedef void (*Debugger_Log_m688C19D9C4BAA009D817EA98B4562F3BEF8E1151_ftn) (int32_t, String_t*, String_t*);
	using namespace il2cpp::icalls;
	((Debugger_Log_m688C19D9C4BAA009D817EA98B4562F3BEF8E1151_ftn)mscorlib::System::Diagnostics::Debugger::Log) (___level0, ___category1, ___message2);
}
// System.Void System.Diagnostics.Debugger::NotifyOfCrossThreadDependency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_NotifyOfCrossThreadDependency_m86A30300A3C3D1AF90FB43A8A610EA5AF8F4D841 (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Diagnostics.Debugger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger__cctor_m15599FDE57C174287DA0BB9DB3FF10127680FEFF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_il2cpp_TypeInfo_var))->___DefaultCategory_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tF031B20B91B054B164AAA708E2B27B8ACD1FE9BF_il2cpp_TypeInfo_var))->___DefaultCategory_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// Conversion methods for marshalling of: System.Diagnostics.StackFrame
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke(const StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443& unmarshaled, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke& marshaled)
{
	Exception_t* ___methodBase_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'methodBase' of type 'StackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___methodBase_5Exception, NULL);
}
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_back(const StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke& marshaled, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443& unmarshaled)
{
	Exception_t* ___methodBase_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'methodBase' of type 'StackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___methodBase_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Diagnostics.StackFrame
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_cleanup(StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Diagnostics.StackFrame
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_com(const StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443& unmarshaled, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com& marshaled)
{
	Exception_t* ___methodBase_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'methodBase' of type 'StackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___methodBase_5Exception, NULL);
}
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_com_back(const StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com& marshaled, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443& unmarshaled)
{
	Exception_t* ___methodBase_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'methodBase' of type 'StackFrame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___methodBase_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Diagnostics.StackFrame
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_com_cleanup(StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com& marshaled)
{
}
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackFrame_get_frame_info_m15B0BAD3B611A4E4C966C3A08C06A81A911BADD4 (int32_t ___skip0, bool ___needFileInfo1, MethodBase_t ** ___method2, int32_t* ___iloffset3, int32_t* ___native_offset4, String_t** ___file5, int32_t* ___line6, int32_t* ___column7, const RuntimeMethod* method)
{
	typedef bool (*StackFrame_get_frame_info_m15B0BAD3B611A4E4C966C3A08C06A81A911BADD4_ftn) (int32_t, bool, MethodBase_t **, int32_t*, int32_t*, String_t**, int32_t*, int32_t*);
	using namespace il2cpp::icalls;
	return ((StackFrame_get_frame_info_m15B0BAD3B611A4E4C966C3A08C06A81A911BADD4_ftn)mscorlib::System::Diagnostics::StackFrame::get_frame_info) (___skip0, ___needFileInfo1, ___method2, ___iloffset3, ___native_offset4, ___file5, ___line6, ___column7);
}
// System.Void System.Diagnostics.StackFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrame__ctor_mC42596F07F5491246D6E1E0F5DA414AA7913CE0B (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		__this->___ilOffset_1 = (-1);
		__this->___nativeOffset_2 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MethodBase_t ** L_0 = (&__this->___methodBase_5);
		int32_t* L_1 = (&__this->___ilOffset_1);
		int32_t* L_2 = (&__this->___nativeOffset_2);
		String_t** L_3 = (&__this->___fileName_6);
		int32_t* L_4 = (&__this->___lineNumber_7);
		int32_t* L_5 = (&__this->___columnNumber_8);
		bool L_6;
		L_6 = StackFrame_get_frame_info_m15B0BAD3B611A4E4C966C3A08C06A81A911BADD4(2, (bool)0, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackFrame__ctor_m4A3FF044DB0118EF4B019E29E7B79AEA394FDFC6 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const RuntimeMethod* method)
{
	{
		__this->___ilOffset_1 = (-1);
		__this->___nativeOffset_2 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___skipFrames0;
		bool L_1 = ___fNeedFileInfo1;
		MethodBase_t ** L_2 = (&__this->___methodBase_5);
		int32_t* L_3 = (&__this->___ilOffset_1);
		int32_t* L_4 = (&__this->___nativeOffset_2);
		String_t** L_5 = (&__this->___fileName_6);
		int32_t* L_6 = (&__this->___lineNumber_7);
		int32_t* L_7 = (&__this->___columnNumber_8);
		bool L_8;
		L_8 = StackFrame_get_frame_info_m15B0BAD3B611A4E4C966C3A08C06A81A911BADD4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2)), L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackFrame_GetFileLineNumber_m2AF9694B1A61CA6ABA27CC632BA2ADDC16179879 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->___lineNumber_7;
		return L_0;
	}
}
// System.String System.Diagnostics.StackFrame::GetFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_GetFileName_m2DD06CC917C0B7120B8CC08C4AB9D78240139F4A (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___fileName_6;
		return L_0;
	}
}
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_GetSecureFileName_mE683AA07D71320222C830C4F468444AB1456911C (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		V_0 = _stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5;
		String_t* L_0 = __this->___fileName_6;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = V_0;
		return L_1;
	}

IL_0010:
	{
	}

IL_0011:
	try
	{// begin try (depth: 1)
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, __this);
		V_0 = L_2;
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Security.SecurityException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.Diagnostics.StackFrame::GetILOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackFrame_GetILOffset_mA88BF94C5C707524B0FD0F1BF4A3A2507ED57688 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->___ilOffset_1;
		return L_0;
	}
}
// System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t * StackFrame_GetMethod_m30DDF96CFCA2CC000F4B7FF0F956D2EA78560E7F (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = __this->___methodBase_5;
		return L_0;
	}
}
// System.Int32 System.Diagnostics.StackFrame::GetNativeOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackFrame_GetNativeOffset_m9E66339B33662CB9116F37AFEAF4ABFB4B27105F (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->___nativeOffset_2;
		return L_0;
	}
}
// System.Int64 System.Diagnostics.StackFrame::GetMethodAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StackFrame_GetMethodAddress_mF387B1090E102E17E676896A16D21E5EB5649F9A (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->___methodAddress_3;
		return L_0;
	}
}
// System.UInt32 System.Diagnostics.StackFrame::GetMethodIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t StackFrame_GetMethodIndex_mDD134EBF64B083B759B883B35757CE0C68363CE8 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->___methodIndex_4;
		return L_0;
	}
}
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_GetInternalMethodName_mE432F77894FD3B046810EEDD739DCC81D45069DF (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___internalMethodName_9;
		return L_0;
	}
}
// System.String System.Diagnostics.StackFrame::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_ToString_m7C1464167966B8602EF1F97DFD333340E5CB40B3 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052F16D71B2E10244ED0ACB1335E8644055DE808);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F6F9EAE7D2F05E9B73C193601B3E6BEE5E50332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15CB2E622D7D277FACF794D7CC4B489940CCEBD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECED4A9B5D8B5F2668BE1F6B53E9E164EF0C60E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80B69DF6F2C78282CF453F1F8A92F520650673FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MethodBase_t * L_1 = __this->___methodBase_5;
		bool L_2;
		L_2 = MethodBase_op_Equality_m6A01E665278ED7A85822F5BC6B961A8FF0DC62E5(L_1, (MethodBase_t *)NULL, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		StringBuilder_t * L_3 = V_0;
		String_t* L_4;
		L_4 = Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6(_stringLiteral0F6F9EAE7D2F05E9B73C193601B3E6BEE5E50332, NULL);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_4, NULL);
		goto IL_0039;
	}

IL_0027:
	{
		StringBuilder_t * L_6 = V_0;
		MethodBase_t * L_7 = __this->___methodBase_5;
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_8, NULL);
	}

IL_0039:
	{
		StringBuilder_t * L_10 = V_0;
		String_t* L_11;
		L_11 = Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6(_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, NULL);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, L_11, NULL);
		int32_t L_13 = __this->___ilOffset_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0066;
		}
	}
	{
		StringBuilder_t * L_14 = V_0;
		String_t* L_15;
		L_15 = Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6(_stringLiteral80B69DF6F2C78282CF453F1F8A92F520650673FF, NULL);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_15, NULL);
		goto IL_0084;
	}

IL_0066:
	{
		StringBuilder_t * L_17 = V_0;
		String_t* L_18;
		L_18 = Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6(_stringLiteral15CB2E622D7D277FACF794D7CC4B489940CCEBD3, NULL);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_18, NULL);
		StringBuilder_t * L_20 = V_0;
		int32_t L_21 = __this->___ilOffset_1;
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_20, L_21, NULL);
	}

IL_0084:
	{
		StringBuilder_t * L_23 = V_0;
		String_t* L_24;
		L_24 = Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6(_stringLiteral052F16D71B2E10244ED0ACB1335E8644055DE808, NULL);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_24, NULL);
		StringBuilder_t * L_26 = V_0;
		String_t* L_27;
		L_27 = StackFrame_GetSecureFileName_mE683AA07D71320222C830C4F468444AB1456911C(__this, NULL);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, L_27, NULL);
		StringBuilder_t * L_29 = V_0;
		int32_t L_30 = __this->___lineNumber_7;
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_31);
		int32_t L_33 = __this->___columnNumber_8;
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_29, _stringLiteral6ECED4A9B5D8B5F2668BE1F6B53E9E164EF0C60E, L_32, L_35, NULL);
		StringBuilder_t * L_37 = V_0;
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		return L_38;
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
// System.Void System.Diagnostics.StackTrace::.ctor()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_mD22253A455F1F750410D5E48BF7E14994EDA12BD (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA(__this, 0, (bool)0, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m269D00E49783BC3205FD5C7E879888884D72107C (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, bool ___fNeedFileInfo0, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___fNeedFileInfo0;
		StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA(__this, 0, L_0, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m7C03595A7D2ADA64E7CB5311C9563AF588DC8480 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___skipFrames0;
		bool L_1 = ___fNeedFileInfo1;
		StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * V_0 = NULL;
	List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 * V_1 = NULL;
	{
		int32_t L_0 = ___skipFrames0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF224A334AF1CFC62B512F53E3DAF372FDB579B18)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA_RuntimeMethod_var)));
	}

IL_0014:
	{
		List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 * L_2 = (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 *)il2cpp_codegen_object_new(List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_il2cpp_TypeInfo_var);
		List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B(L_2, /*hidden argument*/List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___skipFrames0;
		___skipFrames0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2));
		goto IL_002d;
	}

IL_0021:
	{
		List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 * L_4 = V_1;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_5 = V_0;
		List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C(L_4, L_5, List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_RuntimeMethod_var);
		int32_t L_6 = ___skipFrames0;
		___skipFrames0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_7 = ___skipFrames0;
		bool L_8 = ___fNeedFileInfo1;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_9 = (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 *)il2cpp_codegen_object_new(StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var);
		StackFrame__ctor_m4A3FF044DB0118EF4B019E29E7B79AEA394FDFC6(L_9, L_7, L_8, /*hidden argument*/NULL);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_10 = L_9;
		V_0 = L_10;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_11 = V_0;
		MethodBase_t * L_12;
		L_12 = VirtualFuncInvoker0< MethodBase_t * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_11);
		bool L_13;
		L_13 = MethodBase_op_Inequality_m867339DE9EBA4C07B538DEA80722A9B9EB95349C(L_12, (MethodBase_t *)NULL, NULL);
		if (L_13)
		{
			goto IL_0021;
		}
	}

IL_0046:
	{
		bool L_14 = ___fNeedFileInfo1;
		__this->___debug_info_3 = L_14;
		List_1_tECF3D3C28087C516811A22319C02931F38CE1E95 * L_15 = V_1;
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_16;
		L_16 = List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3(L_15, List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3_RuntimeMethod_var);
		__this->___frames_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frames_1), (void*)L_16);
		return;
	}
}
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* StackTrace_get_trace_mBB469C6E81D250CB717B75A94841D7A64E9B81A7 (Exception_t * ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, const RuntimeMethod* method)
{
	typedef StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* (*StackTrace_get_trace_mBB469C6E81D250CB717B75A94841D7A64E9B81A7_ftn) (Exception_t *, int32_t, bool);
	using namespace il2cpp::icalls;
	return ((StackTrace_get_trace_mBB469C6E81D250CB717B75A94841D7A64E9B81A7_ftn)mscorlib::System::Diagnostics::StackTrace::get_trace) (___e0, ___skipFrames1, ___fNeedFileInfo2);
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m9BE489F499935CFA9AD4154B18A3AB35C52886DF (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, Exception_t * ___e0, bool ___fNeedFileInfo1, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___e0;
		bool L_1 = ___fNeedFileInfo1;
		StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, Exception_t * ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Exception_t * L_0 = ___e0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129 * L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___skipFrames1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F * L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF224A334AF1CFC62B512F53E3DAF372FDB579B18)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1_RuntimeMethod_var)));
	}

IL_0028:
	{
		Exception_t * L_4 = ___e0;
		int32_t L_5 = ___skipFrames1;
		bool L_6 = ___fNeedFileInfo2;
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_7;
		L_7 = StackTrace_get_trace_mBB469C6E81D250CB717B75A94841D7A64E9B81A7(L_4, L_5, L_6, NULL);
		__this->___frames_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frames_1), (void*)L_7);
		Exception_t * L_8 = ___e0;
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_9 = L_8->___captured_traces_14;
		__this->___captured_traces_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___captured_traces_2), (void*)L_9);
		return;
	}
}
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackTrace_get_FrameCount_mB840FEC17263C1DB248EF594E7D008798AF4BB80 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, const RuntimeMethod* method)
{
	{
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_0 = __this->___frames_1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_1 = __this->___frames_1;
		return ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
	}

IL_0011:
	{
		return 0;
	}
}
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * StackTrace_GetFrame_m019CFC0EAE6869E5100FBB84EC0348D885E2707B (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, __this);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_000f;
		}
	}

IL_000d:
	{
		return (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 *)NULL;
	}

IL_000f:
	{
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_3 = __this->___frames_1;
		int32_t L_4 = ___index0;
		int32_t L_5 = L_4;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.String System.Diagnostics.StackTrace::GetAotId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_GetAotId_m91E687449F5715990ADF614F07C859481208260F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = ((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___isAotidSet_4;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_1;
		L_1 = Assembly_GetAotId_mF06072334185B668F5706DD46B3F9EEBC3D6F037(NULL);
		((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_5), (void*)L_1);
		String_t* L_2 = ((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_5;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3 = ((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_5;
		Guid_t  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_4), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&V_0), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_5), (void*)L_5);
	}

IL_0034:
	{
		((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___isAotidSet_4 = (bool)1;
	}

IL_003a:
	{
		String_t* L_6 = ((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_5;
		return L_6;
	}
}
// System.Boolean System.Diagnostics.StackTrace::AddFrames(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackTrace_AddFrames_m479F62FE2902C223B3E45955D5F76313ED91EBE1 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral012D19DEDB7F268C61672C79B02816C18D097BF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFEBF342B2EC9E1B2887EEA1FC41C532F92A6B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F6F9EAE7D2F05E9B73C193601B3E6BEE5E50332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B0C93330E9DD2B87A22B6324E499950A892FE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D429E066663E8F2FE75C06B462A453AEC63D86F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F82196A6F25AC4E97E6DAE2D0F20D7DFE1A48F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48F1B2E34DB21FCB5F2135CD6BDC706B5EC88DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CAB87F6B3ED1D0AB3511FC787A210897543525E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F9797AAADC6DFCEFE4DC6E7F721ADA268A60793);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6856754C069BB887EACADAC5402DFC04DF58E7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	Guid_t  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		String_t* L_0;
		L_0 = Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6(_stringLiteral0F6F9EAE7D2F05E9B73C193601B3E6BEE5E50332, NULL);
		V_2 = L_0;
		V_1 = _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
		String_t* L_1;
		L_1 = Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6(_stringLiteral48F1B2E34DB21FCB5F2135CD6BDC706B5EC88DE4, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		String_t* L_3 = V_1;
		String_t* L_4;
		L_4 = Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6(_stringLiteral5CAB87F6B3ED1D0AB3511FC787A210897543525E, NULL);
		String_t* L_5;
		L_5 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral7F9797AAADC6DFCEFE4DC6E7F721ADA268A60793, L_2, L_3, L_4, NULL);
		V_3 = L_5;
		V_4 = 0;
		goto IL_01c5;
	}

IL_003f:
	{
		int32_t L_6 = V_4;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_7;
		L_7 = VirtualFuncInvoker1< StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, __this, L_6);
		V_5 = L_7;
		int32_t L_8 = V_4;
		if (L_8)
		{
			goto IL_0066;
		}
	}
	{
		StringBuilder_t * L_9 = ___sb0;
		String_t* L_10 = V_1;
		String_t* L_11;
		L_11 = Locale_GetText_mB5E9ECC1E9AAA230D967810285D49F3A0BCD99D6(_stringLiteral5CAB87F6B3ED1D0AB3511FC787A210897543525E, NULL);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_9, _stringLiteral1D429E066663E8F2FE75C06B462A453AEC63D86F, L_10, L_11, NULL);
		goto IL_006e;
	}

IL_0066:
	{
		StringBuilder_t * L_13 = ___sb0;
		String_t* L_14 = V_3;
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, L_14, NULL);
	}

IL_006e:
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_16 = V_5;
		MethodBase_t * L_17;
		L_17 = VirtualFuncInvoker0< MethodBase_t * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_16);
		bool L_18;
		L_18 = MethodBase_op_Equality_m6A01E665278ED7A85822F5BC6B961A8FF0DC62E5(L_17, (MethodBase_t *)NULL, NULL);
		if (!L_18)
		{
			goto IL_00c2;
		}
	}
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_19 = V_5;
		String_t* L_20;
		L_20 = StackFrame_GetInternalMethodName_mE432F77894FD3B046810EEDD739DCC81D45069DF_inline(L_19, NULL);
		V_6 = L_20;
		String_t* L_21 = V_6;
		if (!L_21)
		{
			goto IL_0098;
		}
	}
	{
		StringBuilder_t * L_22 = ___sb0;
		String_t* L_23 = V_6;
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_23, NULL);
		goto IL_01bf;
	}

IL_0098:
	{
		StringBuilder_t * L_25 = ___sb0;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_26 = V_5;
		int64_t L_27;
		L_27 = StackFrame_GetMethodAddress_mF387B1090E102E17E676896A16D21E5EB5649F9A_inline(L_26, NULL);
		int64_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_28);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_30 = V_5;
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Diagnostics.StackFrame::GetNativeOffset() */, L_30);
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34 = V_2;
		StringBuilder_t * L_35;
		L_35 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2(L_25, _stringLiteral0DFEBF342B2EC9E1B2887EEA1FC41C532F92A6B5, L_29, L_33, L_34, NULL);
		goto IL_01bf;
	}

IL_00c2:
	{
		StringBuilder_t * L_36 = ___sb0;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_37 = V_5;
		MethodBase_t * L_38;
		L_38 = VirtualFuncInvoker0< MethodBase_t * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_37);
		StackTrace_GetFullNameForStackTrace_mA68FA00EB15AD3EF889DB5005EE5B91A7DE37424(__this, L_36, L_38, NULL);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_39 = V_5;
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Diagnostics.StackFrame::GetILOffset() */, L_39);
		if ((!(((uint32_t)L_40) == ((uint32_t)(-1)))))
		{
			goto IL_0126;
		}
	}
	{
		StringBuilder_t * L_41 = ___sb0;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_42 = V_5;
		int64_t L_43;
		L_43 = StackFrame_GetMethodAddress_mF387B1090E102E17E676896A16D21E5EB5649F9A_inline(L_42, NULL);
		int64_t L_44 = L_43;
		RuntimeObject * L_45 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_44);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_46 = V_5;
		int32_t L_47;
		L_47 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Diagnostics.StackFrame::GetNativeOffset() */, L_46);
		int32_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_48);
		StringBuilder_t * L_50;
		L_50 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_41, _stringLiteralD6856754C069BB887EACADAC5402DFC04DF58E7C, L_45, L_49, NULL);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_51 = V_5;
		uint32_t L_52;
		L_52 = StackFrame_GetMethodIndex_mDD134EBF64B083B759B883B35757CE0C68363CE8_inline(L_51, NULL);
		if ((((int32_t)L_52) == ((int32_t)((int32_t)16777215))))
		{
			goto IL_013e;
		}
	}
	{
		StringBuilder_t * L_53 = ___sb0;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_54 = V_5;
		uint32_t L_55;
		L_55 = StackFrame_GetMethodIndex_mDD134EBF64B083B759B883B35757CE0C68363CE8_inline(L_54, NULL);
		uint32_t L_56 = L_55;
		RuntimeObject * L_57 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_56);
		StringBuilder_t * L_58;
		L_58 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_53, _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804, L_57, NULL);
		goto IL_013e;
	}

IL_0126:
	{
		StringBuilder_t * L_59 = ___sb0;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_60 = V_5;
		int32_t L_61;
		L_61 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Diagnostics.StackFrame::GetILOffset() */, L_60);
		int32_t L_62 = L_61;
		RuntimeObject * L_63 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_62);
		StringBuilder_t * L_64;
		L_64 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_59, _stringLiteral1B0C93330E9DD2B87A22B6324E499950A892FE6C, L_63, NULL);
	}

IL_013e:
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_65 = V_5;
		String_t* L_66;
		L_66 = StackFrame_GetSecureFileName_mE683AA07D71320222C830C4F468444AB1456911C(L_65, NULL);
		V_7 = L_66;
		String_t* L_67 = V_7;
		Il2CppChar L_68;
		L_68 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_67, 0, NULL);
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_01a9;
		}
	}
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_69 = V_5;
		MethodBase_t * L_70;
		L_70 = VirtualFuncInvoker0< MethodBase_t * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_69);
		Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0 * L_71;
		L_71 = VirtualFuncInvoker0< Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0 * >::Invoke(16 /* System.Reflection.Module System.Reflection.MemberInfo::get_Module() */, L_70);
		Guid_t  L_72;
		L_72 = VirtualFuncInvoker0< Guid_t  >::Invoke(12 /* System.Guid System.Reflection.Module::get_ModuleVersionId() */, L_71);
		V_10 = L_72;
		String_t* L_73;
		L_73 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&V_10), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		V_8 = L_73;
		String_t* L_74;
		L_74 = StackTrace_GetAotId_m91E687449F5715990ADF614F07C859481208260F(NULL);
		V_9 = L_74;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_75 = V_5;
		int32_t L_76;
		L_76 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Diagnostics.StackFrame::GetILOffset() */, L_75);
		if ((!(((uint32_t)L_76) == ((uint32_t)(-1)))))
		{
			goto IL_0189;
		}
	}
	{
		String_t* L_77 = V_9;
		if (L_77)
		{
			goto IL_0199;
		}
	}

IL_0189:
	{
		String_t* L_78 = V_8;
		String_t* L_79;
		L_79 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral012D19DEDB7F268C61672C79B02816C18D097BF4, L_78, NULL);
		V_7 = L_79;
		goto IL_01a9;
	}

IL_0199:
	{
		String_t* L_80 = V_8;
		String_t* L_81 = V_9;
		String_t* L_82;
		L_82 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral1F82196A6F25AC4E97E6DAE2D0F20D7DFE1A48F8, L_80, L_81, NULL);
		V_7 = L_82;
	}

IL_01a9:
	{
		StringBuilder_t * L_83 = ___sb0;
		String_t* L_84 = V_0;
		String_t* L_85 = V_7;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * L_86 = V_5;
		int32_t L_87;
		L_87 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_86);
		int32_t L_88 = L_87;
		RuntimeObject * L_89 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_88);
		StringBuilder_t * L_90;
		L_90 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_83, L_84, L_85, L_89, NULL);
	}

IL_01bf:
	{
		int32_t L_91 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_01c5:
	{
		int32_t L_92 = V_4;
		int32_t L_93;
		L_93 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, __this);
		if ((((int32_t)L_92) < ((int32_t)L_93)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_94 = V_4;
		return (bool)((!(((uint32_t)L_94) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void System.Diagnostics.StackTrace::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace_GetFullNameForStackTrace_mA68FA00EB15AD3EF889DB5005EE5B91A7DE37424 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, StringBuilder_t * ___sb0, MethodBase_t * ___mi1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_1 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_2 = NULL;
	int32_t V_3 = 0;
	MethodInfo_t * V_4 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Type_t * V_8 = NULL;
	{
		MethodBase_t * L_0 = ___mi1;
		Type_t * L_1;
		L_1 = VirtualFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(77 /* System.Boolean System.Type::get_IsGenericType() */, L_2);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_4 = V_0;
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_4);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_6 = V_0;
		Type_t * L_7;
		L_7 = VirtualFuncInvoker0< Type_t * >::Invoke(102 /* System.Type System.Type::GetGenericTypeDefinition() */, L_6);
		V_0 = L_7;
	}

IL_001e:
	{
		Type_t * L_8 = V_0;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_9;
		L_9 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(43 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_8, ((int32_t)60));
		V_2 = L_9;
		V_3 = 0;
		goto IL_0049;
	}

IL_002b:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_10 = V_2;
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		MethodInfo_t * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		MethodInfo_t * L_14 = V_4;
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_14);
		MethodBase_t * L_16 = ___mi1;
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_16);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_0045;
		}
	}
	{
		MethodInfo_t * L_18 = V_4;
		___mi1 = L_18;
		goto IL_004f;
	}

IL_0045:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_20 = V_3;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_002b;
		}
	}

IL_004f:
	{
		StringBuilder_t * L_22 = ___sb0;
		Type_t * L_23 = V_0;
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_24, NULL);
		StringBuilder_t * L_26 = ___sb0;
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		StringBuilder_t * L_28 = ___sb0;
		MethodBase_t * L_29 = ___mi1;
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, L_30, NULL);
		MethodBase_t * L_32 = ___mi1;
		bool L_33;
		L_33 = VirtualFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_32);
		if (!L_33)
		{
			goto IL_00d2;
		}
	}
	{
		MethodBase_t * L_34 = ___mi1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_35;
		L_35 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(24 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_34);
		V_5 = L_35;
		StringBuilder_t * L_36 = ___sb0;
		StringBuilder_t * L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		V_6 = 0;
		goto IL_00be;
	}

IL_0096:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_00a7;
		}
	}
	{
		StringBuilder_t * L_39 = ___sb0;
		StringBuilder_t * L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_00a7:
	{
		StringBuilder_t * L_41 = ___sb0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_42 = V_5;
		int32_t L_43 = V_6;
		int32_t L_44 = L_43;
		Type_t * L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		String_t* L_46;
		L_46 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_45);
		StringBuilder_t * L_47;
		L_47 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, L_46, NULL);
		int32_t L_48 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00be:
	{
		int32_t L_49 = V_6;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_50 = V_5;
		if ((((int32_t)L_49) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))))
		{
			goto IL_0096;
		}
	}
	{
		StringBuilder_t * L_51 = ___sb0;
		StringBuilder_t * L_52;
		L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_51, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
	}

IL_00d2:
	{
		MethodBase_t * L_53 = ___mi1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_54;
		L_54 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_53);
		V_1 = L_54;
		StringBuilder_t * L_55 = ___sb0;
		StringBuilder_t * L_56;
		L_56 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_55, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		V_7 = 0;
		goto IL_015c;
	}

IL_00ea:
	{
		int32_t L_57 = V_7;
		if ((((int32_t)L_57) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t * L_58 = ___sb0;
		StringBuilder_t * L_59;
		L_59 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_58, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00fb:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_60 = V_1;
		int32_t L_61 = V_7;
		int32_t L_62 = L_61;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F * L_63 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		Type_t * L_64;
		L_64 = VirtualFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_63);
		V_8 = L_64;
		Type_t * L_65 = V_8;
		bool L_66;
		L_66 = VirtualFuncInvoker0< bool >::Invoke(77 /* System.Boolean System.Type::get_IsGenericType() */, L_65);
		if (!L_66)
		{
			goto IL_0121;
		}
	}
	{
		Type_t * L_67 = V_8;
		bool L_68;
		L_68 = VirtualFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_67);
		if (L_68)
		{
			goto IL_0121;
		}
	}
	{
		Type_t * L_69 = V_8;
		Type_t * L_70;
		L_70 = VirtualFuncInvoker0< Type_t * >::Invoke(102 /* System.Type System.Type::GetGenericTypeDefinition() */, L_69);
		V_8 = L_70;
	}

IL_0121:
	{
		StringBuilder_t * L_71 = ___sb0;
		Type_t * L_72 = V_8;
		String_t* L_73;
		L_73 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_72);
		StringBuilder_t * L_74;
		L_74 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_71, L_73, NULL);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_75 = V_1;
		int32_t L_76 = V_7;
		int32_t L_77 = L_76;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F * L_78 = (L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_78);
		if (!L_79)
		{
			goto IL_0156;
		}
	}
	{
		StringBuilder_t * L_80 = ___sb0;
		StringBuilder_t * L_81;
		L_81 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_80, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		StringBuilder_t * L_82 = ___sb0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_83 = V_1;
		int32_t L_84 = V_7;
		int32_t L_85 = L_84;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F * L_86 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		String_t* L_87;
		L_87 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_86);
		StringBuilder_t * L_88;
		L_88 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_82, L_87, NULL);
	}

IL_0156:
	{
		int32_t L_89 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_015c:
	{
		int32_t L_90 = V_7;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_91 = V_1;
		if ((((int32_t)L_90) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length))))))
		{
			goto IL_00ea;
		}
	}
	{
		StringBuilder_t * L_92 = ___sb0;
		StringBuilder_t * L_93;
		L_93 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_92, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return;
	}
}
// System.String System.Diagnostics.StackTrace::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_ToString_m46323EE6573660B32A02BA5BC774FC1D1F529717 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF306962EA63DA79E4806D8A7307784E9100B53CC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_1 = __this->___captured_traces_2;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_2 = __this->___captured_traces_2;
		V_1 = L_2;
		V_2 = 0;
		goto IL_004c;
	}

IL_0019:
	{
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		StringBuilder_t * L_7 = V_0;
		bool L_8;
		L_8 = StackTrace_AddFrames_m479F62FE2902C223B3E45955D5F76313ED91EBE1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		StringBuilder_t * L_9 = V_0;
		String_t* L_10;
		L_10 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_10, NULL);
		StringBuilder_t * L_12 = V_0;
		StringBuilder_t * L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteralF306962EA63DA79E4806D8A7307784E9100B53CC, NULL);
		StringBuilder_t * L_14 = V_0;
		String_t* L_15;
		L_15 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_15, NULL);
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_18 = V_2;
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_19 = V_1;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_0019;
		}
	}

IL_0052:
	{
		StringBuilder_t * L_20 = V_0;
		bool L_21;
		L_21 = StackTrace_AddFrames_m479F62FE2902C223B3E45955D5F76313ED91EBE1(__this, L_20, NULL);
		StringBuilder_t * L_22 = V_0;
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		return L_23;
	}
}
// System.String System.Diagnostics.StackTrace::ToString(System.Diagnostics.StackTrace/TraceFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_ToString_m8732EDFFAFD39EA9E34978B7563D19BD70CD8627 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853 * __this, int32_t ___traceFormat0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		return L_0;
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
// System.Boolean System.Diagnostics.Tracing.EventSource::IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.Diagnostics.Tracing.EventSource::ToString()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* EventSource_ToString_mCE97BD92DABC5BC98019BA9C9E158433E63A1674 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFEC460DC61811C6FD0F0A356298DC095225A991)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EventSource_ToString_mCE97BD92DABC5BC98019BA9C9E158433E63A1674_RuntimeMethod_var)));
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_Dispose_mF14781ABBB50FDB6CAEC8D7DC1B7896C96CCDED8 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_Finalize_m4E94F5985E3D687A2ABCCE0EE9150174EE09D92E (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__cctor_m583C118282B26DFD99A0D1066DBB872E9941C936 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____6CEE45445AFD150B047A5866FFA76AA651CDB7B7_57_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE2588A0F953A2D4AC7E032D8E7B443C2662296A);
		s_Il2CppMethodInitialized = true;
	}
	{
		((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_il2cpp_TypeInfo_var))->___m_EventSourceExceptionRecurenceCount_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____6CEE45445AFD150B047A5866FFA76AA651CDB7B7_57_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray *)L_1, L_2, NULL);
		((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_StaticFields*)il2cpp_codegen_static_fields_for(EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_il2cpp_TypeInfo_var))->___namespaceBytes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_StaticFields*)il2cpp_codegen_static_fields_for(EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_il2cpp_TypeInfo_var))->___namespaceBytes_1), (void*)L_1);
		Guid_t  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_3), _stringLiteralAE2588A0F953A2D4AC7E032D8E7B443C2662296A, /*hidden argument*/NULL);
		((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_StaticFields*)il2cpp_codegen_static_fields_for(EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25_il2cpp_TypeInfo_var))->___AspNetEventSourceGuid_2 = L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6D7A35973B6DBEB3664F5C76AC1EAC65AB733088 (String_t* ___s0, const RuntimeMethod* method)
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
// System.Void System.Reflection.Emit.UnmanagedMarshal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedMarshal__ctor_mB83C597E314D06E9DC785181527144689CACF092 (UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedMarshal__ctor_mB83C597E314D06E9DC785181527144689CACF092_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(UnmanagedMarshal__ctor_mB83C597E314D06E9DC785181527144689CACF092_RuntimeMethod_var);
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
// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicMethod_get_Attributes_m60B6E0D7453F2ABA6068FE0E9F7A9D8D854DFF13 (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_get_Attributes_m60B6E0D7453F2ABA6068FE0E9F7A9D8D854DFF13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_get_Attributes_m60B6E0D7453F2ABA6068FE0E9F7A9D8D854DFF13_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Type System.Reflection.Emit.DynamicMethod::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DynamicMethod_get_DeclaringType_mF4A862CBE7BEA370DD8BDF35D9778EB50754FD4D (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_get_DeclaringType_mF4A862CBE7BEA370DD8BDF35D9778EB50754FD4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_get_DeclaringType_mF4A862CBE7BEA370DD8BDF35D9778EB50754FD4D_RuntimeMethod_var);
		return (Type_t *)NULL;
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::get_MethodHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2  DynamicMethod_get_MethodHandle_m706080C466E95FC96B32229F1B4524518C3B3AC2 (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_get_MethodHandle_m706080C466E95FC96B32229F1B4524518C3B3AC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_get_MethodHandle_m706080C466E95FC96B32229F1B4524518C3B3AC2_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ));
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2  L_0 = V_0;
		return L_0;
	}
}
// System.String System.Reflection.Emit.DynamicMethod::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DynamicMethod_get_Name_mBDFB261638832F2976AADF0065812666EA23E21D (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_get_Name_mBDFB261638832F2976AADF0065812666EA23E21D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_get_Name_mBDFB261638832F2976AADF0065812666EA23E21D_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Type System.Reflection.Emit.DynamicMethod::get_ReflectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DynamicMethod_get_ReflectedType_mF98D112B539EC8B0A8381E4BE2581BA72BCF52E4 (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_get_ReflectedType_mF98D112B539EC8B0A8381E4BE2581BA72BCF52E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_get_ReflectedType_mF98D112B539EC8B0A8381E4BE2581BA72BCF52E4_RuntimeMethod_var);
		return (Type_t *)NULL;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.DynamicMethod::GetBaseDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * DynamicMethod_GetBaseDefinition_m657ACC51B77BC5FA526A03CD84BAD2598FFEE585 (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_GetBaseDefinition_m657ACC51B77BC5FA526A03CD84BAD2598FFEE585_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_GetBaseDefinition_m657ACC51B77BC5FA526A03CD84BAD2598FFEE585_RuntimeMethod_var);
		return (MethodInfo_t *)NULL;
	}
}
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* DynamicMethod_GetCustomAttributes_mD5792E69819FDD68F0CC2F08941A3ECE82630560 (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, bool ___inherit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_GetCustomAttributes_mD5792E69819FDD68F0CC2F08941A3ECE82630560_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_GetCustomAttributes_mD5792E69819FDD68F0CC2F08941A3ECE82630560_RuntimeMethod_var);
		return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
	}
}
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* DynamicMethod_GetCustomAttributes_m423CD35D2871D134280695AE712288B2F31B4919 (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, Type_t * ___attributeType0, bool ___inherit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_GetCustomAttributes_m423CD35D2871D134280695AE712288B2F31B4919_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_GetCustomAttributes_m423CD35D2871D134280695AE712288B2F31B4919_RuntimeMethod_var);
		return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
	}
}
// System.Reflection.MethodImplAttributes System.Reflection.Emit.DynamicMethod::GetMethodImplementationFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicMethod_GetMethodImplementationFlags_m71676A3F96318FBBF03F5C5F5A683B34810D699D (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_GetMethodImplementationFlags_m71676A3F96318FBBF03F5C5F5A683B34810D699D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_GetMethodImplementationFlags_m71676A3F96318FBBF03F5C5F5A683B34810D699D_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.DynamicMethod::GetParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* DynamicMethod_GetParameters_m28516BAD1E304AD8BF7FE55D10E7BB171C52DBC8 (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_GetParameters_m28516BAD1E304AD8BF7FE55D10E7BB171C52DBC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_GetParameters_m28516BAD1E304AD8BF7FE55D10E7BB171C52DBC8_RuntimeMethod_var);
		return (ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*)NULL;
	}
}
// System.Object System.Reflection.Emit.DynamicMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DynamicMethod_Invoke_mDFB2DDC157A4F93D2BE60A41ED5E2AFBFF616C8A (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, RuntimeObject * ___obj0, int32_t ___invokeAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 * ___binder2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters3, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 * ___culture4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_Invoke_mDFB2DDC157A4F93D2BE60A41ED5E2AFBFF616C8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_Invoke_mDFB2DDC157A4F93D2BE60A41ED5E2AFBFF616C8A_RuntimeMethod_var);
		return NULL;
	}
}
// System.Boolean System.Reflection.Emit.DynamicMethod::IsDefined(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicMethod_IsDefined_m7930AAF2AD816CDDC6FEF4BEA46758C38B825EF8 (DynamicMethod_t11548939953F8E4E3130471EBFACF0E9EBDCCA83 * __this, Type_t * ___attributeType0, bool ___inherit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMethod_IsDefined_m7930AAF2AD816CDDC6FEF4BEA46758C38B825EF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(DynamicMethod_IsDefined_m7930AAF2AD816CDDC6FEF4BEA46758C38B825EF8_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_mCF7A8540CD52C39F8262F7F8C01ACE4821CFB7B9 (const RuntimeMethod* method)
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A * L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_mCF7A8540CD52C39F8262F7F8C01ACE4821CFB7B9_RuntimeMethod_var)));
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
// System.Void System.__Il2CppComObject::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_mB15B8304E8D3CB19D3B938761922CDF7F7A3CB6F (Il2CppComObject * __this, const RuntimeMethod* method)
{
	if (__this->identity != NULL)
	{
		il2cpp_codegen_il2cpp_com_object_cleanup(__this);
		__this->identity->Release();
		__this->identity = NULL;
	}

	Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.__Il2CppComDelegate::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Il2CppComDelegate_Finalize_m197E4D7556E4936825DC891128E34961C535A3FD (__Il2CppComDelegate_tE313EB555AAD1E798653E4C254A0FABD6BA2BB27 * __this, const RuntimeMethod* method)
{
	__Il2CppComObject_Finalize_mB15B8304E8D3CB19D3B938761922CDF7F7A3CB6F(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StackFrame_GetInternalMethodName_mE432F77894FD3B046810EEDD739DCC81D45069DF_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___internalMethodName_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t StackFrame_GetMethodAddress_mF387B1090E102E17E676896A16D21E5EB5649F9A_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->___methodAddress_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t StackFrame_GetMethodIndex_mDD134EBF64B083B759B883B35757CE0C68363CE8_inline (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->___methodIndex_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->___m_stringLength_0;
		return L_0;
	}
}
