#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_CertificateCallback_mF5E626BA2545CFFA64428622678E409702C2045A_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_ReadCallback_m15F3A217E44D480CAED06EB5A88503FB6259D7EC_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_VerifyCallback_m75D7C072718405EBBF8A2A9C794C4DDFB2595BD0_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_WriteCallback_m53DD70115C97432A676F3E437E8FB42F9FC068F5_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsProvider_x509verify_callback_m47823254E133F7304ABFAE5A1F0D218402BC5B45_RuntimeMethod_var;



// 0x00000001 System.String SR::GetString(System.String,System.Object[])
extern void SR_GetString_mB884C0B8E14A5EAEF312B9B826B02A1099A4FD1E (void);
// 0x00000002 System.String SR::GetString(System.Globalization.CultureInfo,System.String,System.Object[])
extern void SR_GetString_m1DE6C7B5F3EA2376154944895AEE12AEA5CA4E04 (void);
// 0x00000003 System.String SR::GetString(System.String)
extern void SR_GetString_m44F285DC771AF094795A39DCB84A799B1BFD641A (void);
// 0x00000004 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m3D9CF4AA0D105231DB5784C772B350142E49EE67 (void);
// 0x00000005 System.Void Mono.Util.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_m8B720CC4ADB295EF6F98ECB4B14AB5010CBC8C28 (void);
// 0x00000006 System.Void Mono.Unity.CertHelper::AddCertificatesToNativeChain(Mono.Unity.UnityTls/unitytls_x509list*,System.Security.Cryptography.X509Certificates.X509CertificateCollection,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_AddCertificatesToNativeChain_m6A078F5FFEA16184F19AEEDD4F9C8E00F68BDD48 (void);
// 0x00000007 System.Void Mono.Unity.CertHelper::AddCertificateToNativeChain(Mono.Unity.UnityTls/unitytls_x509list*,System.Security.Cryptography.X509Certificates.X509Certificate,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_AddCertificateToNativeChain_m04D6F01E00DF4D0C134704DF9403167E1878675A (void);
// 0x00000008 System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,System.String,Mono.Security.Interface.AlertDescription)
extern void Debug_CheckAndThrow_m0DC4C61C1A5FA2DF49E11420953CD3032843D59F (void);
// 0x00000009 System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,Mono.Unity.UnityTls/unitytls_x509verify_result,System.String,Mono.Security.Interface.AlertDescription)
extern void Debug_CheckAndThrow_m47BE0492786EEE30351AF6662609556CABAB0A80 (void);
// 0x0000000A System.IntPtr Mono.Unity.UnityTls::GetUnityTlsInterface()
extern void UnityTls_GetUnityTlsInterface_m47FB014BA17E899E2AE904DE3F59A84763D924F0 (void);
// 0x0000000B System.Boolean Mono.Unity.UnityTls::get_IsSupported()
extern void UnityTls_get_IsSupported_m7A43EE578D088D942479C11C7A1718432ED1F048 (void);
// 0x0000000C Mono.Unity.UnityTls/unitytls_interface_struct Mono.Unity.UnityTls::get_NativeInterface()
extern void UnityTls_get_NativeInterface_m48CD53391B9897F81D41D180A899D4C48F9B374B (void);
// 0x0000000D System.Void Mono.Unity.UnityTls/unitytls_x509verify_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_callback__ctor_mEDC6857514FD696562638B3F1DFE959920D1EB26 (void);
// 0x0000000E Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_callback_Invoke_mB53E808E78AE5BD02CECCA0BE198295ECAB83B9A (void);
// 0x0000000F System.Void Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_write_callback__ctor_m1A216E476EA91B415C0FD89765E6560410A7F7F5 (void);
// 0x00000010 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_write_callback_Invoke_mF1F1D27A9BE14950A905685370EDAE5EAB051712 (void);
// 0x00000011 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_read_callback__ctor_mEAC57775C6AB86A2E9E6DDC440E27C845BFAA4C0 (void);
// 0x00000012 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_read_callback_Invoke_m0B21AFD4EACBDBEC6EEFBEB61E142051F338194B (void);
// 0x00000013 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_trace_callback__ctor_mB9CC97640B55911851D544F3F85CAFB5B85B647A (void);
// 0x00000014 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr)
extern void unitytls_tlsctx_trace_callback_Invoke_m9511E6D873C0FFE4EBDA45E52CA47228A483A01F (void);
// 0x00000015 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_certificate_callback__ctor_m9A3F05E07D9A69B8FF419421DF8167DF9CE7E77A (void);
// 0x00000016 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_certificate_callback_Invoke_m37CB366C6D6E0A27CE4E1E4943DF2DE1F32E2BF1 (void);
// 0x00000017 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_x509verify_callback__ctor_m8583619DBB13F6EDF2A385C37DFAE8796EB89C0F (void);
// 0x00000018 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_x509verify_callback_Invoke_m1F7A6DA53EF61AC64F2DD9A33AF40541F97C6874 (void);
// 0x00000019 System.Void Mono.Unity.UnityTls/unitytls_interface_struct::.ctor()
extern void unitytls_interface_struct__ctor_mCBFC829FE6CEA8E6545EA7B61E756FFA2EC4A22D (void);
// 0x0000001A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_errorstate_create_t__ctor_m291CCEF12E6C9729662E0BBECB5D4FA6BDBA2F02 (void);
// 0x0000001B Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
extern void unitytls_errorstate_create_t_Invoke_m8B9A9835EA7C6A11E1627CA8904F3F853FB61BC0 (void);
// 0x0000001C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_errorstate_raise_error_t__ctor_mF30A64F84A8FC246DD062993A45C038B30FC6009 (void);
// 0x0000001D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
extern void unitytls_errorstate_raise_error_t_Invoke_m9B2B3433846A318340EDF0ED0E33C45030CCEA02 (void);
// 0x0000001E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_get_ref_t__ctor_mEDA7937D1EC76342E6CE92AF394E7E1A37F664B1 (void);
// 0x0000001F Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_get_ref_t_Invoke_mF5D3582922E868C42BCF32EB14471F8C800BB66E (void);
// 0x00000020 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_parse_der_t__ctor_m25AD8C01A87CF5F737E649F1FB9CA340A9A832A8 (void);
// 0x00000021 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_parse_der_t_Invoke_m244086296EBDE0C0B0F072B33AAD5BA39A030DB6 (void);
// 0x00000022 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_parse_pem_t__ctor_m8F4D69BD7B0988BF7682B3E5EA5934141BFEE440 (void);
// 0x00000023 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_parse_pem_t_Invoke_mE842DC1436977A2982224694DB5BCC2FF8A9B331 (void);
// 0x00000024 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_free_t__ctor_m935A5571CE60C369950D58C79432FB1C50231C37 (void);
// 0x00000025 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::Invoke(Mono.Unity.UnityTls/unitytls_key*)
extern void unitytls_key_free_t_Invoke_m860A3C396228B7ADF9406AE78D439BDCD12FB98E (void);
// 0x00000026 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509_export_der_t__ctor_m9BF2B0B567856AE42AB0ED274CD26ACE5FC0186B (void);
// 0x00000027 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509_export_der_t_Invoke_m13DB2E205EF9ED37B75F5B763C5080E7077841AD (void);
// 0x00000028 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_get_ref_t__ctor_m6977636DC288FB0809D7C0CE8D9D31D25795F77C (void);
// 0x00000029 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_get_ref_t_Invoke_mE7C675B7847FFEF96C25AE757D34CE920AA16EC2 (void);
// 0x0000002A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_get_x509_t__ctor_mFF7BC99AB91FE7F9CCB586988B246F597ADF53DD (void);
// 0x0000002B Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_get_x509_t_Invoke_m9080273A34FE768B80024B96001D5B7451A46EC0 (void);
// 0x0000002C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_create_t__ctor_m41F2B1E6C767CD3A39F4E0FAD41B678AF61A14A6 (void);
// 0x0000002D Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_create_t_Invoke_m05D8719D913109E4997FF913015E66455BC3C7D3 (void);
// 0x0000002E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_append_t__ctor_m22FAC52BA432FBCF2048DA6236633970E4E18CB0 (void);
// 0x0000002F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_append_t_Invoke_mEF1811CFAD02743F745D8A8E09E2E84D68154976 (void);
// 0x00000030 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_append_der_t__ctor_mB33965F4253393C8B17E44DACA1ECDBCC17EB673 (void);
// 0x00000031 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_append_der_t_Invoke_m3D900F0F07C8747B9F046512DAC7579D0C7CD193 (void);
// 0x00000032 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_free_t__ctor_mA156855741A0AA67C20B87507BE55F188ECBFFD4 (void);
// 0x00000033 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*)
extern void unitytls_x509list_free_t_Invoke_m0974FBCD7B6920A4EC57BDCB080E1A7307EEEA02 (void);
// 0x00000034 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_default_ca_t__ctor_m936B931A7A5A10B4A514630F84CF136A799AFA23 (void);
// 0x00000035 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_default_ca_t_Invoke_m1D112FD2010361D2DB08F08A598000ADCD0875C3 (void);
// 0x00000036 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_explicit_ca_t__ctor_m1812F92F4C92CE54233697CE380177EBA629A1F1 (void);
// 0x00000037 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_explicit_ca_t_Invoke_m4028A9AE8FD6B69DB36BAE68CC3A3362A825738B (void);
// 0x00000038 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_create_server_t__ctor_m035F9FCC9C4B71D3BA4F1610FBCFB7E87E28EDD7 (void);
// 0x00000039 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_create_server_t_Invoke_mCEB3E8CADCB316F4DF606A68182A4E5C9EC4D3B9 (void);
// 0x0000003A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_create_client_t__ctor_m898460A0D30C6EEF737F445DFBA96076E4D22130 (void);
// 0x0000003B Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_create_client_t_Invoke_m728BCBF32A45326A1AD8B1E17933372F7D9E01EE (void);
// 0x0000003C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_server_require_client_authentication_t__ctor_m3E84F3D43AA2928DA825256C6179E2D0CF926C60 (void);
// 0x0000003D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_server_require_client_authentication_t_Invoke_m0B6DAC7CA95263D1245C9B0A466AF00D073059EB (void);
// 0x0000003E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_certificate_callback_t__ctor_m31E0497908A2C272B9AB80B4659D1517F9647E20 (void);
// 0x0000003F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_certificate_callback_t_Invoke_mFC277320977BC310A0EB484EE505E25B6E2C7CA3 (void);
// 0x00000040 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_trace_callback_t__ctor_m262F20124214D62819468C226E925221D2527D96 (void);
// 0x00000041 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_trace_callback_t_Invoke_mC98468DD35AA05DE628FEAE7669B4F71205CCBD7 (void);
// 0x00000042 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_x509verify_callback_t__ctor_mE6C3A39FA8A1903C74826A5BFF748DFEB1A4D06D (void);
// 0x00000043 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_x509verify_callback_t_Invoke_mA9AE094A7DB71B4B7B051BB3D67CB98A7F48D3CE (void);
// 0x00000044 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m856B5362E3479A5C75709F62B5A316C0A0F913FF (void);
// 0x00000045 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_m8E153461EFCEAAAF59D1E918F7C06B14358B43E2 (void);
// 0x00000046 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_get_ciphersuite_t__ctor_mFD8DF58601BB4A8F00C3A56F881F2E92D7536CA9 (void);
// 0x00000047 Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_get_ciphersuite_t_Invoke_m2DF155D62800CFFD66AC63538F69DB2275EC3FFD (void);
// 0x00000048 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_get_protocol_t__ctor_mAA5710F913B95E0964AD90EDF59FD71E984DD00E (void);
// 0x00000049 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_get_protocol_t_Invoke_m3D931DDD241F0B3EDA8F6F1EFA159C0669E7E3F0 (void);
// 0x0000004A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_process_handshake_t__ctor_m163A6D53CE45B5161FD5586DBBD8BB90B9EDDA45 (void);
// 0x0000004B Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_process_handshake_t_Invoke_mD8F2422C5C6C9FF0ADDAB17AECB998C2E225CF7A (void);
// 0x0000004C System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_read_t__ctor_m55B52EA0C5ED94A8030D80A9B7967F34850AC799 (void);
// 0x0000004D System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_read_t_Invoke_m0FB34952D7592128A211AA0DA5536A325494FA04 (void);
// 0x0000004E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_write_t__ctor_mD229A38085F7CAE944D6CF0D505C6F167C709E96 (void);
// 0x0000004F System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_write_t_Invoke_mC6A06FBF8E4C5652830248B521C83865B3F2DBBC (void);
// 0x00000050 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_notify_close_t__ctor_m700B77B204CFF6F4113F3E3F4CF6673CF7ACC0FB (void);
// 0x00000051 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_notify_close_t_Invoke_m6E5688DDA03F313A1C470E4C30263C5B4A174138 (void);
// 0x00000052 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_free_t__ctor_m46E06E2335A31589194453E910356B6456160E7E (void);
// 0x00000053 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*)
extern void unitytls_tlsctx_free_t_Invoke_mC5D5191740D2507A83D95B4B3E6CE4C4A9FBAFD2 (void);
// 0x00000054 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_random_generate_bytes_t__ctor_mFAC4CCD07765DE0827186AEC35DCCFC2E66BE066 (void);
// 0x00000055 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::Invoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_random_generate_bytes_t_Invoke_mF0A5B5E7279FF32FBFF48DBB98EB07C88C63EF92 (void);
// 0x00000056 System.Void Mono.Unity.UnityTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void UnityTlsContext__ctor_m4EE30AD7CFE2E7B85E631E174B820609A45EACDC (void);
// 0x00000057 System.Void Mono.Unity.UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_x509list*&,Mono.Unity.UnityTls/unitytls_key*&)
extern void UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate_mAAD3045A2D64C314FD288C3468D41767DD47205A (void);
// 0x00000058 System.Boolean Mono.Unity.UnityTlsContext::get_IsAuthenticated()
extern void UnityTlsContext_get_IsAuthenticated_mA566E1D02B55C267233595651ACBDE0AB14D0361 (void);
// 0x00000059 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Unity.UnityTlsContext::get_LocalClientCertificate()
extern void UnityTlsContext_get_LocalClientCertificate_m359CCA879BFE0788C1BA3E57287AE744A501BDD1 (void);
// 0x0000005A System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Read(System.Byte[],System.Int32,System.Int32)
extern void UnityTlsContext_Read_m461E85BF4B42B72297B42A6E7EE5A756A25259FD (void);
// 0x0000005B System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Write(System.Byte[],System.Int32,System.Int32)
extern void UnityTlsContext_Write_m11529FF555E48CA82577431E6856FEE3E4E0FA28 (void);
// 0x0000005C System.Void Mono.Unity.UnityTlsContext::Shutdown()
extern void UnityTlsContext_Shutdown_m6DD342ACE3206195381E15E5CD5BB4845CDBDBE6 (void);
// 0x0000005D System.Void Mono.Unity.UnityTlsContext::Dispose(System.Boolean)
extern void UnityTlsContext_Dispose_m5E0A4A0D9AF08F03E82CBF45BD14477E7D2D34DB (void);
// 0x0000005E System.Void Mono.Unity.UnityTlsContext::StartHandshake()
extern void UnityTlsContext_StartHandshake_m56718DFC2F7D4A03C3B1AD6C9ABE502EDCB6BC0A (void);
// 0x0000005F System.Boolean Mono.Unity.UnityTlsContext::ProcessHandshake()
extern void UnityTlsContext_ProcessHandshake_m098B5D0081E137B05DB4FB7B7F74805EF749C09D (void);
// 0x00000060 System.Void Mono.Unity.UnityTlsContext::FinishHandshake()
extern void UnityTlsContext_FinishHandshake_m4F1BF52160E1BFCF223717415D5F1DB96B5F9556 (void);
// 0x00000061 System.IntPtr Mono.Unity.UnityTlsContext::WriteCallback(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_WriteCallback_m53DD70115C97432A676F3E437E8FB42F9FC068F5 (void);
// 0x00000062 System.IntPtr Mono.Unity.UnityTlsContext::WriteCallback(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_WriteCallback_m28708B36ED5744CED29D543B86A2E117DFF661BA (void);
// 0x00000063 System.IntPtr Mono.Unity.UnityTlsContext::ReadCallback(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_ReadCallback_m15F3A217E44D480CAED06EB5A88503FB6259D7EC (void);
// 0x00000064 System.IntPtr Mono.Unity.UnityTlsContext::ReadCallback(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_ReadCallback_mE4765DDC1755E4A030F1D3B59B255072FF656ED1 (void);
// 0x00000065 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsContext::VerifyCallback(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_VerifyCallback_m75D7C072718405EBBF8A2A9C794C4DDFB2595BD0 (void);
// 0x00000066 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsContext::VerifyCallback(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_VerifyCallback_m2498A768960C1A792A1B60A1F47D16624E543537 (void);
// 0x00000067 System.Void Mono.Unity.UnityTlsContext::CertificateCallback(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_CertificateCallback_mF5E626BA2545CFFA64428622678E409702C2045A (void);
// 0x00000068 System.Void Mono.Unity.UnityTlsContext::CertificateCallback(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_CertificateCallback_m5A4C050D5D49709202B72A50F33533E7C5C6B113 (void);
// 0x00000069 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTlsConversions::GetMinProtocol(System.Security.Authentication.SslProtocols)
extern void UnityTlsConversions_GetMinProtocol_m0E691D4227CAB79BDC7F6E30E5CF2698D2F5813F (void);
// 0x0000006A Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTlsConversions::GetMaxProtocol(System.Security.Authentication.SslProtocols)
extern void UnityTlsConversions_GetMaxProtocol_mC7381248C4DA2168508E3A4C5DE049BE58C7F250 (void);
// 0x0000006B Mono.Security.Interface.TlsProtocols Mono.Unity.UnityTlsConversions::ConvertProtocolVersion(Mono.Unity.UnityTls/unitytls_protocol)
extern void UnityTlsConversions_ConvertProtocolVersion_mB9C0E5A59CC1564EDF56D06C396461DA678CAD0B (void);
// 0x0000006C Mono.Security.Interface.AlertDescription Mono.Unity.UnityTlsConversions::VerifyResultToAlertDescription(Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Security.Interface.AlertDescription)
extern void UnityTlsConversions_VerifyResultToAlertDescription_m23B95B4CEFBE8FB8329DF4A53E744F9592C40DA6 (void);
// 0x0000006D Mono.Security.Interface.MonoSslPolicyErrors Mono.Unity.UnityTlsConversions::VerifyResultToPolicyErrror(Mono.Unity.UnityTls/unitytls_x509verify_result)
extern void UnityTlsConversions_VerifyResultToPolicyErrror_mB06345404F480D729F65553A12271472F31A9353 (void);
// 0x0000006E System.Security.Cryptography.X509Certificates.X509ChainStatusFlags Mono.Unity.UnityTlsConversions::VerifyResultToChainStatus(Mono.Unity.UnityTls/unitytls_x509verify_result)
extern void UnityTlsConversions_VerifyResultToChainStatus_m266E87DEE12D19BFD385BCCE2F5F30C527D6DB74 (void);
// 0x0000006F System.String Mono.Unity.UnityTlsProvider::get_Name()
extern void UnityTlsProvider_get_Name_m24407BD8B3C23C4DCF2EDF41F9056463763E7389 (void);
// 0x00000070 System.Guid Mono.Unity.UnityTlsProvider::get_ID()
extern void UnityTlsProvider_get_ID_mE43288EBB589EFFC6EE6E49209FBE8295BE577F1 (void);
// 0x00000071 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsSslStream()
extern void UnityTlsProvider_get_SupportsSslStream_mBB478D61296FAF8CAC3145C816E27AA7A1CE8CC8 (void);
// 0x00000072 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsMonoExtensions()
extern void UnityTlsProvider_get_SupportsMonoExtensions_mC34E3757CB6273E3838F8DF33503CF6E4E4ADC01 (void);
// 0x00000073 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsConnectionInfo()
extern void UnityTlsProvider_get_SupportsConnectionInfo_mF18DD7A3E1806F86AB471A580EEAD68AB736FB73 (void);
// 0x00000074 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsCleanShutdown()
extern void UnityTlsProvider_get_SupportsCleanShutdown_mBB7DCD0ACF8B5239D89F4695859B90D2F5275D50 (void);
// 0x00000075 System.Security.Authentication.SslProtocols Mono.Unity.UnityTlsProvider::get_SupportedProtocols()
extern void UnityTlsProvider_get_SupportedProtocols_m59C751B343CAC7A9692B1C12FC986450EF700C88 (void);
// 0x00000076 Mono.Security.Interface.IMonoSslStream Mono.Unity.UnityTlsProvider::CreateSslStream(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings)
extern void UnityTlsProvider_CreateSslStream_m50488CAF06C5C529D0F9ED314BA5FC3B44585256 (void);
// 0x00000077 Mono.Security.Interface.IMonoSslStream Mono.Unity.UnityTlsProvider::CreateSslStreamInternal(System.Net.Security.SslStream,System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings)
extern void UnityTlsProvider_CreateSslStreamInternal_mD5D24950FCA28780226D72726021DBC7A3EF6936 (void);
// 0x00000078 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsProvider::x509verify_callback(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsProvider_x509verify_callback_m47823254E133F7304ABFAE5A1F0D218402BC5B45 (void);
// 0x00000079 System.Boolean Mono.Unity.UnityTlsProvider::ValidateCertificate(Mono.Security.Interface.ICertificateValidator2,System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean,System.Security.Cryptography.X509Certificates.X509Chain&,Mono.Security.Interface.MonoSslPolicyErrors&,System.Int32&)
extern void UnityTlsProvider_ValidateCertificate_mED5D74CFE362F7E9EF9FEE458FC41CF686006E06 (void);
// 0x0000007A System.Void Mono.Unity.UnityTlsProvider::.ctor()
extern void UnityTlsProvider__ctor_m0C11027324407A76EB81EB51C37FF5C8F6F219A8 (void);
// 0x0000007B System.Void Mono.Unity.UnityTlsStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Security.Interface.MonoTlsProvider)
extern void UnityTlsStream__ctor_mD0965D52471984AB34DC176AC1D57BDA6B9AD2B6 (void);
// 0x0000007C Mono.Net.Security.MobileTlsContext Mono.Unity.UnityTlsStream::CreateContext(System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void UnityTlsStream_CreateContext_mAC6A975CC1CC537BA54526DDAA2507AE9859B583 (void);
// 0x0000007D System.Void Mono.Unity.X509ChainImplUnityTls::.ctor(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Boolean)
extern void X509ChainImplUnityTls__ctor_mD653A56ED8AD47C0A46DB3D89749A055D4BB1ABC (void);
// 0x0000007E System.Boolean Mono.Unity.X509ChainImplUnityTls::get_IsValid()
extern void X509ChainImplUnityTls_get_IsValid_mC01A80C0AF85FC18A5C790EF35586C8503D6B36F (void);
// 0x0000007F Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.X509ChainImplUnityTls::get_NativeCertificateChain()
extern void X509ChainImplUnityTls_get_NativeCertificateChain_mBFE146631BDB57BB66B00EBB21414AC7AFF73E72 (void);
// 0x00000080 System.Security.Cryptography.X509Certificates.X509ChainElementCollection Mono.Unity.X509ChainImplUnityTls::get_ChainElements()
extern void X509ChainImplUnityTls_get_ChainElements_m88A7F21DC30467829291CF89448C65025D7A15A4 (void);
// 0x00000081 System.Void Mono.Unity.X509ChainImplUnityTls::AddStatus(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern void X509ChainImplUnityTls_AddStatus_mF8C26841864A662C616E5A94A762EA3A19EF71D4 (void);
// 0x00000082 System.Void Mono.Unity.X509ChainImplUnityTls::Reset()
extern void X509ChainImplUnityTls_Reset_m1AD27C4C44348EADFBF5C6CF802F8AF60B562474 (void);
// 0x00000083 System.Void Mono.Unity.X509ChainImplUnityTls::Dispose(System.Boolean)
extern void X509ChainImplUnityTls_Dispose_m8E23D2EF6C322FF694E5E6098A52FB54388FC446 (void);
// 0x00000084 System.IntPtr Mono.Net.CFObject::dlopen(System.String,System.Int32)
extern void CFObject_dlopen_m47EA2C1E16FA7DB80ACB16F474759D8C6E0CFBAB (void);
// 0x00000085 System.IntPtr Mono.Net.CFObject::dlsym(System.IntPtr,System.String)
extern void CFObject_dlsym_m31D239BD674D93B932B04D4BA18F31A5DE45020F (void);
// 0x00000086 System.Void Mono.Net.CFObject::dlclose(System.IntPtr)
extern void CFObject_dlclose_mB59FBDB69DF8A429D37B1D58D6242774CB01FE0B (void);
// 0x00000087 System.IntPtr Mono.Net.CFObject::GetIndirect(System.IntPtr,System.String)
extern void CFObject_GetIndirect_mB0127ADF09F46284621D55601907599F22B4FFEC (void);
// 0x00000088 System.IntPtr Mono.Net.CFObject::GetCFObjectHandle(System.IntPtr,System.String)
extern void CFObject_GetCFObjectHandle_mD91080F3EBDBA6E4E22DC0E159EA0965C8ADD735 (void);
// 0x00000089 System.Void Mono.Net.CFObject::.ctor(System.IntPtr,System.Boolean)
extern void CFObject__ctor_mE1E449B8A9173AF0F40A09A1FBDFC1744D22C065 (void);
// 0x0000008A System.Void Mono.Net.CFObject::Finalize()
extern void CFObject_Finalize_mD241E36A23CEF2FA3CBF0480ADA0424D32A418AB (void);
// 0x0000008B System.IntPtr Mono.Net.CFObject::get_Handle()
extern void CFObject_get_Handle_m925865229AE5EBE8286F3660ED558FFE686ED039 (void);
// 0x0000008C System.Void Mono.Net.CFObject::set_Handle(System.IntPtr)
extern void CFObject_set_Handle_m50BAFCC3DFEBA51B960FB6D176A574B608E94C5F (void);
// 0x0000008D System.IntPtr Mono.Net.CFObject::CFRetain(System.IntPtr)
extern void CFObject_CFRetain_m6BB93F0A945924FDBC5168EA6ECD41BA3C93DB22 (void);
// 0x0000008E System.Void Mono.Net.CFObject::Retain()
extern void CFObject_Retain_m80D4C1A88BC8031AAD21C3F6CD7DB9C43EBBF1DC (void);
// 0x0000008F System.Void Mono.Net.CFObject::CFRelease(System.IntPtr)
extern void CFObject_CFRelease_mF71C8B82AAE8C7554E8D54AB120165E4801A16F8 (void);
// 0x00000090 System.Void Mono.Net.CFObject::Release()
extern void CFObject_Release_mF6E6EC0F9064DD3AFA29CBC50CE197983BB02CE0 (void);
// 0x00000091 System.Void Mono.Net.CFObject::Dispose(System.Boolean)
extern void CFObject_Dispose_mB4149998ABF0937223922B7BBB599772A8733C43 (void);
// 0x00000092 System.Void Mono.Net.CFObject::Dispose()
extern void CFObject_Dispose_mA74C8A55D70E74A52C0E13341D9F6D61D5BCA9B7 (void);
// 0x00000093 System.Void Mono.Net.CFArray::.ctor(System.IntPtr,System.Boolean)
extern void CFArray__ctor_m202BC884213088991A278A942D25F48E5C07D261 (void);
// 0x00000094 System.Void Mono.Net.CFArray::.cctor()
extern void CFArray__cctor_m408AB2FCF74786EFA1267F7B50DC8FC548D6EEA3 (void);
// 0x00000095 System.IntPtr Mono.Net.CFArray::CFArrayGetCount(System.IntPtr)
extern void CFArray_CFArrayGetCount_mDA5084F1D051059FEE1931FB911616C75BEFF965 (void);
// 0x00000096 System.Int32 Mono.Net.CFArray::get_Count()
extern void CFArray_get_Count_mFBE5322B2096ED0CDDC53F317F76FAA8DAF5B560 (void);
// 0x00000097 System.IntPtr Mono.Net.CFArray::CFArrayGetValueAtIndex(System.IntPtr,System.IntPtr)
extern void CFArray_CFArrayGetValueAtIndex_mFF309490404F21B869A832261D02B655CCD45E8C (void);
// 0x00000098 System.IntPtr Mono.Net.CFArray::get_Item(System.Int32)
extern void CFArray_get_Item_m3C7A42E815BA4C928DFBBA5AFE260B8E8BD6BA45 (void);
// 0x00000099 System.Boolean Mono.Net.CFNumber::CFNumberGetValue(System.IntPtr,System.IntPtr,System.Int32&)
extern void CFNumber_CFNumberGetValue_mC44FEBA6B827F3FF3EA1849C4D83E627B6646B3C (void);
// 0x0000009A System.Int32 Mono.Net.CFNumber::AsInt32(System.IntPtr)
extern void CFNumber_AsInt32_m5E1C7213FA2BBE4A6A950F10585A048DCF8A3221 (void);
// 0x0000009B System.Void Mono.Net.CFRange::.ctor(System.Int32,System.Int32)
extern void CFRange__ctor_mE95FD6CECA2FA0AD9454A1334058B5D16B2A4928 (void);
// 0x0000009C System.Void Mono.Net.CFString::.ctor(System.IntPtr,System.Boolean)
extern void CFString__ctor_mB68EB060C624A4873D0B3154956195735A68D60C (void);
// 0x0000009D System.IntPtr Mono.Net.CFString::CFStringCreateWithCharacters(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFString_CFStringCreateWithCharacters_m5E3F710DBEB407A72943328D31A938E96A5E8EFD (void);
// 0x0000009E Mono.Net.CFString Mono.Net.CFString::Create(System.String)
extern void CFString_Create_m4B279CF1EC2596123BA90594E2F91123305ACB72 (void);
// 0x0000009F System.IntPtr Mono.Net.CFString::CFStringGetLength(System.IntPtr)
extern void CFString_CFStringGetLength_mF4D4D57AB0BDD1127FC7E5432E65A456C097B920 (void);
// 0x000000A0 System.IntPtr Mono.Net.CFString::CFStringGetCharactersPtr(System.IntPtr)
extern void CFString_CFStringGetCharactersPtr_mB25683FCFC92BB3A0289562F1B5D8237ACD52123 (void);
// 0x000000A1 System.IntPtr Mono.Net.CFString::CFStringGetCharacters(System.IntPtr,Mono.Net.CFRange,System.IntPtr)
extern void CFString_CFStringGetCharacters_m244AC087A22E451D7A311740485D82A83E58F11C (void);
// 0x000000A2 System.String Mono.Net.CFString::AsString(System.IntPtr)
extern void CFString_AsString_m4E784AA013B1FFF5CF986AB2DB8D9A6E7216A192 (void);
// 0x000000A3 System.String Mono.Net.CFString::ToString()
extern void CFString_ToString_mCBA7C89F507E4120C8B596401C09CF4CBE2BC6E2 (void);
// 0x000000A4 System.Void Mono.Net.CFDictionary::.cctor()
extern void CFDictionary__cctor_m24EAFFEEF4F900B4158AEE3B15A9DC2C8CE1326D (void);
// 0x000000A5 System.Void Mono.Net.CFDictionary::.ctor(System.IntPtr,System.Boolean)
extern void CFDictionary__ctor_mD0A96DAB733F068700A8F29437D4620D1DAEBD35 (void);
// 0x000000A6 System.IntPtr Mono.Net.CFDictionary::CFDictionaryGetValue(System.IntPtr,System.IntPtr)
extern void CFDictionary_CFDictionaryGetValue_m1C3C692BFD6E5C89458419271228C197C87744CE (void);
// 0x000000A7 System.IntPtr Mono.Net.CFDictionary::GetValue(System.IntPtr)
extern void CFDictionary_GetValue_mD7C60A6B494B2697B41AD4E15C471F7064FA10C7 (void);
// 0x000000A8 System.IntPtr Mono.Net.CFDictionary::get_Item(System.IntPtr)
extern void CFDictionary_get_Item_mBFB4E28F75E0CD3A6A6C3FFCE5F2014D1924BC6E (void);
// 0x000000A9 System.Void Mono.Net.CFUrl::.ctor(System.IntPtr,System.Boolean)
extern void CFUrl__ctor_mD8E0E636102764BD28D4DE48F9CF92F0DCCEB59B (void);
// 0x000000AA System.IntPtr Mono.Net.CFUrl::CFURLCreateWithString(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFUrl_CFURLCreateWithString_mC0BE41B5F6B01B3A1DCA146CD2E0AEB829A890B2 (void);
// 0x000000AB Mono.Net.CFUrl Mono.Net.CFUrl::Create(System.String)
extern void CFUrl_Create_m2681FB04AB964D3D50E7F26C82EF98CEC0B0294A (void);
// 0x000000AC System.Void Mono.Net.CFRunLoop::CFRunLoopAddSource(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFRunLoop_CFRunLoopAddSource_mFA7C2F2321FE055A2F5AAB41F118C36602A32B48 (void);
// 0x000000AD System.Void Mono.Net.CFRunLoop::CFRunLoopRemoveSource(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFRunLoop_CFRunLoopRemoveSource_mAA8641E0D03103F914264D9FF7C3696B9AAE6B53 (void);
// 0x000000AE System.Int32 Mono.Net.CFRunLoop::CFRunLoopRunInMode(System.IntPtr,System.Double,System.Boolean)
extern void CFRunLoop_CFRunLoopRunInMode_mB3B8C300A003665D0AAC95B9C8C86BAFC5BA11B2 (void);
// 0x000000AF System.IntPtr Mono.Net.CFRunLoop::CFRunLoopGetCurrent()
extern void CFRunLoop_CFRunLoopGetCurrent_m13D1F1ACC2FD90029A99B0AF2052FA220AB62AD8 (void);
// 0x000000B0 System.Void Mono.Net.CFRunLoop::CFRunLoopStop(System.IntPtr)
extern void CFRunLoop_CFRunLoopStop_m57693DF0D380734ADE3B4939236743E630B87A20 (void);
// 0x000000B1 System.Void Mono.Net.CFRunLoop::.ctor(System.IntPtr,System.Boolean)
extern void CFRunLoop__ctor_m94B20293C11883CF75A63AB136599BC3EE92A8EB (void);
// 0x000000B2 Mono.Net.CFRunLoop Mono.Net.CFRunLoop::get_CurrentRunLoop()
extern void CFRunLoop_get_CurrentRunLoop_mB01FC5D5DA544A97FB5B0B63AE4311DEC3220083 (void);
// 0x000000B3 System.Void Mono.Net.CFRunLoop::AddSource(System.IntPtr,Mono.Net.CFString)
extern void CFRunLoop_AddSource_m8A3BA481E15B1F6EFC82953CB0C5C13923F3627B (void);
// 0x000000B4 System.Void Mono.Net.CFRunLoop::RemoveSource(System.IntPtr,Mono.Net.CFString)
extern void CFRunLoop_RemoveSource_m7F0B16955EA2C242D0A1B5F51895A09EC1281CBF (void);
// 0x000000B5 System.Int32 Mono.Net.CFRunLoop::RunInMode(Mono.Net.CFString,System.Double,System.Boolean)
extern void CFRunLoop_RunInMode_mBDAC5E28522F4D823C182B34C8F91C30DD437D4E (void);
// 0x000000B6 System.Void Mono.Net.CFRunLoop::Stop()
extern void CFRunLoop_Stop_m49E01C4720388A9CA079F8B048B577558A6B63CD (void);
// 0x000000B7 System.Void Mono.Net.CFProxy::.cctor()
extern void CFProxy__cctor_mCDDCA90FB251CF5C898BA5F856A03B3F342797A7 (void);
// 0x000000B8 System.Void Mono.Net.CFProxy::.ctor(Mono.Net.CFDictionary)
extern void CFProxy__ctor_m67D1B8DBACF6EA8839C977130D39E890C4723A39 (void);
// 0x000000B9 Mono.Net.CFProxyType Mono.Net.CFProxy::CFProxyTypeToEnum(System.IntPtr)
extern void CFProxy_CFProxyTypeToEnum_mFACFCE7E1EA03988C7105DF73289F3693731DA41 (void);
// 0x000000BA System.IntPtr Mono.Net.CFProxy::get_AutoConfigurationJavaScript()
extern void CFProxy_get_AutoConfigurationJavaScript_mB5F43867F3AC1FC61BD404178C50EEFF4D609A61 (void);
// 0x000000BB System.IntPtr Mono.Net.CFProxy::get_AutoConfigurationUrl()
extern void CFProxy_get_AutoConfigurationUrl_m0C5688FBA050FC7228E1FBDF5607800E9BF0EA87 (void);
// 0x000000BC System.String Mono.Net.CFProxy::get_HostName()
extern void CFProxy_get_HostName_m0BE8DBDA2EC6992EA7C7B7325364C497174A34CE (void);
// 0x000000BD System.String Mono.Net.CFProxy::get_Password()
extern void CFProxy_get_Password_m3825254AB68E6CFCAB964C8BBB77B8B94475D30D (void);
// 0x000000BE System.Int32 Mono.Net.CFProxy::get_Port()
extern void CFProxy_get_Port_m0A52ACB0E89915ED1A81940E6F7B0A1F5EB7BEA5 (void);
// 0x000000BF Mono.Net.CFProxyType Mono.Net.CFProxy::get_ProxyType()
extern void CFProxy_get_ProxyType_m3283AE01B332F8D6D89F70F205A948A3AD4D6B5D (void);
// 0x000000C0 System.String Mono.Net.CFProxy::get_Username()
extern void CFProxy_get_Username_m1DAB5C1C340E98AA8570B882D9F9DC827321313D (void);
// 0x000000C1 System.Void Mono.Net.CFProxySettings::.cctor()
extern void CFProxySettings__cctor_m2694CDB9885EE8F2B9F6EF4385AC41ED53C68646 (void);
// 0x000000C2 System.Void Mono.Net.CFProxySettings::.ctor(Mono.Net.CFDictionary)
extern void CFProxySettings__ctor_m305ADF5DD84EC2EE389F1CDA80F32AC916248CE5 (void);
// 0x000000C3 Mono.Net.CFDictionary Mono.Net.CFProxySettings::get_Dictionary()
extern void CFProxySettings_get_Dictionary_mB467239A85647E2D8D76844689D8DFC39578E121 (void);
// 0x000000C4 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptSequential(System.IntPtr,System.IntPtr,System.IntPtr&)
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptSequential_mEBBD43A71AB1DD3974AEE7CCC93E13F5E80F0207 (void);
// 0x000000C5 System.IntPtr Mono.Net.CFNetwork::CFNetworkExecuteProxyAutoConfigurationURL(System.IntPtr,System.IntPtr,Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback,Mono.Net.CFStreamClientContext&)
extern void CFNetwork_CFNetworkExecuteProxyAutoConfigurationURL_mC58ED74443390B487F87CB43EAA8F28E1E7D80FA (void);
// 0x000000C6 System.Void Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptThread()
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread_m87C679827AD4065EBFE640A944169877B18B6295 (void);
// 0x000000C7 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScript(System.IntPtr,System.IntPtr,System.IntPtr&)
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScript_m60AA5977018E352A62A14DC0A9206581B6BB1C3F (void);
// 0x000000C8 Mono.Net.CFArray Mono.Net.CFNetwork::CopyProxiesForAutoConfigurationScript(System.IntPtr,Mono.Net.CFUrl)
extern void CFNetwork_CopyProxiesForAutoConfigurationScript_m0720953EADB5FAE26DC088AEEFDF0238F8C2F62C (void);
// 0x000000C9 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForAutoConfigurationScript(System.IntPtr,Mono.Net.CFUrl)
extern void CFNetwork_GetProxiesForAutoConfigurationScript_m4E27540B670B7445FF350FAC09C2C4E3D5E51C9F (void);
// 0x000000CA Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForAutoConfigurationScript(System.IntPtr,System.Uri)
extern void CFNetwork_GetProxiesForAutoConfigurationScript_mB2B534BA692731A12D6A5192002019B5BAE0C64D (void);
// 0x000000CB Mono.Net.CFProxy[] Mono.Net.CFNetwork::ExecuteProxyAutoConfigurationURL(System.IntPtr,System.Uri)
extern void CFNetwork_ExecuteProxyAutoConfigurationURL_m49A5649BB3FB43D1ED544D2861AEBFEFF0618A66 (void);
// 0x000000CC System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForURL(System.IntPtr,System.IntPtr)
extern void CFNetwork_CFNetworkCopyProxiesForURL_m94FFB6E33862C27721FA9F26F0BF1E291691368C (void);
// 0x000000CD Mono.Net.CFArray Mono.Net.CFNetwork::CopyProxiesForURL(Mono.Net.CFUrl,Mono.Net.CFDictionary)
extern void CFNetwork_CopyProxiesForURL_m8CB22D7F5FB1F4987576EBF90590F10640486A5F (void);
// 0x000000CE Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForURL(Mono.Net.CFUrl,Mono.Net.CFProxySettings)
extern void CFNetwork_GetProxiesForURL_m7694384E4E21659A6399D6891A04EEAF1294A13A (void);
// 0x000000CF Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForUri(System.Uri,Mono.Net.CFProxySettings)
extern void CFNetwork_GetProxiesForUri_mC6A6F2A3B3EFC95C34ACDBA2D33B162C549ABE03 (void);
// 0x000000D0 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopySystemProxySettings()
extern void CFNetwork_CFNetworkCopySystemProxySettings_m1E565FD09D0467C8CCEEE5489020600B6C14A103 (void);
// 0x000000D1 Mono.Net.CFProxySettings Mono.Net.CFNetwork::GetSystemProxySettings()
extern void CFNetwork_GetSystemProxySettings_mC07138110C2A249FE50BAF69459C3B2C8231A9FF (void);
// 0x000000D2 System.Net.IWebProxy Mono.Net.CFNetwork::GetDefaultProxy()
extern void CFNetwork_GetDefaultProxy_m436083745C406965606C55E3AC139978CBF45EC0 (void);
// 0x000000D3 System.Void Mono.Net.CFNetwork::.cctor()
extern void CFNetwork__cctor_m356780C556B67F6401B5C7141E4BCBC9A035C932 (void);
// 0x000000D4 System.Void Mono.Net.CFNetwork/GetProxyData::Dispose()
extern void GetProxyData_Dispose_m0D9268338DB4B3A6853E386D6DCE4F77F9C04945 (void);
// 0x000000D5 System.Void Mono.Net.CFNetwork/GetProxyData::.ctor()
extern void GetProxyData__ctor_m1D6DC9726176842C506F8F2F97E752FDD3D0A07C (void);
// 0x000000D6 System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::.ctor(System.Object,System.IntPtr)
extern void CFProxyAutoConfigurationResultCallback__ctor_m249A7EA0776BDBD70E5F3B72413E5F479C38C141 (void);
// 0x000000D7 System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFProxyAutoConfigurationResultCallback_Invoke_m954B06FC7D5EF619F76FD0365F40050A7F6676AC (void);
// 0x000000D8 System.Void Mono.Net.CFNetwork/CFWebProxy::.ctor()
extern void CFWebProxy__ctor_m4DF517ED54DD3EBC8CF423DE769E71DD6B8D8A14 (void);
// 0x000000D9 System.Net.ICredentials Mono.Net.CFNetwork/CFWebProxy::get_Credentials()
extern void CFWebProxy_get_Credentials_mDD31387A4FB46336C159D558D293F429C5837D80 (void);
// 0x000000DA System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxyUri(Mono.Net.CFProxy,System.Net.NetworkCredential&)
extern void CFWebProxy_GetProxyUri_m8E6C26B0360FE86C6B5152CCB4E745A17DABCCD2 (void);
// 0x000000DB System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxyUriFromScript(System.IntPtr,System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_GetProxyUriFromScript_m8D94ED537C1D3B9D603517DAA3BB6348184DD814 (void);
// 0x000000DC System.Uri Mono.Net.CFNetwork/CFWebProxy::ExecuteProxyAutoConfigurationURL(System.IntPtr,System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_ExecuteProxyAutoConfigurationURL_mE61275371E4954BE5EA9F86F81924CAD19B9E878 (void);
// 0x000000DD System.Uri Mono.Net.CFNetwork/CFWebProxy::SelectProxy(Mono.Net.CFProxy[],System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_SelectProxy_m7C2316E9D3AE8A9B9FD5684C2EF711F759335858 (void);
// 0x000000DE System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxy(System.Uri)
extern void CFWebProxy_GetProxy_mB13A91B37B93CD6889E73855CA4C5B5F5FF1B3F0 (void);
// 0x000000DF System.Boolean Mono.Net.CFNetwork/CFWebProxy::IsBypassed(System.Uri)
extern void CFWebProxy_IsBypassed_m6DD643FC5C0CC4B2EB1BA18CD7A70E76EBC653BF (void);
// 0x000000E0 System.Void Mono.Net.CFNetwork/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_mECB957C4CC63A5C8FD201D14D2A2E5B7858065A7 (void);
// 0x000000E1 System.Void Mono.Net.CFNetwork/<>c__DisplayClass13_0::<ExecuteProxyAutoConfigurationURL>b__0(System.IntPtr,System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass13_0_U3CExecuteProxyAutoConfigurationURLU3Eb__0_m5B0690DED785108C4C7E5502CD48DCC90BF12B57 (void);
// 0x000000E2 System.Int32 Mono.Net.Security.BufferOffsetSize::get_EndOffset()
extern void BufferOffsetSize_get_EndOffset_m114650CE0C422157F8EDCD8C0F1B89C5FFE7F9C9 (void);
// 0x000000E3 System.Int32 Mono.Net.Security.BufferOffsetSize::get_Remaining()
extern void BufferOffsetSize_get_Remaining_mB3CB4287B2AAAD7976374B914E95ABFCE71B1A4E (void);
// 0x000000E4 System.Void Mono.Net.Security.BufferOffsetSize::.ctor(System.Byte[],System.Int32,System.Int32)
extern void BufferOffsetSize__ctor_mB62BB1F461998563FB6793F509FF26FB79B81955 (void);
// 0x000000E5 System.String Mono.Net.Security.BufferOffsetSize::ToString()
extern void BufferOffsetSize_ToString_m2C7B9A215EDE5C22ED8C51534365E110BB56C083 (void);
// 0x000000E6 System.Void Mono.Net.Security.BufferOffsetSize2::.ctor(System.Int32)
extern void BufferOffsetSize2__ctor_m773DC687399F95F23BE42179B942303C0B52FF07 (void);
// 0x000000E7 System.Void Mono.Net.Security.BufferOffsetSize2::Reset()
extern void BufferOffsetSize2_Reset_m1B80AE03ED0C2BAC447F3BDEC8F827CEE6053E7F (void);
// 0x000000E8 System.Void Mono.Net.Security.BufferOffsetSize2::MakeRoom(System.Int32)
extern void BufferOffsetSize2_MakeRoom_mCE9261D07E745C72E3032A9FDC19FA54FEF0BE28 (void);
// 0x000000E9 System.Void Mono.Net.Security.BufferOffsetSize2::AppendData(System.Byte[],System.Int32,System.Int32)
extern void BufferOffsetSize2_AppendData_mA85DD811BF73EB8F153F9DB2668C11E907F258A5 (void);
// 0x000000EA System.Int32 Mono.Net.Security.AsyncProtocolResult::get_UserResult()
extern void AsyncProtocolResult_get_UserResult_mEDF85928DEE138CA072E0BADB697024616981ABF (void);
// 0x000000EB System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.AsyncProtocolResult::get_Error()
extern void AsyncProtocolResult_get_Error_m2A01329BA71151C59E17E3D8812932AD02EF5C05 (void);
// 0x000000EC System.Void Mono.Net.Security.AsyncProtocolResult::.ctor(System.Int32)
extern void AsyncProtocolResult__ctor_m2999944493F7C75F19D5BA3811118ED10A889305 (void);
// 0x000000ED System.Void Mono.Net.Security.AsyncProtocolResult::.ctor(System.Runtime.ExceptionServices.ExceptionDispatchInfo)
extern void AsyncProtocolResult__ctor_m80187A7036019F9768BA1941362CB6785F10E99F (void);
// 0x000000EE Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.AsyncProtocolRequest::get_Parent()
extern void AsyncProtocolRequest_get_Parent_m20DA5526115969E9D32B61999A044FF0618AFF92 (void);
// 0x000000EF System.Boolean Mono.Net.Security.AsyncProtocolRequest::get_RunSynchronously()
extern void AsyncProtocolRequest_get_RunSynchronously_m5E10561209866EE44A27D35A1F4762008063B4BF (void);
// 0x000000F0 System.String Mono.Net.Security.AsyncProtocolRequest::get_Name()
extern void AsyncProtocolRequest_get_Name_m3D5DC63A43FFCA24B1E5A9825B76BD391D790F84 (void);
// 0x000000F1 System.Int32 Mono.Net.Security.AsyncProtocolRequest::get_UserResult()
extern void AsyncProtocolRequest_get_UserResult_mA77AFFB0D9A5FD69E5EEC51CB0F80C25E31D0759 (void);
// 0x000000F2 System.Void Mono.Net.Security.AsyncProtocolRequest::set_UserResult(System.Int32)
extern void AsyncProtocolRequest_set_UserResult_mD84274B3348783A6E03B9000BB82E0737E1EC974 (void);
// 0x000000F3 System.Void Mono.Net.Security.AsyncProtocolRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean)
extern void AsyncProtocolRequest__ctor_mDF1F675DC3E001867DFFD9B1C14CF5559BE3035A (void);
// 0x000000F4 System.Void Mono.Net.Security.AsyncProtocolRequest::RequestRead(System.Int32)
extern void AsyncProtocolRequest_RequestRead_mD55DC015A50E42EF2FA7DB75FE1E7E3FCFA3CFA0 (void);
// 0x000000F5 System.Void Mono.Net.Security.AsyncProtocolRequest::RequestWrite()
extern void AsyncProtocolRequest_RequestWrite_mA6AB8ACEA16A14CD6A232DA256C417CD183EE69F (void);
// 0x000000F6 System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult> Mono.Net.Security.AsyncProtocolRequest::StartOperation(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_StartOperation_m3BFF3E84B25BBE13881D3592FF4CAEC3736FBEDD (void);
// 0x000000F7 System.Threading.Tasks.Task Mono.Net.Security.AsyncProtocolRequest::ProcessOperation(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_ProcessOperation_m7210D0C2351D69FF9FF798860C85FAA7F91C050F (void);
// 0x000000F8 System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>> Mono.Net.Security.AsyncProtocolRequest::InnerRead(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_InnerRead_mF418FD1D9403BFD08A44D00EEAF8E9F3ECD25A02 (void);
// 0x000000F9 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncProtocolRequest::Run(Mono.Net.Security.AsyncOperationStatus)
// 0x000000FA System.String Mono.Net.Security.AsyncProtocolRequest::ToString()
extern void AsyncProtocolRequest_ToString_m76F3449064B096829BE4288E38F10DF76B124F1F (void);
// 0x000000FB System.Void Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::MoveNext()
extern void U3CStartOperationU3Ed__23_MoveNext_mDE591A3806D9523FC8D2E26ED510CEE7963F8FF2 (void);
// 0x000000FC System.Void Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartOperationU3Ed__23_SetStateMachine_mA0C8C029457FAAE036C6098FDC66C98574D0BD03 (void);
// 0x000000FD System.Void Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::MoveNext()
extern void U3CProcessOperationU3Ed__24_MoveNext_mA73F0FD80CE65D2E3E12390E49E3F34CFF47E98B (void);
// 0x000000FE System.Void Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessOperationU3Ed__24_SetStateMachine_mA9912D191EE4A99536A61DEED059DC89B765A823 (void);
// 0x000000FF System.Void Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::MoveNext()
extern void U3CInnerReadU3Ed__25_MoveNext_mC4567E370C71DA9DA0F704C570308D106D4DDB2C (void);
// 0x00000100 System.Void Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadU3Ed__25_SetStateMachine_m15DB2E97371A46CBCCD53DCAE7A4FE6F5FF84DCE (void);
// 0x00000101 System.Void Mono.Net.Security.AsyncHandshakeRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean)
extern void AsyncHandshakeRequest__ctor_m741ADA23A424389AD20579B23AE2DBE8FA00CFF7 (void);
// 0x00000102 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncHandshakeRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncHandshakeRequest_Run_m345A76BCFDDE5E054B97BD4F5FE238A05D3F4C26 (void);
// 0x00000103 Mono.Net.Security.BufferOffsetSize Mono.Net.Security.AsyncReadOrWriteRequest::get_UserBuffer()
extern void AsyncReadOrWriteRequest_get_UserBuffer_mD158BF301713ADC8899B3F3CFF7D18B76A956417 (void);
// 0x00000104 System.Int32 Mono.Net.Security.AsyncReadOrWriteRequest::get_CurrentSize()
extern void AsyncReadOrWriteRequest_get_CurrentSize_m4230AD05749403B840042BB7531124C6A96980E6 (void);
// 0x00000105 System.Void Mono.Net.Security.AsyncReadOrWriteRequest::set_CurrentSize(System.Int32)
extern void AsyncReadOrWriteRequest_set_CurrentSize_mBCD300A1CD6FF110A3527E80711A820FEFC2F9E1 (void);
// 0x00000106 System.Void Mono.Net.Security.AsyncReadOrWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncReadOrWriteRequest__ctor_m4DCAC7C20097985A9A4FDCB73719DD2E508CF07D (void);
// 0x00000107 System.String Mono.Net.Security.AsyncReadOrWriteRequest::ToString()
extern void AsyncReadOrWriteRequest_ToString_m1D1115D6B97BD767A3482863B6B64642D0733696 (void);
// 0x00000108 System.Void Mono.Net.Security.AsyncReadRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncReadRequest__ctor_mE67D11354154F1844761E0FFB869BBF05F1AE741 (void);
// 0x00000109 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncReadRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncReadRequest_Run_m2D98252200B926F53624E90AE9649767F0C110ED (void);
// 0x0000010A System.Void Mono.Net.Security.AsyncWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncWriteRequest__ctor_m627E554957F61C80484B10AD0D85849C1E9A0548 (void);
// 0x0000010B Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncWriteRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncWriteRequest_Run_m10D193A545B0D8D5B68FED13056B0EE6099A92A0 (void);
// 0x0000010C System.Void Mono.Net.Security.ServerCertValidationCallbackWrapper::.ctor(System.Object,System.IntPtr)
extern void ServerCertValidationCallbackWrapper__ctor_mA2FB8FF1A944C192B300001F0384A1B84018EBF6 (void);
// 0x0000010D System.Boolean Mono.Net.Security.ServerCertValidationCallbackWrapper::Invoke(System.Net.ServerCertValidationCallback,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors)
extern void ServerCertValidationCallbackWrapper_Invoke_mF3D5202B761BCC08F34C786C7202E8CACC555920 (void);
// 0x0000010E Mono.Security.Interface.ICertificateValidator Mono.Net.Security.ChainValidationHelper::GetInternalValidator(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void ChainValidationHelper_GetInternalValidator_mDC966DAB9B1384F7BF4427E2296CA0DD5E38F8B1 (void);
// 0x0000010F Mono.Net.Security.ChainValidationHelper Mono.Net.Security.ChainValidationHelper::Create(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings&,Mono.Net.Security.MonoTlsStream)
extern void ChainValidationHelper_Create_mB28B56589E1EA418ECABCE9DD1D67190CE89BF26 (void);
// 0x00000110 System.Void Mono.Net.Security.ChainValidationHelper::.ctor(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings,System.Boolean,Mono.Net.Security.MonoTlsStream,Mono.Net.Security.ServerCertValidationCallbackWrapper)
extern void ChainValidationHelper__ctor_m7B48076597464A2A15D9F3975FD8511D2ECFD26A (void);
// 0x00000111 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.ChainValidationHelper::DefaultSelectionCallback(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void ChainValidationHelper_DefaultSelectionCallback_m9662623B23235E63F7081F6632A3305D3C6C0220 (void);
// 0x00000112 Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.ChainValidationHelper::get_Settings()
extern void ChainValidationHelper_get_Settings_m94E2DC79CB696A4F54956D812983E62FEB33D22E (void);
// 0x00000113 System.Boolean Mono.Net.Security.ChainValidationHelper::SelectClientCertificate(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.Security.Cryptography.X509Certificates.X509Certificate&)
extern void ChainValidationHelper_SelectClientCertificate_m77B577FD626B93B7018F62E6843727168F7876EA (void);
// 0x00000114 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateCertificate(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern void ChainValidationHelper_ValidateCertificate_m859E258B2CF6F570984C618241A26AAFE2B7104D (void);
// 0x00000115 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateChain(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.Security.SslPolicyErrors)
extern void ChainValidationHelper_ValidateChain_m60FB1695D7C8F3A0C01C864FDFEC2EC3CF648F79 (void);
// 0x00000116 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateChain(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain&,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.Security.SslPolicyErrors)
extern void ChainValidationHelper_ValidateChain_m6E88B46B65F70D52BDD9438D218D7E3BE55BB1C7 (void);
// 0x00000117 System.Void Mono.Net.Security.MobileAuthenticatedStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Security.Interface.MonoTlsProvider)
extern void MobileAuthenticatedStream__ctor_mAB5975E8F7301C8D7FE2B6732BEBC185FB61C369 (void);
// 0x00000118 Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileAuthenticatedStream::get_Settings()
extern void MobileAuthenticatedStream_get_Settings_m21B268EC66FBAF762EC443B8FC784F1251444A96 (void);
// 0x00000119 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MobileAuthenticatedStream::get_Provider()
extern void MobileAuthenticatedStream_get_Provider_m6884D1ACCE776CE9EBF8803A56C53A496E551C63 (void);
// 0x0000011A System.Void Mono.Net.Security.MobileAuthenticatedStream::CheckThrow(System.Boolean,System.Boolean)
extern void MobileAuthenticatedStream_CheckThrow_m9E35E722A793A807809AD00C9756997AB7561396 (void);
// 0x0000011B System.Exception Mono.Net.Security.MobileAuthenticatedStream::GetSSPIException(System.Exception)
extern void MobileAuthenticatedStream_GetSSPIException_m04F38FF55AEEC19087840F3A722D2C225050F427 (void);
// 0x0000011C System.Exception Mono.Net.Security.MobileAuthenticatedStream::GetIOException(System.Exception,System.String)
extern void MobileAuthenticatedStream_GetIOException_m80A6F9660142728B73A169E1B09AB8BE268DD517 (void);
// 0x0000011D System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.MobileAuthenticatedStream::SetException(System.Exception)
extern void MobileAuthenticatedStream_SetException_m490704BA8728AB01E7BA158FE545FD4D7C080448 (void);
// 0x0000011E System.Void Mono.Net.Security.MobileAuthenticatedStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern void MobileAuthenticatedStream_AuthenticateAsClient_mEB1237B52A4AB1FF3D7D3E52F61CE78A744973FC (void);
// 0x0000011F System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::AuthenticateAsClientAsync(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern void MobileAuthenticatedStream_AuthenticateAsClientAsync_mBD8A0E7FFAFDE608063E545EF057304AF2C35EF2 (void);
// 0x00000120 System.Net.Security.AuthenticatedStream Mono.Net.Security.MobileAuthenticatedStream::get_AuthenticatedStream()
extern void MobileAuthenticatedStream_get_AuthenticatedStream_m4634AB6CFBFE0A9B9A37E267704E1E497FE86589 (void);
// 0x00000121 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::ProcessAuthentication(System.Boolean,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void MobileAuthenticatedStream_ProcessAuthentication_mE602EA95BF254196F19CC50E5D209459558145EE (void);
// 0x00000122 Mono.Net.Security.MobileTlsContext Mono.Net.Security.MobileAuthenticatedStream::CreateContext(System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
// 0x00000123 System.IAsyncResult Mono.Net.Security.MobileAuthenticatedStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void MobileAuthenticatedStream_BeginRead_m6EFD75415D783607848E1ADE3D70D8B353A4494F (void);
// 0x00000124 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::EndRead(System.IAsyncResult)
extern void MobileAuthenticatedStream_EndRead_m79E9056842EE2E0CF0D575A00F1EBD4E6AAA91C4 (void);
// 0x00000125 System.IAsyncResult Mono.Net.Security.MobileAuthenticatedStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void MobileAuthenticatedStream_BeginWrite_mE179BF436CBF0A173149899E11516C4DF1CEEABC (void);
// 0x00000126 System.Void Mono.Net.Security.MobileAuthenticatedStream::EndWrite(System.IAsyncResult)
extern void MobileAuthenticatedStream_EndWrite_mFCAC0306927C198919FD0F4933063151EBF32B78 (void);
// 0x00000127 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::Read(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_Read_m6EC3DEF7CDD081863F58DC0E16120040DEB79622 (void);
// 0x00000128 System.Void Mono.Net.Security.MobileAuthenticatedStream::Write(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_Write_mD339F8D2C127E4A82A7C22A0EE9AF82F0A07A942 (void);
// 0x00000129 System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_ReadAsync_mFA908C90B562D2C958DC1762A90F883DB3AC5F13 (void);
// 0x0000012A System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_WriteAsync_m764C5294A8B64C33B593CD388DC0BD9FFE120753 (void);
// 0x0000012B System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::StartOperation(Mono.Net.Security.MobileAuthenticatedStream/OperationType,Mono.Net.Security.AsyncProtocolRequest,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_StartOperation_m8E632D323D991C8393DE86E4EC3E02DCA5AB31AF (void);
// 0x0000012C System.Int32 Mono.Net.Security.MobileAuthenticatedStream::InternalRead(System.Byte[],System.Int32,System.Int32,System.Boolean&)
extern void MobileAuthenticatedStream_InternalRead_m90FE0F2015227506EF5E6EA18E49EEA5E3A1C319 (void);
// 0x0000012D System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::InternalRead(Mono.Net.Security.AsyncProtocolRequest,Mono.Net.Security.BufferOffsetSize,System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalRead_m5989243EA8E865C58630A151F50FD9286501238A (void);
// 0x0000012E System.Boolean Mono.Net.Security.MobileAuthenticatedStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalWrite_mDCC759D5D81736625897B956239DBEEE8F7AE743 (void);
// 0x0000012F System.Boolean Mono.Net.Security.MobileAuthenticatedStream::InternalWrite(Mono.Net.Security.AsyncProtocolRequest,Mono.Net.Security.BufferOffsetSize2,System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalWrite_m0B6A441B8194AAE474EECE582DA3627AB26CFB54 (void);
// 0x00000130 System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::InnerRead(System.Boolean,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_InnerRead_m62766E47172B5468B6934BED507A4EF4054396ED (void);
// 0x00000131 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::InnerWrite(System.Boolean,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_InnerWrite_m137287DEDB6C2BC5E8DDDAC999787FA5A0B4B570 (void);
// 0x00000132 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.MobileAuthenticatedStream::ProcessHandshake(Mono.Net.Security.AsyncOperationStatus)
extern void MobileAuthenticatedStream_ProcessHandshake_mEB04A5B2D731558886E0FE3D20174BC0F1DFE091 (void);
// 0x00000133 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::ProcessRead(Mono.Net.Security.BufferOffsetSize)
extern void MobileAuthenticatedStream_ProcessRead_mB8FC6C872B55E0631A80824636220F3B73270441 (void);
// 0x00000134 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::ProcessWrite(Mono.Net.Security.BufferOffsetSize)
extern void MobileAuthenticatedStream_ProcessWrite_mC26A594E550853A399B5AD111CE704D06C500992 (void);
// 0x00000135 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_IsAuthenticated()
extern void MobileAuthenticatedStream_get_IsAuthenticated_m46A9D2671C2864D1F5C559FC6C5284701BA8AB1E (void);
// 0x00000136 System.Void Mono.Net.Security.MobileAuthenticatedStream::Dispose(System.Boolean)
extern void MobileAuthenticatedStream_Dispose_m0D094AAD63D7E66A3F88EA02B58CC039BF9D0F52 (void);
// 0x00000137 System.Void Mono.Net.Security.MobileAuthenticatedStream::Flush()
extern void MobileAuthenticatedStream_Flush_mCD0E572BA47A644E4B22167074AC8B4B926E6C60 (void);
// 0x00000138 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileAuthenticatedStream::get_InternalLocalCertificate()
extern void MobileAuthenticatedStream_get_InternalLocalCertificate_m2CD310D810957E8E1F819BA7AFF4E6640BFB136F (void);
// 0x00000139 System.Int64 Mono.Net.Security.MobileAuthenticatedStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void MobileAuthenticatedStream_Seek_mC6C077D712D53180D6D3676CCAB67810A57041DE (void);
// 0x0000013A System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanRead()
extern void MobileAuthenticatedStream_get_CanRead_m206F7DA5CC6E445B2E23678344AD847C72929BED (void);
// 0x0000013B System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanWrite()
extern void MobileAuthenticatedStream_get_CanWrite_m6FBD6254C19E3391BAC2EFFDE46005BB0CDDEA84 (void);
// 0x0000013C System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanSeek()
extern void MobileAuthenticatedStream_get_CanSeek_mF7A4E5EC7EAFCAA07CBDD7D35B1A764177612503 (void);
// 0x0000013D System.Int64 Mono.Net.Security.MobileAuthenticatedStream::get_Length()
extern void MobileAuthenticatedStream_get_Length_mF8ACA717EFBD5E1E15B9ABBEFC9F5EC41127469C (void);
// 0x0000013E System.Int64 Mono.Net.Security.MobileAuthenticatedStream::get_Position()
extern void MobileAuthenticatedStream_get_Position_mDC516AFB4C932E61DA6DBFEF056CD9D798129035 (void);
// 0x0000013F System.Void Mono.Net.Security.MobileAuthenticatedStream::set_Position(System.Int64)
extern void MobileAuthenticatedStream_set_Position_mDA69F8B3575A0D6E3B11621BCB334371E80B9D56 (void);
// 0x00000140 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::get_ReadTimeout()
extern void MobileAuthenticatedStream_get_ReadTimeout_m8CB544C81A7A2D5B882E91A691C97513912DB866 (void);
// 0x00000141 System.Void Mono.Net.Security.MobileAuthenticatedStream::set_ReadTimeout(System.Int32)
extern void MobileAuthenticatedStream_set_ReadTimeout_m152C3065A8D914E2F6CDFB4E2EDC19DD8C466082 (void);
// 0x00000142 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::get_WriteTimeout()
extern void MobileAuthenticatedStream_get_WriteTimeout_mDB098ADC853F298E298C4712405BF78BC4C4FFCC (void);
// 0x00000143 System.Void Mono.Net.Security.MobileAuthenticatedStream::.cctor()
extern void MobileAuthenticatedStream__cctor_mAE00872557415DE85E6CB57122CAD50E9F3080FE (void);
// 0x00000144 System.Void Mono.Net.Security.MobileAuthenticatedStream::<InnerWrite>b__67_0()
extern void MobileAuthenticatedStream_U3CInnerWriteU3Eb__67_0_mEC1BC0A19130E44F6E542F229CE3FFAC0CD78697 (void);
// 0x00000145 System.Void Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47::MoveNext()
extern void U3CProcessAuthenticationU3Ed__47_MoveNext_m43E7652EA23BFB6926E99D87A635920E8C10B422 (void);
// 0x00000146 System.Void Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessAuthenticationU3Ed__47_SetStateMachine_mD020F0C8569DCDC3496AF18CE204E77E7919A6EC (void);
// 0x00000147 System.Void Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58::MoveNext()
extern void U3CStartOperationU3Ed__58_MoveNext_mE4390271E237A2642BC6C9CC2522A860DB0AC91E (void);
// 0x00000148 System.Void Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartOperationU3Ed__58_SetStateMachine_m6D7E173F740C08FCBBA924ADB742B956BC31B92F (void);
// 0x00000149 System.Void Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0::.ctor()
extern void U3CU3Ec__DisplayClass66_0__ctor_m0649BF5458CDCAB6017C443988C36967E3000993 (void);
// 0x0000014A System.Int32 Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0::<InnerRead>b__0()
extern void U3CU3Ec__DisplayClass66_0_U3CInnerReadU3Eb__0_m3F3293E1DD48D7532F3B8D84D7C8402698D60F36 (void);
// 0x0000014B System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66::MoveNext()
extern void U3CInnerReadU3Ed__66_MoveNext_m5DFDC2139602BBC2F86D14BDA64B4A49ECDD90EB (void);
// 0x0000014C System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadU3Ed__66_SetStateMachine_mBA42C0B565B5D3F43D109D2A8CC66EE8CE9BC920 (void);
// 0x0000014D System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67::MoveNext()
extern void U3CInnerWriteU3Ed__67_MoveNext_mDF6F0FEA0FCAE97EEB2E5A2546446C00674CCEA3 (void);
// 0x0000014E System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerWriteU3Ed__67_SetStateMachine_m7448CF503BCD3FEC38241FB22DBA3AB4B91FF5B1 (void);
// 0x0000014F System.Void Mono.Net.Security.MobileTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void MobileTlsContext__ctor_mBC6250BC13D9F2395C790689A48AC34C533D6227 (void);
// 0x00000150 Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.MobileTlsContext::get_Parent()
extern void MobileTlsContext_get_Parent_mC509F430FE5581A104C62FB3A08AE9D97DE19098 (void);
// 0x00000151 Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileTlsContext::get_Settings()
extern void MobileTlsContext_get_Settings_m68D8D1488C1778311BE2EE65F549081B0E7D362C (void);
// 0x00000152 System.Boolean Mono.Net.Security.MobileTlsContext::get_IsAuthenticated()
// 0x00000153 System.Boolean Mono.Net.Security.MobileTlsContext::get_IsServer()
extern void MobileTlsContext_get_IsServer_m79E765F4FA8DAF1C98322134D48F6CACBEC824B7 (void);
// 0x00000154 System.String Mono.Net.Security.MobileTlsContext::get_TargetHost()
extern void MobileTlsContext_get_TargetHost_m82FF5791372BEF41AC5E73E368824231CC4F5528 (void);
// 0x00000155 System.String Mono.Net.Security.MobileTlsContext::get_ServerName()
extern void MobileTlsContext_get_ServerName_m3CF7B9F7D249B9B2F553B5A72F439B5502229BF3 (void);
// 0x00000156 System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Net.Security.MobileTlsContext::get_ClientCertificates()
extern void MobileTlsContext_get_ClientCertificates_m675A2D5E4F7FCB85B4B412A5659953184065C9EE (void);
// 0x00000157 System.Void Mono.Net.Security.MobileTlsContext::StartHandshake()
// 0x00000158 System.Boolean Mono.Net.Security.MobileTlsContext::ProcessHandshake()
// 0x00000159 System.Void Mono.Net.Security.MobileTlsContext::FinishHandshake()
// 0x0000015A System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileTlsContext::get_LocalServerCertificate()
extern void MobileTlsContext_get_LocalServerCertificate_m20FDC85F1F18C42644D48872EBAF9A6247624E09 (void);
// 0x0000015B System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileTlsContext::get_LocalClientCertificate()
// 0x0000015C System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileTlsContext::Read(System.Byte[],System.Int32,System.Int32)
// 0x0000015D System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileTlsContext::Write(System.Byte[],System.Int32,System.Int32)
// 0x0000015E System.Void Mono.Net.Security.MobileTlsContext::Shutdown()
// 0x0000015F System.Boolean Mono.Net.Security.MobileTlsContext::ValidateCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern void MobileTlsContext_ValidateCertificate_m3C91E89E8C148DA23146F3749DD323681CFEF9D1 (void);
// 0x00000160 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileTlsContext::SelectClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void MobileTlsContext_SelectClientCertificate_m0B7118391910FA19C13F307ECED5DE52D586948E (void);
// 0x00000161 System.Void Mono.Net.Security.MobileTlsContext::Dispose()
extern void MobileTlsContext_Dispose_m7C7D11F95AC2F7663D397D6FA4ECF82ECC7C0F9A (void);
// 0x00000162 System.Void Mono.Net.Security.MobileTlsContext::Dispose(System.Boolean)
extern void MobileTlsContext_Dispose_m020A795EE75CF99916490B91697E0EB31C5A2F94 (void);
// 0x00000163 System.Void Mono.Net.Security.MobileTlsContext::Finalize()
extern void MobileTlsContext_Finalize_mC58200C1813B8458AD3DB37BC15338F2AC750DF9 (void);
// 0x00000164 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::GetProviderInternal()
extern void MonoTlsProviderFactory_GetProviderInternal_mBC124EF2982B5FB4F00F189F50A42BC279C31607 (void);
// 0x00000165 System.Void Mono.Net.Security.MonoTlsProviderFactory::InitializeInternal()
extern void MonoTlsProviderFactory_InitializeInternal_mB0843306BA58C8CBDE17485CBFCE45BAD8CFA356 (void);
// 0x00000166 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::LookupProvider(System.String,System.Boolean)
extern void MonoTlsProviderFactory_LookupProvider_m6D4B1D58FF109BD87C2D75BE911E265A624A6AA2 (void);
// 0x00000167 System.Void Mono.Net.Security.MonoTlsProviderFactory::InitializeProviderRegistration()
extern void MonoTlsProviderFactory_InitializeProviderRegistration_mDC8AEDEE018FFC5374E746A72B55A337B675CB82 (void);
// 0x00000168 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::CreateDefaultProviderImpl()
extern void MonoTlsProviderFactory_CreateDefaultProviderImpl_m0FA86D0054C7B6025BFCC836EE2093D129B0B5EE (void);
// 0x00000169 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::GetProvider()
extern void MonoTlsProviderFactory_GetProvider_mF98C9785B969091A19AE96D3DDFAA98C09900DFA (void);
// 0x0000016A System.Void Mono.Net.Security.MonoTlsProviderFactory::.cctor()
extern void MonoTlsProviderFactory__cctor_mA2C103AE727F17D8706F964DB378FB0644CA70D1 (void);
// 0x0000016B System.Net.HttpWebRequest Mono.Net.Security.MonoTlsStream::get_Request()
extern void MonoTlsStream_get_Request_m5F3CDE9EA1921F1A45C0FAE20DD4BA634D0D8D83 (void);
// 0x0000016C System.Net.WebExceptionStatus Mono.Net.Security.MonoTlsStream::get_ExceptionStatus()
extern void MonoTlsStream_get_ExceptionStatus_mBB3A6B7073808EF33BA869786BA9B3617851796B (void);
// 0x0000016D System.Boolean Mono.Net.Security.MonoTlsStream::get_CertificateValidationFailed()
extern void MonoTlsStream_get_CertificateValidationFailed_m28A1EF3B3EC723A5A0114B613F7BF9B6AB90555F (void);
// 0x0000016E System.Void Mono.Net.Security.MonoTlsStream::set_CertificateValidationFailed(System.Boolean)
extern void MonoTlsStream_set_CertificateValidationFailed_m225E1AA3894B292682A2BF06B886693A11DEAFEC (void);
// 0x0000016F System.Void Mono.Net.Security.MonoTlsStream::.ctor(System.Net.HttpWebRequest,System.Net.Sockets.NetworkStream)
extern void MonoTlsStream__ctor_mAED0E21D701587D3C110F379FF2C3D9318EB31DF (void);
// 0x00000170 System.Threading.Tasks.Task`1<System.IO.Stream> Mono.Net.Security.MonoTlsStream::CreateStream(System.Net.WebConnectionTunnel,System.Threading.CancellationToken)
extern void MonoTlsStream_CreateStream_m320FE226FFD28910A3FB1A8BCD19B9CB6E0395F1 (void);
// 0x00000171 System.Void Mono.Net.Security.MonoTlsStream/<CreateStream>d__17::MoveNext()
extern void U3CCreateStreamU3Ed__17_MoveNext_m2C5C58B4824641D56245C496817CBADF69343260 (void);
// 0x00000172 System.Void Mono.Net.Security.MonoTlsStream/<CreateStream>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateStreamU3Ed__17_SetStateMachine_m1830D99E90C0D7A32F6DA3021ADD38487CADEE71 (void);
// 0x00000173 System.Object Mono.Net.Security.NoReflectionHelper::GetInternalValidator(System.Object,System.Object)
extern void NoReflectionHelper_GetInternalValidator_m795882CC895991AAC96B1CD6CD7DA1AE8C6321D6 (void);
// 0x00000174 System.Void Mono.Net.Security.SystemCertificateValidator::.cctor()
extern void SystemCertificateValidator__cctor_m6C2E43AD95D74AF470013B88B823825B13937E30 (void);
// 0x00000175 System.Boolean Mono.Net.Security.SystemCertificateValidator::NeedsChain(Mono.Security.Interface.MonoTlsSettings)
extern void SystemCertificateValidator_NeedsChain_mEA1D649FC72CD6D61ACECF098C7CC871AEC5A215 (void);
// 0x00000176 System.Net.Security.RemoteCertificateValidationCallback Mono.Net.Security.Private.CallbackHelpers::MonoToPublic(Mono.Security.Interface.MonoRemoteCertificateValidationCallback)
extern void CallbackHelpers_MonoToPublic_mC0C146376B8EB6B831AE401CE53650C5ED5D69F2 (void);
// 0x00000177 System.Net.Security.LocalCertSelectionCallback Mono.Net.Security.Private.CallbackHelpers::MonoToInternal(Mono.Security.Interface.MonoLocalCertificateSelectionCallback)
extern void CallbackHelpers_MonoToInternal_m895AC89217D5876DB6CC95D7C656C9BA13D4D618 (void);
// 0x00000178 System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_mDEAE80535B75B48ABC04D0F037E9418BD9267B77 (void);
// 0x00000179 System.Boolean Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass5_0::<MonoToPublic>b__0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void U3CU3Ec__DisplayClass5_0_U3CMonoToPublicU3Eb__0_m4F845793FA40587672AC0E7B41112A88E696E3D5 (void);
// 0x0000017A System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m6314CCF15B90FA141A52812284AB1885D149CD5A (void);
// 0x0000017B System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass8_0::<MonoToInternal>b__0(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void U3CU3Ec__DisplayClass8_0_U3CMonoToInternalU3Eb__0_mF7ADE5C0A69E9E18CC61626FC0AA31EEDD83038F (void);
// 0x0000017C System.Void Mono.Http.NtlmSession::.ctor()
extern void NtlmSession__ctor_mEEEFFA1F5F08E6F04718A3008CB72006CC8BED71 (void);
// 0x0000017D System.Net.Authorization Mono.Http.NtlmSession::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void NtlmSession_Authenticate_m57C3EA3E259871B2300FA1B1AB9FA4AE5E9AA1FC (void);
// 0x0000017E System.Net.Authorization Mono.Http.NtlmClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void NtlmClient_Authenticate_m29234A413BB7C853DE1F4E9921FDB58DE8227BDF (void);
// 0x0000017F System.Net.Authorization Mono.Http.NtlmClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void NtlmClient_PreAuthenticate_mF198BBB5898754D555B383C4019F73F15BE23276 (void);
// 0x00000180 System.String Mono.Http.NtlmClient::get_AuthenticationType()
extern void NtlmClient_get_AuthenticationType_mB7D44D8F528617CBD02F8DA2D95245B2738C8178 (void);
// 0x00000181 System.Void Mono.Http.NtlmClient::.ctor()
extern void NtlmClient__ctor_mDE10BA5EAC5F7ABCF7B9E83C412425BE1DD178DC (void);
// 0x00000182 System.Void Mono.Http.NtlmClient::.cctor()
extern void NtlmClient__cctor_mF8E5E7112DBDA1CF249AC91942A5BD9950DB524F (void);
// 0x00000183 System.Void Mono.Http.NtlmClient/<>c::.cctor()
extern void U3CU3Ec__cctor_m274D237C2D332237DF0CEFC0F104AAE71FCAB3AA (void);
// 0x00000184 System.Void Mono.Http.NtlmClient/<>c::.ctor()
extern void U3CU3Ec__ctor_m8EC0DBE120D2CB08BE2ED3F5A706BCEF9716603C (void);
// 0x00000185 Mono.Http.NtlmSession Mono.Http.NtlmClient/<>c::<Authenticate>b__1_0(System.Net.HttpWebRequest)
extern void U3CU3Ec_U3CAuthenticateU3Eb__1_0_mE2F40D1D8564A82A6EFFA6D78EDF09514115E79A (void);
// 0x00000186 System.Boolean Microsoft.Win32.NativeMethods::DuplicateHandle(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.SafeHandle,System.Runtime.InteropServices.HandleRef,Microsoft.Win32.SafeHandles.SafeWaitHandle&,System.Int32,System.Boolean,System.Int32)
extern void NativeMethods_DuplicateHandle_m7D1F5D03EF5254E9B4B670BDECD2EDEF7AA0B00D (void);
// 0x00000187 System.Boolean Microsoft.Win32.NativeMethods::DuplicateHandle(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef,Microsoft.Win32.SafeHandles.SafeProcessHandle&,System.Int32,System.Boolean,System.Int32)
extern void NativeMethods_DuplicateHandle_m5C21EA8CF525CF8393A163DC71A4C77790F5B706 (void);
// 0x00000188 System.IntPtr Microsoft.Win32.NativeMethods::GetCurrentProcess()
extern void NativeMethods_GetCurrentProcess_mD74A4139227DCBBC998906A9A4A74B9A7C176CE1 (void);
// 0x00000189 System.Boolean Microsoft.Win32.NativeMethods::GetExitCodeProcess(System.IntPtr,System.Int32&)
extern void NativeMethods_GetExitCodeProcess_mE82305F94ACE81CA86DC12C37B0129CF596CE110 (void);
// 0x0000018A System.Boolean Microsoft.Win32.NativeMethods::GetExitCodeProcess(Microsoft.Win32.SafeHandles.SafeProcessHandle,System.Int32&)
extern void NativeMethods_GetExitCodeProcess_m6189E8FBCC4A4ADC62D0BE2A614CDEB848F0313D (void);
// 0x0000018B System.Int32 Microsoft.Win32.NativeMethods::GetCurrentProcessId()
extern void NativeMethods_GetCurrentProcessId_m9E674A6B2BE2E6BC7B228DA4CA9330E144430F24 (void);
// 0x0000018C System.Boolean Microsoft.Win32.NativeMethods::CloseProcess(System.IntPtr)
extern void NativeMethods_CloseProcess_mC58317B5182D4057EB1D65C8ABD2A3AE5A6D00D4 (void);
// 0x0000018D System.Void Microsoft.Win32.SafeHandles.SafeProcessHandle::.ctor(System.IntPtr)
extern void SafeProcessHandle__ctor_m347300F5032173FAA9287B4CDC692BBA71D82E95 (void);
// 0x0000018E System.Void Microsoft.Win32.SafeHandles.SafeProcessHandle::.ctor(System.IntPtr,System.Boolean)
extern void SafeProcessHandle__ctor_mF35A5C60AA1DFE35E75F353C346E941D62DB8859 (void);
// 0x0000018F System.Boolean Microsoft.Win32.SafeHandles.SafeProcessHandle::ReleaseHandle()
extern void SafeProcessHandle_ReleaseHandle_m9026551EED6D5751BCBB3F413986A339E0DFE258 (void);
// 0x00000190 System.Void Microsoft.Win32.SafeHandles.SafeProcessHandle::.cctor()
extern void SafeProcessHandle__cctor_mB58028777298714AC693447FF3F9878F04073021 (void);
// 0x00000191 System.Void System.UriBuilder::.ctor()
extern void UriBuilder__ctor_m1CBBB001D2542111D5B3334356E2AC65AFB80D27 (void);
// 0x00000192 System.Void System.UriBuilder::set_Host(System.String)
extern void UriBuilder_set_Host_m7CD9C7B0B9CACAF15A57ACFC363C766F19178930 (void);
// 0x00000193 System.Void System.UriBuilder::set_Path(System.String)
extern void UriBuilder_set_Path_mD17EF197B4A8A764682938B468B647DAE716E9D0 (void);
// 0x00000194 System.Void System.UriBuilder::set_Scheme(System.String)
extern void UriBuilder_set_Scheme_m02C71DED53B5BDB8CA03E7484B8B554D0EF4B3BA (void);
// 0x00000195 System.Uri System.UriBuilder::get_Uri()
extern void UriBuilder_get_Uri_mD0DF3F7DDF7C56CC99E2D29E06C959F80A4171A1 (void);
// 0x00000196 System.Boolean System.UriBuilder::Equals(System.Object)
extern void UriBuilder_Equals_m2318FB925C63380B75D92D199A9C2AE4AA98F322 (void);
// 0x00000197 System.Int32 System.UriBuilder::GetHashCode()
extern void UriBuilder_GetHashCode_m8ECFACD3573A5E927B335A3443481248118C8310 (void);
// 0x00000198 System.Void System.UriBuilder::SetFieldsFromUri(System.Uri)
extern void UriBuilder_SetFieldsFromUri_mB6015DF5AA0D123A1B2749378D88FA26D409788E (void);
// 0x00000199 System.String System.UriBuilder::ToString()
extern void UriBuilder_ToString_m0DEFF1C8981338B9D30B81620E839DCF2CFF4713 (void);
// 0x0000019A System.Void System.SecurityUtils::DemandReflectionAccess(System.Type)
extern void SecurityUtils_DemandReflectionAccess_mE5DD76091B53E4D8E1FFC66F7B925ECBAD4780A7 (void);
// 0x0000019B System.Boolean System.SecurityUtils::HasReflectionPermission(System.Type)
extern void SecurityUtils_HasReflectionPermission_m5B4DA8E0E402CC81DCF03D9F48E31177D6BF3465 (void);
// 0x0000019C System.Object System.SecurityUtils::SecureCreateInstance(System.Type)
extern void SecurityUtils_SecureCreateInstance_mDE7E56409D0674CB8601DA0E37761FF83DCEFE32 (void);
// 0x0000019D System.Object System.SecurityUtils::SecureCreateInstance(System.Type,System.Object[],System.Boolean)
extern void SecurityUtils_SecureCreateInstance_mD642B41CCEFD053670E9BBC47EBC3B71493D73FE (void);
// 0x0000019E System.Object System.SecurityUtils::SecureConstructorInvoke(System.Type,System.Type[],System.Object[],System.Boolean)
extern void SecurityUtils_SecureConstructorInvoke_mACB3821F34281C37E13A3535D63C834B84CE371A (void);
// 0x0000019F System.Object System.SecurityUtils::SecureConstructorInvoke(System.Type,System.Type[],System.Object[],System.Boolean,System.Reflection.BindingFlags)
extern void SecurityUtils_SecureConstructorInvoke_m1AEE51CBB019E631EB2D71F3A0508B016765E2E4 (void);
// 0x000001A0 System.Void System.InvariantComparer::.ctor()
extern void InvariantComparer__ctor_m42B33CC43C194F792B70B96258F930ECF46970A5 (void);
// 0x000001A1 System.Int32 System.InvariantComparer::Compare(System.Object,System.Object)
extern void InvariantComparer_Compare_m74CBFBF1B02F2E9C149AC405D969DB2F4A802889 (void);
// 0x000001A2 System.Void System.InvariantComparer::.cctor()
extern void InvariantComparer__cctor_m319780C01DB316EE447344855F394630AF6F3C6F (void);
// 0x000001A3 System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Boolean)
extern void IriHelper_CheckIriUnicodeRange_m47EF9FBD5FE075A464AE2A242FB43BEBC7C4F775 (void);
// 0x000001A4 System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Char,System.Boolean&,System.Boolean)
extern void IriHelper_CheckIriUnicodeRange_m76D54508F06B0BD021CF86889C71C44578B495FB (void);
// 0x000001A5 System.Boolean System.IriHelper::CheckIsReserved(System.Char,System.UriComponents)
extern void IriHelper_CheckIsReserved_mFF947D4AEDC2D811E2B5379B9706901ED2B29868 (void);
// 0x000001A6 System.String System.IriHelper::EscapeUnescapeIri(System.Char*,System.Int32,System.Int32,System.UriComponents)
extern void IriHelper_EscapeUnescapeIri_mE7C6E85447A41E32A050856BC24B40279EDFF6E5 (void);
// 0x000001A7 System.Boolean System.Uri::get_IsImplicitFile()
extern void Uri_get_IsImplicitFile_m8D1A522158E4EB8AD8C077376D023ED1262998F6 (void);
// 0x000001A8 System.Boolean System.Uri::get_IsUncOrDosPath()
extern void Uri_get_IsUncOrDosPath_m33F2D8808AB44816518C1C464152D4B7872374F0 (void);
// 0x000001A9 System.Boolean System.Uri::get_IsDosPath()
extern void Uri_get_IsDosPath_m16357B61F5D111C45EF7D40276B96429E414F0D2 (void);
// 0x000001AA System.Boolean System.Uri::get_IsUncPath()
extern void Uri_get_IsUncPath_m2D9E7E2DB4EA57EF268B9BA167A1389E18AE9835 (void);
// 0x000001AB System.Uri/Flags System.Uri::get_HostType()
extern void Uri_get_HostType_mA30DC51045EE5FE94B3CB84B0D361A9C28EE572E (void);
// 0x000001AC System.UriParser System.Uri::get_Syntax()
extern void Uri_get_Syntax_mCBAC18B1DC71D269BF6C98417D923674DE258DC2 (void);
// 0x000001AD System.Boolean System.Uri::get_IsNotAbsoluteUri()
extern void Uri_get_IsNotAbsoluteUri_m374185EB37A209B6102F955427913168C5543028 (void);
// 0x000001AE System.Boolean System.Uri::IriParsingStatic(System.UriParser)
extern void Uri_IriParsingStatic_m5FACD38C4EDB61BC6AC465759CDB56F24C34C3B8 (void);
// 0x000001AF System.Boolean System.Uri::get_AllowIdn()
extern void Uri_get_AllowIdn_m612B747CE2F03FCA867D81F14710758B561209E7 (void);
// 0x000001B0 System.Boolean System.Uri::AllowIdnStatic(System.UriParser,System.Uri/Flags)
extern void Uri_AllowIdnStatic_m0B61B2A586F2BF870D185A1BD65151F52EFBC457 (void);
// 0x000001B1 System.Boolean System.Uri::IsIntranet(System.String)
extern void Uri_IsIntranet_m3AC6DBC7C35F309DFAD0951ABC7D95A8000548EE (void);
// 0x000001B2 System.Boolean System.Uri::get_UserDrivenParsing()
extern void Uri_get_UserDrivenParsing_mF2426529046B3DF3292A7AA2F4885F8D6591BBBD (void);
// 0x000001B3 System.Void System.Uri::SetUserDrivenParsing()
extern void Uri_SetUserDrivenParsing_mDE80D352D6343F50F152EB65EF142E84F7F79D69 (void);
// 0x000001B4 System.UInt16 System.Uri::get_SecuredPathIndex()
extern void Uri_get_SecuredPathIndex_m575B7B28B17F8F7EE3FA563ACF6390B0926732AD (void);
// 0x000001B5 System.Boolean System.Uri::NotAny(System.Uri/Flags)
extern void Uri_NotAny_mB88A38A602D4A784CADBD43FDF4CDA0235371E81 (void);
// 0x000001B6 System.Boolean System.Uri::InFact(System.Uri/Flags)
extern void Uri_InFact_mEEE8ADE0780C0712A3DEB8935BD6FC7B23F38A7B (void);
// 0x000001B7 System.Boolean System.Uri::StaticNotAny(System.Uri/Flags,System.Uri/Flags)
extern void Uri_StaticNotAny_mC49F6501AFE849E383AC6777CEB63D2B409B264E (void);
// 0x000001B8 System.Boolean System.Uri::StaticInFact(System.Uri/Flags,System.Uri/Flags)
extern void Uri_StaticInFact_m85C3E521AD9916CC030AC01E311F79D90E981B05 (void);
// 0x000001B9 System.Uri/UriInfo System.Uri::EnsureUriInfo()
extern void Uri_EnsureUriInfo_m6FE387306AF82CDCFC56E2E9C2171C406D1FA982 (void);
// 0x000001BA System.Void System.Uri::EnsureParseRemaining()
extern void Uri_EnsureParseRemaining_mDF7D4313A56047EB22457E12330C138156D54783 (void);
// 0x000001BB System.Void System.Uri::EnsureHostString(System.Boolean)
extern void Uri_EnsureHostString_m7F5F3ED8488F83170A857CD51F0CFEB8322AA055 (void);
// 0x000001BC System.Void System.Uri::.ctor(System.String)
extern void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (void);
// 0x000001BD System.Void System.Uri::.ctor(System.String,System.UriKind)
extern void Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B (void);
// 0x000001BE System.Void System.Uri::.ctor(System.Uri,System.String)
extern void Uri__ctor_mD7EC916948CBFE71F80298DDA6E4209724958B09 (void);
// 0x000001BF System.Void System.Uri::CreateUri(System.Uri,System.String,System.Boolean)
extern void Uri_CreateUri_m9D81A5F3B332C44FDD875893EF619631708791F2 (void);
// 0x000001C0 System.ParsingError System.Uri::GetCombinedString(System.Uri,System.String,System.Boolean,System.String&)
extern void Uri_GetCombinedString_mA3D01108BC32A4594A578A4345BA0F012F554521 (void);
// 0x000001C1 System.UriFormatException System.Uri::GetException(System.ParsingError)
extern void Uri_GetException_m9BD1AF317D6DE516C8D3909A0ECD460BA35996F7 (void);
// 0x000001C2 System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri__ctor_mE1AB9FB0563073B8DFB381A69A54E9E0459D583F (void);
// 0x000001C3 System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m39D9B260E68B8715E9B693A125A2116CE14D760D (void);
// 0x000001C4 System.Void System.Uri::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri_GetObjectData_m0D16C2BC060F0B88503DCC0EEACB151D43FA16CA (void);
// 0x000001C5 System.String System.Uri::get_AbsolutePath()
extern void Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA (void);
// 0x000001C6 System.String System.Uri::get_PrivateAbsolutePath()
extern void Uri_get_PrivateAbsolutePath_mF7B63FC5EBFAB1EE164BF868900B548962C5A546 (void);
// 0x000001C7 System.String System.Uri::get_AbsoluteUri()
extern void Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE (void);
// 0x000001C8 System.String System.Uri::get_LocalPath()
extern void Uri_get_LocalPath_m60EE736E6F601238CBC20CE7DBB647C61F16DB0E (void);
// 0x000001C9 System.String System.Uri::get_Authority()
extern void Uri_get_Authority_m5BE92DE43B1B4BCD6849FEBDE5530AB97E0C31EB (void);
// 0x000001CA System.UriHostNameType System.Uri::get_HostNameType()
extern void Uri_get_HostNameType_m710282366272F2807B7D09D79C20014515BB81D3 (void);
// 0x000001CB System.Boolean System.Uri::get_IsDefaultPort()
extern void Uri_get_IsDefaultPort_m1BFC89B27306852E9AFDEF92897FD52B0B3ECD06 (void);
// 0x000001CC System.Boolean System.Uri::get_IsFile()
extern void Uri_get_IsFile_m760E384ED177DC9197D5010B763F64196552DF5F (void);
// 0x000001CD System.Boolean System.Uri::get_IsLoopback()
extern void Uri_get_IsLoopback_m0E865DCC324F483C0C60E7D8E6FEF7AD0F46059A (void);
// 0x000001CE System.String System.Uri::get_PathAndQuery()
extern void Uri_get_PathAndQuery_m33B64A4AAF08510C0199CF5A85918B91D1008E5C (void);
// 0x000001CF System.Boolean System.Uri::get_IsUnc()
extern void Uri_get_IsUnc_mB190B452D6A7B09FC8BDD967A5C38F32E87E0FCA (void);
// 0x000001D0 System.String System.Uri::get_Host()
extern void Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C (void);
// 0x000001D1 System.Boolean System.Uri::StaticIsFile(System.UriParser)
extern void Uri_StaticIsFile_mDA17D91238AB2D1C549C55C524F67C714145D9CF (void);
// 0x000001D2 System.Object System.Uri::get_InitializeLock()
extern void Uri_get_InitializeLock_mBC92A79EFBC775C9192BB5992F88AB868576D9CF (void);
// 0x000001D3 System.Void System.Uri::InitializeUriConfig()
extern void Uri_InitializeUriConfig_mADB8B77C49B053970C363E91FE4BDD8315401364 (void);
// 0x000001D4 System.String System.Uri::GetLocalPath()
extern void Uri_GetLocalPath_mDC900B37A0BEA02CAD7298582C2042221F9859DE (void);
// 0x000001D5 System.Int32 System.Uri::get_Port()
extern void Uri_get_Port_m7A1413AC9D9A2FC5DC8A7F89DF4A01ACA0241A02 (void);
// 0x000001D6 System.String System.Uri::get_Query()
extern void Uri_get_Query_m17DEC663263C486C8C8177AF9C4BFE2FFBE51178 (void);
// 0x000001D7 System.String System.Uri::get_Fragment()
extern void Uri_get_Fragment_m3CB7AD14DA9618ADE406039D4713F67D6951D835 (void);
// 0x000001D8 System.String System.Uri::get_Scheme()
extern void Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F (void);
// 0x000001D9 System.Boolean System.Uri::get_OriginalStringSwitched()
extern void Uri_get_OriginalStringSwitched_mBE7152D5DA7A1D922B728B9EA8C64815B0469FB7 (void);
// 0x000001DA System.String System.Uri::get_OriginalString()
extern void Uri_get_OriginalString_m3031F9054CA10F2C55C0E2415CC19810D360A5D6 (void);
// 0x000001DB System.String System.Uri::get_DnsSafeHost()
extern void Uri_get_DnsSafeHost_mE5001E7AE7F1879A2059024EA06C9031F6320A2B (void);
// 0x000001DC System.Boolean System.Uri::get_IsAbsoluteUri()
extern void Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF (void);
// 0x000001DD System.Boolean System.Uri::get_UserEscaped()
extern void Uri_get_UserEscaped_m5A376B8E2DDB815CAA2E34AF8890FBA943DC2085 (void);
// 0x000001DE System.String System.Uri::get_UserInfo()
extern void Uri_get_UserInfo_mC0189C851F71ACF0B48A462E74C7F3EB86501C8D (void);
// 0x000001DF System.Boolean System.Uri::IsGenDelim(System.Char)
extern void Uri_IsGenDelim_mB6256291D6D90DAFB8B923D197BBD48A371F4265 (void);
// 0x000001E0 System.Boolean System.Uri::CheckSchemeName(System.String)
extern void Uri_CheckSchemeName_m00DF91AC5BC363425D403696C6251A6BCC5E9E62 (void);
// 0x000001E1 System.Boolean System.Uri::IsHexDigit(System.Char)
extern void Uri_IsHexDigit_m65CBC0215C67105D79C7B49FAF5DD4676B86ED20 (void);
// 0x000001E2 System.Int32 System.Uri::FromHex(System.Char)
extern void Uri_FromHex_m16EF28AD07AF8D499C8157124A9E7C01D6FFFAA8 (void);
// 0x000001E3 System.Int32 System.Uri::GetHashCode()
extern void Uri_GetHashCode_m41959A208E51019C57C20014B2505993FB94B70C (void);
// 0x000001E4 System.String System.Uri::ToString()
extern void Uri_ToString_mDD98375BF8CEBEF6E3708BBCA6C4AB0B54165DA2 (void);
// 0x000001E5 System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern void Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682 (void);
// 0x000001E6 System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern void Uri_op_Inequality_mC32A3382EF16D80BF39005BDD2AB452203D76D6E (void);
// 0x000001E7 System.Boolean System.Uri::Equals(System.Object)
extern void Uri_Equals_m1BD19791DD8A42FEFF5844C29623626C2849C452 (void);
// 0x000001E8 System.String System.Uri::InternalEscapeString(System.String)
extern void Uri_InternalEscapeString_m4F24E88E5A581C3992C85B23EA0EDE0952A4B82F (void);
// 0x000001E9 System.ParsingError System.Uri::ParseScheme(System.String,System.Uri/Flags&,System.UriParser&)
extern void Uri_ParseScheme_m97A1B445A9528F29FC3007B02F2F8789AC201E82 (void);
// 0x000001EA System.UriFormatException System.Uri::ParseMinimal()
extern void Uri_ParseMinimal_m24D824EC77216C64F4B8B9175915CD6C3C6DB7B5 (void);
// 0x000001EB System.ParsingError System.Uri::PrivateParseMinimal()
extern void Uri_PrivateParseMinimal_m4D4C3CB26AC0DE8B0E1F7DC4143F2004D9D25B17 (void);
// 0x000001EC System.Void System.Uri::PrivateParseMinimalIri(System.String,System.UInt16)
extern void Uri_PrivateParseMinimalIri_mD8C7CA7EE14D994E915B48FB6A2CDE62253D4F1E (void);
// 0x000001ED System.Void System.Uri::CreateUriInfo(System.Uri/Flags)
extern void Uri_CreateUriInfo_m3B4F804AB6CB010246F2A52F123D6E44DECDE998 (void);
// 0x000001EE System.Void System.Uri::CreateHostString()
extern void Uri_CreateHostString_mBBAF0ACD4E2EE673F8F7F4E416D87517D94245CF (void);
// 0x000001EF System.String System.Uri::CreateHostStringHelper(System.String,System.UInt16,System.UInt16,System.Uri/Flags&,System.String&)
extern void Uri_CreateHostStringHelper_mB7076A86E12D57D5722AA4AC0993B38332A21C8D (void);
// 0x000001F0 System.Void System.Uri::GetHostViaCustomSyntax()
extern void Uri_GetHostViaCustomSyntax_m6632DAD1F66901E82C60A47D626A9140A586C802 (void);
// 0x000001F1 System.String System.Uri::GetParts(System.UriComponents,System.UriFormat)
extern void Uri_GetParts_m432C93EAC8684C7410585D36DA00B04F6DC34357 (void);
// 0x000001F2 System.String System.Uri::GetEscapedParts(System.UriComponents)
extern void Uri_GetEscapedParts_m0C33275AFEA210E5CAD22649E8B61B49FB43971E (void);
// 0x000001F3 System.String System.Uri::GetUnescapedParts(System.UriComponents,System.UriFormat)
extern void Uri_GetUnescapedParts_m57F83B75B05C5D8EAB6B8ACCB6C8E4F0922CB7ED (void);
// 0x000001F4 System.String System.Uri::ReCreateParts(System.UriComponents,System.UInt16,System.UriFormat)
extern void Uri_ReCreateParts_mB622FFDF74676902D184FD96C4E6B740B65140AF (void);
// 0x000001F5 System.String System.Uri::GetUriPartsFromUserString(System.UriComponents)
extern void Uri_GetUriPartsFromUserString_m3D6EEB76609CCC54A0ABE65911CC24603A184B29 (void);
// 0x000001F6 System.Void System.Uri::ParseRemaining()
extern void Uri_ParseRemaining_m9134D26360C9EEDFAFAFEE1ECA1A5CEE66BE5A3A (void);
// 0x000001F7 System.UInt16 System.Uri::ParseSchemeCheckImplicitFile(System.Char*,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser&)
extern void Uri_ParseSchemeCheckImplicitFile_m8244C40705A553AA88036339B231B1BB279580DC (void);
// 0x000001F8 System.Boolean System.Uri::CheckKnownSchemes(System.Int64*,System.UInt16,System.UriParser&)
extern void Uri_CheckKnownSchemes_mB4E8E77DD15C70FACC9DA5078083E670B0EC9FA1 (void);
// 0x000001F9 System.ParsingError System.Uri::CheckSchemeSyntax(System.Char*,System.UInt16,System.UriParser&)
extern void Uri_CheckSchemeSyntax_m7D9517CBE8B09F13A24AF4EEF0AE2D185C3E1C2D (void);
// 0x000001FA System.UInt16 System.Uri::CheckAuthorityHelper(System.Char*,System.UInt16,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser,System.String&)
extern void Uri_CheckAuthorityHelper_m7946931160B7EC50E7167A11E570A4AF8AEB5B2E (void);
// 0x000001FB System.Void System.Uri::CheckAuthorityHelperHandleDnsIri(System.Char*,System.UInt16,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.String,System.Uri/Flags&,System.Boolean&,System.String&,System.ParsingError&)
extern void Uri_CheckAuthorityHelperHandleDnsIri_mB737EC35D3A477668E6E289D09DFB43EAD4D4D62 (void);
// 0x000001FC System.Void System.Uri::CheckAuthorityHelperHandleAnyHostIri(System.Char*,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.Uri/Flags&,System.String&,System.ParsingError&)
extern void Uri_CheckAuthorityHelperHandleAnyHostIri_mE38845CEFA41AB52AB949CAE2A43D77FB397C08D (void);
// 0x000001FD System.Void System.Uri::FindEndOfComponent(System.String,System.UInt16&,System.UInt16,System.Char)
extern void Uri_FindEndOfComponent_m59CB1EFDA410B42014EA7DCDBA0C9FC9F5996E02 (void);
// 0x000001FE System.Void System.Uri::FindEndOfComponent(System.Char*,System.UInt16&,System.UInt16,System.Char)
extern void Uri_FindEndOfComponent_m198F7AC80BEA08E8DAA6B4577D8A872B41C519B1 (void);
// 0x000001FF System.Uri/Check System.Uri::CheckCanonical(System.Char*,System.UInt16&,System.UInt16,System.Char)
extern void Uri_CheckCanonical_m54AFA85AA00A9909C2EC01F026873F12532AD7F7 (void);
// 0x00000200 System.Char[] System.Uri::GetCanonicalPath(System.Char[],System.Int32&,System.UriFormat)
extern void Uri_GetCanonicalPath_m66FA22F6E85D79E360A7EE86C0E03F1A009F6F99 (void);
// 0x00000201 System.Void System.Uri::UnescapeOnly(System.Char*,System.Int32,System.Int32&,System.Char,System.Char,System.Char)
extern void Uri_UnescapeOnly_m16364432252C3908D378B0BC2BC37F9AD5CED9A6 (void);
// 0x00000202 System.Char[] System.Uri::Compress(System.Char[],System.UInt16,System.Int32&,System.UriParser)
extern void Uri_Compress_m0A24E0C5DD7555EA7723C37FF428B0B1CA6B976D (void);
// 0x00000203 System.Int32 System.Uri::CalculateCaseInsensitiveHashCode(System.String)
extern void Uri_CalculateCaseInsensitiveHashCode_mC84DC2B6AE39DB00143C7DE8BD0CDA05872635A5 (void);
// 0x00000204 System.String System.Uri::CombineUri(System.Uri,System.String,System.UriFormat)
extern void Uri_CombineUri_m0A99C4A1F80FF7E6C8747545BB4610ABC4B4F9D1 (void);
// 0x00000205 System.Boolean System.Uri::get_HasAuthority()
extern void Uri_get_HasAuthority_m2180FC17FB6FE7A11EBA0BDE1EF5EB9EF808A909 (void);
// 0x00000206 System.Boolean System.Uri::IsLWS(System.Char)
extern void Uri_IsLWS_m16D38DDA4D0A7CD3899DEEE31CEF160EAF2C3A44 (void);
// 0x00000207 System.Boolean System.Uri::IsAsciiLetter(System.Char)
extern void Uri_IsAsciiLetter_mFDC33D2D538AFF6A5819B73CB555709865ADE841 (void);
// 0x00000208 System.Boolean System.Uri::IsAsciiLetterOrDigit(System.Char)
extern void Uri_IsAsciiLetterOrDigit_m44901130AFF9E14663C5F9E6437BE44484A82BB8 (void);
// 0x00000209 System.Boolean System.Uri::IsBidiControlCharacter(System.Char)
extern void Uri_IsBidiControlCharacter_m17A486D6ED9263488C6F4B3F3EDF1BF95352765E (void);
// 0x0000020A System.String System.Uri::StripBidiControlCharacter(System.Char*,System.Int32,System.Int32)
extern void Uri_StripBidiControlCharacter_m259E2D3AA84B455ADD63DFBC4EC802241E4317FA (void);
// 0x0000020B System.Void System.Uri::CreateThis(System.String,System.Boolean,System.UriKind)
extern void Uri_CreateThis_m522F36D576D9A8803410439127DB32837331BA3A (void);
// 0x0000020C System.Void System.Uri::InitializeUri(System.ParsingError,System.UriKind,System.UriFormatException&)
extern void Uri_InitializeUri_m044EA7C6188B132874B4522D5CA41EEFDB9A1718 (void);
// 0x0000020D System.Boolean System.Uri::CheckForConfigLoad(System.String)
extern void Uri_CheckForConfigLoad_mC7297EBC00884B1793FDB16F79BF0FCFD53E9FA7 (void);
// 0x0000020E System.Boolean System.Uri::CheckForUnicode(System.String)
extern void Uri_CheckForUnicode_mC763EF0DDC61EE359A6256B95209736EC0353AA1 (void);
// 0x0000020F System.Boolean System.Uri::CheckForEscapedUnreserved(System.String)
extern void Uri_CheckForEscapedUnreserved_mCEF702F733C72BE825E9FEBBEA751540A6A78D11 (void);
// 0x00000210 System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
extern void Uri_TryCreate_mBDD7F98C3BEBD9C3936DDF7960533CBB56478FDF (void);
// 0x00000211 System.String System.Uri::GetComponents(System.UriComponents,System.UriFormat)
extern void Uri_GetComponents_m30E3EAD4E9A39939456E764FEF94AFD4D6B7532A (void);
// 0x00000212 System.String System.Uri::UnescapeDataString(System.String)
extern void Uri_UnescapeDataString_mD0A4732F7ED9CA5DB9E46D802971B5406094CC77 (void);
// 0x00000213 System.String System.Uri::EscapeUnescapeIri(System.String,System.Int32,System.Int32,System.UriComponents)
extern void Uri_EscapeUnescapeIri_m14C0CD1A4C14E2458685E5A10049204B1A15C16C (void);
// 0x00000214 System.Void System.Uri::.ctor(System.Uri/Flags,System.UriParser,System.String)
extern void Uri__ctor_m6EA3AF49C103A3D56EBBB24BCAEE8DE7E8676AF4 (void);
// 0x00000215 System.Uri System.Uri::CreateHelper(System.String,System.Boolean,System.UriKind,System.UriFormatException&)
extern void Uri_CreateHelper_mC4FC141C7E569879417FFC24BCB47E22CE09163B (void);
// 0x00000216 System.Uri System.Uri::ResolveHelper(System.Uri,System.Uri,System.String&,System.Boolean&,System.UriFormatException&)
extern void Uri_ResolveHelper_m8FD2A09E63507DB5178AE3C182C323E8EA4B8752 (void);
// 0x00000217 System.String System.Uri::GetRelativeSerializationString(System.UriFormat)
extern void Uri_GetRelativeSerializationString_mDEB0AD1094EC2842C2F0830C1E43FF2FFDEB6F5B (void);
// 0x00000218 System.String System.Uri::GetComponentsHelper(System.UriComponents,System.UriFormat)
extern void Uri_GetComponentsHelper_m83D8E4A027E180AFB34BA5290A8FF381EBCBCB75 (void);
// 0x00000219 System.Void System.Uri::CreateThisFromUri(System.Uri)
extern void Uri_CreateThisFromUri_m986BB8F1CF8D75EEFA12D9D0963BA927FA394BE5 (void);
// 0x0000021A System.Void System.Uri::.cctor()
extern void Uri__cctor_mED6507CF356205205DE18F0D9D2A660D4C094F23 (void);
// 0x0000021B System.Void System.Uri/UriInfo::.ctor()
extern void UriInfo__ctor_m88A6E3E7164B78B18C70D83CA5AD734517D308B3 (void);
// 0x0000021C System.Void System.Uri/MoreInfo::.ctor()
extern void MoreInfo__ctor_m4AC1286A4D4DAD0AB0EE99A2C952D54BFA5F44A7 (void);
// 0x0000021D System.Void System.UriFormatException::.ctor()
extern void UriFormatException__ctor_m4D218C92C093CD0CDDDC012911A1E10CB327BB70 (void);
// 0x0000021E System.Void System.UriFormatException::.ctor(System.String)
extern void UriFormatException__ctor_m718A5DEB020FAAD1F654CD05E63C3988AA7712D3 (void);
// 0x0000021F System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void UriFormatException__ctor_m15F8C1205D9A648F72DD5D94DB92FD1FA1397FE0 (void);
// 0x00000220 System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_mF5C6CA057915A5F7F4E9D8FBE5D6EB2595A4FD80 (void);
// 0x00000221 System.Char[] System.UriHelper::EscapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Boolean,System.Char,System.Char,System.Char)
extern void UriHelper_EscapeString_m616525587FFF13665945B9173F3C2EC41C9EDDA8 (void);
// 0x00000222 System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
extern void UriHelper_EnsureDestinationSize_m4CAB570AAAC5145D6DAF9AC4362812693C324887 (void);
// 0x00000223 System.Char[] System.UriHelper::UnescapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern void UriHelper_UnescapeString_m978B253231CE4F7BA6F6DC7778D679C19F77CB54 (void);
// 0x00000224 System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern void UriHelper_UnescapeString_mD137E2B3F648504A96E7F244796CDCEBE6BB9BE1 (void);
// 0x00000225 System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
extern void UriHelper_MatchUTF8Sequence_m0E963F060C446C4BBBBD60E4D54CAE9A36D5A3F7 (void);
// 0x00000226 System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
extern void UriHelper_EscapeAsciiChar_m3B740B3721EF4D93E9B9DFB2F881138AF4DE4452 (void);
// 0x00000227 System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
extern void UriHelper_EscapedAscii_mC7BE08D5B7803E83C57B8269F298B6DFA9EC5120 (void);
// 0x00000228 System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
extern void UriHelper_IsNotSafeForUnescape_mD11825AB8FE6E410A5C0D6D7850C607DBF697D7E (void);
// 0x00000229 System.Boolean System.UriHelper::IsReservedUnreservedOrHash(System.Char)
extern void UriHelper_IsReservedUnreservedOrHash_mEAD756DAD5DB17F71960CC501BBB7CF9AB5EF74F (void);
// 0x0000022A System.Boolean System.UriHelper::IsUnreserved(System.Char)
extern void UriHelper_IsUnreserved_m3171C456B602B4F7052B4E865F2DF04C71553797 (void);
// 0x0000022B System.Boolean System.UriHelper::Is3986Unreserved(System.Char)
extern void UriHelper_Is3986Unreserved_m06ED29AEFC563547A29E1DAA6A55760ADD9FCC30 (void);
// 0x0000022C System.Void System.UriHelper::.cctor()
extern void UriHelper__cctor_mEBD15B6A7F8E49B4188075DC2EF1A2956E7E3185 (void);
// 0x0000022D System.String System.UriParser::get_SchemeName()
extern void UriParser_get_SchemeName_m3BD969B4E8EEA3769D070FA42CE340CDC766F47D (void);
// 0x0000022E System.Int32 System.UriParser::get_DefaultPort()
extern void UriParser_get_DefaultPort_m38684C86B40F59960533D8F812B311ACBBEB7AA5 (void);
// 0x0000022F System.UriParser System.UriParser::OnNewUri()
extern void UriParser_OnNewUri_m752BC0174A2E3F7AA99F1088E1D539E5B8F7B5B2 (void);
// 0x00000230 System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern void UriParser_InitializeAndValidate_m5B38A10B57DC49B1CE13F361ABD78D7269EDA886 (void);
// 0x00000231 System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&)
extern void UriParser_Resolve_m7CC03524A2848FBD24BAB57CC62A19C751937182 (void);
// 0x00000232 System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern void UriParser_GetComponents_m230F3341901B4B90DC4650093272BC15A1161FAF (void);
// 0x00000233 System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
extern void UriParser_get_ShouldUseLegacyV2Quirks_m2BDF10B430FDA291AA6962104CD838776F31D20E (void);
// 0x00000234 System.Void System.UriParser::.cctor()
extern void UriParser__cctor_m9E43C905DCA4EE1855EE2C0236A1FCB6075841C5 (void);
// 0x00000235 System.UriSyntaxFlags System.UriParser::get_Flags()
extern void UriParser_get_Flags_mBE183D7CBEEEBEC670CCF1DF21D56B354796D6C3 (void);
// 0x00000236 System.Boolean System.UriParser::NotAny(System.UriSyntaxFlags)
extern void UriParser_NotAny_mCE6CF6736414BE547215F6E44C3E1283DEA05F56 (void);
// 0x00000237 System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
extern void UriParser_InFact_m3C07C3050DE1E69F6B0BC816EC34AF610373E532 (void);
// 0x00000238 System.Boolean System.UriParser::IsAllSet(System.UriSyntaxFlags)
extern void UriParser_IsAllSet_mEE811F1E7BBCC34D7A32BC30A18AD5D34E690813 (void);
// 0x00000239 System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
extern void UriParser_IsFullMatch_mFC1C9EEDD31F040997931B26EF54CE7988495550 (void);
// 0x0000023A System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
extern void UriParser__ctor_m4FA54685DFA00FC6AEA73E94CD59C5FF2872E55A (void);
// 0x0000023B System.UriParser System.UriParser::FindOrFetchAsUnknownV1Syntax(System.String)
extern void UriParser_FindOrFetchAsUnknownV1Syntax_m29D45A9BF93C7C4FC7C819658043B6E753E7F01A (void);
// 0x0000023C System.UriParser System.UriParser::GetSyntax(System.String)
extern void UriParser_GetSyntax_mD610CEF6784E137AF251EBC41629E2FE1D344615 (void);
// 0x0000023D System.Boolean System.UriParser::get_IsSimple()
extern void UriParser_get_IsSimple_m8ED850D585BA3BA0FDC239496065E6D2D973C7E5 (void);
// 0x0000023E System.UriParser System.UriParser::InternalOnNewUri()
extern void UriParser_InternalOnNewUri_m93B84E04949FAE8FE3B6919DA9F933B682D4B2F8 (void);
// 0x0000023F System.Void System.UriParser::InternalValidate(System.Uri,System.UriFormatException&)
extern void UriParser_InternalValidate_m69157B3E80381F3FC104788160F2213B3FE8F39D (void);
// 0x00000240 System.String System.UriParser::InternalResolve(System.Uri,System.Uri,System.UriFormatException&)
extern void UriParser_InternalResolve_mD1963080EBCF493DA78656AA5AEA458BF5138F5B (void);
// 0x00000241 System.String System.UriParser::InternalGetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern void UriParser_InternalGetComponents_m52F450C5283A1820D5AFD07505E5FE82D4F476B0 (void);
// 0x00000242 System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
extern void BuiltInUriParser__ctor_m6E9775075E7360DD524B7E3E456A3FFA58F89E79 (void);
// 0x00000243 System.String System.DomainNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void DomainNameHelper_ParseCanonicalName_m12865C6C2427B6ED804747CB1117D0B80E332F4D (void);
// 0x00000244 System.Boolean System.DomainNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
extern void DomainNameHelper_IsValid_m9E1909F6CA353F469ACF623BCBE1E3B545164752 (void);
// 0x00000245 System.Boolean System.DomainNameHelper::IsValidByIri(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
extern void DomainNameHelper_IsValidByIri_mE5772C5B7528885976ACB5AB11881B79A410CE24 (void);
// 0x00000246 System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
extern void DomainNameHelper_IdnEquivalent_m14CEBD0BD7B1BF46F8806E4EB5BB1901F7F29E2A (void);
// 0x00000247 System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.String&)
extern void DomainNameHelper_IdnEquivalent_mD8EBF17C7A0A50FFAA03EAA9CA737899C9A0881E (void);
// 0x00000248 System.Boolean System.DomainNameHelper::IsIdnAce(System.String,System.Int32)
extern void DomainNameHelper_IsIdnAce_m063EE4431000F1D566D2D62B3BBB947A00CDA8EF (void);
// 0x00000249 System.Boolean System.DomainNameHelper::IsIdnAce(System.Char*,System.Int32)
extern void DomainNameHelper_IsIdnAce_mC429C00971921E7C357FA9A57D14AAB9A0CF3566 (void);
// 0x0000024A System.String System.DomainNameHelper::UnicodeEquivalent(System.String,System.Char*,System.Int32,System.Int32)
extern void DomainNameHelper_UnicodeEquivalent_mD229718EC61E3ECBFA7AF5C894D22ADEEDE1B4ED (void);
// 0x0000024B System.String System.DomainNameHelper::UnicodeEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
extern void DomainNameHelper_UnicodeEquivalent_m62B17C161795C1C6AC76D49A3FB50B16693CC9DB (void);
// 0x0000024C System.Boolean System.DomainNameHelper::IsASCIILetterOrDigit(System.Char,System.Boolean&)
extern void DomainNameHelper_IsASCIILetterOrDigit_mFAF590F20333B1D787428537FCD1CFF3993FE1F6 (void);
// 0x0000024D System.Boolean System.DomainNameHelper::IsValidDomainLabelCharacter(System.Char,System.Boolean&)
extern void DomainNameHelper_IsValidDomainLabelCharacter_m957B15160BE378C49B6E25CC4F0D99BBA1FE06C6 (void);
// 0x0000024E System.String System.IPv4AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void IPv4AddressHelper_ParseCanonicalName_m25D822E5AC4B56E40C2404C8DE1C03E70ABCF72C (void);
// 0x0000024F System.Int32 System.IPv4AddressHelper::ParseHostNumber(System.String,System.Int32,System.Int32)
extern void IPv4AddressHelper_ParseHostNumber_m4784E0623B1DD368E4A9588DCE7EB58CCDED9121 (void);
// 0x00000250 System.Boolean System.IPv4AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean,System.Boolean)
extern void IPv4AddressHelper_IsValid_m1E626B5740F8C0F4F4AEA9D8D9E06933BD79C7AE (void);
// 0x00000251 System.Boolean System.IPv4AddressHelper::IsValidCanonical(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean)
extern void IPv4AddressHelper_IsValidCanonical_mBE62564C4A9F8F584C9FBC0E6A5D5159071BE23E (void);
// 0x00000252 System.Int64 System.IPv4AddressHelper::ParseNonCanonical(System.Char*,System.Int32,System.Int32&,System.Boolean)
extern void IPv4AddressHelper_ParseNonCanonical_m4ACD00B972D7DBEB80BC3D7A9C36BB2CEA81638E (void);
// 0x00000253 System.Boolean System.IPv4AddressHelper::Parse(System.String,System.Byte*,System.Int32,System.Int32)
extern void IPv4AddressHelper_Parse_m61983BF8F1D7D827BABB3BD87AE4A2CE2BA92906 (void);
// 0x00000254 System.Boolean System.IPv4AddressHelper::ParseCanonical(System.String,System.Byte*,System.Int32,System.Int32)
extern void IPv4AddressHelper_ParseCanonical_m4E4481DDC7EBC7FB9809A60A6C51975049A81F97 (void);
// 0x00000255 System.String System.IPv6AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Boolean&,System.String&)
extern void IPv6AddressHelper_ParseCanonicalName_m148CB0071D79C29D97FE7E537B0BFA2CB27B709C (void);
// 0x00000256 System.String System.IPv6AddressHelper::CreateCanonicalName(System.UInt16*)
extern void IPv6AddressHelper_CreateCanonicalName_mB8D24CD9497080513478C86986430DC749EF2A21 (void);
// 0x00000257 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> System.IPv6AddressHelper::FindCompressionRange(System.UInt16*)
extern void IPv6AddressHelper_FindCompressionRange_m683176BF25BCAB80F1870FCBC97C96ACE4204DA4 (void);
// 0x00000258 System.Boolean System.IPv6AddressHelper::ShouldHaveIpv4Embedded(System.UInt16*)
extern void IPv6AddressHelper_ShouldHaveIpv4Embedded_m0A87D4ED16D7EEE726B5970DA6FF9FDD5DDE390F (void);
// 0x00000259 System.Boolean System.IPv6AddressHelper::InternalIsValid(System.Char*,System.Int32,System.Int32&,System.Boolean)
extern void IPv6AddressHelper_InternalIsValid_m23A4A563DF5766AC8391628217ADE8670A740D3D (void);
// 0x0000025A System.Boolean System.IPv6AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&)
extern void IPv6AddressHelper_IsValid_mEA13C6DB64BF812706785DA99E9AFFBC95C1C3E7 (void);
// 0x0000025B System.Boolean System.IPv6AddressHelper::IsValidStrict(System.Char*,System.Int32,System.Int32&)
extern void IPv6AddressHelper_IsValidStrict_m63AA667FE446A0F20109E4680BE64B9B60F73123 (void);
// 0x0000025C System.Boolean System.IPv6AddressHelper::Parse(System.String,System.UInt16*,System.Int32,System.String&)
extern void IPv6AddressHelper_Parse_m799328E366987B99968E9D134301AF228F06C77E (void);
// 0x0000025D System.String System.UncNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void UncNameHelper_ParseCanonicalName_mB07DBCB21F6996E1A2BC9D4D4DD427AE0E5D36E2 (void);
// 0x0000025E System.Boolean System.UncNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean)
extern void UncNameHelper_IsValid_m677F95E73B0278AC062F862BEA6BE646048127D4 (void);
// 0x0000025F System.Void System.IOAsyncCallback::.ctor(System.Object,System.IntPtr)
extern void IOAsyncCallback__ctor_m58A7C732444005CB72C5B352096C2DB252A6F113 (void);
// 0x00000260 System.Void System.IOAsyncCallback::Invoke(System.IOAsyncResult)
extern void IOAsyncCallback_Invoke_m70CC21061AD0965DBC87CB382AD395A35E1788B2 (void);
// 0x00000261 System.Void System.IOAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern void IOAsyncResult__ctor_mCDC93C97872E9DAB6A1D9F27C1FA14DDFC6A400D (void);
// 0x00000262 System.AsyncCallback System.IOAsyncResult::get_AsyncCallback()
extern void IOAsyncResult_get_AsyncCallback_mC6150F5FC2CEE8FDC22EACD9B9BC72544FE801CC (void);
// 0x00000263 System.Object System.IOAsyncResult::get_AsyncState()
extern void IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A (void);
// 0x00000264 System.Threading.WaitHandle System.IOAsyncResult::get_AsyncWaitHandle()
extern void IOAsyncResult_get_AsyncWaitHandle_mA0350FACA25DDD429DBE840269101E8168DCD42E (void);
// 0x00000265 System.Boolean System.IOAsyncResult::get_CompletedSynchronously()
extern void IOAsyncResult_get_CompletedSynchronously_m26279BC02AFFE83009A7EEABFFF58EEB2D12CD24 (void);
// 0x00000266 System.Void System.IOAsyncResult::set_CompletedSynchronously(System.Boolean)
extern void IOAsyncResult_set_CompletedSynchronously_m29ECF9F6388C1F9A12AF83DF8CD19D9FFB4B4D6D (void);
// 0x00000267 System.Boolean System.IOAsyncResult::get_IsCompleted()
extern void IOAsyncResult_get_IsCompleted_m0EAD0BE09029EE4AFC303B76DC5E1EBE4269BEE8 (void);
// 0x00000268 System.Void System.IOAsyncResult::set_IsCompleted(System.Boolean)
extern void IOAsyncResult_set_IsCompleted_m72D907352B8AC32DF47864E4F4EDFADEC825A6F9 (void);
// 0x00000269 System.Void System.IOAsyncResult::CompleteDisposed()
// 0x0000026A System.Void System.IOSelectorJob::.ctor(System.IOOperation,System.IOAsyncCallback,System.IOAsyncResult)
extern void IOSelectorJob__ctor_mA67864E470C66B78F683571EBD6A6315D9247DE1 (void);
// 0x0000026B System.Void System.IOSelectorJob::System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
extern void IOSelectorJob_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem_m896BBDBDBB91D3771569204789FEF8E700123D79 (void);
// 0x0000026C System.Void System.IOSelectorJob::System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException)
extern void IOSelectorJob_System_Threading_IThreadPoolWorkItem_MarkAborted_m3F59E62D7927340D04264BAA081F7FAE0533C9CE (void);
// 0x0000026D System.Void System.IOSelectorJob::MarkDisposed()
extern void IOSelectorJob_MarkDisposed_mBCCE13D70B97BB7AE46D976AE207DF642C4531F0 (void);
// 0x0000026E System.Void System.IOSelector::Add(System.IntPtr,System.IOSelectorJob)
extern void IOSelector_Add_m170DDEAFEE849601BFE7ADBCFD630A7F2BA96057 (void);
// 0x0000026F System.Int32 System.Platform::uname(System.IntPtr)
extern void Platform_uname_m2FFDF5380552E8C2E29AFD7AF0BF683A5AA47AC3 (void);
// 0x00000270 System.Void System.Platform::CheckOS()
extern void Platform_CheckOS_m8F1287D867BC38834F974981272A0BC2A2FB4B07 (void);
// 0x00000271 System.Boolean System.Platform::get_IsMacOS()
extern void Platform_get_IsMacOS_mBD4CA63562755EC465B1E6DD17E7CD193C6CA10E (void);
// 0x00000272 System.Void System.UriTypeConverter::.ctor()
extern void UriTypeConverter__ctor_m02CB01E1305031BE5A45FB54601E520748B6EDB6 (void);
// 0x00000273 System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern void UriTypeConverter_CanConvert_m970377ED30FF1B6875CCDA64FDC87EFE7D381DE3 (void);
// 0x00000274 System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void UriTypeConverter_CanConvertFrom_mD5D419C5B80FC3A5D175655A6278E54FC80928E7 (void);
// 0x00000275 System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void UriTypeConverter_CanConvertTo_m119145C6F2FDE221E99ACDAF0EF723003388E8EE (void);
// 0x00000276 System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void UriTypeConverter_ConvertFrom_m079712540B92F2B6AF1780A5793F36EA77CA32ED (void);
// 0x00000277 System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void UriTypeConverter_ConvertTo_mA975FACF630714EBEA487EFC770EA0742756A764 (void);
// 0x00000278 System.Void System.Text.RegularExpressions.Regex::.ctor()
extern void Regex__ctor_mE3A1B095FDFDDA41434B5A2CC70403EB18FE8251 (void);
// 0x00000279 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (void);
// 0x0000027A System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (void);
// 0x0000027B System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan,System.Boolean)
extern void Regex__ctor_mA8EBF2F80CC00D741BFD2FFD7DC9DB26FBCEE2A4 (void);
// 0x0000027C System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Regex__ctor_m890D2C0E4B5EFD50FA4DCCE8B9242CD03A4CCEFA (void);
// 0x0000027D System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_mD788EE38607BF5D618FDA920048707DF4CA4B99C (void);
// 0x0000027E System.Void System.Text.RegularExpressions.Regex::ValidateMatchTimeout(System.TimeSpan)
extern void Regex_ValidateMatchTimeout_mA50CD0CB49AB9B42B548900335CA6EABC30BD18F (void);
// 0x0000027F System.TimeSpan System.Text.RegularExpressions.Regex::InitDefaultMatchTimeout()
extern void Regex_InitDefaultMatchTimeout_mC441DFFACCC15C2710E85B95820DAB49AE9C47A7 (void);
// 0x00000280 System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern void Regex_get_Options_m165C450CC7D77E4EA9BBFFED62C73269A6989EF2 (void);
// 0x00000281 System.TimeSpan System.Text.RegularExpressions.Regex::get_MatchTimeout()
extern void Regex_get_MatchTimeout_mD3DAA431E1A207786AB12C6FCFE26DB86BD55265 (void);
// 0x00000282 System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern void Regex_get_RightToLeft_m52C4DEE1DC94FC9531785B74111022F3BCC1DF4B (void);
// 0x00000283 System.String System.Text.RegularExpressions.Regex::ToString()
extern void Regex_ToString_m4982DE4C344F7D529666314646F071580A450D5B (void);
// 0x00000284 System.String System.Text.RegularExpressions.Regex::GroupNameFromNumber(System.Int32)
extern void Regex_GroupNameFromNumber_mC99A37419C4C0C9C3869BCDF055EDC72782D53FF (void);
// 0x00000285 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
extern void Regex_IsMatch_m967E98137B140DFD845C5E1699D1BC8EF08CC76C (void);
// 0x00000286 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
extern void Regex_IsMatch_m3709329406E39A80F61F4DD2CC9AB672835A3E81 (void);
// 0x00000287 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern void Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49 (void);
// 0x00000288 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern void Regex_IsMatch_mC358D80573E765ECC19F9F5882664E3B1FA0966E (void);
// 0x00000289 System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
extern void Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (void);
// 0x0000028A System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern void Regex_Match_mDF110993CAA26CD41AE9F5DB7F0C307B2680CED3 (void);
// 0x0000028B System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern void Regex_Matches_mD0E47C23B403AC380AF7EAECA48E63C61DC39CDF (void);
// 0x0000028C System.Void System.Text.RegularExpressions.Regex::InitializeReferences()
extern void Regex_InitializeReferences_m55385AD102411A38BF4426C08F6FEC6E55E4D4D6 (void);
// 0x0000028D System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Run(System.Boolean,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void Regex_Run_m4DCD2202C599273C00D6052A77BDD2F39E2F5BF8 (void);
// 0x0000028E System.Text.RegularExpressions.CachedCodeEntry System.Text.RegularExpressions.Regex::LookupCachedAndUpdate(System.String)
extern void Regex_LookupCachedAndUpdate_m142F78BC8AE569C2EFDC0C3F9AD831B6CF4E42A5 (void);
// 0x0000028F System.Text.RegularExpressions.CachedCodeEntry System.Text.RegularExpressions.Regex::CacheCode(System.String)
extern void Regex_CacheCode_m5789078ED69C8A3DF1DFE727E338F031549CEABA (void);
// 0x00000290 System.Boolean System.Text.RegularExpressions.Regex::UseOptionR()
extern void Regex_UseOptionR_mFAB8780E9F998BE60C4B1127D57DD627A3B5629C (void);
// 0x00000291 System.Boolean System.Text.RegularExpressions.Regex::UseOptionInvariant()
extern void Regex_UseOptionInvariant_mD51BCBA0BF4C1B5CEBE9423B4AAA93CD83569B60 (void);
// 0x00000292 System.Void System.Text.RegularExpressions.Regex::.cctor()
extern void Regex__cctor_mF29CE2FFB1941E7609C5B67C0236AC98003F675F (void);
// 0x00000293 System.Void System.Text.RegularExpressions.CachedCodeEntry::.ctor(System.String,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexCode,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.ExclusiveReference,System.Text.RegularExpressions.SharedReference)
extern void CachedCodeEntry__ctor_mEA6346EE850E19CF3B775AD68F545BD91F67AE92 (void);
// 0x00000294 System.Object System.Text.RegularExpressions.ExclusiveReference::Get()
extern void ExclusiveReference_Get_mEDBF163180AB80C7C79A6BD41FEE0AF28EE7582A (void);
// 0x00000295 System.Void System.Text.RegularExpressions.ExclusiveReference::Release(System.Object)
extern void ExclusiveReference_Release_mA9EA9A4CF23B58E09F66479E5D3E63AC82D94807 (void);
// 0x00000296 System.Void System.Text.RegularExpressions.ExclusiveReference::.ctor()
extern void ExclusiveReference__ctor_m41EB96FC1FA261CB792752B89F15E6513FEA1722 (void);
// 0x00000297 System.Void System.Text.RegularExpressions.SharedReference::.ctor()
extern void SharedReference__ctor_mFE8F1F42AE73A63B3184CFE997076870C33924B7 (void);
// 0x00000298 System.Void System.Text.RegularExpressions.RegexBoyerMoore::.ctor(System.String,System.Boolean,System.Boolean,System.Globalization.CultureInfo)
extern void RegexBoyerMoore__ctor_mFDCB1AB420E718548B67DE42C233402955BBB189 (void);
// 0x00000299 System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::MatchPattern(System.String,System.Int32)
extern void RegexBoyerMoore_MatchPattern_m0E84EAABBFCDA85484466A41A7B90187D3489E8C (void);
// 0x0000029A System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::IsMatch(System.String,System.Int32,System.Int32,System.Int32)
extern void RegexBoyerMoore_IsMatch_mC09692237823CC6C74D4F5D8900D82CEC840FB47 (void);
// 0x0000029B System.Int32 System.Text.RegularExpressions.RegexBoyerMoore::Scan(System.String,System.Int32,System.Int32,System.Int32)
extern void RegexBoyerMoore_Scan_m86EB5A209D33DA3F4C7335F8FE133238666FA57B (void);
// 0x0000029C System.String System.Text.RegularExpressions.RegexBoyerMoore::ToString()
extern void RegexBoyerMoore_ToString_mA3710CA0D37FDA057EB4A7034FECB98E91F1325D (void);
// 0x0000029D System.Void System.Text.RegularExpressions.Capture::.ctor(System.String,System.Int32,System.Int32)
extern void Capture__ctor_mDC1197B1E29487F3D086091CF3D5B1029D593402 (void);
// 0x0000029E System.Int32 System.Text.RegularExpressions.Capture::get_Index()
extern void Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A (void);
// 0x0000029F System.String System.Text.RegularExpressions.Capture::get_Value()
extern void Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (void);
// 0x000002A0 System.String System.Text.RegularExpressions.Capture::ToString()
extern void Capture_ToString_mC843EDDC990DBE2696BA08D08B1081CA12228F2C (void);
// 0x000002A1 System.Void System.Text.RegularExpressions.Capture::.ctor()
extern void Capture__ctor_mC5CF26C74D61540739B92848EB84D13AD912A6CE (void);
// 0x000002A2 System.Object System.Text.RegularExpressions.CaptureCollection::get_SyncRoot()
extern void CaptureCollection_get_SyncRoot_mDD4E8BD300179AA10BFD374A7997E70882164426 (void);
// 0x000002A3 System.Int32 System.Text.RegularExpressions.CaptureCollection::get_Count()
extern void CaptureCollection_get_Count_mA45A82BA7103D81E8FC506A02DA2FF862344006E (void);
// 0x000002A4 System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureCollection::get_Item(System.Int32)
extern void CaptureCollection_get_Item_m9E773C623570B88CA00A8E1309C69EE1C60719CC (void);
// 0x000002A5 System.Void System.Text.RegularExpressions.CaptureCollection::CopyTo(System.Array,System.Int32)
extern void CaptureCollection_CopyTo_m9A82FE43F6FBA0E2259FFAAED41A9C3EBB2B7F41 (void);
// 0x000002A6 System.Collections.IEnumerator System.Text.RegularExpressions.CaptureCollection::GetEnumerator()
extern void CaptureCollection_GetEnumerator_m9741991231D034DB55237037C882D93E0F5024CD (void);
// 0x000002A7 System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureCollection::GetCapture(System.Int32)
extern void CaptureCollection_GetCapture_mE5861EC54212C16A889D4DBEE0919A890E2CAA3F (void);
// 0x000002A8 System.Void System.Text.RegularExpressions.CaptureCollection::.ctor()
extern void CaptureCollection__ctor_m78149EC3020BFBAEC7ECA490F738EB38345F56CB (void);
// 0x000002A9 System.Void System.Text.RegularExpressions.CaptureEnumerator::.ctor(System.Text.RegularExpressions.CaptureCollection)
extern void CaptureEnumerator__ctor_mED0FAD8D2FC8045185C8E2CE90AF50B0AC0DF3D2 (void);
// 0x000002AA System.Boolean System.Text.RegularExpressions.CaptureEnumerator::MoveNext()
extern void CaptureEnumerator_MoveNext_mC987D36B99568A1551E4CF22FCBDA65AB1DCA122 (void);
// 0x000002AB System.Object System.Text.RegularExpressions.CaptureEnumerator::get_Current()
extern void CaptureEnumerator_get_Current_mFCA1782A406906DDFD62AA928C9148F219F73222 (void);
// 0x000002AC System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureEnumerator::get_Capture()
extern void CaptureEnumerator_get_Capture_m0630B5F64855136073AA64ABE432D23B0ABA8260 (void);
// 0x000002AD System.Void System.Text.RegularExpressions.CaptureEnumerator::Reset()
extern void CaptureEnumerator_Reset_m4A1034C4CD772E01D855794D43BFAB130F807208 (void);
// 0x000002AE System.Void System.Text.RegularExpressions.RegexCharClass::.cctor()
extern void RegexCharClass__cctor_m70495E564EC18CDEF2A2687F8012C96E571A0631 (void);
// 0x000002AF System.Void System.Text.RegularExpressions.RegexCharClass::.ctor()
extern void RegexCharClass__ctor_m165680E6EA10035E0630220C967BD772F5D6F52E (void);
// 0x000002B0 System.Void System.Text.RegularExpressions.RegexCharClass::.ctor(System.Boolean,System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange>,System.Text.StringBuilder,System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass__ctor_mFAD2AF3D7B0D4D3DC8BC850B8899C5C4D55F8B49 (void);
// 0x000002B1 System.Boolean System.Text.RegularExpressions.RegexCharClass::get_CanMerge()
extern void RegexCharClass_get_CanMerge_mC093FE4BE7C1933BA9F146CF2A33CD729A965172 (void);
// 0x000002B2 System.Void System.Text.RegularExpressions.RegexCharClass::set_Negate(System.Boolean)
extern void RegexCharClass_set_Negate_m8EA71CB8F671E99EF0B388CB520F44B8B6653A6B (void);
// 0x000002B3 System.Void System.Text.RegularExpressions.RegexCharClass::AddChar(System.Char)
extern void RegexCharClass_AddChar_mED269B31D5C606032B3394A9B9305ED172D16746 (void);
// 0x000002B4 System.Void System.Text.RegularExpressions.RegexCharClass::AddCharClass(System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass_AddCharClass_mDE8C70A6A99B2223DE4EA36A4753A13B5EEDE7BB (void);
// 0x000002B5 System.Void System.Text.RegularExpressions.RegexCharClass::AddSet(System.String)
extern void RegexCharClass_AddSet_mFC202CC46631017C7D64ED17EAA9C786C5C7CE83 (void);
// 0x000002B6 System.Void System.Text.RegularExpressions.RegexCharClass::AddSubtraction(System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass_AddSubtraction_m4EF34AFB93C001C6A4521E1F1C5F4B54833E8A12 (void);
// 0x000002B7 System.Void System.Text.RegularExpressions.RegexCharClass::AddRange(System.Char,System.Char)
extern void RegexCharClass_AddRange_mB1188A62712FE4ABB7F5DB28645351E375B5C6A7 (void);
// 0x000002B8 System.Void System.Text.RegularExpressions.RegexCharClass::AddCategoryFromName(System.String,System.Boolean,System.Boolean,System.String)
extern void RegexCharClass_AddCategoryFromName_m032AED661665AE30D7F3F712914E2937F6E4FF97 (void);
// 0x000002B9 System.Void System.Text.RegularExpressions.RegexCharClass::AddCategory(System.String)
extern void RegexCharClass_AddCategory_m3A3C78511F279FD0CF67A3EE36F59A548A37269A (void);
// 0x000002BA System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercase(System.Globalization.CultureInfo)
extern void RegexCharClass_AddLowercase_mB87FC245CC837E582370E5410A6B40B23BEAC0BE (void);
// 0x000002BB System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercaseRange(System.Char,System.Char,System.Globalization.CultureInfo)
extern void RegexCharClass_AddLowercaseRange_m75E07C55A082FE5B2926997F2564B611DF61A343 (void);
// 0x000002BC System.Void System.Text.RegularExpressions.RegexCharClass::AddWord(System.Boolean,System.Boolean)
extern void RegexCharClass_AddWord_mAED995BB6613893E0950C5895515204F1E95D152 (void);
// 0x000002BD System.Void System.Text.RegularExpressions.RegexCharClass::AddSpace(System.Boolean,System.Boolean)
extern void RegexCharClass_AddSpace_mD1BF3AD215D69EC6CF0E49A359F7FC709FD6FBB6 (void);
// 0x000002BE System.Void System.Text.RegularExpressions.RegexCharClass::AddDigit(System.Boolean,System.Boolean,System.String)
extern void RegexCharClass_AddDigit_m04C1001F7E8DA85CB2D262ED403BA9BD215A7A8E (void);
// 0x000002BF System.Char System.Text.RegularExpressions.RegexCharClass::SingletonChar(System.String)
extern void RegexCharClass_SingletonChar_m11683F48B3AA3E0B5CD5849C40ADDCECC91BFF10 (void);
// 0x000002C0 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsMergeable(System.String)
extern void RegexCharClass_IsMergeable_mD017475B43D0621F15ECAF5006410D4D0CCC46AD (void);
// 0x000002C1 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsEmpty(System.String)
extern void RegexCharClass_IsEmpty_mDD55987C8F4B887716E46869730F5E1E31593A44 (void);
// 0x000002C2 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingleton(System.String)
extern void RegexCharClass_IsSingleton_mF23CB7003B555ADB4C5035A1B3A218A8ED847D12 (void);
// 0x000002C3 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingletonInverse(System.String)
extern void RegexCharClass_IsSingletonInverse_m62E7E31998BEBC824A4EED3CEE5A2D3FB3BF5831 (void);
// 0x000002C4 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSubtraction(System.String)
extern void RegexCharClass_IsSubtraction_m069CC20713C5757A8AAD9BA556F07C8E042F3BE8 (void);
// 0x000002C5 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsNegated(System.String)
extern void RegexCharClass_IsNegated_m66E1348EBCAAD253AEEA5EDC3F9A93E84A433947 (void);
// 0x000002C6 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsECMAWordChar(System.Char)
extern void RegexCharClass_IsECMAWordChar_m3A2920E6309D58F982B8B7AE20D9166601DDCA0B (void);
// 0x000002C7 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsWordChar(System.Char)
extern void RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94 (void);
// 0x000002C8 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClass(System.Char,System.String)
extern void RegexCharClass_CharInClass_mAF6EE8C936383EB630F17C8C268F10BB8C10BC83 (void);
// 0x000002C9 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClassRecursive(System.Char,System.String,System.Int32)
extern void RegexCharClass_CharInClassRecursive_m7B2DC6EF52CFA494C26DC8AA976F3A06DDAF22FC (void);
// 0x000002CA System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClassInternal(System.Char,System.String,System.Int32,System.Int32,System.Int32)
extern void RegexCharClass_CharInClassInternal_m166B4DDEB0553E88B58A2F3E859CA2D29995CF54 (void);
// 0x000002CB System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInCategory(System.Char,System.String,System.Int32,System.Int32,System.Int32)
extern void RegexCharClass_CharInCategory_m1B20968374CE9C35FE81D172C3325E37433897E1 (void);
// 0x000002CC System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInCategoryGroup(System.Char,System.Globalization.UnicodeCategory,System.String,System.Int32&)
extern void RegexCharClass_CharInCategoryGroup_mDDAA3F1975AC1A7527137AE6951121F381703D48 (void);
// 0x000002CD System.String System.Text.RegularExpressions.RegexCharClass::NegateCategory(System.String)
extern void RegexCharClass_NegateCategory_m1C615694A5F8EECBBE4C09BA293454D856F52F50 (void);
// 0x000002CE System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::Parse(System.String)
extern void RegexCharClass_Parse_m4766E7E53BF572FD9815DEEBD9831380C33C796A (void);
// 0x000002CF System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::ParseRecursive(System.String,System.Int32)
extern void RegexCharClass_ParseRecursive_m6ABF2F2B8B8C5A559866EBF3FBA305247DE4CCF6 (void);
// 0x000002D0 System.Int32 System.Text.RegularExpressions.RegexCharClass::RangeCount()
extern void RegexCharClass_RangeCount_m36A38A50CD2E3E61B5F55D95562BD92923F981F1 (void);
// 0x000002D1 System.String System.Text.RegularExpressions.RegexCharClass::ToStringClass()
extern void RegexCharClass_ToStringClass_m6B0B92A0A525001CD78A6C2A766295268E0FED57 (void);
// 0x000002D2 System.Text.RegularExpressions.RegexCharClass/SingleRange System.Text.RegularExpressions.RegexCharClass::GetRangeAt(System.Int32)
extern void RegexCharClass_GetRangeAt_m67B8198B09F344044D8F742C5C9869034C4A3128 (void);
// 0x000002D3 System.Void System.Text.RegularExpressions.RegexCharClass::Canonicalize()
extern void RegexCharClass_Canonicalize_m77EEBAD046B3EAD5110DD472434BDE16851C7A9E (void);
// 0x000002D4 System.String System.Text.RegularExpressions.RegexCharClass::SetFromProperty(System.String,System.Boolean,System.String)
extern void RegexCharClass_SetFromProperty_m75FD04D8F9EA5FD996E4C8B4A2DF45BEEE6BABC5 (void);
// 0x000002D5 System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
extern void LowerCaseMapping__ctor_m06D0A21D5D72E39535F82076EF046F98C62D7D5A (void);
// 0x000002D6 System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
extern void SingleRangeComparer_Compare_m917FDE86E5F31A755D07077EA095F8B7E27E130B (void);
// 0x000002D7 System.Void System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::.ctor()
extern void SingleRangeComparer__ctor_m9B430EFE70974D964D73913D81E7C6C9236BBCCE (void);
// 0x000002D8 System.Void System.Text.RegularExpressions.RegexCharClass/SingleRange::.ctor(System.Char,System.Char)
extern void SingleRange__ctor_m14FD490AFB119E412298554D31FADDCB9465511E (void);
// 0x000002D9 System.Void System.Text.RegularExpressions.RegexCode::.ctor(System.Int32[],System.Collections.Generic.List`1<System.String>,System.Int32,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.RegexBoyerMoore,System.Text.RegularExpressions.RegexPrefix,System.Int32,System.Boolean)
extern void RegexCode__ctor_mB6B1143570412865B02CB6AE3DC3F81C0FB6D6C0 (void);
// 0x000002DA System.Boolean System.Text.RegularExpressions.RegexCode::OpcodeBacktracks(System.Int32)
extern void RegexCode_OpcodeBacktracks_m77D0680FD94F152F85C6CF8724A5EBFFE07A1397 (void);
// 0x000002DB System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::FirstChars(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_FirstChars_mF01A2365FACEC127CC0EDEEC60340851A0C018A7 (void);
// 0x000002DC System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::Prefix(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_Prefix_m6D786604F799DF1EEF509BEA577E2DC50C75FB6E (void);
// 0x000002DD System.Int32 System.Text.RegularExpressions.RegexFCD::Anchors(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_Anchors_mF19C2B50200C6D7E38566E5C4854DB04EADFF5CE (void);
// 0x000002DE System.Int32 System.Text.RegularExpressions.RegexFCD::AnchorFromType(System.Int32)
extern void RegexFCD_AnchorFromType_mF944273F420E8D43F4F9EC93950E3797B4C10A47 (void);
// 0x000002DF System.Void System.Text.RegularExpressions.RegexFCD::.ctor()
extern void RegexFCD__ctor_mCF73BE925BE1ECF69F189405F3A29DDAFE008BA9 (void);
// 0x000002E0 System.Void System.Text.RegularExpressions.RegexFCD::PushInt(System.Int32)
extern void RegexFCD_PushInt_m0B38AFDAF0D14FF1E41AC90838B40C4C866D8875 (void);
// 0x000002E1 System.Boolean System.Text.RegularExpressions.RegexFCD::IntIsEmpty()
extern void RegexFCD_IntIsEmpty_m05E3C6FF40B69E98D90CF1C12DF3F32AEC800B5E (void);
// 0x000002E2 System.Int32 System.Text.RegularExpressions.RegexFCD::PopInt()
extern void RegexFCD_PopInt_m1DF4F5E6B4BA9E15AFF2B3C44D1A233EA46EFCD0 (void);
// 0x000002E3 System.Void System.Text.RegularExpressions.RegexFCD::PushFC(System.Text.RegularExpressions.RegexFC)
extern void RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675 (void);
// 0x000002E4 System.Boolean System.Text.RegularExpressions.RegexFCD::FCIsEmpty()
extern void RegexFCD_FCIsEmpty_m749E6423466EAD51E38445AC91E76DE31258574F (void);
// 0x000002E5 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::PopFC()
extern void RegexFCD_PopFC_mB83F2100E8EBACF17904BD5CACB57525D2966628 (void);
// 0x000002E6 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::TopFC()
extern void RegexFCD_TopFC_mAE41171B96938FD879E0C0AE7C0D06645AAA84CD (void);
// 0x000002E7 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_RegexFCFromRegexTree_mD5A53219905969B914CE27404553A4360DA78500 (void);
// 0x000002E8 System.Void System.Text.RegularExpressions.RegexFCD::SkipChild()
extern void RegexFCD_SkipChild_m5ACE619BAC10DD5DFE755655DB6151E7DB0885FD (void);
// 0x000002E9 System.Void System.Text.RegularExpressions.RegexFCD::CalculateFC(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
extern void RegexFCD_CalculateFC_m16F7EB523C02B530A741A7F6364F2E46865DCC91 (void);
// 0x000002EA System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Boolean)
extern void RegexFC__ctor_m18E889B95C8C6014582FD2C6991F789190519F0A (void);
// 0x000002EB System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern void RegexFC__ctor_m073D88DF033828EB626DBEA191FE78296CADB57D (void);
// 0x000002EC System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.String,System.Boolean,System.Boolean)
extern void RegexFC__ctor_m69E0058CD2F4A36F14589250B3F5CBAD7025D6F5 (void);
// 0x000002ED System.Boolean System.Text.RegularExpressions.RegexFC::AddFC(System.Text.RegularExpressions.RegexFC,System.Boolean)
extern void RegexFC_AddFC_m61D0F8CDE635ED3A48AEA069A7700B100D2AE851 (void);
// 0x000002EE System.String System.Text.RegularExpressions.RegexFC::GetFirstChars(System.Globalization.CultureInfo)
extern void RegexFC_GetFirstChars_m6BAC398ABDCA5AF58CBE678143C9792611A2A3E8 (void);
// 0x000002EF System.Boolean System.Text.RegularExpressions.RegexFC::IsCaseInsensitive()
extern void RegexFC_IsCaseInsensitive_m99FC1448E7D14596DB9B7AA327A937E719CC161E (void);
// 0x000002F0 System.Void System.Text.RegularExpressions.RegexPrefix::.ctor(System.String,System.Boolean)
extern void RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4 (void);
// 0x000002F1 System.String System.Text.RegularExpressions.RegexPrefix::get_Prefix()
extern void RegexPrefix_get_Prefix_m844D02262C0720B0DC488AD1541713AD37BC518E (void);
// 0x000002F2 System.Boolean System.Text.RegularExpressions.RegexPrefix::get_CaseInsensitive()
extern void RegexPrefix_get_CaseInsensitive_m4DAE2D9E91916BFFAB928F7DCAA20A5ABD4560E6 (void);
// 0x000002F3 System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexPrefix::get_Empty()
extern void RegexPrefix_get_Empty_m3D63F7F64529D4CA3C0929F94E035EEED7D9E0F9 (void);
// 0x000002F4 System.Void System.Text.RegularExpressions.RegexPrefix::.cctor()
extern void RegexPrefix__cctor_mF7EA052790930134AC69C755D0066C70CA86363E (void);
// 0x000002F5 System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32[],System.Int32,System.String)
extern void Group__ctor_mFDE74CF068520CBE797B563B419B8817E60CB58C (void);
// 0x000002F6 System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern void Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (void);
// 0x000002F7 System.Void System.Text.RegularExpressions.Group::.cctor()
extern void Group__cctor_mC3032FEBEBFB00282A4485A8D95E47649CE2B881 (void);
// 0x000002F8 System.Void System.Text.RegularExpressions.Group::.ctor()
extern void Group__ctor_mEB6936CDFD191A4C92766CE3F3301161D7505C5E (void);
// 0x000002F9 System.Object System.Text.RegularExpressions.GroupCollection::get_SyncRoot()
extern void GroupCollection_get_SyncRoot_m7505B29FFFE40E5319BAD3F3B3332F8A6299570A (void);
// 0x000002FA System.Int32 System.Text.RegularExpressions.GroupCollection::get_Count()
extern void GroupCollection_get_Count_mE8775E53B4F5DA6D520BEF5ECEED2E0C08A26B39 (void);
// 0x000002FB System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
extern void GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3 (void);
// 0x000002FC System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::GetGroup(System.Int32)
extern void GroupCollection_GetGroup_m8EDFDB8D85D8BEC6EB98B68CA69EE0022FC16B13 (void);
// 0x000002FD System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::GetGroupImpl(System.Int32)
extern void GroupCollection_GetGroupImpl_m27CE16949BE0A9CFC61CC6CBF3FB179F63654D92 (void);
// 0x000002FE System.Void System.Text.RegularExpressions.GroupCollection::CopyTo(System.Array,System.Int32)
extern void GroupCollection_CopyTo_m122BEB82372AC34C575FCB8C71188A2A49CCC482 (void);
// 0x000002FF System.Collections.IEnumerator System.Text.RegularExpressions.GroupCollection::GetEnumerator()
extern void GroupCollection_GetEnumerator_m47E269C5A8C902948812AF4F52D0C96759550EE9 (void);
// 0x00000300 System.Void System.Text.RegularExpressions.GroupCollection::.ctor()
extern void GroupCollection__ctor_mB178F93E8DB52AA6412FF28E5FE50943E2BABFFB (void);
// 0x00000301 System.Void System.Text.RegularExpressions.GroupEnumerator::.ctor(System.Text.RegularExpressions.GroupCollection)
extern void GroupEnumerator__ctor_m46D826F06B9D95983146DF49810664D0587A79A9 (void);
// 0x00000302 System.Boolean System.Text.RegularExpressions.GroupEnumerator::MoveNext()
extern void GroupEnumerator_MoveNext_m631A4859F0C83A63B37F5C890ACF2AD0BBCBEE4F (void);
// 0x00000303 System.Object System.Text.RegularExpressions.GroupEnumerator::get_Current()
extern void GroupEnumerator_get_Current_m3E2FCB1F45CE0B479C8201E8F1FE09AAB0143D50 (void);
// 0x00000304 System.Text.RegularExpressions.Capture System.Text.RegularExpressions.GroupEnumerator::get_Capture()
extern void GroupEnumerator_get_Capture_mDA80B69ADC22DF2536DC7BC4F257B01D47B3C671 (void);
// 0x00000305 System.Void System.Text.RegularExpressions.GroupEnumerator::Reset()
extern void GroupEnumerator_Reset_mA6AFA1D425CAF9207D81F9E5F1B3D7687E5818E3 (void);
// 0x00000306 System.Void System.Text.RegularExpressions.RegexInterpreter::.ctor(System.Text.RegularExpressions.RegexCode,System.Globalization.CultureInfo)
extern void RegexInterpreter__ctor_mB81896A8292574F7532CF707F74A1AC1DECEA9FF (void);
// 0x00000307 System.Void System.Text.RegularExpressions.RegexInterpreter::InitTrackCount()
extern void RegexInterpreter_InitTrackCount_mFFFBE9294C6FCB854D4502362473C40A5ABBBFC4 (void);
// 0x00000308 System.Void System.Text.RegularExpressions.RegexInterpreter::Advance()
extern void RegexInterpreter_Advance_m01094234871D9E0AD3DE9225443828647676F55A (void);
// 0x00000309 System.Void System.Text.RegularExpressions.RegexInterpreter::Advance(System.Int32)
extern void RegexInterpreter_Advance_m31E2455F84B61536DE535BE51D4D0B42DC33857B (void);
// 0x0000030A System.Void System.Text.RegularExpressions.RegexInterpreter::Goto(System.Int32)
extern void RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9 (void);
// 0x0000030B System.Void System.Text.RegularExpressions.RegexInterpreter::Textto(System.Int32)
extern void RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850 (void);
// 0x0000030C System.Void System.Text.RegularExpressions.RegexInterpreter::Trackto(System.Int32)
extern void RegexInterpreter_Trackto_mDFDFF0401BC8F2B2D26AEC65B54B963F84A089AE (void);
// 0x0000030D System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textstart()
extern void RegexInterpreter_Textstart_mDF185C6B3E245A2307A8B0B9F5FE5DF8C8C9936E (void);
// 0x0000030E System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textpos()
extern void RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC (void);
// 0x0000030F System.Int32 System.Text.RegularExpressions.RegexInterpreter::Trackpos()
extern void RegexInterpreter_Trackpos_m6BDE792A7333FADB2533591B88211FD77E8F0401 (void);
// 0x00000310 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush()
extern void RegexInterpreter_TrackPush_mC82959F407482A4713C419296455A18F5D861E93 (void);
// 0x00000311 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32)
extern void RegexInterpreter_TrackPush_mA225A4A0302F57CE82842189DCB8895A9AAEDB3D (void);
// 0x00000312 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878 (void);
// 0x00000313 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush_m606F28BD60B479F0FD3073F8B5627836DB89230E (void);
// 0x00000314 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32)
extern void RegexInterpreter_TrackPush2_m5131F1DCBCA4D4D2231B44A85B08DE319BE31C9F (void);
// 0x00000315 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush2_m18FF10B704A6586A18D9AB21D28737DC32DA2797 (void);
// 0x00000316 System.Void System.Text.RegularExpressions.RegexInterpreter::Backtrack()
extern void RegexInterpreter_Backtrack_m8D227FAE1EFD91174D43FF070D9200291941E593 (void);
// 0x00000317 System.Void System.Text.RegularExpressions.RegexInterpreter::SetOperator(System.Int32)
extern void RegexInterpreter_SetOperator_m693B374C6827D36CE755EFFDA53E245FB04652EC (void);
// 0x00000318 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop()
extern void RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1 (void);
// 0x00000319 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop(System.Int32)
extern void RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B (void);
// 0x0000031A System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek()
extern void RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861 (void);
// 0x0000031B System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek(System.Int32)
extern void RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699 (void);
// 0x0000031C System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32)
extern void RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60 (void);
// 0x0000031D System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32,System.Int32)
extern void RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F (void);
// 0x0000031E System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop()
extern void RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF (void);
// 0x0000031F System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop(System.Int32)
extern void RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681 (void);
// 0x00000320 System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek()
extern void RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991 (void);
// 0x00000321 System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek(System.Int32)
extern void RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8 (void);
// 0x00000322 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operator()
extern void RegexInterpreter_Operator_m3BD9AD7DCDA4E84DE4821DA786E1B1483E677B58 (void);
// 0x00000323 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operand(System.Int32)
extern void RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560 (void);
// 0x00000324 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Leftchars()
extern void RegexInterpreter_Leftchars_m6FD5AA399927D1767633B24AE234D596CBDD4002 (void);
// 0x00000325 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Rightchars()
extern void RegexInterpreter_Rightchars_m0D684BDADC810F61B803D30D121506833AD07CD7 (void);
// 0x00000326 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Bump()
extern void RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1 (void);
// 0x00000327 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Forwardchars()
extern void RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6 (void);
// 0x00000328 System.Char System.Text.RegularExpressions.RegexInterpreter::Forwardcharnext()
extern void RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1 (void);
// 0x00000329 System.Boolean System.Text.RegularExpressions.RegexInterpreter::Stringmatch(System.String)
extern void RegexInterpreter_Stringmatch_m89AE288DB294AC0146C7772193CAD3B702849E54 (void);
// 0x0000032A System.Boolean System.Text.RegularExpressions.RegexInterpreter::Refmatch(System.Int32,System.Int32)
extern void RegexInterpreter_Refmatch_m457B37C3E3B0671E7E89B7F6C16396D36EB32F68 (void);
// 0x0000032B System.Void System.Text.RegularExpressions.RegexInterpreter::Backwardnext()
extern void RegexInterpreter_Backwardnext_m0C573AFAD3FAEBED37991618A232ACB169F524FF (void);
// 0x0000032C System.Char System.Text.RegularExpressions.RegexInterpreter::CharAt(System.Int32)
extern void RegexInterpreter_CharAt_m9EFCB7CE5FB311B6C061AA996705CD3D402F8E8C (void);
// 0x0000032D System.Boolean System.Text.RegularExpressions.RegexInterpreter::FindFirstChar()
extern void RegexInterpreter_FindFirstChar_m87D986F0502AEEFC4F13EBD0EAD891C495C4845F (void);
// 0x0000032E System.Void System.Text.RegularExpressions.RegexInterpreter::Go()
extern void RegexInterpreter_Go_m1CF26F8D95231F3B2235EA98AFB286C3F1629BED (void);
// 0x0000032F System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern void Match_get_Empty_m9565EFA0F267BAF2886447CB8169A654C5471918 (void);
// 0x00000330 System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void Match__ctor_m2A6BD37E98680890114AC62CDD23E1821E80A53A (void);
// 0x00000331 System.Void System.Text.RegularExpressions.Match::Reset(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32)
extern void Match_Reset_m53A78F16760B7CD5CC8A104F6CD95CA255D888AA (void);
// 0x00000332 System.Void System.Text.RegularExpressions.Match::AddMatch(System.Int32,System.Int32,System.Int32)
extern void Match_AddMatch_m5F28F3255C64D67D56C1542CE32A9D324F96780E (void);
// 0x00000333 System.Void System.Text.RegularExpressions.Match::BalanceMatch(System.Int32)
extern void Match_BalanceMatch_m85EA44453E637DEBE24ABC7562BF91EE1222DBFD (void);
// 0x00000334 System.Void System.Text.RegularExpressions.Match::RemoveMatch(System.Int32)
extern void Match_RemoveMatch_m154DB10030027B3738903FFB50DE511D71656B04 (void);
// 0x00000335 System.Boolean System.Text.RegularExpressions.Match::IsMatched(System.Int32)
extern void Match_IsMatched_m9D6E0C0AB1F3E1E8E49E77E3A0A0ECCD7C2C4FBA (void);
// 0x00000336 System.Int32 System.Text.RegularExpressions.Match::MatchIndex(System.Int32)
extern void Match_MatchIndex_m97F06DECDDA8BD3E4D8DF6B9224B8E24C0764F35 (void);
// 0x00000337 System.Int32 System.Text.RegularExpressions.Match::MatchLength(System.Int32)
extern void Match_MatchLength_m5C93EA60B018A79D9D05C8E69D25835848471B01 (void);
// 0x00000338 System.Void System.Text.RegularExpressions.Match::Tidy(System.Int32)
extern void Match_Tidy_mF0A46109EAF0E91CBCA732985265E1DC20CA3F51 (void);
// 0x00000339 System.Void System.Text.RegularExpressions.Match::.cctor()
extern void Match__cctor_mAB49EF64F5132A336358E3F1922FF173EA10CE3C (void);
// 0x0000033A System.Void System.Text.RegularExpressions.Match::.ctor()
extern void Match__ctor_mBABEF8F11A3BC6DB713519819D135CC87AC1B4CD (void);
// 0x0000033B System.Void System.Text.RegularExpressions.MatchSparse::.ctor(System.Text.RegularExpressions.Regex,System.Collections.Hashtable,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void MatchSparse__ctor_m7CEA8A7F538C706527778E8E75003DD74AC2FD41 (void);
// 0x0000033C System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32)
extern void MatchCollection__ctor_mCB1E897117A6976A5932C82A9EA0F11FF7BCABFE (void);
// 0x0000033D System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::GetMatch(System.Int32)
extern void MatchCollection_GetMatch_mFDC0D40A44A2A7B8DD98B2042C58F087C906FB6D (void);
// 0x0000033E System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
extern void MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926 (void);
// 0x0000033F System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
extern void MatchCollection_get_SyncRoot_m5E9A0515710C5B63B349C1B9E4D937D76AF43E68 (void);
// 0x00000340 System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
extern void MatchCollection_CopyTo_m840C9BD921059464F949874DACD5D253AD3D7F9D (void);
// 0x00000341 System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
extern void MatchCollection_GetEnumerator_mEDB2417DB45B514C8015043F52630DE1AD15447B (void);
// 0x00000342 System.Void System.Text.RegularExpressions.MatchCollection::.cctor()
extern void MatchCollection__cctor_m21581D057DC6333B7A289F12FB337006C060D7DE (void);
// 0x00000343 System.Void System.Text.RegularExpressions.MatchCollection::.ctor()
extern void MatchCollection__ctor_m816A933886BCC9F63F61F20057F42B2322B5E512 (void);
// 0x00000344 System.Void System.Text.RegularExpressions.MatchEnumerator::.ctor(System.Text.RegularExpressions.MatchCollection)
extern void MatchEnumerator__ctor_m92310EA085303D3D5AE499C710E0D789CDFA96D0 (void);
// 0x00000345 System.Boolean System.Text.RegularExpressions.MatchEnumerator::MoveNext()
extern void MatchEnumerator_MoveNext_m0BFFC9A7F6D578256C480ACFCE704183AED5984B (void);
// 0x00000346 System.Object System.Text.RegularExpressions.MatchEnumerator::get_Current()
extern void MatchEnumerator_get_Current_m75587B3BA722F9087035BC3E97E4299F84B0A315 (void);
// 0x00000347 System.Void System.Text.RegularExpressions.MatchEnumerator::Reset()
extern void MatchEnumerator_Reset_m5B2A386F35D391C963536C417714DFE78D0243FF (void);
// 0x00000348 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.String,System.String,System.TimeSpan)
extern void RegexMatchTimeoutException__ctor_m24286DF7231B227E3A8B3C31AE33447361971005 (void);
// 0x00000349 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor()
extern void RegexMatchTimeoutException__ctor_mA8C497C6700E1233B4953A8AA7B8F57C8682C410 (void);
// 0x0000034A System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void RegexMatchTimeoutException__ctor_m7DE41C173C1A57CEA5D015FF63DDFCB70CFF4FBF (void);
// 0x0000034B System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m6F530DBA34FE5CBECBCD322C8FBD4AE28054688C (void);
// 0x0000034C System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::Init()
extern void RegexMatchTimeoutException_Init_m68E86C1F84B3CB55302AEF9AF3F7DA3E707FB3CE (void);
// 0x0000034D System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::Init(System.String,System.String,System.TimeSpan)
extern void RegexMatchTimeoutException_Init_m6C0E5F51202C11983B507B8FE32CB5F556B892BD (void);
// 0x0000034E System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions)
extern void RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B (void);
// 0x0000034F System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Char)
extern void RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B (void);
// 0x00000350 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.String)
extern void RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA (void);
// 0x00000351 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32)
extern void RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F (void);
// 0x00000352 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32,System.Int32)
extern void RegexNode__ctor_m5ECC62B9C3918CD043542E5BEAAD39A06158E27A (void);
// 0x00000353 System.Boolean System.Text.RegularExpressions.RegexNode::UseOptionR()
extern void RegexNode_UseOptionR_mEBD872419C386D7C7802D2A6D2187E7B6D1D1641 (void);
// 0x00000354 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReverseLeft()
extern void RegexNode_ReverseLeft_m251846220299FD022068361A09B9A7A4CF67A586 (void);
// 0x00000355 System.Void System.Text.RegularExpressions.RegexNode::MakeRep(System.Int32,System.Int32,System.Int32)
extern void RegexNode_MakeRep_mFDCFC9F5DA5DCBFC66D6F00A8E08A602F00C5F48 (void);
// 0x00000356 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Reduce()
extern void RegexNode_Reduce_m9D14953F47CD1D924C3EEB9D0287D7F257AD2D98 (void);
// 0x00000357 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::StripEnation(System.Int32)
extern void RegexNode_StripEnation_m2BACBC29E58CEC452B91534BCFA2A21639712B61 (void);
// 0x00000358 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceGroup()
extern void RegexNode_ReduceGroup_m62F5B20C564AC8A8E8C1C9E00684A8BB9A988E3B (void);
// 0x00000359 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceRep()
extern void RegexNode_ReduceRep_m85B3760500D732A04B60CD3F247CE8ECA1E6F8C1 (void);
// 0x0000035A System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceSet()
extern void RegexNode_ReduceSet_mD307DD149936830074467A0F24C2E20032F708E9 (void);
// 0x0000035B System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceAlternation()
extern void RegexNode_ReduceAlternation_m193F3C5A073401BA987E5AB7D35F59B1FC902341 (void);
// 0x0000035C System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceConcatenation()
extern void RegexNode_ReduceConcatenation_m95EE4F324360AC71D52EDEC1C53F6F81D73C67C3 (void);
// 0x0000035D System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::MakeQuantifier(System.Boolean,System.Int32,System.Int32)
extern void RegexNode_MakeQuantifier_mA6A10E1AEF5AA80F82BD1BE6D28E62259208B5BC (void);
// 0x0000035E System.Void System.Text.RegularExpressions.RegexNode::AddChild(System.Text.RegularExpressions.RegexNode)
extern void RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8 (void);
// 0x0000035F System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Child(System.Int32)
extern void RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27 (void);
// 0x00000360 System.Int32 System.Text.RegularExpressions.RegexNode::ChildCount()
extern void RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D (void);
// 0x00000361 System.Int32 System.Text.RegularExpressions.RegexNode::Type()
extern void RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019 (void);
// 0x00000362 System.Text.RegularExpressions.RegexTree System.Text.RegularExpressions.RegexParser::Parse(System.String,System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_Parse_m5AE448041BC21B17EF68A2039991EC85F91AA9BB (void);
// 0x00000363 System.Void System.Text.RegularExpressions.RegexParser::.ctor(System.Globalization.CultureInfo)
extern void RegexParser__ctor_m99DC2B2C4B64E7298BBF49AD862BFD12007E38E4 (void);
// 0x00000364 System.Void System.Text.RegularExpressions.RegexParser::SetPattern(System.String)
extern void RegexParser_SetPattern_m852D668CE45FBCAA3A6ACC415B94BDD0A7190265 (void);
// 0x00000365 System.Void System.Text.RegularExpressions.RegexParser::Reset(System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_Reset_m426A8C90F4D8065486802AE7AC9FB07FC599EB01 (void);
// 0x00000366 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanRegex()
extern void RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D (void);
// 0x00000367 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean)
extern void RegexParser_ScanCharClass_mB6B50794EFC71B8228365D0D72EC66D3643C2800 (void);
// 0x00000368 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean,System.Boolean)
extern void RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D (void);
// 0x00000369 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanGroupOpen()
extern void RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7 (void);
// 0x0000036A System.Void System.Text.RegularExpressions.RegexParser::ScanBlank()
extern void RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82 (void);
// 0x0000036B System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBackslash()
extern void RegexParser_ScanBackslash_m89037831C296A1D781891B426A4016E643C042EF (void);
// 0x0000036C System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBasicBackslash()
extern void RegexParser_ScanBasicBackslash_m2F491AA1A30B1C901BCADE1C93DE9BA49008300C (void);
// 0x0000036D System.String System.Text.RegularExpressions.RegexParser::ScanCapname()
extern void RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7 (void);
// 0x0000036E System.Char System.Text.RegularExpressions.RegexParser::ScanOctal()
extern void RegexParser_ScanOctal_m95EA0AE4B61D5418914DDD3815C6277471B4EDFD (void);
// 0x0000036F System.Int32 System.Text.RegularExpressions.RegexParser::ScanDecimal()
extern void RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161 (void);
// 0x00000370 System.Char System.Text.RegularExpressions.RegexParser::ScanHex(System.Int32)
extern void RegexParser_ScanHex_mDD96A112E30DABDB5BC0C558373DA5607F8ACF95 (void);
// 0x00000371 System.Int32 System.Text.RegularExpressions.RegexParser::HexDigit(System.Char)
extern void RegexParser_HexDigit_mD112E7ACEDAD4A29DEA1A771854CA34CEB259053 (void);
// 0x00000372 System.Char System.Text.RegularExpressions.RegexParser::ScanControl()
extern void RegexParser_ScanControl_m26274BE5776CF5AC03E8EAC7B5972C0A8AF2A95B (void);
// 0x00000373 System.Boolean System.Text.RegularExpressions.RegexParser::IsOnlyTopOption(System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_IsOnlyTopOption_mAA13B95864B8B314B8B6689B47FA4BFE3B433280 (void);
// 0x00000374 System.Void System.Text.RegularExpressions.RegexParser::ScanOptions()
extern void RegexParser_ScanOptions_m56F01464F53558D3AF3BF1CD874A2656930AF31C (void);
// 0x00000375 System.Char System.Text.RegularExpressions.RegexParser::ScanCharEscape()
extern void RegexParser_ScanCharEscape_mA872DDDD24E165F5B5C5F62DCFAE3B02CCF97C98 (void);
// 0x00000376 System.String System.Text.RegularExpressions.RegexParser::ParseProperty()
extern void RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38 (void);
// 0x00000377 System.Int32 System.Text.RegularExpressions.RegexParser::TypeFromCode(System.Char)
extern void RegexParser_TypeFromCode_m11B176B0B9A6EF391370E021B111101AE56F4CC6 (void);
// 0x00000378 System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexParser::OptionFromCode(System.Char)
extern void RegexParser_OptionFromCode_mD6CDD96F9917C0518A437DB77BC53130AE702627 (void);
// 0x00000379 System.Void System.Text.RegularExpressions.RegexParser::CountCaptures()
extern void RegexParser_CountCaptures_m2ECDC9ED534F245A12224038BB86DE5D66DB56A3 (void);
// 0x0000037A System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureSlot(System.Int32,System.Int32)
extern void RegexParser_NoteCaptureSlot_m21BD1F90FF2C62FFA445303D574D271757D62222 (void);
// 0x0000037B System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureName(System.String,System.Int32)
extern void RegexParser_NoteCaptureName_m5CDAF94FD43B665DE067B6DC02BD72A315D48FFD (void);
// 0x0000037C System.Void System.Text.RegularExpressions.RegexParser::AssignNameSlots()
extern void RegexParser_AssignNameSlots_mC5738B99DE328E7D1FA7279A717640EC2044857E (void);
// 0x0000037D System.Int32 System.Text.RegularExpressions.RegexParser::CaptureSlotFromName(System.String)
extern void RegexParser_CaptureSlotFromName_mE18BA49BCA1CE4B972DC804E52C78E48905FEFAB (void);
// 0x0000037E System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureSlot(System.Int32)
extern void RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3 (void);
// 0x0000037F System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureName(System.String)
extern void RegexParser_IsCaptureName_m5DC0D7BF3AD01C929CB982048722BCD43797CEAE (void);
// 0x00000380 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionN()
extern void RegexParser_UseOptionN_mD441B71AC8368C644B8D9A0CCB3DB8BD681639B3 (void);
// 0x00000381 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionI()
extern void RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701 (void);
// 0x00000382 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionM()
extern void RegexParser_UseOptionM_mAE3FC2655A6E80EA35D5CEBEE1D82B5B07529118 (void);
// 0x00000383 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionS()
extern void RegexParser_UseOptionS_m070AD4458172FB14FF21E4502DCA6ECEE8938994 (void);
// 0x00000384 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionX()
extern void RegexParser_UseOptionX_m0BFB48EDC8A2F38A29A8F6CEC85080D9E04010FC (void);
// 0x00000385 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionE()
extern void RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9 (void);
// 0x00000386 System.Boolean System.Text.RegularExpressions.RegexParser::IsSpecial(System.Char)
extern void RegexParser_IsSpecial_m4AC43B42D2727513B568B534C6FF09093ACB2754 (void);
// 0x00000387 System.Boolean System.Text.RegularExpressions.RegexParser::IsStopperX(System.Char)
extern void RegexParser_IsStopperX_mF8FCEDFDBE9E5ED5469A04463782B951552BBB2F (void);
// 0x00000388 System.Boolean System.Text.RegularExpressions.RegexParser::IsQuantifier(System.Char)
extern void RegexParser_IsQuantifier_m7FFA04954A7E4C39D443D790483F2126A5119E25 (void);
// 0x00000389 System.Boolean System.Text.RegularExpressions.RegexParser::IsTrueQuantifier()
extern void RegexParser_IsTrueQuantifier_m22CCE851B85E0760270178DF1184746040E68AEF (void);
// 0x0000038A System.Boolean System.Text.RegularExpressions.RegexParser::IsSpace(System.Char)
extern void RegexParser_IsSpace_m4E37D473B564502A80E5C968E630AA2D4A56231A (void);
// 0x0000038B System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Int32,System.Int32,System.Boolean)
extern void RegexParser_AddConcatenate_mDDD0350FE254D75D6707668332D0F3088A5572AF (void);
// 0x0000038C System.Void System.Text.RegularExpressions.RegexParser::PushGroup()
extern void RegexParser_PushGroup_m2D76CB852430A3B3F7454DDC3322B2A5E4CE398F (void);
// 0x0000038D System.Void System.Text.RegularExpressions.RegexParser::PopGroup()
extern void RegexParser_PopGroup_mEC525DC83E5BF2F8DA03129AE3DF06834EB76552 (void);
// 0x0000038E System.Boolean System.Text.RegularExpressions.RegexParser::EmptyStack()
extern void RegexParser_EmptyStack_m756AC5BB66D0F2077EC7DD655A3D57681200F5CA (void);
// 0x0000038F System.Void System.Text.RegularExpressions.RegexParser::StartGroup(System.Text.RegularExpressions.RegexNode)
extern void RegexParser_StartGroup_mBF861FCFB0FB9ED26744CAE2297537DAB6DF37C1 (void);
// 0x00000390 System.Void System.Text.RegularExpressions.RegexParser::AddAlternate()
extern void RegexParser_AddAlternate_m77BCF63DD4E1AB89B70F72821CAE4B67936CD847 (void);
// 0x00000391 System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate()
extern void RegexParser_AddConcatenate_m77A3D9F6B1484C7B656BDF3CC5659248F9DEA1EA (void);
// 0x00000392 System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Boolean,System.Int32,System.Int32)
extern void RegexParser_AddConcatenate_m3B10D68AE09CC6A2F06AC65E49B918D11D5375FF (void);
// 0x00000393 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::Unit()
extern void RegexParser_Unit_m6C984A797C4A92AB0A9985E5A8207DB9CA9AE87F (void);
// 0x00000394 System.Void System.Text.RegularExpressions.RegexParser::AddUnitOne(System.Char)
extern void RegexParser_AddUnitOne_m991DCA85D3432B8F7F74D18125A69FFE25108F47 (void);
// 0x00000395 System.Void System.Text.RegularExpressions.RegexParser::AddUnitNotone(System.Char)
extern void RegexParser_AddUnitNotone_m4F79DE175B95FDB88323D7FE9DC3132E24F8F0C0 (void);
// 0x00000396 System.Void System.Text.RegularExpressions.RegexParser::AddUnitSet(System.String)
extern void RegexParser_AddUnitSet_mA262F57A7FAB27996D8115F66BC84A5C58317D7F (void);
// 0x00000397 System.Void System.Text.RegularExpressions.RegexParser::AddUnitNode(System.Text.RegularExpressions.RegexNode)
extern void RegexParser_AddUnitNode_mE8DC7CD039C933AE881097E041BA620AA325FDE8 (void);
// 0x00000398 System.Void System.Text.RegularExpressions.RegexParser::AddUnitType(System.Int32)
extern void RegexParser_AddUnitType_mEBDFA2325ABDA3FDA74184DBFB706824F6540553 (void);
// 0x00000399 System.Void System.Text.RegularExpressions.RegexParser::AddGroup()
extern void RegexParser_AddGroup_m8989D6A9CD4B700522D722DEF5FEFC267C4DBFB7 (void);
// 0x0000039A System.Void System.Text.RegularExpressions.RegexParser::PushOptions()
extern void RegexParser_PushOptions_m6E501EE3C5D6FE990ED74935A9AC9A6E834FD968 (void);
// 0x0000039B System.Void System.Text.RegularExpressions.RegexParser::PopOptions()
extern void RegexParser_PopOptions_mAE4848419A71162B8E563781AC817A8D6ACEB91B (void);
// 0x0000039C System.Boolean System.Text.RegularExpressions.RegexParser::EmptyOptionsStack()
extern void RegexParser_EmptyOptionsStack_mC16A4D18503FF296911710732A95062A8279163B (void);
// 0x0000039D System.Void System.Text.RegularExpressions.RegexParser::PopKeepOptions()
extern void RegexParser_PopKeepOptions_m911F83DFA290ED90B06D3D3166553E6205C256C1 (void);
// 0x0000039E System.ArgumentException System.Text.RegularExpressions.RegexParser::MakeException(System.String)
extern void RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC (void);
// 0x0000039F System.Int32 System.Text.RegularExpressions.RegexParser::Textpos()
extern void RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88 (void);
// 0x000003A0 System.Void System.Text.RegularExpressions.RegexParser::Textto(System.Int32)
extern void RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2 (void);
// 0x000003A1 System.Char System.Text.RegularExpressions.RegexParser::MoveRightGetChar()
extern void RegexParser_MoveRightGetChar_m07070EAE762101F291D120790A1D1A58A58886A9 (void);
// 0x000003A2 System.Void System.Text.RegularExpressions.RegexParser::MoveRight()
extern void RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9 (void);
// 0x000003A3 System.Void System.Text.RegularExpressions.RegexParser::MoveRight(System.Int32)
extern void RegexParser_MoveRight_m921C1D96B625B4C8AF1D658E514D57CC44E40B61 (void);
// 0x000003A4 System.Void System.Text.RegularExpressions.RegexParser::MoveLeft()
extern void RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5 (void);
// 0x000003A5 System.Char System.Text.RegularExpressions.RegexParser::CharAt(System.Int32)
extern void RegexParser_CharAt_mF46179762DDF46FB78E32CCA3058950244CFCB70 (void);
// 0x000003A6 System.Char System.Text.RegularExpressions.RegexParser::RightChar()
extern void RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91 (void);
// 0x000003A7 System.Char System.Text.RegularExpressions.RegexParser::RightChar(System.Int32)
extern void RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147 (void);
// 0x000003A8 System.Int32 System.Text.RegularExpressions.RegexParser::CharsRight()
extern void RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79 (void);
// 0x000003A9 System.Void System.Text.RegularExpressions.RegexParser::.cctor()
extern void RegexParser__cctor_m4F6AA7D64102443052B58896EDF95DCC21C2C0C7 (void);
// 0x000003AA System.Void System.Text.RegularExpressions.RegexRunner::.ctor()
extern void RegexRunner__ctor_mBC777F351AD6D1CDD5F20C408B936F7D0F36ED69 (void);
// 0x000003AB System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.TimeSpan)
extern void RegexRunner_Scan_m903691F4DFB68C0267F240D61A6F166BB592CE53 (void);
// 0x000003AC System.Void System.Text.RegularExpressions.RegexRunner::StartTimeoutWatch()
extern void RegexRunner_StartTimeoutWatch_mA17870A15492787CA1384132267054AB09BE8BE9 (void);
// 0x000003AD System.Void System.Text.RegularExpressions.RegexRunner::CheckTimeout()
extern void RegexRunner_CheckTimeout_m20BF0CD8BC16738ED6E7F20AAF5B4EE695E7E120 (void);
// 0x000003AE System.Void System.Text.RegularExpressions.RegexRunner::DoCheckTimeout()
extern void RegexRunner_DoCheckTimeout_mC26B9239FA1CD3DC98F11A82800F61852793CEA5 (void);
// 0x000003AF System.Void System.Text.RegularExpressions.RegexRunner::Go()
// 0x000003B0 System.Boolean System.Text.RegularExpressions.RegexRunner::FindFirstChar()
// 0x000003B1 System.Void System.Text.RegularExpressions.RegexRunner::InitTrackCount()
// 0x000003B2 System.Void System.Text.RegularExpressions.RegexRunner::InitMatch()
extern void RegexRunner_InitMatch_mCCF94A1E7CCE89275E47BB218C4DD58DF5D5593D (void);
// 0x000003B3 System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::TidyMatch(System.Boolean)
extern void RegexRunner_TidyMatch_m0EEEF0CFBB55AFF485B4D9F9FD21834B9B3A01FA (void);
// 0x000003B4 System.Void System.Text.RegularExpressions.RegexRunner::EnsureStorage()
extern void RegexRunner_EnsureStorage_mB3DB043396771740A05B2AABC293DAAB1250B024 (void);
// 0x000003B5 System.Boolean System.Text.RegularExpressions.RegexRunner::IsBoundary(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_IsBoundary_mCF4AE83F6FE3CC46C71C4558DBCDEC255BD422B8 (void);
// 0x000003B6 System.Boolean System.Text.RegularExpressions.RegexRunner::IsECMABoundary(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_IsECMABoundary_m56C692126DF69F0933BBFCBF122F764C6093DA26 (void);
// 0x000003B7 System.Void System.Text.RegularExpressions.RegexRunner::DoubleTrack()
extern void RegexRunner_DoubleTrack_m15E35365FAF5F438C7BD0BB0C37594F765949F1F (void);
// 0x000003B8 System.Void System.Text.RegularExpressions.RegexRunner::DoubleStack()
extern void RegexRunner_DoubleStack_m89C12DF438D7BE4ADA2A4D1DFA36F274F292E1F4 (void);
// 0x000003B9 System.Void System.Text.RegularExpressions.RegexRunner::DoubleCrawl()
extern void RegexRunner_DoubleCrawl_m7B67CFD3071825C9F01BC0ACE0E27B1C4EC6DED5 (void);
// 0x000003BA System.Void System.Text.RegularExpressions.RegexRunner::Crawl(System.Int32)
extern void RegexRunner_Crawl_mBE60CC8F17E6D85E1A87F0A86BC684F32ACE7CA5 (void);
// 0x000003BB System.Int32 System.Text.RegularExpressions.RegexRunner::Popcrawl()
extern void RegexRunner_Popcrawl_m2C994BE22A9A4DE0D897691A1CEF87189DB43E67 (void);
// 0x000003BC System.Int32 System.Text.RegularExpressions.RegexRunner::Crawlpos()
extern void RegexRunner_Crawlpos_m4EC84964D3AD3DB49724BFC28CE89FC34478D532 (void);
// 0x000003BD System.Void System.Text.RegularExpressions.RegexRunner::Capture(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_Capture_m3EB42B55A19BD7776156F04CBE9367C6EBA59F9C (void);
// 0x000003BE System.Void System.Text.RegularExpressions.RegexRunner::TransferCapture(System.Int32,System.Int32,System.Int32,System.Int32)
extern void RegexRunner_TransferCapture_m642CC595E9FA641B913CCBE02E233DBB319A6E8A (void);
// 0x000003BF System.Void System.Text.RegularExpressions.RegexRunner::Uncapture()
extern void RegexRunner_Uncapture_m70B0FFB308F48B4673F73311330BFF640F47B7D9 (void);
// 0x000003C0 System.Boolean System.Text.RegularExpressions.RegexRunner::IsMatched(System.Int32)
extern void RegexRunner_IsMatched_m7E64237D020BFFA74813A8B6455D5F35671A876C (void);
// 0x000003C1 System.Int32 System.Text.RegularExpressions.RegexRunner::MatchIndex(System.Int32)
extern void RegexRunner_MatchIndex_m150A8B71C07022C485630C71B2A9FA6FD195F88F (void);
// 0x000003C2 System.Int32 System.Text.RegularExpressions.RegexRunner::MatchLength(System.Int32)
extern void RegexRunner_MatchLength_m19C9B24F4F6CAC56A391A0AC47A4358C61615BF7 (void);
// 0x000003C3 System.Text.RegularExpressions.RegexRunner System.Text.RegularExpressions.RegexRunnerFactory::CreateInstance()
// 0x000003C4 System.Void System.Text.RegularExpressions.RegexTree::.ctor(System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable,System.Int32[],System.Int32,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexOptions)
extern void RegexTree__ctor_m89DA1335AAB55B0707774E978E6078CE42DB0DA6 (void);
// 0x000003C5 System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::Write(System.Text.RegularExpressions.RegexTree)
extern void RegexWriter_Write_mCDBE8B9E7703439F2F27C082808594B1056BEB99 (void);
// 0x000003C6 System.Void System.Text.RegularExpressions.RegexWriter::.ctor()
extern void RegexWriter__ctor_mD48D43BB96620B1A02C158E50060ECE3502D0E6B (void);
// 0x000003C7 System.Void System.Text.RegularExpressions.RegexWriter::PushInt(System.Int32)
extern void RegexWriter_PushInt_mA25838BDC2398866211241766B75312BAD982486 (void);
// 0x000003C8 System.Boolean System.Text.RegularExpressions.RegexWriter::EmptyStack()
extern void RegexWriter_EmptyStack_mC5B19C5B9AAA668CDCFCC6DA44067117C0E4615C (void);
// 0x000003C9 System.Int32 System.Text.RegularExpressions.RegexWriter::PopInt()
extern void RegexWriter_PopInt_mB3424F9BE841DD161D06F2E1062D81C5D662F79C (void);
// 0x000003CA System.Int32 System.Text.RegularExpressions.RegexWriter::CurPos()
extern void RegexWriter_CurPos_m59DF38756B9D80548194A1DEF05518EE276E2387 (void);
// 0x000003CB System.Void System.Text.RegularExpressions.RegexWriter::PatchJump(System.Int32,System.Int32)
extern void RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6 (void);
// 0x000003CC System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32)
extern void RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC (void);
// 0x000003CD System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32)
extern void RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75 (void);
// 0x000003CE System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32,System.Int32)
extern void RegexWriter_Emit_mDED2545E64CE95D941A1232DBA24EB6C81A7DB0C (void);
// 0x000003CF System.Int32 System.Text.RegularExpressions.RegexWriter::StringCode(System.String)
extern void RegexWriter_StringCode_m5D4A227BBAA0674B820D70BEA1A2F7D0B29635FE (void);
// 0x000003D0 System.ArgumentException System.Text.RegularExpressions.RegexWriter::MakeException(System.String)
extern void RegexWriter_MakeException_mA3013AA25D1D0526A10175955B32BE3C5EC94AC0 (void);
// 0x000003D1 System.Int32 System.Text.RegularExpressions.RegexWriter::MapCapnum(System.Int32)
extern void RegexWriter_MapCapnum_m5EA7BA45A1C4D51DC20C281246D3997A3001A0B6 (void);
// 0x000003D2 System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::RegexCodeFromRegexTree(System.Text.RegularExpressions.RegexTree)
extern void RegexWriter_RegexCodeFromRegexTree_m3352CAF05A1B1753D32D768B83BB778B3E2D4568 (void);
// 0x000003D3 System.Void System.Text.RegularExpressions.RegexWriter::EmitFragment(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
extern void RegexWriter_EmitFragment_m0B35F7C3BDC22B5DE82735F2652C7948AE8494A5 (void);
// 0x000003D4 System.Void System.Diagnostics.BooleanSwitch::.ctor(System.String,System.String)
extern void BooleanSwitch__ctor_mA9232C7B57B18DBDDFD4F14DA26483509C0FFD53 (void);
// 0x000003D5 System.Void System.Diagnostics.CorrelationManager::.ctor()
extern void CorrelationManager__ctor_m754646F4A5CF6B48B817773DD380DA8F65479F3C (void);
// 0x000003D6 System.Collections.Stack System.Diagnostics.CorrelationManager::get_LogicalOperationStack()
extern void CorrelationManager_get_LogicalOperationStack_m3F24D4584713FD52E9DE3A3933326613FE0138E9 (void);
// 0x000003D7 System.Collections.Stack System.Diagnostics.CorrelationManager::GetLogicalOperationStack()
extern void CorrelationManager_GetLogicalOperationStack_m809DE1BD10F64CAC955DFD2863F216C821174E4F (void);
// 0x000003D8 System.Void System.Diagnostics.Switch::.ctor(System.String,System.String)
extern void Switch__ctor_mA295E111B6A7F4B8D2B6AF796926017759669EA7 (void);
// 0x000003D9 System.Void System.Diagnostics.Switch::.ctor(System.String,System.String,System.String)
extern void Switch__ctor_mE69262A89E3F19ACB4610B1EBFB35C763BB3EA48 (void);
// 0x000003DA System.Void System.Diagnostics.Switch::_pruneCachedSwitches()
extern void Switch__pruneCachedSwitches_mB732689A566AFB2C1DD9693451B9DE80125CBEFC (void);
// 0x000003DB System.Void System.Diagnostics.Switch::.cctor()
extern void Switch__cctor_m73E1B17596C50266B4FD30170C74991462125626 (void);
// 0x000003DC System.Void System.Diagnostics.SwitchLevelAttribute::.ctor(System.Type)
extern void SwitchLevelAttribute__ctor_mB0C0910F9AA6FC3C568CD3DCEF69731CC528B53A (void);
// 0x000003DD System.Void System.Diagnostics.SwitchLevelAttribute::set_SwitchLevelType(System.Type)
extern void SwitchLevelAttribute_set_SwitchLevelType_m4757AB3B3D77487056F17495239C40B56FC2E9AF (void);
// 0x000003DE System.Diagnostics.TraceListenerCollection System.Diagnostics.Trace::get_Listeners()
extern void Trace_get_Listeners_m94CD4A8CF2B794FC31E19DB28CB6B039786555E8 (void);
// 0x000003DF System.Boolean System.Diagnostics.Trace::get_AutoFlush()
extern void Trace_get_AutoFlush_mE04CC3C8ED4D2D795DD453E7D31997DC78C704E7 (void);
// 0x000003E0 System.Diagnostics.CorrelationManager System.Diagnostics.Trace::get_CorrelationManager()
extern void Trace_get_CorrelationManager_m9674391BE39EBFCE2E998B68CC14AFFFD39B1FEF (void);
// 0x000003E1 System.String System.Diagnostics.TraceEventCache::get_Callstack()
extern void TraceEventCache_get_Callstack_mC4DF14DD35D5F2C2CCF6498DE056BCEC10E66F0B (void);
// 0x000003E2 System.Collections.Stack System.Diagnostics.TraceEventCache::get_LogicalOperationStack()
extern void TraceEventCache_get_LogicalOperationStack_mE02AFFC76491D60F15AB65B943302C55D6981EDF (void);
// 0x000003E3 System.DateTime System.Diagnostics.TraceEventCache::get_DateTime()
extern void TraceEventCache_get_DateTime_m5CF292D699C6CBC0390D711755AAF99B44D11672 (void);
// 0x000003E4 System.Int32 System.Diagnostics.TraceEventCache::get_ProcessId()
extern void TraceEventCache_get_ProcessId_m563BADB0229C98B1C0644F0710E7ECFCF79B2612 (void);
// 0x000003E5 System.String System.Diagnostics.TraceEventCache::get_ThreadId()
extern void TraceEventCache_get_ThreadId_m4AF2B21122D0E5EDA0E25BE8251C892C60D2CCC9 (void);
// 0x000003E6 System.Int64 System.Diagnostics.TraceEventCache::get_Timestamp()
extern void TraceEventCache_get_Timestamp_m9AA488062DC9C7530063CB1F931AE5DF38E9BC38 (void);
// 0x000003E7 System.Void System.Diagnostics.TraceEventCache::InitProcessInfo()
extern void TraceEventCache_InitProcessInfo_m2828EB2BB26A674D2D21D4943379DA4C2C67E5DB (void);
// 0x000003E8 System.Int32 System.Diagnostics.TraceEventCache::GetProcessId()
extern void TraceEventCache_GetProcessId_m98E9BBE27684B4CF513B8A57274B6F1D9143D832 (void);
// 0x000003E9 System.Int32 System.Diagnostics.TraceEventCache::GetThreadId()
extern void TraceEventCache_GetThreadId_mFAC10BA9A22F1D413EBDF48F2FC575031D0D43FE (void);
// 0x000003EA System.Void System.Diagnostics.TraceEventCache::.ctor()
extern void TraceEventCache__ctor_mEAEAB5B59E7F5FA03BED108C7A5D259CD01DF256 (void);
// 0x000003EB System.Boolean System.Diagnostics.TraceFilter::ShouldTrace(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.String,System.Object[],System.Object,System.Object[])
// 0x000003EC System.Boolean System.Diagnostics.TraceFilter::ShouldTrace(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.String)
extern void TraceFilter_ShouldTrace_mF33C8B50537B22C4B0BA2A5853C67D8C0DA34CF7 (void);
// 0x000003ED System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceInternal::get_Listeners()
extern void TraceInternal_get_Listeners_m65CA1B43F66634A2649DF4C38711D1BC4CFDDC09 (void);
// 0x000003EE System.Boolean System.Diagnostics.TraceInternal::get_AutoFlush()
extern void TraceInternal_get_AutoFlush_mA6CD506864A88784E661B0E88E675E82BA5D44A1 (void);
// 0x000003EF System.Int32 System.Diagnostics.TraceInternal::get_IndentLevel()
extern void TraceInternal_get_IndentLevel_mC76F5C9C346BECC375A399FBCB4B336AED411044 (void);
// 0x000003F0 System.Int32 System.Diagnostics.TraceInternal::get_IndentSize()
extern void TraceInternal_get_IndentSize_m32D735E3A34CD6A6667D3488CABA0D9C9883C082 (void);
// 0x000003F1 System.Void System.Diagnostics.TraceInternal::InitializeSettings()
extern void TraceInternal_InitializeSettings_m084DDD851AE58B70584519967C4D3067EFF411FF (void);
// 0x000003F2 System.Void System.Diagnostics.TraceInternal::.cctor()
extern void TraceInternal__cctor_m343A97F7E6E97674CC61894F50D9D706D077AF02 (void);
// 0x000003F3 System.Void System.Diagnostics.TraceListener::.ctor(System.String)
extern void TraceListener__ctor_m429A376FB5133ADCCB49B49207424A85F2297B92 (void);
// 0x000003F4 System.Boolean System.Diagnostics.TraceListener::get_IsThreadSafe()
extern void TraceListener_get_IsThreadSafe_m49B40383732B0D1CC00074B720CD01109EBE7CDE (void);
// 0x000003F5 System.Void System.Diagnostics.TraceListener::Dispose()
extern void TraceListener_Dispose_mE461183D13600E87F700B6E6767DB53C297B1B7A (void);
// 0x000003F6 System.Void System.Diagnostics.TraceListener::Dispose(System.Boolean)
extern void TraceListener_Dispose_mD6A93DC52C1AB6B44D6997F13783B43501371699 (void);
// 0x000003F7 System.Void System.Diagnostics.TraceListener::Flush()
extern void TraceListener_Flush_m2EDD7E43097D265D2C331C81A2FB5751D443E869 (void);
// 0x000003F8 System.Void System.Diagnostics.TraceListener::set_IndentLevel(System.Int32)
extern void TraceListener_set_IndentLevel_mA821C45C411343582B7063C28D660BB12FF69FB4 (void);
// 0x000003F9 System.Void System.Diagnostics.TraceListener::set_IndentSize(System.Int32)
extern void TraceListener_set_IndentSize_m36630B2544F96FD937B80B875F856CD2DE1088FC (void);
// 0x000003FA System.Diagnostics.TraceFilter System.Diagnostics.TraceListener::get_Filter()
extern void TraceListener_get_Filter_mD97AE4C0644A28CE0AA52A74AB2438483F7FE160 (void);
// 0x000003FB System.Boolean System.Diagnostics.TraceListener::get_NeedIndent()
extern void TraceListener_get_NeedIndent_m090A6186F6FDE1E8D7AA33AC4E8C1836CF398467 (void);
// 0x000003FC System.Void System.Diagnostics.TraceListener::set_NeedIndent(System.Boolean)
extern void TraceListener_set_NeedIndent_m15427B8A63CE1E9DE6658F1A4D98AAED36E419A6 (void);
// 0x000003FD System.Diagnostics.TraceOptions System.Diagnostics.TraceListener::get_TraceOutputOptions()
extern void TraceListener_get_TraceOutputOptions_m4E778D9AA69E6F35CBF39CCC427224227666AD88 (void);
// 0x000003FE System.Void System.Diagnostics.TraceListener::Write(System.String)
// 0x000003FF System.Void System.Diagnostics.TraceListener::WriteIndent()
extern void TraceListener_WriteIndent_mC273562BEA4A69DBDDEFAEB1C69FFE44ADC7F2E1 (void);
// 0x00000400 System.Void System.Diagnostics.TraceListener::WriteLine(System.String)
// 0x00000401 System.Void System.Diagnostics.TraceListener::TraceEvent(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.String)
extern void TraceListener_TraceEvent_mDDEC7B658D1C489E0E071DA5DF86825E441FF406 (void);
// 0x00000402 System.Void System.Diagnostics.TraceListener::WriteHeader(System.String,System.Diagnostics.TraceEventType,System.Int32)
extern void TraceListener_WriteHeader_m8DF170D8A8ED375C35FE363C97FFE3670985CF59 (void);
// 0x00000403 System.Void System.Diagnostics.TraceListener::WriteFooter(System.Diagnostics.TraceEventCache)
extern void TraceListener_WriteFooter_mD534A927DC5BD26FBB6C7E512283C366EB7D8E0C (void);
// 0x00000404 System.Boolean System.Diagnostics.TraceListener::IsEnabled(System.Diagnostics.TraceOptions)
extern void TraceListener_IsEnabled_mDAA2E3FBA091191651A84D5D775F6D104F79786D (void);
// 0x00000405 System.Void System.Diagnostics.TraceListenerCollection::.ctor()
extern void TraceListenerCollection__ctor_m1D02D9AB0605345E2BA08A8BD8C460B083014A59 (void);
// 0x00000406 System.Int32 System.Diagnostics.TraceListenerCollection::get_Count()
extern void TraceListenerCollection_get_Count_m4CB41846AEA2E6562E67ACC53942C6CBB4685C3A (void);
// 0x00000407 System.Int32 System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener)
extern void TraceListenerCollection_Add_mA6F288F337079BCB6B6D05751DD6B09F333F2120 (void);
// 0x00000408 System.Void System.Diagnostics.TraceListenerCollection::Clear()
extern void TraceListenerCollection_Clear_m12D87AC6C95A71C1DA47F10D38E4C696F5852882 (void);
// 0x00000409 System.Collections.IEnumerator System.Diagnostics.TraceListenerCollection::GetEnumerator()
extern void TraceListenerCollection_GetEnumerator_mF0F3FA549EE0924C512F71EF54F0BDD3973F7450 (void);
// 0x0000040A System.Void System.Diagnostics.TraceListenerCollection::InitializeListener(System.Diagnostics.TraceListener)
extern void TraceListenerCollection_InitializeListener_mA2CDC444FABAFC5D94678D1D1E154749FFA0A7CC (void);
// 0x0000040B System.Void System.Diagnostics.TraceListenerCollection::RemoveAt(System.Int32)
extern void TraceListenerCollection_RemoveAt_m46D6EB743D1B2560CA514E7A8F1FFB1DCBA529DE (void);
// 0x0000040C System.Object System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_Item(System.Int32)
extern void TraceListenerCollection_System_Collections_IList_get_Item_m2E85FA44C110F37C0E2E688E7CC0A4204B60D3A8 (void);
// 0x0000040D System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern void TraceListenerCollection_System_Collections_IList_set_Item_mF122EEE7CD13EC454DA19713858A607658DBA833 (void);
// 0x0000040E System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsReadOnly()
extern void TraceListenerCollection_System_Collections_IList_get_IsReadOnly_m950F96E180B5D9EEBD3EEAA6D7A9977628056E11 (void);
// 0x0000040F System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsFixedSize()
extern void TraceListenerCollection_System_Collections_IList_get_IsFixedSize_m0CB8144E8986CB77B2B74827D2F6C2A33C0AD633 (void);
// 0x00000410 System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.Add(System.Object)
extern void TraceListenerCollection_System_Collections_IList_Add_mC8E19ED6956BB0BA2D5B43A26CE80DC16459D4B7 (void);
// 0x00000411 System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.Contains(System.Object)
extern void TraceListenerCollection_System_Collections_IList_Contains_mE9DD13A1F3BE40983E949C50559DC445C384CE62 (void);
// 0x00000412 System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.IndexOf(System.Object)
extern void TraceListenerCollection_System_Collections_IList_IndexOf_m01A6724571F608193ADCF4DEA29EB29A0CA67B50 (void);
// 0x00000413 System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern void TraceListenerCollection_System_Collections_IList_Insert_m7D616D7BD82DCD3793910FF4A1440EC4A301DE6C (void);
// 0x00000414 System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Remove(System.Object)
extern void TraceListenerCollection_System_Collections_IList_Remove_mAD2C8873D42366D938885D4819D8BEBD2FAD6CEA (void);
// 0x00000415 System.Object System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_SyncRoot()
extern void TraceListenerCollection_System_Collections_ICollection_get_SyncRoot_m1BDA227922987065A1F9645F772B5D9EE3F42245 (void);
// 0x00000416 System.Void System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void TraceListenerCollection_System_Collections_ICollection_CopyTo_mA96CE292953A3495982FE54BC34AC80E70F44E60 (void);
// 0x00000417 System.Void System.Diagnostics.AsyncStreamReader::Close()
extern void AsyncStreamReader_Close_m0E2C4AE11462C4E48FA868098E96C3383F760FF7 (void);
// 0x00000418 System.Void System.Diagnostics.AsyncStreamReader::Dispose(System.Boolean)
extern void AsyncStreamReader_Dispose_mCE17ACF06D4F7EBDB9275ADC2C6F8AF09BDE2402 (void);
// 0x00000419 System.Void System.Diagnostics.AsyncStreamReader::CancelOperation()
extern void AsyncStreamReader_CancelOperation_mFB9524C17B1668A1B804DFACB9475F4FD7849982 (void);
// 0x0000041A System.Void System.Diagnostics.Process::.ctor(System.String,System.Boolean,System.Int32,System.Diagnostics.ProcessInfo)
extern void Process__ctor_m6A606F7D939C8186E6DFD910A65FE6AEFE0D725C (void);
// 0x0000041B System.Boolean System.Diagnostics.Process::get_Associated()
extern void Process_get_Associated_m937DBB0D3D22199FDAE59C73CB94291D41E903F5 (void);
// 0x0000041C System.Boolean System.Diagnostics.Process::get_HasExited()
extern void Process_get_HasExited_m579B038BCCBC4C468970D4CB171173FAB4FFA7C6 (void);
// 0x0000041D System.Int32 System.Diagnostics.Process::get_Id()
extern void Process_get_Id_m7401D58B8B638025FFD4574E33057A8F1B4B4E54 (void);
// 0x0000041E System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::get_SynchronizingObject()
extern void Process_get_SynchronizingObject_mBDAE5545C753268148A7C6FC28DEADDC964769B7 (void);
// 0x0000041F System.Void System.Diagnostics.Process::ReleaseProcessHandle(Microsoft.Win32.SafeHandles.SafeProcessHandle)
extern void Process_ReleaseProcessHandle_m3A7BE4BCA49D9A5C1174975C11B78E4D6F8901BD (void);
// 0x00000420 System.Void System.Diagnostics.Process::Dispose(System.Boolean)
extern void Process_Dispose_mF933D46A45CED6769611FA84D148AA7D44505ABC (void);
// 0x00000421 System.Void System.Diagnostics.Process::Close()
extern void Process_Close_m1319814A5C51B6B53330B294CD961D7221630CAB (void);
// 0x00000422 System.Void System.Diagnostics.Process::EnsureState(System.Diagnostics.Process/State)
extern void Process_EnsureState_mAF2E5BE1A4336E9710E74508D3A9B16C7049B8F1 (void);
// 0x00000423 System.Diagnostics.Process System.Diagnostics.Process::GetCurrentProcess()
extern void Process_GetCurrentProcess_m66CCB1FC5A373B1F70A7A52C7E6973910D84A82E (void);
// 0x00000424 System.Void System.Diagnostics.Process::OnExited()
extern void Process_OnExited_m16FF7289D7B34FE7F2EF6E2FDB8730C4E79052CB (void);
// 0x00000425 Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::GetProcessHandle(System.Int32,System.Boolean)
extern void Process_GetProcessHandle_m779733CC7F7164522150D645C936457CD8482370 (void);
// 0x00000426 Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::GetProcessHandle(System.Int32)
extern void Process_GetProcessHandle_mA1CF28D2E052D42DFDF95456FF74DF6D5F9DEFAB (void);
// 0x00000427 System.Void System.Diagnostics.Process::Refresh()
extern void Process_Refresh_mE0363D6E2713A0002941C693EF50BD1B0593198B (void);
// 0x00000428 System.Void System.Diagnostics.Process::StopWatchingForExit()
extern void Process_StopWatchingForExit_mBAD0DCA6C4ED339EDF09413F34C965E9A757CA54 (void);
// 0x00000429 System.String System.Diagnostics.Process::ToString()
extern void Process_ToString_m5D55F0EEA76377972D53D3757A4132CCCC0A5F87 (void);
// 0x0000042A System.String System.Diagnostics.Process::ProcessName_internal(System.IntPtr)
extern void Process_ProcessName_internal_m5270BDDC858083DA5E6D6082696B85443FA48E1A (void);
// 0x0000042B System.String System.Diagnostics.Process::ProcessName_internal(Microsoft.Win32.SafeHandles.SafeProcessHandle)
extern void Process_ProcessName_internal_m3DCEF6ADF221D6653A565BC530AD275BA5DA10DA (void);
// 0x0000042C System.String System.Diagnostics.Process::get_ProcessName()
extern void Process_get_ProcessName_mC66C70C57531D1DA91A51FCBA2CA41086B739C63 (void);
// 0x0000042D System.Void System.Diagnostics.Process::RaiseOnExited()
extern void Process_RaiseOnExited_mAE4A537F5FA32E4F6F283B0D665D41A6CBEFB420 (void);
// 0x0000042E System.Void System.Diagnostics.ProcessWaitHandle::.ctor(Microsoft.Win32.SafeHandles.SafeProcessHandle)
extern void ProcessWaitHandle__ctor_mB6F85E300A73FD16261E29E69F1ACBF17E0F44EB (void);
// 0x0000042F System.Void System.Diagnostics.DefaultTraceListener::.cctor()
extern void DefaultTraceListener__cctor_mDE152F0FE083A33746E4EC8A0F0437C0C71EFFEF (void);
// 0x00000430 System.String System.Diagnostics.DefaultTraceListener::GetPrefix(System.String,System.String)
extern void DefaultTraceListener_GetPrefix_mE0B3AF4F25EF9D99AD974C74372D91445B620C06 (void);
// 0x00000431 System.Void System.Diagnostics.DefaultTraceListener::.ctor()
extern void DefaultTraceListener__ctor_mC2E10D35F6E55FB86DAB67F2AD770ECB871B5708 (void);
// 0x00000432 System.String System.Diagnostics.DefaultTraceListener::get_LogFileName()
extern void DefaultTraceListener_get_LogFileName_m2DEF6CAE064A36F79543673CDB59656333C24C88 (void);
// 0x00000433 System.Void System.Diagnostics.DefaultTraceListener::WriteWindowsDebugString(System.String)
extern void DefaultTraceListener_WriteWindowsDebugString_mD0EDECEF430D0B9EC7BF53B8890E1838F90C138C (void);
// 0x00000434 System.Void System.Diagnostics.DefaultTraceListener::WriteDebugString(System.String)
extern void DefaultTraceListener_WriteDebugString_mD3BEBCC10CF1357ABD2D37032A7AE54050B3BE0E (void);
// 0x00000435 System.Void System.Diagnostics.DefaultTraceListener::WriteMonoTrace(System.String)
extern void DefaultTraceListener_WriteMonoTrace_m94915ED3790147BBBB25D5B6CE3F8197B4A46EB5 (void);
// 0x00000436 System.Void System.Diagnostics.DefaultTraceListener::WritePrefix()
extern void DefaultTraceListener_WritePrefix_m5FB6FE5C1A069AB53AA66C4A74355B4B4C5F250C (void);
// 0x00000437 System.Void System.Diagnostics.DefaultTraceListener::WriteImpl(System.String)
extern void DefaultTraceListener_WriteImpl_mC01E69D4496F833D2F9019AAD02F84C751FA67BB (void);
// 0x00000438 System.Void System.Diagnostics.DefaultTraceListener::WriteLogFile(System.String,System.String)
extern void DefaultTraceListener_WriteLogFile_m1B03BFECAD957FB2CEF7B9D4A4A8A0D7B1E25E8D (void);
// 0x00000439 System.Void System.Diagnostics.DefaultTraceListener::Write(System.String)
extern void DefaultTraceListener_Write_m2C77CF6C1459080523FE7213B8854A9B7FFDCEF9 (void);
// 0x0000043A System.Void System.Diagnostics.DefaultTraceListener::WriteLine(System.String)
extern void DefaultTraceListener_WriteLine_m457B4152407B96D84AF638EF07A79550652FB049 (void);
// 0x0000043B System.Void System.Diagnostics.MonitoringDescriptionAttribute::.ctor(System.String)
extern void MonitoringDescriptionAttribute__ctor_m41C05A99A8DFCA8AB181CC0E06F0B89D183C5CD2 (void);
// 0x0000043C System.String System.Diagnostics.MonitoringDescriptionAttribute::get_Description()
extern void MonitoringDescriptionAttribute_get_Description_mD28A2C666D1B4100914C186C9F8C84EC8B2E59CE (void);
// 0x0000043D System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern void Stopwatch_GetTimestamp_mD6D582A3E30369F05C829A5650BE2AE511EC807F (void);
// 0x0000043E System.Void System.Diagnostics.Stopwatch::.ctor()
extern void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (void);
// 0x0000043F System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern void Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (void);
// 0x00000440 System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern void Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF (void);
// 0x00000441 System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern void Stopwatch_get_ElapsedTicks_m3F4040FBF8C7CCDC69E0E04824019DEBB25AA410 (void);
// 0x00000442 System.Void System.Diagnostics.Stopwatch::Start()
extern void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (void);
// 0x00000443 System.Void System.Diagnostics.Stopwatch::.cctor()
extern void Stopwatch__cctor_mB40A9951DF8D540C2432D56CBC9643E62C40039E (void);
// 0x00000444 System.Object System.ComponentModel.ArrayConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void ArrayConverter_ConvertTo_mC144B3093D2037D3BB5B109D15725ABCC4E985D9 (void);
// 0x00000445 System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ArrayConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern void ArrayConverter_GetProperties_mC4FE7B6803C8B34BD45ED4DB67B0D3692AF60F55 (void);
// 0x00000446 System.Boolean System.ComponentModel.ArrayConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern void ArrayConverter_GetPropertiesSupported_m00411C896EB1E0B5155BB701D72A7F690C86C6F8 (void);
// 0x00000447 System.Void System.ComponentModel.ArrayConverter::.ctor()
extern void ArrayConverter__ctor_mAA6B57C16F167FF104B8E23402DE87ACA5E13A2B (void);
// 0x00000448 System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::.ctor(System.Type,System.Type,System.Int32)
extern void ArrayPropertyDescriptor__ctor_mC12E0FB619504B32AC30C714F3E51B0C3BA813AB (void);
// 0x00000449 System.Void System.ComponentModel.ArraySubsetEnumerator::.ctor(System.Array,System.Int32)
extern void ArraySubsetEnumerator__ctor_m5B723DBD13E9D2CF299DF5AF2EC781F4F3284FA5 (void);
// 0x0000044A System.Boolean System.ComponentModel.ArraySubsetEnumerator::MoveNext()
extern void ArraySubsetEnumerator_MoveNext_m7D6935FB0F09F3FD12A31109F078E36F0F3DBEF5 (void);
// 0x0000044B System.Void System.ComponentModel.ArraySubsetEnumerator::Reset()
extern void ArraySubsetEnumerator_Reset_mAE834D101CA22709C7A642ADE1D3C574B5AD8971 (void);
// 0x0000044C System.Object System.ComponentModel.ArraySubsetEnumerator::get_Current()
extern void ArraySubsetEnumerator_get_Current_mD765EE84A67782F89CB3111D5E221D4D0D24E152 (void);
// 0x0000044D System.Void System.ComponentModel.AttributeCollection::.ctor(System.Attribute[])
extern void AttributeCollection__ctor_m6987DEDDE616B905793F96BC20866FDEC937B313 (void);
// 0x0000044E System.Attribute[] System.ComponentModel.AttributeCollection::get_Attributes()
extern void AttributeCollection_get_Attributes_m698416274F06ACDAA3A55972D029340253DAD0F6 (void);
// 0x0000044F System.Int32 System.ComponentModel.AttributeCollection::get_Count()
extern void AttributeCollection_get_Count_mBD37E9F785A4BD5426A67D42F0FA01FC0E2BEA02 (void);
// 0x00000450 System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type)
extern void AttributeCollection_get_Item_m6FC48C10C5A4DB20C323E37DAB95C5D4D1B41CB8 (void);
// 0x00000451 System.Attribute System.ComponentModel.AttributeCollection::GetDefaultAttribute(System.Type)
extern void AttributeCollection_GetDefaultAttribute_m5E54BA907CD4D79B6FA6D54527E005FBE7A08AB7 (void);
// 0x00000452 System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator()
extern void AttributeCollection_GetEnumerator_m1464C016A16216F1F87A46940CF97B742AA032C6 (void);
// 0x00000453 System.Int32 System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_Count()
extern void AttributeCollection_System_Collections_ICollection_get_Count_mFBE2F16F7901E3F85F0C4B37032E83E99BDD2300 (void);
// 0x00000454 System.Object System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern void AttributeCollection_System_Collections_ICollection_get_SyncRoot_mE4F31AFB7E65BD84B5D64120F0C68F72753CD409 (void);
// 0x00000455 System.Void System.ComponentModel.AttributeCollection::CopyTo(System.Array,System.Int32)
extern void AttributeCollection_CopyTo_m29A1B7F330A44A3ABD7402CF9863089B917AA7F6 (void);
// 0x00000456 System.Collections.IEnumerator System.ComponentModel.AttributeCollection::System.Collections.IEnumerable.GetEnumerator()
extern void AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m5C57499D1B27935C97A88E9B44D571CAA87D93A4 (void);
// 0x00000457 System.Void System.ComponentModel.AttributeCollection::.cctor()
extern void AttributeCollection__cctor_mCFAD6C1E6356E3CA0CDDA680BDB66D72B0161DF8 (void);
// 0x00000458 System.Boolean System.ComponentModel.BooleanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void BooleanConverter_CanConvertFrom_mD1A1ADBAB30E4ED54C20554B62F6E4C38369E6CE (void);
// 0x00000459 System.Object System.ComponentModel.BooleanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void BooleanConverter_ConvertFrom_m828B810B45C660FD12088B64754C92984D043092 (void);
// 0x0000045A System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.BooleanConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern void BooleanConverter_GetStandardValues_m748173E319A659C8D26EF251DE71C75C83ED2E0C (void);
// 0x0000045B System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern void BooleanConverter_GetStandardValuesExclusive_m0C6DCBFBE8CB8099BD7B6CED00D30BCAF375E2BD (void);
// 0x0000045C System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern void BooleanConverter_GetStandardValuesSupported_mDEE5DB63C7EE136CF18FED6BE1DCB90749603D91 (void);
// 0x0000045D System.Void System.ComponentModel.BooleanConverter::.ctor()
extern void BooleanConverter__ctor_m50990A1CB60D3557199985EF164FF1E8AFCADC87 (void);
// 0x0000045E System.Void System.ComponentModel.BrowsableAttribute::.ctor(System.Boolean)
extern void BrowsableAttribute__ctor_m1828B5114921E3FF83082211F2FBE82517559035 (void);
// 0x0000045F System.Boolean System.ComponentModel.BrowsableAttribute::get_Browsable()
extern void BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0 (void);
// 0x00000460 System.Boolean System.ComponentModel.BrowsableAttribute::Equals(System.Object)
extern void BrowsableAttribute_Equals_m8EF756EC88F170513772F14FC08BDAD1EC2B863D (void);
// 0x00000461 System.Int32 System.ComponentModel.BrowsableAttribute::GetHashCode()
extern void BrowsableAttribute_GetHashCode_m40CEC719AE0A79F4339009D2E473342E59BAEDD1 (void);
// 0x00000462 System.Boolean System.ComponentModel.BrowsableAttribute::IsDefaultAttribute()
extern void BrowsableAttribute_IsDefaultAttribute_mC50D3EDE6ED3F85B4110292A8B541084A0F0D9CE (void);
// 0x00000463 System.Void System.ComponentModel.BrowsableAttribute::.cctor()
extern void BrowsableAttribute__cctor_mAA4C6BF30D72D9DB9B0BE59F46140D4E284E15B2 (void);
// 0x00000464 System.Type System.ComponentModel.ByteConverter::get_TargetType()
extern void ByteConverter_get_TargetType_m81EFBF9435A27B143816FF919B8229E72B66815D (void);
// 0x00000465 System.Object System.ComponentModel.ByteConverter::FromString(System.String,System.Int32)
extern void ByteConverter_FromString_m9A856D9C0B8BD313C9EC7275AAECE53C0BC26159 (void);
// 0x00000466 System.Object System.ComponentModel.ByteConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void ByteConverter_FromString_m9E2C8B3547011ED49AB13EB05197ADEDD37A6D00 (void);
// 0x00000467 System.String System.ComponentModel.ByteConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void ByteConverter_ToString_m6AEDBEAD9116A7D271669CF4432DAE220E060D1C (void);
// 0x00000468 System.Object System.ComponentModel.CollectionConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void CollectionConverter_ConvertTo_m79E20F624C9391C76B8081E74BF16EB4C04535E7 (void);
// 0x00000469 System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CollectionConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern void CollectionConverter_GetProperties_m5E61C7ABF345599E670E2FD270A35190DA1DBF20 (void);
// 0x0000046A System.Boolean System.ComponentModel.CollectionConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern void CollectionConverter_GetPropertiesSupported_m2068FA7A17AA42142E42EBF63151013E0934C728 (void);
// 0x0000046B System.Void System.ComponentModel.CollectionConverter::.ctor()
extern void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (void);
// 0x0000046C System.Void System.ComponentModel.Component::Finalize()
extern void Component_Finalize_m124F6FA2207E76C9DF18740E653C49D483A6E5C6 (void);
// 0x0000046D System.Boolean System.ComponentModel.Component::get_CanRaiseEvents()
extern void Component_get_CanRaiseEvents_m23993A519269D33F515ADADAB081C6ADF1551AF4 (void);
// 0x0000046E System.Boolean System.ComponentModel.Component::get_CanRaiseEventsInternal()
extern void Component_get_CanRaiseEventsInternal_mAF68FD325FA909AEA171953DF83CB1051A9EA3CC (void);
// 0x0000046F System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
extern void Component_get_Site_mAB0D574C04230287AFDEB9E691F885A49E18A80C (void);
// 0x00000470 System.Void System.ComponentModel.Component::Dispose()
extern void Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2 (void);
// 0x00000471 System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern void Component_Dispose_mD106692D0A494758CFFA2C9ACC0D7F94DD389192 (void);
// 0x00000472 System.Object System.ComponentModel.Component::GetService(System.Type)
extern void Component_GetService_mBAA7A515C81E800F2EEF6B796A5C4AA7C08B0A57 (void);
// 0x00000473 System.Boolean System.ComponentModel.Component::get_DesignMode()
extern void Component_get_DesignMode_m1F9F6A7CF2856B86B6571430C7F403A6393B90F0 (void);
// 0x00000474 System.String System.ComponentModel.Component::ToString()
extern void Component_ToString_m6B31E5C41739F547FD9F10B6439E8C3F1E15EBC3 (void);
// 0x00000475 System.Void System.ComponentModel.Component::.ctor()
extern void Component__ctor_mDA70A27899B8D66203C57A3E8678A11E033B4DF6 (void);
// 0x00000476 System.Void System.ComponentModel.Component::.cctor()
extern void Component__cctor_mCF89D907F40647C43A02DC0DB64838463CD6413F (void);
// 0x00000477 System.Void System.ComponentModel.CustomTypeDescriptor::.ctor()
extern void CustomTypeDescriptor__ctor_m188C6E2B7CA6781250922E66FAAF8CD660D3B7A8 (void);
// 0x00000478 System.ComponentModel.AttributeCollection System.ComponentModel.CustomTypeDescriptor::GetAttributes()
extern void CustomTypeDescriptor_GetAttributes_m3EF387AB8F57EFCED1B03248DCC60BDB5A6FFC1B (void);
// 0x00000479 System.ComponentModel.TypeConverter System.ComponentModel.CustomTypeDescriptor::GetConverter()
extern void CustomTypeDescriptor_GetConverter_mE40B1085719E3D144A78130B843C6E0A1C143245 (void);
// 0x0000047A System.Boolean System.ComponentModel.DecimalConverter::get_AllowHex()
extern void DecimalConverter_get_AllowHex_m2B657E4B11F10E8F6F3E27F8F24EBD407E68386D (void);
// 0x0000047B System.Type System.ComponentModel.DecimalConverter::get_TargetType()
extern void DecimalConverter_get_TargetType_m713B317E87EFCE4C62D9252D5C995FCEF1DAEF47 (void);
// 0x0000047C System.Boolean System.ComponentModel.DecimalConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void DecimalConverter_CanConvertTo_m2C1D96863DB726FCB8566B7B78899A0DD5D85CC4 (void);
// 0x0000047D System.Object System.ComponentModel.DecimalConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void DecimalConverter_ConvertTo_m0F245DFB5E97D39B818A6D3A87C6FAE07F57F6BC (void);
// 0x0000047E System.Object System.ComponentModel.DecimalConverter::FromString(System.String,System.Int32)
extern void DecimalConverter_FromString_m65A0F7D7BFD4A568C416732121878DDA2CDB2423 (void);
// 0x0000047F System.Object System.ComponentModel.DecimalConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void DecimalConverter_FromString_m4F6FAD944464E3B239B445BE45950CF15E423BFC (void);
// 0x00000480 System.String System.ComponentModel.DecimalConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void DecimalConverter_ToString_mA2278E45267D367F8FED73BDE4293021E493499F (void);
// 0x00000481 System.Void System.ComponentModel.DecimalConverter::.ctor()
extern void DecimalConverter__ctor_mC1E815EF17DE8DBD91FB472C83A4F38514704B46 (void);
// 0x00000482 System.Void System.ComponentModel.DefaultEventAttribute::.ctor(System.String)
extern void DefaultEventAttribute__ctor_m7FE746F300D84188A24F4CF38A330EA255E5EE46 (void);
// 0x00000483 System.String System.ComponentModel.DefaultEventAttribute::get_Name()
extern void DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3 (void);
// 0x00000484 System.Boolean System.ComponentModel.DefaultEventAttribute::Equals(System.Object)
extern void DefaultEventAttribute_Equals_m1B7CE5677AFA75A3AD6223345C99D5EA796622B2 (void);
// 0x00000485 System.Int32 System.ComponentModel.DefaultEventAttribute::GetHashCode()
extern void DefaultEventAttribute_GetHashCode_mD3A5713780914BA883AF0AB0AD88E5427D910184 (void);
// 0x00000486 System.Void System.ComponentModel.DefaultEventAttribute::.cctor()
extern void DefaultEventAttribute__cctor_mA41FF921D8558681FC129751DBFB8BF09444AF23 (void);
// 0x00000487 System.Void System.ComponentModel.DefaultPropertyAttribute::.ctor(System.String)
extern void DefaultPropertyAttribute__ctor_m43FD7A91A431F72713FFA7829DE9BD24A321FD3A (void);
// 0x00000488 System.String System.ComponentModel.DefaultPropertyAttribute::get_Name()
extern void DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890 (void);
// 0x00000489 System.Boolean System.ComponentModel.DefaultPropertyAttribute::Equals(System.Object)
extern void DefaultPropertyAttribute_Equals_mCD709C4B3F90DDDBDB45AE2969732EA3775CF26E (void);
// 0x0000048A System.Int32 System.ComponentModel.DefaultPropertyAttribute::GetHashCode()
extern void DefaultPropertyAttribute_GetHashCode_m401BC4A948F7890DDD718B884C6CE06296578BA2 (void);
// 0x0000048B System.Void System.ComponentModel.DefaultPropertyAttribute::.cctor()
extern void DefaultPropertyAttribute__cctor_m3C3B5DFB791BCB66EBC6B2EA032CD1D76422B247 (void);
// 0x0000048C System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Boolean)
extern void DefaultValueAttribute__ctor_m34A58D59C771D6EB91D55AE4F97413CD711B8FB5 (void);
// 0x0000048D System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.String)
extern void DefaultValueAttribute__ctor_mC4A9C09859A2DFDDDADB72E3CC91DF3C874A45BB (void);
// 0x0000048E System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Object)
extern void DefaultValueAttribute__ctor_mB891AD4FEA83679EDCB858D2C4AE6E0ABFC6DF08 (void);
// 0x0000048F System.Object System.ComponentModel.DefaultValueAttribute::get_Value()
extern void DefaultValueAttribute_get_Value_mE5E6819598048D2585D6DB475918E60ACE802470 (void);
// 0x00000490 System.Boolean System.ComponentModel.DefaultValueAttribute::Equals(System.Object)
extern void DefaultValueAttribute_Equals_m61297DB3C3A7E76FC868A653371853B14BC42FC1 (void);
// 0x00000491 System.Int32 System.ComponentModel.DefaultValueAttribute::GetHashCode()
extern void DefaultValueAttribute_GetHashCode_m74095EF1526DBFB27CF56AFA21690C77A5289A33 (void);
// 0x00000492 System.Void System.ComponentModel.DelegatingTypeDescriptionProvider::.ctor(System.Type)
extern void DelegatingTypeDescriptionProvider__ctor_mF4BAC468855383A4FA4CBFA329DF02F35805ADC5 (void);
// 0x00000493 System.ComponentModel.TypeDescriptionProvider System.ComponentModel.DelegatingTypeDescriptionProvider::get_Provider()
extern void DelegatingTypeDescriptionProvider_get_Provider_m39F8D32C2826EC53330210A55058A76B06136E74 (void);
// 0x00000494 System.Collections.IDictionary System.ComponentModel.DelegatingTypeDescriptionProvider::GetCache(System.Object)
extern void DelegatingTypeDescriptionProvider_GetCache_m8C822270552717420F5E6D7B96C48C751816370C (void);
// 0x00000495 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.DelegatingTypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern void DelegatingTypeDescriptionProvider_GetExtendedTypeDescriptor_m7A546AA16D70578B63542DB3DDAB0F54DD742FBA (void);
// 0x00000496 System.Type System.ComponentModel.DelegatingTypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern void DelegatingTypeDescriptionProvider_GetReflectionType_m130F511F42060A53340620EB0667237EB0F94024 (void);
// 0x00000497 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.DelegatingTypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern void DelegatingTypeDescriptionProvider_GetTypeDescriptor_m3DEEF7B7F56B72063CCCF3EAEC383FC98029A8C5 (void);
// 0x00000498 System.Void System.ComponentModel.DescriptionAttribute::.ctor()
extern void DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F (void);
// 0x00000499 System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
extern void DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97 (void);
// 0x0000049A System.String System.ComponentModel.DescriptionAttribute::get_Description()
extern void DescriptionAttribute_get_Description_m153F27F0911FC88F9DD8856BCA449AF5BE46F100 (void);
// 0x0000049B System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
extern void DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975 (void);
// 0x0000049C System.Boolean System.ComponentModel.DescriptionAttribute::Equals(System.Object)
extern void DescriptionAttribute_Equals_m1CD8A994656358F30F29950E0F51F6FDFCA5306A (void);
// 0x0000049D System.Int32 System.ComponentModel.DescriptionAttribute::GetHashCode()
extern void DescriptionAttribute_GetHashCode_m611CD3279B54EE7678ED42409F142DF4303A3357 (void);
// 0x0000049E System.Boolean System.ComponentModel.DescriptionAttribute::IsDefaultAttribute()
extern void DescriptionAttribute_IsDefaultAttribute_m3220AA4FC586815653BEC04C4438F695CA5722F3 (void);
// 0x0000049F System.Void System.ComponentModel.DescriptionAttribute::.cctor()
extern void DescriptionAttribute__cctor_m2F75B253CB3918F4C6AE255EF2BFF2B6B58DD4CA (void);
// 0x000004A0 System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String)
extern void DesignerAttribute__ctor_m5DC0000BC5E5265E3FF5C4DA7FE34224CE0EA411 (void);
// 0x000004A1 System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.Type)
extern void DesignerAttribute__ctor_m227FE6994A9820565F4531766C12B4BEB9DBC099 (void);
// 0x000004A2 System.Object System.ComponentModel.DesignerAttribute::get_TypeId()
extern void DesignerAttribute_get_TypeId_mC417B3D2B73F8BE6B8807DE81349ADD788217FB6 (void);
// 0x000004A3 System.Boolean System.ComponentModel.DesignerAttribute::Equals(System.Object)
extern void DesignerAttribute_Equals_mA1B09C88CC2DB3D87E0F089566B230D15778FFF1 (void);
// 0x000004A4 System.Int32 System.ComponentModel.DesignerAttribute::GetHashCode()
extern void DesignerAttribute_GetHashCode_mAAB438F07A090A8D8A6EB9E16E58A530BBAED5C5 (void);
// 0x000004A5 System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor()
extern void DesignerCategoryAttribute__ctor_mC6EAF0212217A1CEE757459ADDB8D48D3B61A4EB (void);
// 0x000004A6 System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor(System.String)
extern void DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583 (void);
// 0x000004A7 System.String System.ComponentModel.DesignerCategoryAttribute::get_Category()
extern void DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77 (void);
// 0x000004A8 System.Object System.ComponentModel.DesignerCategoryAttribute::get_TypeId()
extern void DesignerCategoryAttribute_get_TypeId_mAC435BAF331B4C5367A86821753F71F93A83B61B (void);
// 0x000004A9 System.Boolean System.ComponentModel.DesignerCategoryAttribute::Equals(System.Object)
extern void DesignerCategoryAttribute_Equals_m1AC49F2D111D21ED13E8BA1F2E40C1F3B859260C (void);
// 0x000004AA System.Int32 System.ComponentModel.DesignerCategoryAttribute::GetHashCode()
extern void DesignerCategoryAttribute_GetHashCode_mAAF7FBB9086B1B80FB129D77C2B2E195235A54FA (void);
// 0x000004AB System.Boolean System.ComponentModel.DesignerCategoryAttribute::IsDefaultAttribute()
extern void DesignerCategoryAttribute_IsDefaultAttribute_m94BBB8DCBCEC69970F6AB190081414FB9E8181FE (void);
// 0x000004AC System.Void System.ComponentModel.DesignerCategoryAttribute::.cctor()
extern void DesignerCategoryAttribute__cctor_m6861675CBE73069D1134966C4F5FA5EB6EB9A155 (void);
// 0x000004AD System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.ctor(System.ComponentModel.DesignerSerializationVisibility)
extern void DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1 (void);
// 0x000004AE System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::get_Visibility()
extern void DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E (void);
// 0x000004AF System.Boolean System.ComponentModel.DesignerSerializationVisibilityAttribute::Equals(System.Object)
extern void DesignerSerializationVisibilityAttribute_Equals_m0BE73F494AEFD4118E82420382640874637AD94F (void);
// 0x000004B0 System.Int32 System.ComponentModel.DesignerSerializationVisibilityAttribute::GetHashCode()
extern void DesignerSerializationVisibilityAttribute_GetHashCode_m33E067E26D97A5A40DD224E33230351C6169579F (void);
// 0x000004B1 System.Boolean System.ComponentModel.DesignerSerializationVisibilityAttribute::IsDefaultAttribute()
extern void DesignerSerializationVisibilityAttribute_IsDefaultAttribute_m3D21AAD0CE78647B3FD95005569A922FF07CF492 (void);
// 0x000004B2 System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.cctor()
extern void DesignerSerializationVisibilityAttribute__cctor_mCE2A25B9EF061E135FC81FC0BA85502C90B8E141 (void);
// 0x000004B3 System.Boolean System.ComponentModel.DoubleConverter::get_AllowHex()
extern void DoubleConverter_get_AllowHex_m7B24D1C1979E1B4B0F32D455B7BADE06AB50DBBB (void);
// 0x000004B4 System.Type System.ComponentModel.DoubleConverter::get_TargetType()
extern void DoubleConverter_get_TargetType_m32CBA966154111137DA7AE087217F3A7BAFECA88 (void);
// 0x000004B5 System.Object System.ComponentModel.DoubleConverter::FromString(System.String,System.Int32)
extern void DoubleConverter_FromString_m205541D548D67CE0C9493E7CC532133BD5B27DC0 (void);
// 0x000004B6 System.Object System.ComponentModel.DoubleConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void DoubleConverter_FromString_m7E7B0719E5299B5DEF5806531A51807A6860050C (void);
// 0x000004B7 System.String System.ComponentModel.DoubleConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void DoubleConverter_ToString_m9BDB00A75E71F1001A1F555AD9E786C32CF668C3 (void);
// 0x000004B8 System.Void System.ComponentModel.DoubleConverter::.ctor()
extern void DoubleConverter__ctor_m3CA5201BA68AB510BB2112A6755FCFEAB6DE53BA (void);
// 0x000004B9 System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
extern void EditorBrowsableAttribute__ctor_mE6105AD9666A4DF03DB2590C687EAC6B12D908CE (void);
// 0x000004BA System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
extern void EditorBrowsableAttribute_Equals_m2DFA6ADDE69D95657A8257840C01FCAF74A6B02F (void);
// 0x000004BB System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
extern void EditorBrowsableAttribute_GetHashCode_m1AE50FA45B338D71189AA3C249DB56406DEC798C (void);
// 0x000004BC System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
extern void EnumConverter__ctor_m3E3C7D81C8092A5591BAA556288B2A3E22DCA99B (void);
// 0x000004BD System.Boolean System.ComponentModel.EnumConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void EnumConverter_CanConvertFrom_m08BA3C1DC3D84B157F087AE1E407A974E3A85D11 (void);
// 0x000004BE System.Boolean System.ComponentModel.EnumConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void EnumConverter_CanConvertTo_mF6140EA2D6D701B21DC1EEFAAA2C62DF8CAB690A (void);
// 0x000004BF System.Collections.IComparer System.ComponentModel.EnumConverter::get_Comparer()
extern void EnumConverter_get_Comparer_mBB79A346E8150D9554B6FBCD0EF1B981A7696DEC (void);
// 0x000004C0 System.Object System.ComponentModel.EnumConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void EnumConverter_ConvertFrom_mD1D0496C621971B0610C92ABC562B26BEA40EC61 (void);
// 0x000004C1 System.Object System.ComponentModel.EnumConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void EnumConverter_ConvertTo_m95581FDC64EFF404D3646BA0BB09A316C58126D1 (void);
// 0x000004C2 System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern void EnumConverter_GetStandardValues_mAF14DECB7670119DFE61D9955A5667BC43A1F023 (void);
// 0x000004C3 System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern void EnumConverter_GetStandardValuesExclusive_mFFEE5BB5AEA41073002C03D1CB163E3F42619317 (void);
// 0x000004C4 System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern void EnumConverter_GetStandardValuesSupported_m049732C08BD2A4300C75A9FB12BE6082C2DAA5EA (void);
// 0x000004C5 System.Boolean System.ComponentModel.EnumConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern void EnumConverter_IsValid_mF38C2D56D21042513C025A195EBF00C9626CB105 (void);
// 0x000004C6 System.Void System.ComponentModel.EventDescriptorCollection::.ctor(System.ComponentModel.EventDescriptor[])
extern void EventDescriptorCollection__ctor_m5B672594D0220F89AD3DFE0FBCDB34FED5B56CF3 (void);
// 0x000004C7 System.Void System.ComponentModel.EventDescriptorCollection::.ctor(System.ComponentModel.EventDescriptor[],System.Boolean)
extern void EventDescriptorCollection__ctor_m6FEF5B613838F164D7F9FC939EA915FE7B5CF118 (void);
// 0x000004C8 System.Int32 System.ComponentModel.EventDescriptorCollection::get_Count()
extern void EventDescriptorCollection_get_Count_mCBBE573DF8EC096E14170A5039E90107943E5A87 (void);
// 0x000004C9 System.ComponentModel.EventDescriptor System.ComponentModel.EventDescriptorCollection::get_Item(System.Int32)
extern void EventDescriptorCollection_get_Item_mA010043B2DFD4EE474361E4485B7727354BB00ED (void);
// 0x000004CA System.Int32 System.ComponentModel.EventDescriptorCollection::Add(System.ComponentModel.EventDescriptor)
extern void EventDescriptorCollection_Add_mAA14F6928C91D2A6B81E69723C35E7F43FBA62CC (void);
// 0x000004CB System.Void System.ComponentModel.EventDescriptorCollection::Clear()
extern void EventDescriptorCollection_Clear_m34F6F48BAA557FBB783F24C33EB2E26002A57C56 (void);
// 0x000004CC System.Boolean System.ComponentModel.EventDescriptorCollection::Contains(System.ComponentModel.EventDescriptor)
extern void EventDescriptorCollection_Contains_m50DB06B4BB92F9F108E41B0B39C71C687A426F12 (void);
// 0x000004CD System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void EventDescriptorCollection_System_Collections_ICollection_CopyTo_mFAE7230CA92EB811EA7AC85B9EF758477D9CB58D (void);
// 0x000004CE System.Void System.ComponentModel.EventDescriptorCollection::EnsureEventsOwned()
extern void EventDescriptorCollection_EnsureEventsOwned_m84EEB041AFCAC7DC00D846999338F998A3B873B4 (void);
// 0x000004CF System.Void System.ComponentModel.EventDescriptorCollection::EnsureSize(System.Int32)
extern void EventDescriptorCollection_EnsureSize_m9A0437DD4221566FFE953D7D8A9B15CEC82D8F1B (void);
// 0x000004D0 System.Int32 System.ComponentModel.EventDescriptorCollection::IndexOf(System.ComponentModel.EventDescriptor)
extern void EventDescriptorCollection_IndexOf_mFB443D00688BEE960D0AB1EFCF41FD41863D105D (void);
// 0x000004D1 System.Void System.ComponentModel.EventDescriptorCollection::Insert(System.Int32,System.ComponentModel.EventDescriptor)
extern void EventDescriptorCollection_Insert_mC472AA88B6CC60161C15A8B464D4D1A827C45CA7 (void);
// 0x000004D2 System.Void System.ComponentModel.EventDescriptorCollection::Remove(System.ComponentModel.EventDescriptor)
extern void EventDescriptorCollection_Remove_mC7EDCADC4A6630ABA8C38C7F1CE424C622A73A67 (void);
// 0x000004D3 System.Void System.ComponentModel.EventDescriptorCollection::RemoveAt(System.Int32)
extern void EventDescriptorCollection_RemoveAt_m1D8C3C214CDF147C85410AB0F956EA1732261900 (void);
// 0x000004D4 System.Collections.IEnumerator System.ComponentModel.EventDescriptorCollection::GetEnumerator()
extern void EventDescriptorCollection_GetEnumerator_mBBA565367CD4D16306527D637EA37D2BA6949478 (void);
// 0x000004D5 System.Void System.ComponentModel.EventDescriptorCollection::InternalSort(System.String[])
extern void EventDescriptorCollection_InternalSort_mFDAC78BDC8DF8D728C05BF58B24C6B3AAE83E1C9 (void);
// 0x000004D6 System.Void System.ComponentModel.EventDescriptorCollection::InternalSort(System.Collections.IComparer)
extern void EventDescriptorCollection_InternalSort_mC173B2DDBF4F976EC4B3E9A2AC03FFD0D3F115AD (void);
// 0x000004D7 System.Int32 System.ComponentModel.EventDescriptorCollection::System.Collections.ICollection.get_Count()
extern void EventDescriptorCollection_System_Collections_ICollection_get_Count_mF9D4EB7237921F1FDF76F78307CB4C5AE29C5D74 (void);
// 0x000004D8 System.Object System.ComponentModel.EventDescriptorCollection::System.Collections.ICollection.get_SyncRoot()
extern void EventDescriptorCollection_System_Collections_ICollection_get_SyncRoot_m929985FDBE786C0523515318A463F1DB1F0EBAA5 (void);
// 0x000004D9 System.Collections.IEnumerator System.ComponentModel.EventDescriptorCollection::System.Collections.IEnumerable.GetEnumerator()
extern void EventDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_mC73C30221041A865D2AA69E9E57D5D50A89E756E (void);
// 0x000004DA System.Object System.ComponentModel.EventDescriptorCollection::System.Collections.IList.get_Item(System.Int32)
extern void EventDescriptorCollection_System_Collections_IList_get_Item_m816D7A606BEA8FDB4B8F959E0727A591139AB75E (void);
// 0x000004DB System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern void EventDescriptorCollection_System_Collections_IList_set_Item_mEEC2A36C2AD376E350334887290721ECF319F17F (void);
// 0x000004DC System.Int32 System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Add(System.Object)
extern void EventDescriptorCollection_System_Collections_IList_Add_mC80A1930B52051837C3B553FED53E0A3624609D2 (void);
// 0x000004DD System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Clear()
extern void EventDescriptorCollection_System_Collections_IList_Clear_m5F4F6DC457DC4AC15BF1ECDEB05C9AC37A8EDFAA (void);
// 0x000004DE System.Boolean System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Contains(System.Object)
extern void EventDescriptorCollection_System_Collections_IList_Contains_m7CCEEC883D1D814BAA11C20A2AF4B2ECB25CB670 (void);
// 0x000004DF System.Int32 System.ComponentModel.EventDescriptorCollection::System.Collections.IList.IndexOf(System.Object)
extern void EventDescriptorCollection_System_Collections_IList_IndexOf_mF92645F7291545162437FAC95787100B4844B4E4 (void);
// 0x000004E0 System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern void EventDescriptorCollection_System_Collections_IList_Insert_mC6AD4196A4F520BB4C0B5866D3D6307A9639A58E (void);
// 0x000004E1 System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Remove(System.Object)
extern void EventDescriptorCollection_System_Collections_IList_Remove_m04E2ACE9E3B90350007626A227EA9626F133589C (void);
// 0x000004E2 System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.RemoveAt(System.Int32)
extern void EventDescriptorCollection_System_Collections_IList_RemoveAt_m67FB853573FD34FEB23F0763434FBBB1FF8D3389 (void);
// 0x000004E3 System.Boolean System.ComponentModel.EventDescriptorCollection::System.Collections.IList.get_IsReadOnly()
extern void EventDescriptorCollection_System_Collections_IList_get_IsReadOnly_m14ED5EDE6AAD26BC174F00C4F48A16C0874B6160 (void);
// 0x000004E4 System.Boolean System.ComponentModel.EventDescriptorCollection::System.Collections.IList.get_IsFixedSize()
extern void EventDescriptorCollection_System_Collections_IList_get_IsFixedSize_mE80CCD9C034D17CB7E7780BF1FFF1FC92123EA62 (void);
// 0x000004E5 System.Void System.ComponentModel.EventDescriptorCollection::.cctor()
extern void EventDescriptorCollection__cctor_mEB5345968B743898C4EE2AFED371C8C3A7816C80 (void);
// 0x000004E6 System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern void EventHandlerList_get_Item_m9AD24EA65E3832B81146EC24604BABE4FC3CFCC7 (void);
// 0x000004E7 System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::Find(System.Object)
extern void EventHandlerList_Find_m5E0CAB161102D1551CF2E636C8BC7B71C959A5C8 (void);
// 0x000004E8 System.ComponentModel.IExtenderProvider System.ComponentModel.ExtenderProvidedPropertyAttribute::get_Provider()
extern void ExtenderProvidedPropertyAttribute_get_Provider_mF6A5C961D41558DDF43293934D6C5CD80BEF584F (void);
// 0x000004E9 System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site()
// 0x000004EA System.Void System.ComponentModel.IContainer::Remove(System.ComponentModel.IComponent)
// 0x000004EB System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor::GetAttributes()
// 0x000004EC System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor::GetConverter()
// 0x000004ED System.ComponentModel.IContainer System.ComponentModel.ISite::get_Container()
// 0x000004EE System.Boolean System.ComponentModel.ISite::get_DesignMode()
// 0x000004EF System.String System.ComponentModel.ISite::get_Name()
// 0x000004F0 System.Boolean System.ComponentModel.ISynchronizeInvoke::get_InvokeRequired()
// 0x000004F1 System.IAsyncResult System.ComponentModel.ISynchronizeInvoke::BeginInvoke(System.Delegate,System.Object[])
// 0x000004F2 System.Type System.ComponentModel.Int16Converter::get_TargetType()
extern void Int16Converter_get_TargetType_mB268E3FEA2B5BDEBBC628D21A07686856FC451C8 (void);
// 0x000004F3 System.Object System.ComponentModel.Int16Converter::FromString(System.String,System.Int32)
extern void Int16Converter_FromString_mACA7B00848D2EC76B985408DE0D92D84F462D14C (void);
// 0x000004F4 System.Object System.ComponentModel.Int16Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void Int16Converter_FromString_m57535287425AA32CBB51833859D5224F030EC2F3 (void);
// 0x000004F5 System.String System.ComponentModel.Int16Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void Int16Converter_ToString_mB9DD75EE872A4040BFFC794C4400FBC857A75CCF (void);
// 0x000004F6 System.Void System.ComponentModel.Int16Converter::.ctor()
extern void Int16Converter__ctor_m3803A7772B21F49200FC142C193A40DC286C9DFF (void);
// 0x000004F7 System.Type System.ComponentModel.Int32Converter::get_TargetType()
extern void Int32Converter_get_TargetType_m837B83368B96CE1CDFCF450F7DA3629ECC86DC1A (void);
// 0x000004F8 System.Object System.ComponentModel.Int32Converter::FromString(System.String,System.Int32)
extern void Int32Converter_FromString_m3917F97D4401800516F6F44363CD154F9645AC72 (void);
// 0x000004F9 System.Object System.ComponentModel.Int32Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void Int32Converter_FromString_m54931A645C6C1B4DB770894D5A23F24A03E9B340 (void);
// 0x000004FA System.String System.ComponentModel.Int32Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void Int32Converter_ToString_m8B5D811FCF0FBFADCAE25E354FD27FE6256AA36D (void);
// 0x000004FB System.Void System.ComponentModel.Int32Converter::.ctor()
extern void Int32Converter__ctor_m88220DA12F6ED6FE4D1232B73C20DECE9EFC63FF (void);
// 0x000004FC System.Type System.ComponentModel.Int64Converter::get_TargetType()
extern void Int64Converter_get_TargetType_m8279327D6F373BEE6E4BF0439215D6F5DF6B0097 (void);
// 0x000004FD System.Object System.ComponentModel.Int64Converter::FromString(System.String,System.Int32)
extern void Int64Converter_FromString_m4F1E8450F4A60B29297D4AA3D8FE196B09D98102 (void);
// 0x000004FE System.Object System.ComponentModel.Int64Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void Int64Converter_FromString_m324A7ABADC1B991B6AAB4B600C0A676B289BDF72 (void);
// 0x000004FF System.String System.ComponentModel.Int64Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void Int64Converter_ToString_mC4F1CE4731349A078460E190F587DB3276B54B3E (void);
// 0x00000500 System.Void System.ComponentModel.Int64Converter::.ctor()
extern void Int64Converter__ctor_m3C124DB065F27F6BEAB7ABAF4B3D13E6A9F3E94C (void);
// 0x00000501 System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32)
extern void ListChangedEventArgs__ctor_mB48C0E1EBC7ECB9C9A1CEFBF1787D1C542FBDCAD (void);
// 0x00000502 System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32,System.Int32)
extern void ListChangedEventArgs__ctor_m51CD8C20F924174FDAE0CED36B57E8A53AFBBDA5 (void);
// 0x00000503 System.Void System.ComponentModel.ListChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern void ListChangedEventHandler__ctor_mB05D66C71319CF8F8D4BA970C1BC0247662540AA (void);
// 0x00000504 System.Void System.ComponentModel.ListChangedEventHandler::Invoke(System.Object,System.ComponentModel.ListChangedEventArgs)
extern void ListChangedEventHandler_Invoke_mA0F0B8AB273C63F017018390414C334FD602934E (void);
// 0x00000505 System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern void MemberDescriptor__ctor_mDCA5ED4D5D9CB14D6D1D81EDB76EA80DB79B8AF4 (void);
// 0x00000506 System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern void MemberDescriptor_get_AttributeArray_m1DD0C32D56001CD6E9C7EF18883E56B2EED4A70E (void);
// 0x00000507 System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern void MemberDescriptor_get_Attributes_m14940553435AC37ACEF473D12D244F2DFBF6AB1A (void);
// 0x00000508 System.String System.ComponentModel.MemberDescriptor::get_Name()
extern void MemberDescriptor_get_Name_mA0D12966D84092E03F4DC16A085176299AC73291 (void);
// 0x00000509 System.Int32 System.ComponentModel.MemberDescriptor::get_NameHashCode()
extern void MemberDescriptor_get_NameHashCode_m415B96A35EB826A5A00E0F0EBBDD94980BD5E5F2 (void);
// 0x0000050A System.Void System.ComponentModel.MemberDescriptor::CheckAttributesValid()
extern void MemberDescriptor_CheckAttributesValid_m7B81E6D3512BD0A17CD0AF042912BA2C1E83552F (void);
// 0x0000050B System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern void MemberDescriptor_CreateAttributeCollection_mB5974AA548F245BC255AB08689E68953BEB24E35 (void);
// 0x0000050C System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern void MemberDescriptor_Equals_m375ECBF78B86952EC60CDD90301D8C2EF911A620 (void);
// 0x0000050D System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern void MemberDescriptor_FillAttributes_mD79B898348F5E1F6C98F62F0D4CE719C5547C56C (void);
// 0x0000050E System.Void System.ComponentModel.MemberDescriptor::FilterAttributesIfNeeded()
extern void MemberDescriptor_FilterAttributesIfNeeded_mB060A4FB6DE46D17F76E54B43A0772EC623EFDC7 (void);
// 0x0000050F System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern void MemberDescriptor_GetHashCode_m18BBAA42F4FF641C84B5E45802F1FDC290F86860 (void);
// 0x00000510 System.Void System.ComponentModel.PropertyChangedEventArgs::.ctor(System.String)
extern void PropertyChangedEventArgs__ctor_mE3C901440BE057E5F17062BA316019C0B53A39B5 (void);
// 0x00000511 System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern void PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82 (void);
// 0x00000512 System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern void PropertyChangedEventHandler_Invoke_m040B3056C279FDDC4EC678519D5D415771905298 (void);
// 0x00000513 System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
extern void PropertyDescriptor__ctor_m20223572362A331B6F0D436BC19AFE2EE87558B8 (void);
// 0x00000514 System.Type System.ComponentModel.PropertyDescriptor::get_PropertyType()
// 0x00000515 System.Boolean System.ComponentModel.PropertyDescriptor::Equals(System.Object)
extern void PropertyDescriptor_Equals_m69C3B1D9E4AF806536B7545DAB5FE72883A512F6 (void);
// 0x00000516 System.Void System.ComponentModel.PropertyDescriptor::FillAttributes(System.Collections.IList)
extern void PropertyDescriptor_FillAttributes_m089944713C5E19B880AC940B07C609BFC3D273D1 (void);
// 0x00000517 System.Int32 System.ComponentModel.PropertyDescriptor::GetHashCode()
extern void PropertyDescriptor_GetHashCode_m8470877D9BFF977617586AC7E2B900D01B3B4E3F (void);
// 0x00000518 System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[])
extern void PropertyDescriptorCollection__ctor_m3D1AC0D2B3187A895AE8B64AC891251860D8C361 (void);
// 0x00000519 System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[],System.Boolean)
extern void PropertyDescriptorCollection__ctor_mAD196DBB6D71AA12A41715798F3DFACFDA170BAE (void);
// 0x0000051A System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[],System.Int32,System.String[],System.Collections.IComparer)
extern void PropertyDescriptorCollection__ctor_m3452043C947348EB364E043013AB2DB4165B72D7 (void);
// 0x0000051B System.Int32 System.ComponentModel.PropertyDescriptorCollection::get_Count()
extern void PropertyDescriptorCollection_get_Count_m9121E7236AF94FE7AD4BB3C48ADBBB2A8ACF3508 (void);
// 0x0000051C System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::get_Item(System.Int32)
extern void PropertyDescriptorCollection_get_Item_m5BD52F4CCBEF1D1D9B33887BB373181AD11A4C25 (void);
// 0x0000051D System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::get_Item(System.String)
extern void PropertyDescriptorCollection_get_Item_mD34F172015A4AAC759099193BBBCDB1489D51E09 (void);
// 0x0000051E System.Int32 System.ComponentModel.PropertyDescriptorCollection::Add(System.ComponentModel.PropertyDescriptor)
extern void PropertyDescriptorCollection_Add_mC398A8C807A50565628FA7377622CB29BA08E8A0 (void);
// 0x0000051F System.Void System.ComponentModel.PropertyDescriptorCollection::Clear()
extern void PropertyDescriptorCollection_Clear_mB8C7EDDBC34045AB39A85F7CA8C2A48FE5E84154 (void);
// 0x00000520 System.Boolean System.ComponentModel.PropertyDescriptorCollection::Contains(System.ComponentModel.PropertyDescriptor)
extern void PropertyDescriptorCollection_Contains_m61BE63B4CBEBE522952340A5E1AD4EC81561A534 (void);
// 0x00000521 System.Void System.ComponentModel.PropertyDescriptorCollection::CopyTo(System.Array,System.Int32)
extern void PropertyDescriptorCollection_CopyTo_m96A7340B76D01123FFC2968406157491DA5F2F51 (void);
// 0x00000522 System.Void System.ComponentModel.PropertyDescriptorCollection::EnsurePropsOwned()
extern void PropertyDescriptorCollection_EnsurePropsOwned_m95EB38CC4CD3A669B5890569BE6EA68DDC0691D1 (void);
// 0x00000523 System.Void System.ComponentModel.PropertyDescriptorCollection::EnsureSize(System.Int32)
extern void PropertyDescriptorCollection_EnsureSize_mA9CC05191669F9F3899F5A7D42B8DF24C51CC6A2 (void);
// 0x00000524 System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::Find(System.String,System.Boolean)
extern void PropertyDescriptorCollection_Find_mCBD6FF2B467342E2385A83851AFEA0D79765D941 (void);
// 0x00000525 System.Int32 System.ComponentModel.PropertyDescriptorCollection::IndexOf(System.ComponentModel.PropertyDescriptor)
extern void PropertyDescriptorCollection_IndexOf_mD936E02B8B1AACBF21EB129B5D7F3C8CBC07BE15 (void);
// 0x00000526 System.Void System.ComponentModel.PropertyDescriptorCollection::Insert(System.Int32,System.ComponentModel.PropertyDescriptor)
extern void PropertyDescriptorCollection_Insert_m5294EDBAD3EED9E88B72F8C337F65EE5AB2960EA (void);
// 0x00000527 System.Void System.ComponentModel.PropertyDescriptorCollection::Remove(System.ComponentModel.PropertyDescriptor)
extern void PropertyDescriptorCollection_Remove_m93B40D4D8FD13CA21ACAF39012043595BB6ED03B (void);
// 0x00000528 System.Void System.ComponentModel.PropertyDescriptorCollection::RemoveAt(System.Int32)
extern void PropertyDescriptorCollection_RemoveAt_m0A24CA5AB989131D0F6691B289DD9092790E9E07 (void);
// 0x00000529 System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Sort(System.String[])
extern void PropertyDescriptorCollection_Sort_m75E8E60ABA88330A9CE34B6DDE5E6DCFD10C6867 (void);
// 0x0000052A System.Void System.ComponentModel.PropertyDescriptorCollection::InternalSort(System.String[])
extern void PropertyDescriptorCollection_InternalSort_m976B7A3E0A38A56F3E6C282199722DFC37EE92C9 (void);
// 0x0000052B System.Void System.ComponentModel.PropertyDescriptorCollection::InternalSort(System.Collections.IComparer)
extern void PropertyDescriptorCollection_InternalSort_m715EF0848576185E9957756222B20A93320A3108 (void);
// 0x0000052C System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::GetEnumerator()
extern void PropertyDescriptorCollection_GetEnumerator_m895320E1DA7A7E88D5392EA88C7415FCCE9F9A69 (void);
// 0x0000052D System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_Count()
extern void PropertyDescriptorCollection_System_Collections_ICollection_get_Count_mD0FF809D823EB373D8A6E8DB49619ED4141702A2 (void);
// 0x0000052E System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_SyncRoot()
extern void PropertyDescriptorCollection_System_Collections_ICollection_get_SyncRoot_m375B281E77CC48014E87622A8F7E5FF2BB6B23AF (void);
// 0x0000052F System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Add(System.Object,System.Object)
extern void PropertyDescriptorCollection_System_Collections_IDictionary_Add_m408464897F2A4002666796184236356079B9476E (void);
// 0x00000530 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Clear()
extern void PropertyDescriptorCollection_System_Collections_IDictionary_Clear_mED5AF2CE6AF9B314A457C95568F8B4CE2D1764A9 (void);
// 0x00000531 System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Contains(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IDictionary_Contains_m0E06B08842DB4FA109B5AB61EBEFB731E3EA94AA (void);
// 0x00000532 System.Collections.IDictionaryEnumerator System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.GetEnumerator()
extern void PropertyDescriptorCollection_System_Collections_IDictionary_GetEnumerator_mF6EAE817278709EF0201AB2E677B887CA7520A51 (void);
// 0x00000533 System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_IsReadOnly()
extern void PropertyDescriptorCollection_System_Collections_IDictionary_get_IsReadOnly_m4D86C19095340D37276F02EF6D88E7BD63C2D53E (void);
// 0x00000534 System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Item(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IDictionary_get_Item_mC6EFD0AFD470D71014230D69B656107657929330 (void);
// 0x00000535 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern void PropertyDescriptorCollection_System_Collections_IDictionary_set_Item_mF70D7EA54C026CF6DF6082671C7BB5FA4FA8C4A1 (void);
// 0x00000536 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Remove(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IDictionary_Remove_m4346AEB1FD89FAD5A8684EF35BD8BDC329BE6FF7 (void);
// 0x00000537 System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::System.Collections.IEnumerable.GetEnumerator()
extern void PropertyDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_mCA1C26C5D8253A2654911C476DB3E2E4C7E1DED0 (void);
// 0x00000538 System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Add(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_Add_mA83681FD649F472C18C4222547909AB5C0B2636D (void);
// 0x00000539 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Clear()
extern void PropertyDescriptorCollection_System_Collections_IList_Clear_m45872C5426EECF7A39B524076FF749A27FFFD720 (void);
// 0x0000053A System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Contains(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_Contains_mF4A5AD4B8FB2DE87C3F46804A45A9E5FE061F0A8 (void);
// 0x0000053B System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.IndexOf(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_IndexOf_mDDE0710A46D8C7F0C812BBB749058633E2B538A0 (void);
// 0x0000053C System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_Insert_mECCC2CBDA9731E920BDA0D1C5E1B3446D1051D7C (void);
// 0x0000053D System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_IsReadOnly()
extern void PropertyDescriptorCollection_System_Collections_IList_get_IsReadOnly_mD92E29DD5AF442E8F758EE9C364AA67D8C692429 (void);
// 0x0000053E System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_IsFixedSize()
extern void PropertyDescriptorCollection_System_Collections_IList_get_IsFixedSize_m384E8605F0612E87E1A78F863E28AE7E0D0D6B8A (void);
// 0x0000053F System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Remove(System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_Remove_m6B3B43F181BF42AE15D0EC97F83E16157119767A (void);
// 0x00000540 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.RemoveAt(System.Int32)
extern void PropertyDescriptorCollection_System_Collections_IList_RemoveAt_mF52F79BDB81434BECEFF023F99EFDDEE21E3D382 (void);
// 0x00000541 System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_Item(System.Int32)
extern void PropertyDescriptorCollection_System_Collections_IList_get_Item_m330B3FFF9A800353E1463DBA60359A5846637632 (void);
// 0x00000542 System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern void PropertyDescriptorCollection_System_Collections_IList_set_Item_m1C9BF875A752FEAC57320E429DF95D0A11BDD5B8 (void);
// 0x00000543 System.Void System.ComponentModel.PropertyDescriptorCollection::.cctor()
extern void PropertyDescriptorCollection__cctor_m9FF868A1DA3307692B17BEE0248BE146682D8DA7 (void);
// 0x00000544 System.Void System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::.ctor(System.ComponentModel.PropertyDescriptorCollection)
extern void PropertyDescriptorEnumerator__ctor_mEF40577980844F48F837016FC78D6D6C4B656C40 (void);
// 0x00000545 System.Object System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::get_Current()
extern void PropertyDescriptorEnumerator_get_Current_mD139182036930AB6DD0F33E0C311C5D280E8169F (void);
// 0x00000546 System.Collections.DictionaryEntry System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::get_Entry()
extern void PropertyDescriptorEnumerator_get_Entry_m83A1F1F4EC45FCDAB6444FDAE98158CAEA6E17C0 (void);
// 0x00000547 System.Object System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::get_Key()
extern void PropertyDescriptorEnumerator_get_Key_m9AC03BAD80D2C982D93FCF6E7FA77694CDA80583 (void);
// 0x00000548 System.Object System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::get_Value()
extern void PropertyDescriptorEnumerator_get_Value_m5EC049B1D1B61491D697056DD2A5018B3F83DAB2 (void);
// 0x00000549 System.Boolean System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::MoveNext()
extern void PropertyDescriptorEnumerator_MoveNext_m1558DACC789497E2E8BEC2C914F68449B51F35E5 (void);
// 0x0000054A System.Void System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::Reset()
extern void PropertyDescriptorEnumerator_Reset_mF7C0D145E906CE6FCB18646933E580C14A0AE1DE (void);
// 0x0000054B System.Void System.ComponentModel.ReferenceConverter::.cctor()
extern void ReferenceConverter__cctor_mEA870CF9ECC5CD70B6DA856384013701EE3D62AD (void);
// 0x0000054C System.Void System.ComponentModel.ReflectTypeDescriptionProvider::.ctor()
extern void ReflectTypeDescriptionProvider__ctor_mD2C527AEF85A636D3E4507604E84FAB79A98DB62 (void);
// 0x0000054D System.Collections.Hashtable System.ComponentModel.ReflectTypeDescriptionProvider::get_IntrinsicTypeConverters()
extern void ReflectTypeDescriptionProvider_get_IntrinsicTypeConverters_mB6EA838FD9A593C93526EB031D1B20F8B00BB503 (void);
// 0x0000054E System.Object System.ComponentModel.ReflectTypeDescriptionProvider::CreateInstance(System.Type,System.Type)
extern void ReflectTypeDescriptionProvider_CreateInstance_mB7F08825FD9C639BA3F390ABB43F7856E972FF45 (void);
// 0x0000054F System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider::GetAttributes(System.Type)
extern void ReflectTypeDescriptionProvider_GetAttributes_mEB47CEC6757E936C1969EED650C92C501909265D (void);
// 0x00000550 System.Collections.IDictionary System.ComponentModel.ReflectTypeDescriptionProvider::GetCache(System.Object)
extern void ReflectTypeDescriptionProvider_GetCache_mFC604F35A7D5D4A6A8A9E363D42406B3E7E2F420 (void);
// 0x00000551 System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider::GetConverter(System.Type,System.Object)
extern void ReflectTypeDescriptionProvider_GetConverter_mD847E744202DEA5D7208D1F1AE25CFBDC37A75B9 (void);
// 0x00000552 System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider::GetExtendedAttributes(System.Object)
extern void ReflectTypeDescriptionProvider_GetExtendedAttributes_m2C8411D8AF61F164E3728DD6976EA7D6C025A375 (void);
// 0x00000553 System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider::GetExtendedConverter(System.Object)
extern void ReflectTypeDescriptionProvider_GetExtendedConverter_m7227126A73E4DC11779EC3DEEA2EA6D9DC9D424C (void);
// 0x00000554 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.ReflectTypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern void ReflectTypeDescriptionProvider_GetExtendedTypeDescriptor_m88CC219F64FAE3C886681713403765A20B87F849 (void);
// 0x00000555 System.Type System.ComponentModel.ReflectTypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern void ReflectTypeDescriptionProvider_GetReflectionType_m42CCC59A3631DE84FA1BA53F4D0266F5CC7DA92B (void);
// 0x00000556 System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData System.ComponentModel.ReflectTypeDescriptionProvider::GetTypeData(System.Type,System.Boolean)
extern void ReflectTypeDescriptionProvider_GetTypeData_mAB0CA0760FE347023B0CB43F64B800C0E4CF2064 (void);
// 0x00000557 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.ReflectTypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern void ReflectTypeDescriptionProvider_GetTypeDescriptor_m0F427A84067C17B3214611351841DCDDC2723D68 (void);
// 0x00000558 System.Boolean System.ComponentModel.ReflectTypeDescriptionProvider::IsPopulated(System.Type)
extern void ReflectTypeDescriptionProvider_IsPopulated_m84F86F476D4C3552D9319BE958418D78CE50C1A8 (void);
// 0x00000559 System.Attribute[] System.ComponentModel.ReflectTypeDescriptionProvider::ReflectGetAttributes(System.Type)
extern void ReflectTypeDescriptionProvider_ReflectGetAttributes_m2468318E4F19E884A4A0D535FBF0CE6406624954 (void);
// 0x0000055A System.Void System.ComponentModel.ReflectTypeDescriptionProvider::Refresh(System.Type)
extern void ReflectTypeDescriptionProvider_Refresh_m2E5B6CEEA9ED33154509B1DE82E5BF4E5814CAF0 (void);
// 0x0000055B System.Object System.ComponentModel.ReflectTypeDescriptionProvider::SearchIntrinsicTable(System.Collections.Hashtable,System.Type)
extern void ReflectTypeDescriptionProvider_SearchIntrinsicTable_m355181904C0F74CC1003E8D9C393271D468CC103 (void);
// 0x0000055C System.Void System.ComponentModel.ReflectTypeDescriptionProvider::.cctor()
extern void ReflectTypeDescriptionProvider__cctor_m7F48DC584D9D7017DDCF9AC5F86CDF8193097C7F (void);
// 0x0000055D System.Void System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::.ctor(System.Type)
extern void ReflectedTypeData__ctor_m229206DEEAEC214C249B48F72505C12A2C10F233 (void);
// 0x0000055E System.Boolean System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::get_IsPopulated()
extern void ReflectedTypeData_get_IsPopulated_m207FD7DEB577D25B681C31AE2F2A86D64895C76E (void);
// 0x0000055F System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::GetAttributes()
extern void ReflectedTypeData_GetAttributes_m9DA86D05CED373651F0087DC37710615B8ECDE96 (void);
// 0x00000560 System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::GetConverter(System.Object)
extern void ReflectedTypeData_GetConverter_mF312E1D0E7D445E6B283AFEC99A9ACB06B103070 (void);
// 0x00000561 System.Type System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::GetTypeFromName(System.String)
extern void ReflectedTypeData_GetTypeFromName_mBCA1346B9711CA1AD377C5C1BCF4589332435DF3 (void);
// 0x00000562 System.Void System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::Refresh()
extern void ReflectedTypeData_Refresh_m5A18415C807E341603C1A069AA7A3EB76258CAAD (void);
// 0x00000563 System.Void System.ComponentModel.RefreshEventArgs::.ctor(System.Type)
extern void RefreshEventArgs__ctor_mA88DB8D3EBE2EDC16126E5DA09495F31F6E43CC9 (void);
// 0x00000564 System.Void System.ComponentModel.RefreshEventHandler::.ctor(System.Object,System.IntPtr)
extern void RefreshEventHandler__ctor_m2A318A5FC4A7829BCC18BE0F9A652DCD1C8C192F (void);
// 0x00000565 System.Void System.ComponentModel.RefreshEventHandler::Invoke(System.ComponentModel.RefreshEventArgs)
extern void RefreshEventHandler_Invoke_m64C4651451C458F51B3DB45E9BF2D20E0B1DBCF7 (void);
// 0x00000566 System.Type System.ComponentModel.SByteConverter::get_TargetType()
extern void SByteConverter_get_TargetType_m872E6791DE87FFA1BC829C6D753B39A96B38D3A3 (void);
// 0x00000567 System.Object System.ComponentModel.SByteConverter::FromString(System.String,System.Int32)
extern void SByteConverter_FromString_mC4AA5397CCD129E9ED49AEF93625D99937D5DD19 (void);
// 0x00000568 System.Object System.ComponentModel.SByteConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void SByteConverter_FromString_mEC12BDD3F05207DE44D550CC137AAC3213947DDE (void);
// 0x00000569 System.String System.ComponentModel.SByteConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void SByteConverter_ToString_mC2999A1D251C25D6E926E7C0B72C485EB96A0F64 (void);
// 0x0000056A System.Boolean System.ComponentModel.SingleConverter::get_AllowHex()
extern void SingleConverter_get_AllowHex_m49756E0A9F6A76035FC8ED207F161A4C28C7B0DF (void);
// 0x0000056B System.Type System.ComponentModel.SingleConverter::get_TargetType()
extern void SingleConverter_get_TargetType_mC060F5026570A7907B8B1D9EA0402752331C6BD0 (void);
// 0x0000056C System.Object System.ComponentModel.SingleConverter::FromString(System.String,System.Int32)
extern void SingleConverter_FromString_mAB3584379A90F18A33A61D1913F74D590A17DB30 (void);
// 0x0000056D System.Object System.ComponentModel.SingleConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void SingleConverter_FromString_m27810AC814274F6507B5D2B3E3D6886B153661DC (void);
// 0x0000056E System.String System.ComponentModel.SingleConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void SingleConverter_ToString_m02237BA935CD713251AB84BA7B0E77283E65427E (void);
// 0x0000056F System.Void System.ComponentModel.SingleConverter::.ctor()
extern void SingleConverter__ctor_m463B63EB8D945D2D43E5B8099D8F0EC24AEBDA7A (void);
// 0x00000570 System.Boolean System.ComponentModel.StringConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void StringConverter_CanConvertFrom_mCE12DA7BD7ABA631AA3C00EF415C6C650636D00D (void);
// 0x00000571 System.Object System.ComponentModel.StringConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void StringConverter_ConvertFrom_mDC2BBDD289C8D8259AF915CB23765888BBFAB9AC (void);
// 0x00000572 System.Void System.ComponentModel.StringConverter::.ctor()
extern void StringConverter__ctor_m074D8686ED6ABC0E64C20D1EFD4406F215E7187A (void);
// 0x00000573 System.Boolean System.ComponentModel.TimeSpanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void TimeSpanConverter_CanConvertFrom_mD6725B6738FA9EC354BD235B49DBEF0A522F1110 (void);
// 0x00000574 System.Boolean System.ComponentModel.TimeSpanConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void TimeSpanConverter_CanConvertTo_mA1CF08D25D65F197EAA28F3FD3C4218A27FECCA0 (void);
// 0x00000575 System.Object System.ComponentModel.TimeSpanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void TimeSpanConverter_ConvertFrom_mF00171D4039FEA734A0FC5ACDB81BB0395A3AFF2 (void);
// 0x00000576 System.Object System.ComponentModel.TimeSpanConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void TimeSpanConverter_ConvertTo_m30C65F425D5F7D46475EC262213EB57255929A6F (void);
// 0x00000577 System.Void System.ComponentModel.TimeSpanConverter::.ctor()
extern void TimeSpanConverter__ctor_m7319DCEEDA2578B340AD4FEEE010AE5CEFAC9BD5 (void);
// 0x00000578 System.Boolean System.ComponentModel.TypeConverter::get_UseCompatibleTypeConversion()
extern void TypeConverter_get_UseCompatibleTypeConversion_mC6FAEA504FE4DAA7723C2B31F7E7C80E237110A1 (void);
// 0x00000579 System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern void TypeConverter_CanConvertFrom_mE41048372E94CADCD46A0E450385F4E13011D19B (void);
// 0x0000057A System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void TypeConverter_CanConvertFrom_m5E04D8BFD5D73042127767BD65B6434DAAEC2E53 (void);
// 0x0000057B System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.Type)
extern void TypeConverter_CanConvertTo_m05803F15F053E4DA3CF290D52FC379BB9D8C396A (void);
// 0x0000057C System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void TypeConverter_CanConvertTo_m959B290C863DDFBDD575AF3236B0A17E02E44013 (void);
// 0x0000057D System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
extern void TypeConverter_ConvertFrom_m74D536778D865EA22414730575143153FD749EDD (void);
// 0x0000057E System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void TypeConverter_ConvertFrom_mDE2D27BF8934184429496B39ED63BD3702868774 (void);
// 0x0000057F System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.String)
extern void TypeConverter_ConvertFromInvariantString_m81DA50DC43E5868C83A5D283FFD227B919C9D0A5 (void);
// 0x00000580 System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern void TypeConverter_ConvertFromInvariantString_m990BDB1C582D2E303DAA1DF2B123260C6A55A31C (void);
// 0x00000581 System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.String)
extern void TypeConverter_ConvertFromString_mE302BA2C46E1B0D2C310A5E5B32AA71EAA73F3AD (void);
// 0x00000582 System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern void TypeConverter_ConvertFromString_m6B1F932DB2AE6F4C06B84360B51790FF06C6870B (void);
// 0x00000583 System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.String)
extern void TypeConverter_ConvertFromString_m84FD8657B6D8327BE563E5A649A1D89A80BF2A32 (void);
// 0x00000584 System.Object System.ComponentModel.TypeConverter::ConvertTo(System.Object,System.Type)
extern void TypeConverter_ConvertTo_m0171DC87F8C3920E781691F5F8F1145A6DAF9CE8 (void);
// 0x00000585 System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void TypeConverter_ConvertTo_m5D4785A320B7ED351B677E28B77171F70E389B96 (void);
// 0x00000586 System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.Object)
extern void TypeConverter_ConvertToInvariantString_m1E0494D32C84A9F062F9762C8979E223C74D803C (void);
// 0x00000587 System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern void TypeConverter_ConvertToInvariantString_mF902AFB0FE32B8E7014DE226455D3FC79030FF92 (void);
// 0x00000588 System.String System.ComponentModel.TypeConverter::ConvertToString(System.Object)
extern void TypeConverter_ConvertToString_m124B43934E0022CA836E7258ABAF8F9FA8911093 (void);
// 0x00000589 System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern void TypeConverter_ConvertToString_mBE2DD3AF57FBB948F861DBD1DEAE33B18A33BF28 (void);
// 0x0000058A System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void TypeConverter_ConvertToString_m85A19DC8D0117332C304EBEE2911D66F8028E245 (void);
// 0x0000058B System.Object System.ComponentModel.TypeConverter::CreateInstance(System.Collections.IDictionary)
extern void TypeConverter_CreateInstance_m3431A3634D1048D919FF4B1DE80605A2BC8EA7C2 (void);
// 0x0000058C System.Object System.ComponentModel.TypeConverter::CreateInstance(System.ComponentModel.ITypeDescriptorContext,System.Collections.IDictionary)
extern void TypeConverter_CreateInstance_mCF1FB466625510C41AF4C31DBF0D6B0D17AD8F34 (void);
// 0x0000058D System.Exception System.ComponentModel.TypeConverter::GetConvertFromException(System.Object)
extern void TypeConverter_GetConvertFromException_m4CD1BB8AACD489FC7094283F199FC6DB6409F7AE (void);
// 0x0000058E System.Exception System.ComponentModel.TypeConverter::GetConvertToException(System.Object,System.Type)
extern void TypeConverter_GetConvertToException_m2F0A3FF8E38030AEABCB146D9A65FD27C3F4FE52 (void);
// 0x0000058F System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported()
extern void TypeConverter_GetCreateInstanceSupported_mFFBD842063695B04C1D1F918715576E58210B9EA (void);
// 0x00000590 System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern void TypeConverter_GetCreateInstanceSupported_m6F211317A2C58B002A523A637B40EC6E878D031B (void);
// 0x00000591 System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.Object)
extern void TypeConverter_GetProperties_m469ECD3A977FA29494A2D9E6F6EE957EA921E107 (void);
// 0x00000592 System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern void TypeConverter_GetProperties_m59D3B36D9259D09DC67C2DA59245BCEBDFA4D6F2 (void);
// 0x00000593 System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern void TypeConverter_GetProperties_mBD67295683221C70AB3253653C06C39F640F4F44 (void);
// 0x00000594 System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported()
extern void TypeConverter_GetPropertiesSupported_m67A5238F90828ECD5ABFFEA50DF3F10DE2324A3D (void);
// 0x00000595 System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern void TypeConverter_GetPropertiesSupported_mDE66D29A3EED2AC764A8B4F3C91917E2F9732763 (void);
// 0x00000596 System.Collections.ICollection System.ComponentModel.TypeConverter::GetStandardValues()
extern void TypeConverter_GetStandardValues_m2D0F59931104F725470D67A2DC6167B1980BE390 (void);
// 0x00000597 System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern void TypeConverter_GetStandardValues_m9F77FD4C8216D3F06928B418993659F3A0FEF5B6 (void);
// 0x00000598 System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive()
extern void TypeConverter_GetStandardValuesExclusive_m41CA2CC09F031BC8A14339DC376FE50D31AE9812 (void);
// 0x00000599 System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern void TypeConverter_GetStandardValuesExclusive_mCA336C7CE58B28DF0B46D5B52E3D0D177718FF42 (void);
// 0x0000059A System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported()
extern void TypeConverter_GetStandardValuesSupported_mDE36B9244050270D1DC2F6F840C10DA945CFAA23 (void);
// 0x0000059B System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern void TypeConverter_GetStandardValuesSupported_m5DFA377B1091BB08E64654FBEE8613EEDE731718 (void);
// 0x0000059C System.Boolean System.ComponentModel.TypeConverter::IsValid(System.Object)
extern void TypeConverter_IsValid_m54570B0309A0F2735FE3FA162D5F669B8BF434C8 (void);
// 0x0000059D System.Boolean System.ComponentModel.TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern void TypeConverter_IsValid_m991D78815B29EDE7EF8B1CD0114A5E6B84F7328C (void);
// 0x0000059E System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::SortProperties(System.ComponentModel.PropertyDescriptorCollection,System.String[])
extern void TypeConverter_SortProperties_m814BFD1763DEB6AD4D3E6B6042777358523AB3B6 (void);
// 0x0000059F System.Void System.ComponentModel.TypeConverter::.ctor()
extern void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (void);
// 0x000005A0 System.Void System.ComponentModel.TypeConverter::.cctor()
extern void TypeConverter__cctor_mD92DF23423021ACDCD3A96F7F09F1FFD64E61407 (void);
// 0x000005A1 System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern void SimplePropertyDescriptor__ctor_m6DF452C766FA5F610C684119950D96C7105A2B26 (void);
// 0x000005A2 System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_PropertyType()
extern void SimplePropertyDescriptor_get_PropertyType_m613F51DD8C6ECFE9C107312A24AAE28F375650A1 (void);
// 0x000005A3 System.Void System.ComponentModel.TypeConverter/StandardValuesCollection::.ctor(System.Collections.ICollection)
extern void StandardValuesCollection__ctor_m9049046DA81FD7B6FE279E063A43DC9B1D3B26B0 (void);
// 0x000005A4 System.Int32 System.ComponentModel.TypeConverter/StandardValuesCollection::get_Count()
extern void StandardValuesCollection_get_Count_mC127EA7E146C2FD58D5740935B45CACCD13D4637 (void);
// 0x000005A5 System.Void System.ComponentModel.TypeConverter/StandardValuesCollection::CopyTo(System.Array,System.Int32)
extern void StandardValuesCollection_CopyTo_mC06C9542D25F3E2D5A1DFDE690C920E8CFF94E10 (void);
// 0x000005A6 System.Collections.IEnumerator System.ComponentModel.TypeConverter/StandardValuesCollection::GetEnumerator()
extern void StandardValuesCollection_GetEnumerator_m0484C08651E32F669A0624D29E44C6CDEB550F6C (void);
// 0x000005A7 System.Int32 System.ComponentModel.TypeConverter/StandardValuesCollection::System.Collections.ICollection.get_Count()
extern void StandardValuesCollection_System_Collections_ICollection_get_Count_m98A89DC263C152B5E1A5B5A6B795D963CBADCD4D (void);
// 0x000005A8 System.Object System.ComponentModel.TypeConverter/StandardValuesCollection::System.Collections.ICollection.get_SyncRoot()
extern void StandardValuesCollection_System_Collections_ICollection_get_SyncRoot_mFFAF4C68B76F26F6816CEAB7D8D86656B1D1AC51 (void);
// 0x000005A9 System.Void System.ComponentModel.TypeConverter/StandardValuesCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void StandardValuesCollection_System_Collections_ICollection_CopyTo_mF996F3746F028C7EB58F7096E7B7B7FAB911A896 (void);
// 0x000005AA System.Collections.IEnumerator System.ComponentModel.TypeConverter/StandardValuesCollection::System.Collections.IEnumerable.GetEnumerator()
extern void StandardValuesCollection_System_Collections_IEnumerable_GetEnumerator_m66B4D529F0193F42A3858A1B638372B8A6687672 (void);
// 0x000005AB System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
extern void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (void);
// 0x000005AC System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
extern void TypeConverterAttribute__ctor_m0E1A55E1BD368F0AABCAF766BBCE1D275777A52A (void);
// 0x000005AD System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
extern void TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45 (void);
// 0x000005AE System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
extern void TypeConverterAttribute_Equals_mA3BF2C8CFA0AE8B5D0F52E066B1141AA53B4E015 (void);
// 0x000005AF System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
extern void TypeConverterAttribute_GetHashCode_m23ACA2A297447E17150BF490188919676FBD8A01 (void);
// 0x000005B0 System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
extern void TypeConverterAttribute__cctor_mB9A8C9E5E62F8A8D81E250D0B53D359860D7C04A (void);
// 0x000005B1 System.Void System.ComponentModel.TypeDescriptionProvider::.ctor()
extern void TypeDescriptionProvider__ctor_m575B3B96D9C9A3B7C0D34A14D9E5FAA63EEE004C (void);
// 0x000005B2 System.Collections.IDictionary System.ComponentModel.TypeDescriptionProvider::GetCache(System.Object)
extern void TypeDescriptionProvider_GetCache_mCA1674BD37E630D1E11A5DA72FC5145CB9AC86D6 (void);
// 0x000005B3 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern void TypeDescriptionProvider_GetExtendedTypeDescriptor_m1F9F48DA6AEEDFB76902503053B90C935ADE3DAF (void);
// 0x000005B4 System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type)
extern void TypeDescriptionProvider_GetReflectionType_m595CDB1DADC484AB12377301C2D93AD8DE2A61C8 (void);
// 0x000005B5 System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern void TypeDescriptionProvider_GetReflectionType_m370874914F8C84A0B85985491FDBAAC993C3851C (void);
// 0x000005B6 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type)
extern void TypeDescriptionProvider_GetTypeDescriptor_mFE828ABD6B88857D8D0F88B6E64036526EB72D5C (void);
// 0x000005B7 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Object)
extern void TypeDescriptionProvider_GetTypeDescriptor_m98120E5BD98B7418563145C0AFAC8D3F5806E124 (void);
// 0x000005B8 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern void TypeDescriptionProvider_GetTypeDescriptor_m399A40592DC141E36131643D323CC9481EA5AD8E (void);
// 0x000005B9 System.Void System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor::.ctor()
extern void EmptyCustomTypeDescriptor__ctor_m6AF4F3BAA9BA0E6137B0D2237E0F9A222CD47B89 (void);
// 0x000005BA System.Void System.ComponentModel.TypeDescriptionProviderAttribute::.ctor(System.String)
extern void TypeDescriptionProviderAttribute__ctor_m4826164C182E4A25C37E134BC55F5FFD933C90DD (void);
// 0x000005BB System.Void System.ComponentModel.TypeDescriptionProviderAttribute::.ctor(System.Type)
extern void TypeDescriptionProviderAttribute__ctor_m9368516A6C837282D73449E1EC58C4095CBBB238 (void);
// 0x000005BC System.String System.ComponentModel.TypeDescriptionProviderAttribute::get_TypeName()
extern void TypeDescriptionProviderAttribute_get_TypeName_m7E06882E9348A8D4987BB62EA1493B2BD23147E6 (void);
// 0x000005BD System.Type System.ComponentModel.TypeDescriptor::get_ComObjectType()
extern void TypeDescriptor_get_ComObjectType_m2907265F76AC34660A37B2A888A15C7D865805F6 (void);
// 0x000005BE System.Type System.ComponentModel.TypeDescriptor::get_InterfaceType()
extern void TypeDescriptor_get_InterfaceType_m468BAAC18190A6D8E4369B3139FB38ECE1B4C5BB (void);
// 0x000005BF System.Int32 System.ComponentModel.TypeDescriptor::get_MetadataVersion()
extern void TypeDescriptor_get_MetadataVersion_m6E33CD6DCADDEA862C9D9266B664C21DE70D449A (void);
// 0x000005C0 System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern void TypeDescriptor_AddProvider_mCE291812F3ECB4C76537D451403951E926F7EBF4 (void);
// 0x000005C1 System.Void System.ComponentModel.TypeDescriptor::CheckDefaultProvider(System.Type)
extern void TypeDescriptor_CheckDefaultProvider_m1467B92A2B042B2E7F6332210808BB6AA42BABB1 (void);
// 0x000005C2 System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern void TypeDescriptor_GetAttributes_m1AFA9ADFF8141511A369E9DFBE76DD5C072F6C07 (void);
// 0x000005C3 System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object)
extern void TypeDescriptor_GetAttributes_m3B71F9E3508FAA57E7C0FC745C67B11D93E7F298 (void);
// 0x000005C4 System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object,System.Boolean)
extern void TypeDescriptor_GetAttributes_mA09581C152D106FBCE4F8B182E2912D9C9371636 (void);
// 0x000005C5 System.Collections.IDictionary System.ComponentModel.TypeDescriptor::GetCache(System.Object)
extern void TypeDescriptor_GetCache_m45D02FA802DCA0F152B0C980AE939A5776115034 (void);
// 0x000005C6 System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern void TypeDescriptor_GetConverter_mBF37D89915F76D19765E81387D62B0B407432EC6 (void);
// 0x000005C7 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor::GetDescriptor(System.Type,System.String)
extern void TypeDescriptor_GetDescriptor_m4017D517BA6B0C5CE3C9E23EF9C09A57DACC2CF9 (void);
// 0x000005C8 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor::GetDescriptor(System.Object,System.Boolean)
extern void TypeDescriptor_GetDescriptor_m2AC7BFA432A94255424AE4B8CD09306500C83361 (void);
// 0x000005C9 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor::GetExtendedDescriptor(System.Object)
extern void TypeDescriptor_GetExtendedDescriptor_m6EE3155A58E0123521B9B4829097A73CAA4ECF1F (void);
// 0x000005CA System.String System.ComponentModel.TypeDescriptor::GetExtenderCollisionSuffix(System.ComponentModel.MemberDescriptor)
extern void TypeDescriptor_GetExtenderCollisionSuffix_m136D10F14691E93A0611E8DF12F77C9DA17920BA (void);
// 0x000005CB System.Type System.ComponentModel.TypeDescriptor::GetNodeForBaseType(System.Type)
extern void TypeDescriptor_GetNodeForBaseType_m85BCD83E89EE286F365A1553239C985BEB1D785C (void);
// 0x000005CC System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProviderRecursive(System.Type)
extern void TypeDescriptor_GetProviderRecursive_m371FD85FC01238874F7387FA430260D57646EA3F (void);
// 0x000005CD System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Type)
extern void TypeDescriptor_GetReflectionType_m2E40168C9752B069A3E430478C46D54463DA6707 (void);
// 0x000005CE System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor::NodeFor(System.Type)
extern void TypeDescriptor_NodeFor_m99219DF297037E09BCCFD4492FFEDDD7C7D229A1 (void);
// 0x000005CF System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor::NodeFor(System.Type,System.Boolean)
extern void TypeDescriptor_NodeFor_mE9C1F8845A707769A5A95E338C610FA244DA283C (void);
// 0x000005D0 System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor::NodeFor(System.Object)
extern void TypeDescriptor_NodeFor_m7A26D5E0284193E428AF54739EB5304813B6BFA2 (void);
// 0x000005D1 System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor::NodeFor(System.Object,System.Boolean)
extern void TypeDescriptor_NodeFor_m63711C279C0075534A777A1D6B57D031487C3444 (void);
// 0x000005D2 System.Collections.ICollection System.ComponentModel.TypeDescriptor::PipelineFilter(System.Int32,System.Collections.ICollection,System.Object,System.Collections.IDictionary)
extern void TypeDescriptor_PipelineFilter_m3593339441AA43824117FAB01873B98C876A87C5 (void);
// 0x000005D3 System.Collections.ICollection System.ComponentModel.TypeDescriptor::PipelineInitialize(System.Int32,System.Collections.ICollection,System.Collections.IDictionary)
extern void TypeDescriptor_PipelineInitialize_m0D39E6DAD9E95884ED917DBBC5A508F4CA5A794D (void);
// 0x000005D4 System.Collections.ICollection System.ComponentModel.TypeDescriptor::PipelineMerge(System.Int32,System.Collections.ICollection,System.Collections.ICollection,System.Object,System.Collections.IDictionary)
extern void TypeDescriptor_PipelineMerge_m4CBA66507DD778B6FD13A033515180EB9709618D (void);
// 0x000005D5 System.Void System.ComponentModel.TypeDescriptor::RaiseRefresh(System.Type)
extern void TypeDescriptor_RaiseRefresh_m026E52DA15538070CED25BBCBB696318032A6A8C (void);
// 0x000005D6 System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Type)
extern void TypeDescriptor_Refresh_m8F344E720B395FC5493977659FACECE567A6A223 (void);
// 0x000005D7 System.Void System.ComponentModel.TypeDescriptor::SortDescriptorArray(System.Collections.IList)
extern void TypeDescriptor_SortDescriptorArray_mF088401B40E9E2739EC9F16B98F05D60A9B89A47 (void);
// 0x000005D8 System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern void TypeDescriptor__cctor_m3EDDF7A3EA099841E95028726F74677419380E0D (void);
// 0x000005D9 System.Void System.ComponentModel.TypeDescriptor/FilterCacheItem::.ctor(System.ComponentModel.Design.ITypeDescriptorFilterService,System.Collections.ICollection)
extern void FilterCacheItem__ctor_mE9F7CD307B3F6228F55EFE04B8D84B4B57A51893 (void);
// 0x000005DA System.Boolean System.ComponentModel.TypeDescriptor/FilterCacheItem::IsValid(System.ComponentModel.Design.ITypeDescriptorFilterService)
extern void FilterCacheItem_IsValid_mD1D0960AEFACC6645E5DEC95CA4F173E9260EC72 (void);
// 0x000005DB System.Int32 System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::Compare(System.Object,System.Object)
extern void MemberDescriptorComparer_Compare_m33438352E9BA8C1BF6B594E524DC1BF8BC5EFFE1 (void);
// 0x000005DC System.Void System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::.ctor()
extern void MemberDescriptorComparer__ctor_mDCB73C6EC35AE31BE43CBF4C88053920603B4431 (void);
// 0x000005DD System.Void System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::.cctor()
extern void MemberDescriptorComparer__cctor_m31A7C495358AAA5B5E72F47BDC54DDC970E3A11C (void);
// 0x000005DE System.Void System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor,System.ComponentModel.ICustomTypeDescriptor)
extern void MergedTypeDescriptor__ctor_m846C2DB00AE4DB20FAB890B60E95CB56EE9FE629 (void);
// 0x000005DF System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
extern void MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mF8DA84AB54E4B4429E27667D557634E4872BA672 (void);
// 0x000005E0 System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
extern void MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m0EEB21D1590AAECD9DB3404802C175099B200F63 (void);
// 0x000005E1 System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern void TypeDescriptionNode__ctor_mD6C85C9088064C16A401309FAFDC62252A5D5526 (void);
// 0x000005E2 System.Collections.IDictionary System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetCache(System.Object)
extern void TypeDescriptionNode_GetCache_m2612D24980BD19B8BF3F192C0255451AC3C6C363 (void);
// 0x000005E3 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetExtendedTypeDescriptor(System.Object)
extern void TypeDescriptionNode_GetExtendedTypeDescriptor_m9093310A740B288F02AE27622E90C0F1FE10560F (void);
// 0x000005E4 System.Type System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetReflectionType(System.Type,System.Object)
extern void TypeDescriptionNode_GetReflectionType_m54393E311DD22AEF766FC73C95C7059CCD09FBF5 (void);
// 0x000005E5 System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetTypeDescriptor(System.Type,System.Object)
extern void TypeDescriptionNode_GetTypeDescriptor_mE86956B84E55A15AE4FDD7CAE44BC53515752E7A (void);
// 0x000005E6 System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptor/TypeDescriptionNode,System.Object)
extern void DefaultExtendedTypeDescriptor__ctor_m23A3BC29A6EF7571E339B9EBA5059F6490177C3C (void);
// 0x000005E7 System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
extern void DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87 (void);
// 0x000005E8 System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
extern void DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F (void);
// 0x000005E9 System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptor/TypeDescriptionNode,System.Type,System.Object)
extern void DefaultTypeDescriptor__ctor_m8181176F10EBEA8A1DE3703C9C355ABB114A78D6 (void);
// 0x000005EA System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
extern void DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0 (void);
// 0x000005EB System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
extern void DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283 (void);
// 0x000005EC System.Type System.ComponentModel.UInt16Converter::get_TargetType()
extern void UInt16Converter_get_TargetType_m196BDCAABD5DD77F3F2C85740AEE8EFF58604195 (void);
// 0x000005ED System.Object System.ComponentModel.UInt16Converter::FromString(System.String,System.Int32)
extern void UInt16Converter_FromString_m338B258C44AA834EDDCA6DBE80EA9D2BA7FC326D (void);
// 0x000005EE System.Object System.ComponentModel.UInt16Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void UInt16Converter_FromString_m7612D173E0B2FEC9C37AB4975645F780B655F0F8 (void);
// 0x000005EF System.String System.ComponentModel.UInt16Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void UInt16Converter_ToString_m2375B3B8E3CBFAD4DC88F36C263E6BD7A92CA30F (void);
// 0x000005F0 System.Type System.ComponentModel.UInt32Converter::get_TargetType()
extern void UInt32Converter_get_TargetType_m3AF0C3EC58B09D60B59FD7EC65C353B6737F6428 (void);
// 0x000005F1 System.Object System.ComponentModel.UInt32Converter::FromString(System.String,System.Int32)
extern void UInt32Converter_FromString_m36770B21D5262223400C0CA20ACA145BCECC84D6 (void);
// 0x000005F2 System.Object System.ComponentModel.UInt32Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void UInt32Converter_FromString_m6C56842A0BF1F48F591D99F8F7D0E43BB17D33C5 (void);
// 0x000005F3 System.String System.ComponentModel.UInt32Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void UInt32Converter_ToString_mA63E2D3743B6AC3102193389A659058343F2D0B1 (void);
// 0x000005F4 System.Type System.ComponentModel.UInt64Converter::get_TargetType()
extern void UInt64Converter_get_TargetType_m5056A71EAC6515E5E7A3EE29D8A8312A1CA70591 (void);
// 0x000005F5 System.Object System.ComponentModel.UInt64Converter::FromString(System.String,System.Int32)
extern void UInt64Converter_FromString_m7DE07D884429FCB9E5B175713BC600B263C0FAFC (void);
// 0x000005F6 System.Object System.ComponentModel.UInt64Converter::FromString(System.String,System.Globalization.NumberFormatInfo)
extern void UInt64Converter_FromString_m7695536CBA19FBF9D917D2414DAC4D840B9DF5BC (void);
// 0x000005F7 System.String System.ComponentModel.UInt64Converter::ToString(System.Object,System.Globalization.NumberFormatInfo)
extern void UInt64Converter_ToString_m4F8F4054A4F8E12CF28BE2836B39131A050F9EC7 (void);
// 0x000005F8 System.Void System.ComponentModel.Win32Exception::.ctor()
extern void Win32Exception__ctor_m0B20F25EC4A56A122FF766429AF40AF6292E11B1 (void);
// 0x000005F9 System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
extern void Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281 (void);
// 0x000005FA System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
extern void Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4 (void);
// 0x000005FB System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Win32Exception__ctor_m1B3DF3F51BBF050C18F933B36027A8A4902668C4 (void);
// 0x000005FC System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
extern void Win32Exception_get_NativeErrorCode_m33C1D176D9178C36DA32F8FEC251B923EE53CE5E (void);
// 0x000005FD System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2 (void);
// 0x000005FE System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
extern void Win32Exception_GetErrorMessage_mE857D9093D6D366D960BD8A8FCCF22DF6FB92728 (void);
// 0x000005FF System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages()
extern void Win32Exception_InitializeErrorMessages_mB93C4301854293466419FCD88967869E6306D8D0 (void);
// 0x00000600 System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages1()
extern void Win32Exception_InitializeErrorMessages1_mB1B1C797EA28C0AF46DE292C5837FB0AB25B661F (void);
// 0x00000601 System.Void System.ComponentModel.Win32Exception::.cctor()
extern void Win32Exception__cctor_m79AA5A61519256167F9A16813C9DC20A82121DC4 (void);
// 0x00000602 System.Boolean System.ComponentModel.BaseNumberConverter::get_AllowHex()
extern void BaseNumberConverter_get_AllowHex_m2A6143CE655C657EDFE8A7DC3897EEA0EEB3A4BD (void);
// 0x00000603 System.Type System.ComponentModel.BaseNumberConverter::get_TargetType()
// 0x00000604 System.Object System.ComponentModel.BaseNumberConverter::FromString(System.String,System.Int32)
// 0x00000605 System.Object System.ComponentModel.BaseNumberConverter::FromString(System.String,System.Globalization.NumberFormatInfo)
// 0x00000606 System.Exception System.ComponentModel.BaseNumberConverter::FromStringError(System.String,System.Exception)
extern void BaseNumberConverter_FromStringError_m7A2C9BCEEAE1856C08FE4083A0EB41E316E0CBA8 (void);
// 0x00000607 System.String System.ComponentModel.BaseNumberConverter::ToString(System.Object,System.Globalization.NumberFormatInfo)
// 0x00000608 System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void BaseNumberConverter_CanConvertFrom_mA4351F586FC63F67CC1E0013CD68BCC2F89FB916 (void);
// 0x00000609 System.Object System.ComponentModel.BaseNumberConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern void BaseNumberConverter_ConvertFrom_mAC29686169A55736CD527CB44D3E8DB0D697C7DB (void);
// 0x0000060A System.Object System.ComponentModel.BaseNumberConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern void BaseNumberConverter_ConvertTo_m46174D69B2F224A17A25C88B162C0270DE801CF2 (void);
// 0x0000060B System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern void BaseNumberConverter_CanConvertTo_m6108C34CF9DF475BF4074181348848BCE6C53F76 (void);
// 0x0000060C System.Void System.ComponentModel.BaseNumberConverter::.ctor()
extern void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (void);
// 0x0000060D System.Void System.ComponentModel.WeakHashtable::.ctor()
extern void WeakHashtable__ctor_mBFFE17D4547F681A27EBE60D277625C9F9D0510F (void);
// 0x0000060E System.Void System.ComponentModel.WeakHashtable::Clear()
extern void WeakHashtable_Clear_m306746F8BC4535C2327FFDF167F23CA06077A6EE (void);
// 0x0000060F System.Void System.ComponentModel.WeakHashtable::Remove(System.Object)
extern void WeakHashtable_Remove_mC091A16F4775270A1FC840FE4E82917E4F010A03 (void);
// 0x00000610 System.Void System.ComponentModel.WeakHashtable::.cctor()
extern void WeakHashtable__cctor_mDC0172C1DE43E226990881404CE73D1B64046A16 (void);
// 0x00000611 System.Boolean System.ComponentModel.WeakHashtable/WeakKeyComparer::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern void WeakKeyComparer_System_Collections_IEqualityComparer_Equals_m2DE66C4A7CF44E5A99DA241D8271C285ABBE56F8 (void);
// 0x00000612 System.Int32 System.ComponentModel.WeakHashtable/WeakKeyComparer::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern void WeakKeyComparer_System_Collections_IEqualityComparer_GetHashCode_m7E00D4A81998A46FFD9BE51679C6169DF0CCBF63 (void);
// 0x00000613 System.Void System.ComponentModel.WeakHashtable/WeakKeyComparer::.ctor()
extern void WeakKeyComparer__ctor_m1DB79747A0192C8CB5B45E74743CA7CA7EC09E52 (void);
// 0x00000614 System.ComponentModel.IComponent System.ComponentModel.Design.IDesignerHost::get_RootComponent()
// 0x00000615 System.Object System.ComponentModel.Design.IDictionaryService::GetValue(System.Object)
// 0x00000616 System.Void System.ComponentModel.Design.IDictionaryService::SetValue(System.Object,System.Object)
// 0x00000617 System.Boolean System.ComponentModel.Design.ITypeDescriptorFilterService::FilterAttributes(System.ComponentModel.IComponent,System.Collections.IDictionary)
// 0x00000618 System.Boolean System.ComponentModel.Design.ITypeDescriptorFilterService::FilterEvents(System.ComponentModel.IComponent,System.Collections.IDictionary)
// 0x00000619 System.Boolean System.ComponentModel.Design.ITypeDescriptorFilterService::FilterProperties(System.ComponentModel.IComponent,System.Collections.IDictionary)
// 0x0000061A System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
extern void InstanceDescriptor__ctor_m4A88597D681C8A8A9551AB318F8CBB47D49BEC57 (void);
// 0x0000061B System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection,System.Boolean)
extern void InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F (void);
// 0x0000061C System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
extern void InstanceDescriptor_Invoke_mACDF3C04B3998B38C4A79FCFC66F4760EEEEB2FE (void);
// 0x0000061D System.Void System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::.ctor(System.String,System.String,System.Boolean)
extern void RootDesignerSerializerAttribute__ctor_m52C401C2E19FF1C4E9A8F140811D5AA762C60602 (void);
// 0x0000061E System.Object System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::get_TypeId()
extern void RootDesignerSerializerAttribute_get_TypeId_m3177E104F2130582DB56C4321979B6952B7E0098 (void);
// 0x0000061F System.Void System.Security.Authentication.AuthenticationException::.ctor()
extern void AuthenticationException__ctor_m7A29E86FE3299D40A63064FF6DB61D0E1A70C1F6 (void);
// 0x00000620 System.Void System.Security.Authentication.AuthenticationException::.ctor(System.String,System.Exception)
extern void AuthenticationException__ctor_m6EDDEE3840629AC06E70CDF7878F955FE1ED538A (void);
// 0x00000621 System.Void System.Security.Authentication.AuthenticationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void AuthenticationException__ctor_m091E6A6612916774EDF1C0F7544B70A5FA97A542 (void);
// 0x00000622 System.Void System.Security.Cryptography.Oid::.ctor(System.String)
extern void Oid__ctor_m4AF81B9D51BED48AE505251E0874EC654BA07B72 (void);
// 0x00000623 System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.Security.Cryptography.OidGroup,System.Boolean)
extern void Oid__ctor_mB20A3E977C9BE9B4E4C0D8EE3858F34FF16959F4 (void);
// 0x00000624 System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
extern void Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D (void);
// 0x00000625 System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
extern void Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59 (void);
// 0x00000626 System.String System.Security.Cryptography.Oid::get_Value()
extern void Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3 (void);
// 0x00000627 System.Void System.Security.Cryptography.Oid::set_Value(System.String)
extern void Oid_set_Value_m122282994E6EE138CE4284B052EF8BE2086CA72F (void);
// 0x00000628 System.String System.Security.Cryptography.Oid::get_FriendlyName()
extern void Oid_get_FriendlyName_m1B7B5D80B6B533A33DAB2B28DCD0B53927D1BD17 (void);
// 0x00000629 System.Void System.Security.Cryptography.OidCollection::.ctor()
extern void OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98 (void);
// 0x0000062A System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
extern void OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5 (void);
// 0x0000062B System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
extern void OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A (void);
// 0x0000062C System.Int32 System.Security.Cryptography.OidCollection::get_Count()
extern void OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11 (void);
// 0x0000062D System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
extern void OidCollection_System_Collections_IEnumerable_GetEnumerator_m4624AA2C7F0693698228803D9B59EFE6AAD6AFE4 (void);
// 0x0000062E System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC (void);
// 0x0000062F System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
extern void OidCollection_get_SyncRoot_mD310358F3BF4454604AD96C734BA6EC180CE7A85 (void);
// 0x00000630 System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern void OidEnumerator__ctor_m2168FEE96614FB7460C84762ED3728A5413F42E6 (void);
// 0x00000631 System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern void OidEnumerator_System_Collections_IEnumerator_get_Current_m0B627B9F510EF4F283F40EBE17164B9231BB7735 (void);
// 0x00000632 System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern void OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD (void);
// 0x00000633 System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern void OidEnumerator_Reset_m24F1F25812A7BFE9B02B312BA9E670C930622F27 (void);
// 0x00000634 System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoNameFromKey(System.String,System.Security.Cryptography.OidGroup)
extern void CAPI_CryptFindOIDInfoNameFromKey_mAB6D2D48C59807B12794CEFF94A8AF645FFECFCF (void);
// 0x00000635 System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoKeyFromName(System.String,System.Security.Cryptography.OidGroup)
extern void CAPI_CryptFindOIDInfoKeyFromName_mE290F44CA294BBE541CCE62DE201B3C6B7E47295 (void);
// 0x00000636 System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern void AsnEncodedData__ctor_m90028EC56A5E36272EAA4A9279AE23358D46F547 (void);
// 0x00000637 System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern void AsnEncodedData__ctor_m3E8C1D1E0CE464176742B847DC99BF8EAABF15E6 (void);
// 0x00000638 System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern void AsnEncodedData_set_Oid_m877771219F651EA3FF834952300180274531C9C7 (void);
// 0x00000639 System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern void AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF (void);
// 0x0000063A System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern void AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B (void);
// 0x0000063B System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2 (void);
// 0x0000063C System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern void AsnEncodedData_ToString_m669772943B78D9242BC5F176A4BD857326F95021 (void);
// 0x0000063D System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern void AsnEncodedData_Default_m883444CBD5238793D1B94A6DE273FF2F9C47EA70 (void);
// 0x0000063E System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern void AsnEncodedData_BasicConstraintsExtension_m74BFC192666755E9D8A088880789AB6EA84F1FCC (void);
// 0x0000063F System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern void AsnEncodedData_EnhancedKeyUsageExtension_m3C95D5D2D8F81BEA5E33B264767C8A5E5575D7CA (void);
// 0x00000640 System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern void AsnEncodedData_KeyUsageExtension_m9A9C72CF2A831A1849A55336FC8D6DEE097E28D3 (void);
// 0x00000641 System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern void AsnEncodedData_SubjectKeyIdentifierExtension_m3CEDDCED26AD5621407DAA401F385269348BB789 (void);
// 0x00000642 System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern void AsnEncodedData_SubjectAltName_mDE2F39E1A43C1E13D89319F221517EE54B1A6A14 (void);
// 0x00000643 System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern void AsnEncodedData_NetscapeCertType_m55E43EBDA7882304E8FE5F3DC134A2719F519373 (void);
// 0x00000644 System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfo(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
extern void X509Utils_FindOidInfo_m1DC532CE2F7A9D2477D4CE172AE91E117A5E1C17 (void);
// 0x00000645 System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfoWithFallback(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
extern void X509Utils_FindOidInfoWithFallback_mE3E1BCA35CEA1AE8759E35F69B4AFAF1E81E786C (void);
// 0x00000646 System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern void PublicKey__ctor_m7C692A77567DF67DE4025615F322BE3B41750108 (void);
// 0x00000647 System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern void PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213 (void);
// 0x00000648 System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern void PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0 (void);
// 0x00000649 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern void PublicKey_get_Key_mC0A4379DAA42B565878EE09310C43A4CCB45F273 (void);
// 0x0000064A System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern void PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A (void);
// 0x0000064B System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern void PublicKey_GetUnsignedBigInteger_mDC1A423F4649E751E2F44C534F52F1103F1E8CA2 (void);
// 0x0000064C System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern void PublicKey_DecodeDSA_m32E09E73807395C6F5B0DD37E72874DD1FD1215A (void);
// 0x0000064D System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern void PublicKey_DecodeRSA_m462116935D07EA1121C50801E6CCB6B21F0C5DC1 (void);
// 0x0000064E System.Void System.Security.Cryptography.X509Certificates.PublicKey::.cctor()
extern void PublicKey__cctor_mBA35606057B7AD6687CD52BFED47441593DC5004 (void);
// 0x0000064F System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern void X509BasicConstraintsExtension__ctor_m672BE9B41107A8C30454BF4CAC120D70512BA89A (void);
// 0x00000650 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509BasicConstraintsExtension__ctor_m76C88E8D4C7CCEC7B2C3D56CC58A56352F7729E4 (void);
// 0x00000651 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern void X509BasicConstraintsExtension__ctor_m02334D8CAA280B339CA41E2019CF1F02C8B2E7DE (void);
// 0x00000652 System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern void X509BasicConstraintsExtension_get_CertificateAuthority_mB4ECEF43A245E97DA80C6323BE339BE2DF99FF5C (void);
// 0x00000653 System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern void X509BasicConstraintsExtension_get_HasPathLengthConstraint_m8F7C371EFF99BD110663DB106BEE889955255BC7 (void);
// 0x00000654 System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern void X509BasicConstraintsExtension_get_PathLengthConstraint_m4D3F016E42C243887D07DD955518A818DC14BBC5 (void);
// 0x00000655 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509BasicConstraintsExtension_CopyFrom_mCC603D99CEC828BDF86FDEB3C4650CF4D3753B8E (void);
// 0x00000656 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern void X509BasicConstraintsExtension_Decode_m7C50097B6238FEF4DAD6A9A09A449DB0CAFFEBEB (void);
// 0x00000657 System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern void X509BasicConstraintsExtension_Encode_mD7FA31A70B025F67062C3844E4FEB09B14A4DE2B (void);
// 0x00000658 System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern void X509BasicConstraintsExtension_ToString_mBFC61BA07CD2BB8EACCC19A5AE72EA81C11D02E4 (void);
// 0x00000659 System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Certificate2::get_Impl()
extern void X509Certificate2_get_Impl_m21C56437F9DD096FA112C2DF07F04EB2E381015F (void);
// 0x0000065A System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor()
extern void X509Certificate2__ctor_m84519718D6C34074E7037786ADAE51290460C2B1 (void);
// 0x0000065B System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern void X509Certificate2__ctor_m34CFFC999D3A152729A5C59DBE80AB709547DA19 (void);
// 0x0000065C System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void X509Certificate2__ctor_mB1BC3DC26B71A5D5D3753B04DCA16AA49627EC15 (void);
// 0x0000065D System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern void X509Certificate2_get_NotAfter_m925CA3901B7856D0692C6DED4F6428A40A726787 (void);
// 0x0000065E System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern void X509Certificate2_get_NotBefore_m656CC9913A0E6F6F0C06185F3B63F3A2EDCEB801 (void);
// 0x0000065F System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern void X509Certificate2_get_PrivateKey_mB2D1370AFF6F005B4A18A2223363C353B8D24A4A (void);
// 0x00000660 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern void X509Certificate2_get_PublicKey_mF1813BEE1EE04C593FBAA44590E2AEBC23A72304 (void);
// 0x00000661 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern void X509Certificate2_get_SerialNumber_m12F610EEBE485A29FD49A06E8A33BB690476309B (void);
// 0x00000662 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern void X509Certificate2_get_SignatureAlgorithm_mF3FE8751A82E00E38E315EA893575D125F4F7354 (void);
// 0x00000663 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern void X509Certificate2_get_Thumbprint_m0A33F62238AF002C1B93A0F93A361B890E61DE8C (void);
// 0x00000664 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern void X509Certificate2_get_Version_m6A4FB2125DA64437D184A64E731F2B58738F0B09 (void);
// 0x00000665 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2_Import_m4804ED2003CE17C7C9317B8B389A64406D3DE337 (void);
// 0x00000666 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern void X509Certificate2_Reset_mE779D76DC57C54B674D7588861324F02DD784C3E (void);
// 0x00000667 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern void X509Certificate2_ToString_mAC732FED5427D5551E2CC9B06C145128E7F6563B (void);
// 0x00000668 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern void X509Certificate2_ToString_mA115124642674F646AF34E6B8E2FB54870026342 (void);
// 0x00000669 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern void X509Certificate2_AppendBuffer_m4BB50C8A9A87B823A7A09B82D76F5659FD551826 (void);
// 0x0000066A System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern void X509Certificate2__cctor_m4C57713FDB4B5D1D736C511327A160D6C3558DC2 (void);
// 0x0000066B System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.cctor()
extern void X509Certificate2Collection__cctor_mC3757CA5D10515491E20F8CEBAEE82745C49F7FF (void);
// 0x0000066C System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PrivateKey()
// 0x0000066D System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PublicKey()
// 0x0000066E System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_SignatureAlgorithm()
// 0x0000066F System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_Version()
// 0x00000670 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_IntermediateCertificates()
// 0x00000671 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
// 0x00000672 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::Reset()
// 0x00000673 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::.ctor()
extern void X509Certificate2Impl__ctor_mE6FF68AD589010E57C86555935DB601680AC1839 (void);
// 0x00000674 System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IsValid()
extern void X509Certificate2ImplMono_get_IsValid_mA2D572B4E2382A93FEB9F88940269684D433439B (void);
// 0x00000675 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(Mono.Security.X509.X509Certificate)
extern void X509Certificate2ImplMono__ctor_m3F6BBB4381EB9A720E11577B9F663DC10B3B93A7 (void);
// 0x00000676 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono)
extern void X509Certificate2ImplMono__ctor_m622D5FDEB76F561EA4AE9C8F4597D8E6AE1C6C28 (void);
// 0x00000677 System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Clone()
extern void X509Certificate2ImplMono_Clone_mE74EE518CD4FAD43F670E3B9140350A0C9766385 (void);
// 0x00000678 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetIssuerName(System.Boolean)
extern void X509Certificate2ImplMono_GetIssuerName_mE9EB27EEABD37F1BAAC1C6967C032328745BCA6D (void);
// 0x00000679 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetSubjectName(System.Boolean)
extern void X509Certificate2ImplMono_GetSubjectName_mC6FE7F5CCA8114C2438C21C3BF2C0CB997DA2FA5 (void);
// 0x0000067A System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetRawCertData()
extern void X509Certificate2ImplMono_GetRawCertData_mF4AB5CCF83D23AFE455D75CC7545423221565CC0 (void);
// 0x0000067B System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetCertHash(System.Boolean)
extern void X509Certificate2ImplMono_GetCertHash_m98BEFDA6E3594E29167784C73F2B5FE1AB6B33A2 (void);
// 0x0000067C System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetValidFrom()
extern void X509Certificate2ImplMono_GetValidFrom_mACF13EDC89D74B8043923C624C4F8F03CECE0D35 (void);
// 0x0000067D System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetValidUntil()
extern void X509Certificate2ImplMono_GetValidUntil_m6743FC208F113FE93F749F0E1D9A5D993B44B88E (void);
// 0x0000067E System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean&)
extern void X509Certificate2ImplMono_Equals_m2AAE4D6702A22247DB54ADB744D2E42BCB367F7B (void);
// 0x0000067F System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetSerialNumber()
extern void X509Certificate2ImplMono_GetSerialNumber_mAE671881208B0F96C482D5D6EA7D38FEB4A158E9 (void);
// 0x00000680 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor()
extern void X509Certificate2ImplMono__ctor_m80FEEC497DB0F224B581C0806F42A446103575A7 (void);
// 0x00000681 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PrivateKey()
extern void X509Certificate2ImplMono_get_PrivateKey_m2B92DBE7562BBE32D2DC2F5ADC6E96FCD2497F60 (void);
// 0x00000682 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PublicKey()
extern void X509Certificate2ImplMono_get_PublicKey_mA323F8CDC40E9CBFDD1DA8D182CB687241726DCC (void);
// 0x00000683 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_SignatureAlgorithm()
extern void X509Certificate2ImplMono_get_SignatureAlgorithm_m69AB28A2895A47AA11A445F378A266F39ADC07E7 (void);
// 0x00000684 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_Version()
extern void X509Certificate2ImplMono_get_Version_m24C9E28B486518225FAB9642E940B451491BCCFE (void);
// 0x00000685 Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ImportPkcs12(System.Byte[],System.String)
extern void X509Certificate2ImplMono_ImportPkcs12_mC29B89A6EDBB108185C4A91028F6EB496ACB2C98 (void);
// 0x00000686 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2ImplMono_Import_m30A76FE845CBD359AEB5547605606473A1915317 (void);
// 0x00000687 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Reset()
extern void X509Certificate2ImplMono_Reset_mAAB9D01175702741457A6CA3E47B0F6CAF74B571 (void);
// 0x00000688 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ToString()
extern void X509Certificate2ImplMono_ToString_m2562D7699331A39B90E766EFF1B49F37C6AC54E0 (void);
// 0x00000689 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ToString(System.Boolean)
extern void X509Certificate2ImplMono_ToString_mB2B4F9BFD12A01805F1410E30A7BCBAA07FA750D (void);
// 0x0000068A System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern void X509Certificate2ImplMono_AppendBuffer_m75732D24F00E59BD699AF16F84471E597D6B225F (void);
// 0x0000068B System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IntermediateCertificates()
extern void X509Certificate2ImplMono_get_IntermediateCertificates_m304680821DC498B386CF82B8B82DD1248DE52C85 (void);
// 0x0000068C System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.cctor()
extern void X509Certificate2ImplMono__cctor_mAA23F03A760725B059D7DE6FB55EFDA78FFFD328 (void);
// 0x0000068D System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
extern void X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB (void);
// 0x0000068E System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateCollection__ctor_mE486AD558BE6F0D8FD89AB88DE922DFA684C4AA7 (void);
// 0x0000068F System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
extern void X509CertificateCollection_get_Item_m9EC79D4B62FB412278F92F3641969385252F6572 (void);
// 0x00000690 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateCollection_AddRange_m45914B11721824E8BE7FC2B2FC4ADD28F2C45EDB (void);
// 0x00000691 System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
extern void X509CertificateCollection_GetEnumerator_mBD26239EE292204789D87CA73DBA5C898C2F4F14 (void);
// 0x00000692 System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
extern void X509CertificateCollection_GetHashCode_m3F1BB9203AB722A6A9CF574390B0244F47485111 (void);
// 0x00000693 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateEnumerator__ctor_m7FEB0CE4B71CB9CE860AAF29554279392249D237 (void);
// 0x00000694 System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern void X509CertificateEnumerator_get_Current_mF256C5D7194A99B5C567F6E62806C153DA8864F1 (void);
// 0x00000695 System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mBBB3E8D212FD598C9C90F880D31B8227852F5075 (void);
// 0x00000696 System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m297DB4F7F1CB60E4B3E0BB2BBF1B80279E5E6936 (void);
// 0x00000697 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_mC0D277DD2410455AE4EBCC14C4258F5F5F8677CC (void);
// 0x00000698 System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern void X509CertificateEnumerator_MoveNext_m2DCBF7B544E0E410B90DF3FD96B473B11A37E8DA (void);
// 0x00000699 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor()
extern void X509CertificateImplCollection__ctor_m9A1E10EE2FC833E8F8C938A91AD907BC437452E2 (void);
// 0x0000069A System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateImplCollection)
extern void X509CertificateImplCollection__ctor_mC7C4FAB75F44B53B8FE8D9CA3443F1411CD0BA11 (void);
// 0x0000069B System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Count()
extern void X509CertificateImplCollection_get_Count_mB81B621804D7FB640FDD4177610CEEDF0484378D (void);
// 0x0000069C System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Item(System.Int32)
extern void X509CertificateImplCollection_get_Item_mA250EDFA1ACBE344A52C5CD818A6578CC07763A1 (void);
// 0x0000069D System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean)
extern void X509CertificateImplCollection_Add_mDF2DF7D94CEB84BCCC7292831C838FCDB1322B8C (void);
// 0x0000069E System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Clone()
extern void X509CertificateImplCollection_Clone_m2AC54E741E6AB673D07464C05D27A3FF9F4112B0 (void);
// 0x0000069F System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose()
extern void X509CertificateImplCollection_Dispose_m84BFDFFCD3B9DEC80EAFEBBFD156F1E246DBA617 (void);
// 0x000006A0 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose(System.Boolean)
extern void X509CertificateImplCollection_Dispose_m77FC31F821A4066580E5F99685EB915466F034AC (void);
// 0x000006A1 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Finalize()
extern void X509CertificateImplCollection_Finalize_mE46191767109F329A19BBD0CC4BC1AA6E2C28A95 (void);
// 0x000006A2 System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::get_Impl()
extern void X509Chain_get_Impl_m4B712BC99067069BCE090957082F5FE17EE237A6 (void);
// 0x000006A3 System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Chain__ctor_m6F2404400D7192FDA4CCB37DC67F18F12616000B (void);
// 0x000006A4 System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509Chain::get_ChainElements()
extern void X509Chain_get_ChainElements_m656A4A5EEA69BB8C4F5995DEF7C88AD9EB961AED (void);
// 0x000006A5 System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose()
extern void X509Chain_Dispose_mC10F7CE7DAF0799F13C798184330C046222E305D (void);
// 0x000006A6 System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean)
extern void X509Chain_Dispose_m24B2B8C5A29F06A8A1F8564EB0B39820616B3930 (void);
// 0x000006A7 System.Void System.Security.Cryptography.X509Certificates.X509Chain::Finalize()
extern void X509Chain_Finalize_m76B5ABE85F3D5596788618FFD03C4831DB0EDB39 (void);
// 0x000006A8 System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern void X509ChainElement__ctor_m7088FBE9A69384945CA1A40CD973E1846FBD720F (void);
// 0x000006A9 System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::get_Certificate()
extern void X509ChainElement_get_Certificate_m6AF210BCAD2D94C19DFEF475BDAA84E5FF4AF105 (void);
// 0x000006AA System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern void X509ChainElementCollection__ctor_mAEF26718ED02C8480A7041E3C6B66500950E013D (void);
// 0x000006AB System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern void X509ChainElementCollection_get_Count_m5448D972C3009FA67B3F4E13061B6012D561B78B (void);
// 0x000006AC System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Item(System.Int32)
extern void X509ChainElementCollection_get_Item_mC2A5AAFBAEF74FB085685620066058ACDC71D69A (void);
// 0x000006AD System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern void X509ChainElementCollection_get_SyncRoot_m435D18A280E3D7609FB490021AC2E1436BE61568 (void);
// 0x000006AE System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m4909BF1B409D795DDD3D8D2206FA17B88AEA5B29 (void);
// 0x000006AF System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern void X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m25F89A23A06D302469D28DDA337A0B0C5C463269 (void);
// 0x000006B0 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern void X509ChainElementCollection_Add_mA032CE8B536713B0E070C9A211B084706D04F6C8 (void);
// 0x000006B1 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
extern void X509ChainElementCollection_Clear_mF0C2AE76F73C525E29E808615576C7EE11409659 (void);
// 0x000006B2 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
extern void X509ChainElementEnumerator__ctor_m552B42A7693729672B7EF7F95B4211F6BD69AE6D (void);
// 0x000006B3 System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
extern void X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mCE2DFBF81D34976171E7A936A04F87C0A625B025 (void);
// 0x000006B4 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
extern void X509ChainElementEnumerator_MoveNext_mA8C7DDBB648F9B1F15FA3E169D4361374BE2B995 (void);
// 0x000006B5 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::Reset()
extern void X509ChainElementEnumerator_Reset_m4E0A51B45009F95A6E9B64C15F87CC9E48444A40 (void);
// 0x000006B6 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImpl::get_IsValid()
// 0x000006B7 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::ThrowIfContextInvalid()
extern void X509ChainImpl_ThrowIfContextInvalid_m85AF480D1B87D8DA3D780040385CBB88D9B173CD (void);
// 0x000006B8 System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImpl::get_ChainElements()
// 0x000006B9 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Reset()
// 0x000006BA System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose()
extern void X509ChainImpl_Dispose_mB7A6D60B308E90F0173FA8160F7FF0A00709A25A (void);
// 0x000006BB System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean)
extern void X509ChainImpl_Dispose_m9F8B96FFCB317F7F8C8E1ACA82061EA7404B732D (void);
// 0x000006BC System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Finalize()
extern void X509ChainImpl_Finalize_mB70B742567D0E59AE522AA9F80800B308D87BC6F (void);
// 0x000006BD System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::.ctor()
extern void X509ChainImpl__ctor_m16F671EB135FB6E7E3CF6C42715D7106E6FAAF18 (void);
// 0x000006BE System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
extern void X509ChainPolicy__ctor_m069F83BFFF3E79ED4CEBE8CF553CC65576F8D3D9 (void);
// 0x000006BF System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
extern void X509ChainPolicy_Reset_mEE02175020B69CE1732C0E89A2AE60F0BA5B1417 (void);
// 0x000006C0 System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::.ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern void X509ChainStatus__ctor_m5AD96E11604F8DB96673677AC2FFF68EBA550859 (void);
// 0x000006C1 System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern void X509ChainStatus_GetInformation_m2EE262A68356D15E2C691E84DA10B2E8E3EFED26 (void);
// 0x000006C2 System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509EnhancedKeyUsageExtension__ctor_mBDA55EB3C6594D4F6A06102B4EAF633F86C3E092 (void);
// 0x000006C3 System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF (void);
// 0x000006C4 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern void X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C (void);
// 0x000006C5 System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern void X509EnhancedKeyUsageExtension_ToString_m9576793CE590716A3BB5AAC1632F946DF75605DE (void);
// 0x000006C6 System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern void X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC (void);
// 0x000006C7 System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern void X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35 (void);
// 0x000006C8 System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern void X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF (void);
// 0x000006C9 System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9 (void);
// 0x000006CA System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern void X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D (void);
// 0x000006CB System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.cctor()
extern void X509ExtensionCollection__cctor_m302D04DAABB7985BF831D50E7956ECFC3B2D199F (void);
// 0x000006CC System.Void System.Security.Cryptography.X509Certificates.X509Helper2::Initialize()
extern void X509Helper2_Initialize_mC9F1EE34B040EE15FC5CA7C8B1AED2532EAB1791 (void);
// 0x000006CD System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl)
extern void X509Helper2_ThrowIfContextInvalid_m9EC7EA2D68EC7E5DA363EDFABEA0EC7B352AAD1E (void);
// 0x000006CE System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Helper2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,System.Boolean)
extern void X509Helper2_Import_m00CCBC7214497017DD65D4EC7CECF35FBF24EA4E (void);
// 0x000006CF System.Boolean System.Security.Cryptography.X509Certificates.X509Helper2::IsValid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Helper2_IsValid_m2D40E03D265A1B1D53B6B8C726E833358AA4187D (void);
// 0x000006D0 System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Helper2_ThrowIfContextInvalid_m12213152E825627422EBDC2D88B524AE528B70B1 (void);
// 0x000006D1 System.Exception System.Security.Cryptography.X509Certificates.X509Helper2::GetInvalidChainContextException()
extern void X509Helper2_GetInvalidChainContextException_m44B5C4113D72A0DA0EE7E1D4C7048FF631CA7D46 (void);
// 0x000006D2 System.Void System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper::.ctor()
extern void MyNativeHelper__ctor_m2D2D0000DFFA264E33F06780A2E8E34A47B29646 (void);
// 0x000006D3 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
extern void X509KeyUsageExtension__ctor_mE0EE68497EDEDD78213EEDC931D68DD35DF6340C (void);
// 0x000006D4 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509KeyUsageExtension__ctor_m1DE9CD768712A07E5803496501CCFDA81CFB2689 (void);
// 0x000006D5 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
extern void X509KeyUsageExtension__ctor_m2FAA526721435935D0B10E0DB916AF56CFD84751 (void);
// 0x000006D6 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
extern void X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F (void);
// 0x000006D7 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733 (void);
// 0x000006D8 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
extern void X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45 (void);
// 0x000006D9 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
extern void X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC (void);
// 0x000006DA System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
extern void X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542 (void);
// 0x000006DB System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
extern void X509KeyUsageExtension_ToString_m270131139984275D7571120A2984F0F5E77E79DC (void);
// 0x000006DC System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern void X509SubjectKeyIdentifierExtension__ctor_mFC2A19B1301ABBA5F6C5CE407ABC4F4CA1EB49B1 (void);
// 0x000006DD System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m421293DCB67F3A918098962166B8166FD9657D08 (void);
// 0x000006DE System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1 (void);
// 0x000006DF System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94 (void);
// 0x000006E0 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m3DD2C4E1505A6E625499FBD833BFC076D28D83EB (void);
// 0x000006E1 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56 (void);
// 0x000006E2 System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern void X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA (void);
// 0x000006E3 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A (void);
// 0x000006E4 System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern void X509SubjectKeyIdentifierExtension_FromHexChar_m0547F9E771F6BE506DEA650D696F7794F91B59A3 (void);
// 0x000006E5 System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern void X509SubjectKeyIdentifierExtension_FromHexChars_m7143D074BE9451C082422BA3FF118C17D873E5A1 (void);
// 0x000006E6 System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern void X509SubjectKeyIdentifierExtension_FromHex_m7A7DD49DB74BC4020A28007CDD5765765EC9DDB3 (void);
// 0x000006E7 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern void X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30 (void);
// 0x000006E8 System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern void X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3 (void);
// 0x000006E9 System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern void X509SubjectKeyIdentifierExtension_ToString_m9AE51334149DE6200E554F9C30E2DC5570D36707 (void);
// 0x000006EA System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
extern void GZipStream__ctor_m25053634B041374B528EB0F01612B072A9AF2E05 (void);
// 0x000006EB System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
extern void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (void);
// 0x000006EC System.Boolean System.IO.Compression.GZipStream::get_CanRead()
extern void GZipStream_get_CanRead_mFF4A941C8BD1D9C3A249A084C4335EFF8FAD47BB (void);
// 0x000006ED System.Boolean System.IO.Compression.GZipStream::get_CanWrite()
extern void GZipStream_get_CanWrite_m0A3EC64CE819F978DE34A8477FAAA82889AE7248 (void);
// 0x000006EE System.Boolean System.IO.Compression.GZipStream::get_CanSeek()
extern void GZipStream_get_CanSeek_m530B997FC6D2144F7B73E708903E6E9F39E304DD (void);
// 0x000006EF System.Int64 System.IO.Compression.GZipStream::get_Length()
extern void GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583 (void);
// 0x000006F0 System.Int64 System.IO.Compression.GZipStream::get_Position()
extern void GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420 (void);
// 0x000006F1 System.Void System.IO.Compression.GZipStream::set_Position(System.Int64)
extern void GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957 (void);
// 0x000006F2 System.Void System.IO.Compression.GZipStream::Flush()
extern void GZipStream_Flush_m8D38670B3BE0472E83AA60F783A8EF3E1C1F01A0 (void);
// 0x000006F3 System.Int64 System.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66 (void);
// 0x000006F4 System.Int32 System.IO.Compression.GZipStream::ReadByte()
extern void GZipStream_ReadByte_m486ACD72754C08B02CF1B90A71A744EE92F4D42C (void);
// 0x000006F5 System.IAsyncResult System.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void GZipStream_BeginRead_mDD211249BF8242D28889645A05453C3D89C6B0F1 (void);
// 0x000006F6 System.Int32 System.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
extern void GZipStream_EndRead_m8245FEE8D2B21A169DD1A40A67B5D398DD6005D2 (void);
// 0x000006F7 System.Int32 System.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern void GZipStream_Read_m41EC5D087FD227D05C8435E8704C9F0F6A7E2F9D (void);
// 0x000006F8 System.IAsyncResult System.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void GZipStream_BeginWrite_mB80B01F99925CF4A6B201E77B54E7656A40474B8 (void);
// 0x000006F9 System.Void System.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
extern void GZipStream_EndWrite_m7FC15F1CD67B5C6977FEB16E630545AD6E020C91 (void);
// 0x000006FA System.Void System.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern void GZipStream_Write_mCA30092CA9BEFD7425587337A5C4451866E1EB34 (void);
// 0x000006FB System.Void System.IO.Compression.GZipStream::Dispose(System.Boolean)
extern void GZipStream_Dispose_mD369BCB8951329CEE518D159BB1D16BBC0C709E3 (void);
// 0x000006FC System.Threading.Tasks.Task`1<System.Int32> System.IO.Compression.GZipStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void GZipStream_ReadAsync_mACECFB99609D4696156F98AE738B2038E6663471 (void);
// 0x000006FD System.Threading.Tasks.Task System.IO.Compression.GZipStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void GZipStream_WriteAsync_m2CB67E3DB87DFC01588B604C8E2D60EE1AE27EF7 (void);
// 0x000006FE System.Void System.IO.Compression.GZipStream::CheckDeflateStream()
extern void GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264 (void);
// 0x000006FF System.Void System.IO.Compression.GZipStream::ThrowStreamClosedException()
extern void GZipStream_ThrowStreamClosedException_m7B905CA279182188E2191C564DC9415234005D5F (void);
// 0x00000700 System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
extern void DeflateStream__ctor_m344C1EF8B83E612C4FC662F0152DF1D2A5636829 (void);
// 0x00000701 System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Int32)
extern void DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C (void);
// 0x00000702 System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
extern void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (void);
// 0x00000703 System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
extern void DeflateStream_Dispose_m85096A7176C94248E02CE7E9DA78338C45B2F746 (void);
// 0x00000704 System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern void DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (void);
// 0x00000705 System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern void DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3 (void);
// 0x00000706 System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (void);
// 0x00000707 System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern void DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A (void);
// 0x00000708 System.Void System.IO.Compression.DeflateStream::Flush()
extern void DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C (void);
// 0x00000709 System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235 (void);
// 0x0000070A System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA (void);
// 0x0000070B System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
extern void DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B (void);
// 0x0000070C System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
extern void DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A (void);
// 0x0000070D System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16 (void);
// 0x0000070E System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
extern void DeflateStream_get_CanRead_mDDA3C3CEE73CFCD62DE14F5DE9F27C7A5615976E (void);
// 0x0000070F System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
extern void DeflateStream_get_CanSeek_m93DEADA4FB38CBBAB266F8B7DBAFE508AEC222E4 (void);
// 0x00000710 System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
extern void DeflateStream_get_CanWrite_m95EB501342F11B287A529DE15089097EDF7C215F (void);
// 0x00000711 System.Int64 System.IO.Compression.DeflateStream::get_Length()
extern void DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C (void);
// 0x00000712 System.Int64 System.IO.Compression.DeflateStream::get_Position()
extern void DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376 (void);
// 0x00000713 System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
extern void DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885 (void);
// 0x00000714 System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
extern void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (void);
// 0x00000715 System.Int32 System.IO.Compression.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
extern void ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8 (void);
// 0x00000716 System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (void);
// 0x00000717 System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
extern void ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (void);
// 0x00000718 System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
extern void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (void);
// 0x00000719 System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
extern void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1 (void);
// 0x0000071A System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (void);
// 0x0000071B System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
extern void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (void);
// 0x0000071C System.Void System.IO.Compression.DeflateStreamNative::.ctor()
extern void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (void);
// 0x0000071D System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
extern void DeflateStreamNative_Create_m628D0A7F7EE62339C0D867FBF4319093C82018A7 (void);
// 0x0000071E System.Void System.IO.Compression.DeflateStreamNative::Finalize()
extern void DeflateStreamNative_Finalize_mE02A29EE58E329CFC439284070FF87A31B18C701 (void);
// 0x0000071F System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
extern void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (void);
// 0x00000720 System.Void System.IO.Compression.DeflateStreamNative::Flush()
extern void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (void);
// 0x00000721 System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
extern void DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (void);
// 0x00000722 System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
extern void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (void);
// 0x00000723 System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
extern void DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704 (void);
// 0x00000724 System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
extern void DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (void);
// 0x00000725 System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
extern void DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486 (void);
// 0x00000726 System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
extern void DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (void);
// 0x00000727 System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
extern void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (void);
// 0x00000728 System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
extern void DeflateStreamNative_CreateZStream_m5075DD90424301C1C82A2142AA530FDC6F345006 (void);
// 0x00000729 System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
extern void DeflateStreamNative_CloseZStream_mEA426722FFB221614DC4AFEC80BBB4382B375187 (void);
// 0x0000072A System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
extern void DeflateStreamNative_Flush_mAC7D59B136EB2C8B1512123F21B91976CDE33D5F (void);
// 0x0000072B System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
extern void DeflateStreamNative_ReadZStream_mC4E36C2FDE3E7850B154FE6A09825D7B055E1519 (void);
// 0x0000072C System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
extern void DeflateStreamNative_WriteZStream_m95704830E739FD66C207ED91323852F7E0FCC35B (void);
// 0x0000072D System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
extern void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (void);
// 0x0000072E System.Int32 System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
extern void UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22 (void);
// 0x0000072F System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::get_IsInvalid()
extern void SafeDeflateStreamHandle_get_IsInvalid_m8220E0B23A6DE1C8171ADDD78B30FBC346F1D1D1 (void);
// 0x00000730 System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
extern void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (void);
// 0x00000731 System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::ReleaseHandle()
extern void SafeDeflateStreamHandle_ReleaseHandle_m8A0A695A4A1C2F46C8BFBE3BD1526BCDC6066704 (void);
// 0x00000732 System.Void System.Collections.Specialized.HybridDictionary::.ctor()
extern void HybridDictionary__ctor_mB37A8E34017C48042B2D8F1F63F1482B52C972D4 (void);
// 0x00000733 System.Void System.Collections.Specialized.HybridDictionary::.ctor(System.Boolean)
extern void HybridDictionary__ctor_m359E931D8BF826C9811B90DE827FCBB6F091DD49 (void);
// 0x00000734 System.Object System.Collections.Specialized.HybridDictionary::get_Item(System.Object)
extern void HybridDictionary_get_Item_mA9158C51D1CE31B2BCA73CC6C4D3CF7DCFB1E995 (void);
// 0x00000735 System.Void System.Collections.Specialized.HybridDictionary::set_Item(System.Object,System.Object)
extern void HybridDictionary_set_Item_m3B12A142B168A668B0521071019F5555502093A7 (void);
// 0x00000736 System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::get_List()
extern void HybridDictionary_get_List_m01148828EB93A0E7F19E4F9E9AF1F39435741664 (void);
// 0x00000737 System.Void System.Collections.Specialized.HybridDictionary::ChangeOver()
extern void HybridDictionary_ChangeOver_m74FA10D457B3035BED9F48997A7C299EEDDE123A (void);
// 0x00000738 System.Int32 System.Collections.Specialized.HybridDictionary::get_Count()
extern void HybridDictionary_get_Count_mE18AA6AFBC8E594B7B4CFCA250C430330DE620E0 (void);
// 0x00000739 System.Boolean System.Collections.Specialized.HybridDictionary::get_IsReadOnly()
extern void HybridDictionary_get_IsReadOnly_m9F223D17A7B26321BE04FDEFCE224C30A42FCAA4 (void);
// 0x0000073A System.Object System.Collections.Specialized.HybridDictionary::get_SyncRoot()
extern void HybridDictionary_get_SyncRoot_m2EC29250FC7BFD21F1180C97520B46E7983B9064 (void);
// 0x0000073B System.Void System.Collections.Specialized.HybridDictionary::Add(System.Object,System.Object)
extern void HybridDictionary_Add_mD532F79E9743491E6CD7629C6851843C169C24B5 (void);
// 0x0000073C System.Void System.Collections.Specialized.HybridDictionary::Clear()
extern void HybridDictionary_Clear_m90886ABE2794176C2E740382CD8F754C562264DB (void);
// 0x0000073D System.Boolean System.Collections.Specialized.HybridDictionary::Contains(System.Object)
extern void HybridDictionary_Contains_m3FF65744E03A67B72D19ADE8E683A7A39D6691DF (void);
// 0x0000073E System.Void System.Collections.Specialized.HybridDictionary::CopyTo(System.Array,System.Int32)
extern void HybridDictionary_CopyTo_m70DE7D1E24C1C831A0D2BB0D853CE9EBF17542A4 (void);
// 0x0000073F System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator()
extern void HybridDictionary_GetEnumerator_m07E7906D1CFAFEA232ED9CF650C86A04D6647C41 (void);
// 0x00000740 System.Collections.IEnumerator System.Collections.Specialized.HybridDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m63B34C99B0C86764500F8D9A80C99894DEFDAF22 (void);
// 0x00000741 System.Void System.Collections.Specialized.HybridDictionary::Remove(System.Object)
extern void HybridDictionary_Remove_mDE0E3B6E570D802CA691A67AD177E0833DC5969B (void);
// 0x00000742 System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern void ListDictionary__ctor_mA366C2CB61D4CFA7D0AA70DBA969A15609DED7E4 (void);
// 0x00000743 System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern void ListDictionary__ctor_mA9076AE0A6D4DBE6C89259A43DC29F68665718D7 (void);
// 0x00000744 System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern void ListDictionary_get_Item_m2154CE5A38D2720580B224851368C447380BB492 (void);
// 0x00000745 System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern void ListDictionary_set_Item_mAF97E362799455BBD3E40B83C0690EE7FFAF3B55 (void);
// 0x00000746 System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern void ListDictionary_get_Count_m5302B1402A62BDBD54881D1E2732160D2C117B28 (void);
// 0x00000747 System.Boolean System.Collections.Specialized.ListDictionary::get_IsReadOnly()
extern void ListDictionary_get_IsReadOnly_m3680E35D8385466C55C32CDC9BF44EB85BF13528 (void);
// 0x00000748 System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern void ListDictionary_get_SyncRoot_mB57A6103DFFB6AC447C437B7D68A50E427307862 (void);
// 0x00000749 System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern void ListDictionary_Add_mAE5E6AC0D70BB0B419396CBEC579EECAC7A3287D (void);
// 0x0000074A System.Void System.Collections.Specialized.ListDictionary::Clear()
extern void ListDictionary_Clear_mC27E599BF70AAE506805C4B7F7626681AAFBF21E (void);
// 0x0000074B System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern void ListDictionary_Contains_mDF81EC7C30B6E639FE237DD74E4BF14EDE35EEB9 (void);
// 0x0000074C System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern void ListDictionary_CopyTo_m48680DB9B3BE3865F4AC8BDEFB15278C5D3C59E6 (void);
// 0x0000074D System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern void ListDictionary_GetEnumerator_m29283F484DEBA7F1E3F3FEB2318A7F904BC9C472 (void);
// 0x0000074E System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void ListDictionary_System_Collections_IEnumerable_GetEnumerator_m869DCBB37377D87978F0CE324473736F05274FFA (void);
// 0x0000074F System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern void ListDictionary_Remove_m4D30B670303D6B2B2FCF270332A9FCB83E250615 (void);
// 0x00000750 System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
extern void NodeEnumerator__ctor_m5789602EADB23A1C70CF6E50814E2BD3C9607A82 (void);
// 0x00000751 System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Current()
extern void NodeEnumerator_get_Current_mB94FB39141E548003ADC8EDDF7B7F09DB3EDD5E7 (void);
// 0x00000752 System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Entry()
extern void NodeEnumerator_get_Entry_mBBDB5B3E11DB47CCA5492E71BF7E31E3B44CB9C9 (void);
// 0x00000753 System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Key()
extern void NodeEnumerator_get_Key_m1AD78734C58253FE332F4B32986DA06B49152F64 (void);
// 0x00000754 System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Value()
extern void NodeEnumerator_get_Value_m232AE4728508F126C18C4A857130F9352CFAF98B (void);
// 0x00000755 System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::MoveNext()
extern void NodeEnumerator_MoveNext_mDF9EAA69E0FA49EC7800444D746A5F9B356EF8CB (void);
// 0x00000756 System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::Reset()
extern void NodeEnumerator_Reset_m85AE4B4752761AD7401451241BE2BE534FE81F16 (void);
// 0x00000757 System.Void System.Collections.Specialized.ListDictionary/DictionaryNode::.ctor()
extern void DictionaryNode__ctor_m91B2E095E93FD55F8F8B8BF87DC0F1777B47749B (void);
// 0x00000758 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern void NameObjectCollectionBase__ctor_m6E0DCD48B817A59D0156390A09CD50BE07BF145D (void);
// 0x00000759 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern void NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61 (void);
// 0x0000075A System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void NameObjectCollectionBase__ctor_m6B980F9EB155B69FB4C50AD38C2C0C104FE2F261 (void);
// 0x0000075B System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.DBNull)
extern void NameObjectCollectionBase__ctor_m113E50DAB246F05DB6302516E683D458250672DB (void);
// 0x0000075C System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameObjectCollectionBase__ctor_m7E8E8B56138D44BECF32865A11DAF942AE2BA4DA (void);
// 0x0000075D System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameObjectCollectionBase_GetObjectData_m0675A0B0EC79E1DAD6E307764C899EC5E552B32A (void);
// 0x0000075E System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern void NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6 (void);
// 0x0000075F System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset()
extern void NameObjectCollectionBase_Reset_m107877B3D64D818F9D4E0936DA9627C4D94DF6DC (void);
// 0x00000760 System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset(System.Int32)
extern void NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3 (void);
// 0x00000761 System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry System.Collections.Specialized.NameObjectCollectionBase::FindEntry(System.String)
extern void NameObjectCollectionBase_FindEntry_m1BC4B6ACCE244B544B216D16DB53A769E670876F (void);
// 0x00000762 System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern void NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A (void);
// 0x00000763 System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern void NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E (void);
// 0x00000764 System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern void NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0 (void);
// 0x00000765 System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern void NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154 (void);
// 0x00000766 System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern void NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3 (void);
// 0x00000767 System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern void NameObjectCollectionBase_BaseGet_mE892E8066502D48BEA2E9760D2BE31FB40B8DEAA (void);
// 0x00000768 System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern void NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6 (void);
// 0x00000769 System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern void NameObjectCollectionBase_GetEnumerator_mDEEC7FF01AEF8FB0739964513BAF10C4C3F254BC (void);
// 0x0000076A System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern void NameObjectCollectionBase_get_Count_m766C6702F64CD224AB123566BAACB2A81FCBF5F0 (void);
// 0x0000076B System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01 (void);
// 0x0000076C System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern void NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_mAC6E9FEF3C7C442481772E568C4FBF552B908624 (void);
// 0x0000076D System.Void System.Collections.Specialized.NameObjectCollectionBase::.cctor()
extern void NameObjectCollectionBase__cctor_m4D457522AA1259C7AB96A98558FC6B0C38CEEAED (void);
// 0x0000076E System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::.ctor(System.String,System.Object)
extern void NameObjectEntry__ctor_m36EA15EE18936FA78B2E4E29C63311E03221F513 (void);
// 0x0000076F System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
extern void NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801 (void);
// 0x00000770 System.Boolean System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::MoveNext()
extern void NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540 (void);
// 0x00000771 System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::Reset()
extern void NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5 (void);
// 0x00000772 System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::get_Current()
extern void NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096 (void);
// 0x00000773 System.Void System.Collections.Specialized.CompatibleComparer::.ctor(System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern void CompatibleComparer__ctor_m9F601617145FDFCA25983415C4427C47E5C170A7 (void);
// 0x00000774 System.Boolean System.Collections.Specialized.CompatibleComparer::Equals(System.Object,System.Object)
extern void CompatibleComparer_Equals_m09CF7F036688C2E00C8BF5618C0528BA8D8C40D5 (void);
// 0x00000775 System.Int32 System.Collections.Specialized.CompatibleComparer::GetHashCode(System.Object)
extern void CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF (void);
// 0x00000776 System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_Comparer()
extern void CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9 (void);
// 0x00000777 System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_HashCodeProvider()
extern void CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4 (void);
// 0x00000778 System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_DefaultComparer()
extern void CompatibleComparer_get_DefaultComparer_m9CC25AF4BD1553D2B2C51FDE9AC8110BABB5C5D5 (void);
// 0x00000779 System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_DefaultHashCodeProvider()
extern void CompatibleComparer_get_DefaultHashCodeProvider_m292C48BD6A5A7065925BAF2BFDEBF7217516DC50 (void);
// 0x0000077A System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern void NameValueCollection__ctor_mCA29E5386DACDF19F6F51BC395324F0A8EE05604 (void);
// 0x0000077B System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void NameValueCollection__ctor_m1545E08D22D8E6C1FCDDAE43741AA43D52F4A21E (void);
// 0x0000077C System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.DBNull)
extern void NameValueCollection__ctor_mF894B0B49D20CE92F0CE3BBF8ED67F48E61CDB6A (void);
// 0x0000077D System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameValueCollection__ctor_mAC66C8064A4AAB73914143C4CDF3BF28543BAEC3 (void);
// 0x0000077E System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern void NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B (void);
// 0x0000077F System.String System.Collections.Specialized.NameValueCollection::GetAsOneString(System.Collections.ArrayList)
extern void NameValueCollection_GetAsOneString_m6B44F208B557CE92924A116A67838CB4C259B844 (void);
// 0x00000780 System.String[] System.Collections.Specialized.NameValueCollection::GetAsStringArray(System.Collections.ArrayList)
extern void NameValueCollection_GetAsStringArray_m6799C5A95954105A8849EDE540988D1352D19E64 (void);
// 0x00000781 System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern void NameValueCollection_Add_m68C266151774CD1FC057C9349BAE09BDB15A26A7 (void);
// 0x00000782 System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern void NameValueCollection_Get_m786B25D45B38D7051C696104946F3F0A2DF78106 (void);
// 0x00000783 System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
extern void NameValueCollection_GetValues_mC69C8E6E5E62365A35C3A2C99E5DD0C33625362E (void);
// 0x00000784 System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern void NameValueCollection_Set_mF0EA26F74B1E1D2F9A1A87D1093BEC31C51BCB8A (void);
// 0x00000785 System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
extern void NameValueCollection_Remove_m2146E6474DDFBE19E35E57F777C4FE2625247D56 (void);
// 0x00000786 System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern void NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F (void);
// 0x00000787 System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern void NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0 (void);
// 0x00000788 System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern void NameValueCollection_Get_m2C55CAA38BF0F6677AE8F44C22C289A5B59B4B20 (void);
// 0x00000789 System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern void NameValueCollection_GetKey_m80CFEB6D61F9C3B9D03D7B25457D8B122C15170F (void);
// 0x0000078A System.Void System.Collections.Specialized.OrderedDictionary::.ctor()
extern void OrderedDictionary__ctor_mBEC4CCF86E1A22330C31E1C069B2F21695445A10 (void);
// 0x0000078B System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32)
extern void OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600 (void);
// 0x0000078C System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66 (void);
// 0x0000078D System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void OrderedDictionary__ctor_m442555F1C427B3EF7DC305AE414FD5EBD90A4861 (void);
// 0x0000078E System.Int32 System.Collections.Specialized.OrderedDictionary::get_Count()
extern void OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A (void);
// 0x0000078F System.Boolean System.Collections.Specialized.OrderedDictionary::get_IsReadOnly()
extern void OrderedDictionary_get_IsReadOnly_m8D512A98345A30BC8BB45818A36FCC20DCE3569A (void);
// 0x00000790 System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::get_objectsArray()
extern void OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756 (void);
// 0x00000791 System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::get_objectsTable()
extern void OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80 (void);
// 0x00000792 System.Object System.Collections.Specialized.OrderedDictionary::System.Collections.ICollection.get_SyncRoot()
extern void OrderedDictionary_System_Collections_ICollection_get_SyncRoot_m67C653BEB9C1E451229203FAE5B6453681E7FBDB (void);
// 0x00000793 System.Object System.Collections.Specialized.OrderedDictionary::get_Item(System.Object)
extern void OrderedDictionary_get_Item_m5755C415F2E5CAC5A0AE3EFBB5A8D84915B37ED8 (void);
// 0x00000794 System.Void System.Collections.Specialized.OrderedDictionary::set_Item(System.Object,System.Object)
extern void OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E (void);
// 0x00000795 System.Collections.ICollection System.Collections.Specialized.OrderedDictionary::get_Values()
extern void OrderedDictionary_get_Values_m14CFA04FF0A8DC8B41386192B029EC604AF551BA (void);
// 0x00000796 System.Void System.Collections.Specialized.OrderedDictionary::Add(System.Object,System.Object)
extern void OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3 (void);
// 0x00000797 System.Void System.Collections.Specialized.OrderedDictionary::Clear()
extern void OrderedDictionary_Clear_mCED01246B19A457FAD097372DD7EFA0840D94E07 (void);
// 0x00000798 System.Boolean System.Collections.Specialized.OrderedDictionary::Contains(System.Object)
extern void OrderedDictionary_Contains_m63AFE431564000B20908A732633780B192F7F95E (void);
// 0x00000799 System.Void System.Collections.Specialized.OrderedDictionary::CopyTo(System.Array,System.Int32)
extern void OrderedDictionary_CopyTo_m96E73EF7B84BA4D1ABA184134465F41DFFE73C2A (void);
// 0x0000079A System.Int32 System.Collections.Specialized.OrderedDictionary::IndexOfKey(System.Object)
extern void OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837 (void);
// 0x0000079B System.Void System.Collections.Specialized.OrderedDictionary::OnDeserialization(System.Object)
extern void OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7 (void);
// 0x0000079C System.Void System.Collections.Specialized.OrderedDictionary::Remove(System.Object)
extern void OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3 (void);
// 0x0000079D System.Collections.IDictionaryEnumerator System.Collections.Specialized.OrderedDictionary::GetEnumerator()
extern void OrderedDictionary_GetEnumerator_mECA50DD161EDC87F84CD75764643826BFF14C16F (void);
// 0x0000079E System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void OrderedDictionary_System_Collections_IEnumerable_GetEnumerator_m4AC8186C465CF478A39CC2FADBDBA75AA9DA5084 (void);
// 0x0000079F System.Void System.Collections.Specialized.OrderedDictionary::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C (void);
// 0x000007A0 System.Void System.Collections.Specialized.OrderedDictionary::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern void OrderedDictionary_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m600671E042DB3E5BD39D5439D3C88010EEA1E95A (void);
// 0x000007A1 System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::.ctor(System.Collections.ArrayList,System.Int32)
extern void OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775 (void);
// 0x000007A2 System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Current()
extern void OrderedDictionaryEnumerator_get_Current_m1513DF120F398083CA52B7B330D7FF9D5FD6BC69 (void);
// 0x000007A3 System.Collections.DictionaryEntry System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Entry()
extern void OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074 (void);
// 0x000007A4 System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Key()
extern void OrderedDictionaryEnumerator_get_Key_mAE1632D8B4767AC6A321CDDCECFA3B943CFEB202 (void);
// 0x000007A5 System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Value()
extern void OrderedDictionaryEnumerator_get_Value_m3D9DB591978A7EA9C640AD820A301AD176665AB9 (void);
// 0x000007A6 System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::MoveNext()
extern void OrderedDictionaryEnumerator_MoveNext_m25E708E43E6B36CEAB84121CB0831590F40985BF (void);
// 0x000007A7 System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::Reset()
extern void OrderedDictionaryEnumerator_Reset_m6878E0A1524911AEBEEC87C578C75584DAFD9022 (void);
// 0x000007A8 System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::.ctor(System.Collections.ArrayList,System.Boolean)
extern void OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64 (void);
// 0x000007A9 System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF (void);
// 0x000007AA System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.get_Count()
extern void OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_Count_m7E6084DFB4648AD05337326CC87BC5AAAC2B310B (void);
// 0x000007AB System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.get_SyncRoot()
extern void OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m970D75F7E81A1BB6FA21D797A7D0A068D749E511 (void);
// 0x000007AC System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.IEnumerable.GetEnumerator()
extern void OrderedDictionaryKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_m915EACF605AF9EBDC96A2BDB466682095A03154D (void);
// 0x000007AD System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern void StringCollection_get_Item_m4C46EE5894C7A604638AE2ABF4530C201B1FB88E (void);
// 0x000007AE System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern void StringCollection_set_Item_mA1AFC86270CD52B6F5017555AD22CF7710D6B425 (void);
// 0x000007AF System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern void StringCollection_get_Count_mC6D18D20EEE559A67C72BD37ECA9C0FB93283F3F (void);
// 0x000007B0 System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern void StringCollection_System_Collections_IList_get_IsReadOnly_m4558520882327B88C80FE911E956E0F082872DED (void);
// 0x000007B1 System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern void StringCollection_System_Collections_IList_get_IsFixedSize_m821D69C64C5E4DE6841D4CC95FFC330E63F4D672 (void);
// 0x000007B2 System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern void StringCollection_Add_m03BBFAA1D11499DA68474A73F5DB55460F0D6DAF (void);
// 0x000007B3 System.Void System.Collections.Specialized.StringCollection::Clear()
extern void StringCollection_Clear_m2B917BE0CCA6344B1FD65474C53CE512F0476435 (void);
// 0x000007B4 System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern void StringCollection_Contains_mB9DCBDDFD850E68D6080D2D7657F399BA6002B10 (void);
// 0x000007B5 System.Void System.Collections.Specialized.StringCollection::CopyTo(System.String[],System.Int32)
extern void StringCollection_CopyTo_mCD7A68178A8F87AC0628B2E92CE466A27512CB05 (void);
// 0x000007B6 System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern void StringCollection_IndexOf_m85C4CA19319F830D14472258D9A3DFD31F0F6BDF (void);
// 0x000007B7 System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern void StringCollection_Insert_mB3044A3F3B5C3B364DCEED9058895D978A4410CE (void);
// 0x000007B8 System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern void StringCollection_Remove_mC6996622434EE5F503A70F425F0DE6E8D60399DC (void);
// 0x000007B9 System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern void StringCollection_RemoveAt_m4D0E6E6AA354A0AFFB76AEB56B4CFF24717BB53A (void);
// 0x000007BA System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern void StringCollection_get_SyncRoot_mC1F8C1DA3C5ED059D89BD483FB1A4A0A31053F86 (void);
// 0x000007BB System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern void StringCollection_System_Collections_IList_get_Item_m749070FBB55E7C9C0C21FE4C1013D154D4635BB2 (void);
// 0x000007BC System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern void StringCollection_System_Collections_IList_set_Item_m176A74C64AA22AFEA5808E4C81AA3FB46B0F9F5E (void);
// 0x000007BD System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern void StringCollection_System_Collections_IList_Add_m4A71788F0E3068533B66D918B4F29762980052B5 (void);
// 0x000007BE System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern void StringCollection_System_Collections_IList_Contains_mEB0510524C7FD5886FFF9A0F710CFC04BACAFEF7 (void);
// 0x000007BF System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern void StringCollection_System_Collections_IList_IndexOf_mFF76DA01812E585BDD7B25ED4453C22BE0FE9A25 (void);
// 0x000007C0 System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern void StringCollection_System_Collections_IList_Insert_m3B0EB6DA5B02CCA0AB270A329B83152592E6D8B1 (void);
// 0x000007C1 System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern void StringCollection_System_Collections_IList_Remove_m042058DA970F09FC6A0465F09F3082FB2B71BA45 (void);
// 0x000007C2 System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void StringCollection_System_Collections_ICollection_CopyTo_m32503816BE4347138894130BD0AD6488643D6AB9 (void);
// 0x000007C3 System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern void StringCollection_System_Collections_IEnumerable_GetEnumerator_mF4227CFA7634BA8BFF9F7D25079538A77BD060E1 (void);
// 0x000007C4 System.Void System.Collections.Specialized.StringCollection::.ctor()
extern void StringCollection__ctor_m3EF93D74FEC69C5A0CD7A502539B2CEDD8D02954 (void);
// 0x000007C5 System.Void System.Collections.Generic.LinkedList`1::.ctor()
// 0x000007C6 System.Void System.Collections.Generic.LinkedList`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000007C7 System.Int32 System.Collections.Generic.LinkedList`1::get_Count()
// 0x000007C8 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::get_First()
// 0x000007C9 System.Boolean System.Collections.Generic.LinkedList`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000007CA System.Void System.Collections.Generic.LinkedList`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000007CB System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::AddFirst(T)
// 0x000007CC System.Void System.Collections.Generic.LinkedList`1::AddFirst(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000007CD System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::AddLast(T)
// 0x000007CE System.Void System.Collections.Generic.LinkedList`1::Clear()
// 0x000007CF System.Boolean System.Collections.Generic.LinkedList`1::Contains(T)
// 0x000007D0 System.Void System.Collections.Generic.LinkedList`1::CopyTo(T[],System.Int32)
// 0x000007D1 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::Find(T)
// 0x000007D2 System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1::GetEnumerator()
// 0x000007D3 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000007D4 System.Boolean System.Collections.Generic.LinkedList`1::Remove(T)
// 0x000007D5 System.Void System.Collections.Generic.LinkedList`1::Remove(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000007D6 System.Void System.Collections.Generic.LinkedList`1::RemoveFirst()
// 0x000007D7 System.Void System.Collections.Generic.LinkedList`1::RemoveLast()
// 0x000007D8 System.Void System.Collections.Generic.LinkedList`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000007D9 System.Void System.Collections.Generic.LinkedList`1::OnDeserialization(System.Object)
// 0x000007DA System.Void System.Collections.Generic.LinkedList`1::InternalInsertNodeBefore(System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
// 0x000007DB System.Void System.Collections.Generic.LinkedList`1::InternalInsertNodeToEmptyList(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000007DC System.Void System.Collections.Generic.LinkedList`1::InternalRemoveNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000007DD System.Void System.Collections.Generic.LinkedList`1::ValidateNewNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000007DE System.Void System.Collections.Generic.LinkedList`1::ValidateNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000007DF System.Object System.Collections.Generic.LinkedList`1::System.Collections.ICollection.get_SyncRoot()
// 0x000007E0 System.Void System.Collections.Generic.LinkedList`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x000007E1 System.Collections.IEnumerator System.Collections.Generic.LinkedList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000007E2 System.Void System.Collections.Generic.LinkedList`1/Enumerator::.ctor(System.Collections.Generic.LinkedList`1<T>)
// 0x000007E3 System.Void System.Collections.Generic.LinkedList`1/Enumerator::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000007E4 T System.Collections.Generic.LinkedList`1/Enumerator::get_Current()
// 0x000007E5 System.Object System.Collections.Generic.LinkedList`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000007E6 System.Boolean System.Collections.Generic.LinkedList`1/Enumerator::MoveNext()
// 0x000007E7 System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x000007E8 System.Void System.Collections.Generic.LinkedList`1/Enumerator::Dispose()
// 0x000007E9 System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000007EA System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
// 0x000007EB System.Void System.Collections.Generic.LinkedListNode`1::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
// 0x000007EC System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::get_Next()
// 0x000007ED T System.Collections.Generic.LinkedListNode`1::get_Value()
// 0x000007EE System.Void System.Collections.Generic.LinkedListNode`1::Invalidate()
// 0x000007EF System.Void System.Collections.Generic.Queue`1::.ctor()
// 0x000007F0 System.Int32 System.Collections.Generic.Queue`1::get_Count()
// 0x000007F1 System.Object System.Collections.Generic.Queue`1::System.Collections.ICollection.get_SyncRoot()
// 0x000007F2 System.Void System.Collections.Generic.Queue`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x000007F3 System.Void System.Collections.Generic.Queue`1::Enqueue(T)
// 0x000007F4 System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1::GetEnumerator()
// 0x000007F5 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000007F6 System.Collections.IEnumerator System.Collections.Generic.Queue`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000007F7 T System.Collections.Generic.Queue`1::Dequeue()
// 0x000007F8 System.Void System.Collections.Generic.Queue`1::SetCapacity(System.Int32)
// 0x000007F9 System.Void System.Collections.Generic.Queue`1::MoveNext(System.Int32&)
// 0x000007FA System.Void System.Collections.Generic.Queue`1::ThrowForEmptyQueue()
// 0x000007FB System.Void System.Collections.Generic.Queue`1/Enumerator::.ctor(System.Collections.Generic.Queue`1<T>)
// 0x000007FC System.Void System.Collections.Generic.Queue`1/Enumerator::Dispose()
// 0x000007FD System.Boolean System.Collections.Generic.Queue`1/Enumerator::MoveNext()
// 0x000007FE T System.Collections.Generic.Queue`1/Enumerator::get_Current()
// 0x000007FF System.Void System.Collections.Generic.Queue`1/Enumerator::ThrowEnumerationNotStartedOrEnded()
// 0x00000800 System.Object System.Collections.Generic.Queue`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000801 System.Void System.Collections.Generic.Queue`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000802 System.Void System.Collections.Generic.Stack`1::.ctor()
// 0x00000803 System.Void System.Collections.Generic.Stack`1::.ctor(System.Int32)
// 0x00000804 System.Int32 System.Collections.Generic.Stack`1::get_Count()
// 0x00000805 System.Object System.Collections.Generic.Stack`1::System.Collections.ICollection.get_SyncRoot()
// 0x00000806 System.Void System.Collections.Generic.Stack`1::Clear()
// 0x00000807 System.Boolean System.Collections.Generic.Stack`1::Contains(T)
// 0x00000808 System.Void System.Collections.Generic.Stack`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000809 System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1::GetEnumerator()
// 0x0000080A System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000080B System.Collections.IEnumerator System.Collections.Generic.Stack`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000080C T System.Collections.Generic.Stack`1::Peek()
// 0x0000080D T System.Collections.Generic.Stack`1::Pop()
// 0x0000080E System.Void System.Collections.Generic.Stack`1::Push(T)
// 0x0000080F System.Void System.Collections.Generic.Stack`1::ThrowForEmptyStack()
// 0x00000810 System.Void System.Collections.Generic.Stack`1/Enumerator::.ctor(System.Collections.Generic.Stack`1<T>)
// 0x00000811 System.Void System.Collections.Generic.Stack`1/Enumerator::Dispose()
// 0x00000812 System.Boolean System.Collections.Generic.Stack`1/Enumerator::MoveNext()
// 0x00000813 T System.Collections.Generic.Stack`1/Enumerator::get_Current()
// 0x00000814 System.Void System.Collections.Generic.Stack`1/Enumerator::ThrowEnumerationNotStartedOrEnded()
// 0x00000815 System.Object System.Collections.Generic.Stack`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000816 System.Void System.Collections.Generic.Stack`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000817 System.String System.Net.HttpStatusDescription::Get(System.Net.HttpStatusCode)
extern void HttpStatusDescription_Get_m0F7BBE743A1DBBBD1D908FDAEF99702F9DA51315 (void);
// 0x00000818 System.String System.Net.HttpStatusDescription::Get(System.Int32)
extern void HttpStatusDescription_Get_m48B3B454E7AA082DF9709151F5D0A36C45C5B9BD (void);
// 0x00000819 System.Void System.Net.Authorization::.ctor(System.String)
extern void Authorization__ctor_m2B6F7C3A1C77B4B4532B4964BF214BF957694268 (void);
// 0x0000081A System.Void System.Net.Authorization::.ctor(System.String,System.Boolean)
extern void Authorization__ctor_m7EC4EAC7186BC2664B45DDCDA917BA6C8315CBDC (void);
// 0x0000081B System.String System.Net.Authorization::get_Message()
extern void Authorization_get_Message_m84C00416C183E8A3B06E37052923C90F486F529A (void);
// 0x0000081C System.Boolean System.Net.Authorization::get_Complete()
extern void Authorization_get_Complete_m43C3AC5D83009442D51B959623D46AD1ABA2AEB8 (void);
// 0x0000081D System.Net.ICredentials System.Net.CredentialCache::get_DefaultCredentials()
extern void CredentialCache_get_DefaultCredentials_mFD45861A5151E546B6DF04F6D527E82214EA4143 (void);
// 0x0000081E System.Void System.Net.SystemNetworkCredential::.ctor()
extern void SystemNetworkCredential__ctor_m6C0643A3B325903C6E20EEC9940A6646F4AE77B6 (void);
// 0x0000081F System.Void System.Net.SystemNetworkCredential::.cctor()
extern void SystemNetworkCredential__cctor_mC2950C5826DFEFF2A593B0E00769DCAF75257AF3 (void);
// 0x00000820 System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
extern void EndPoint_get_AddressFamily_m44AC2CD5C6868280BEBABF4090D3AFCA2E254537 (void);
// 0x00000821 System.Net.SocketAddress System.Net.EndPoint::Serialize()
extern void EndPoint_Serialize_mB045A92E21967EF34B1D5A32EF4E645CC1871BA3 (void);
// 0x00000822 System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
extern void EndPoint_Create_m09DA8D1A544D556AD0A1A08E3B0CBE9052615983 (void);
// 0x00000823 System.Void System.Net.EndPoint::.ctor()
extern void EndPoint__ctor_m4CD393A3D801B696473199A2D2F7EC80E8036F5D (void);
// 0x00000824 System.Net.IWebProxy System.Net.GlobalProxySelection::get_Select()
extern void GlobalProxySelection_get_Select_mD560206A5CF48874ADDED964043FA86CBC21CDA4 (void);
// 0x00000825 System.Net.IWebProxy System.Net.GlobalProxySelection::GetEmptyWebProxy()
extern void GlobalProxySelection_GetEmptyWebProxy_m80E672AAD736D5282C34878A6C6320E6036DE964 (void);
// 0x00000826 System.Void System.Net.HttpVersion::.cctor()
extern void HttpVersion__cctor_m237BC8431A75E09C3610837B9FECBDD305CF2622 (void);
// 0x00000827 System.Net.Authorization System.Net.IAuthenticationModule::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
// 0x00000828 System.Net.Authorization System.Net.IAuthenticationModule::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
// 0x00000829 System.String System.Net.IAuthenticationModule::get_AuthenticationType()
// 0x0000082A System.Boolean System.Net.ICertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
// 0x0000082B System.Net.NetworkCredential System.Net.ICredentials::GetCredential(System.Uri,System.String)
// 0x0000082C System.Void System.Net.IPAddress::.ctor(System.Int64)
extern void IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B (void);
// 0x0000082D System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
extern void IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5 (void);
// 0x0000082E System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.UInt32)
extern void IPAddress__ctor_m16761A05E56D81D4519A8E0FEBB7910E17A1FB7C (void);
// 0x0000082F System.Void System.Net.IPAddress::.ctor(System.Int32)
extern void IPAddress__ctor_m17B194C969B6ECEE1917CB93B493B8F26F2B800E (void);
// 0x00000830 System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern void IPAddress_TryParse_mB8DC9EE090ED3BE8F8C9D419759AA9FF4A498D3B (void);
// 0x00000831 System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern void IPAddress_Parse_mD7BEF4D6060D8BE776F559C5F81F195A9917CF1C (void);
// 0x00000832 System.Net.IPAddress System.Net.IPAddress::InternalParse(System.String,System.Boolean)
extern void IPAddress_InternalParse_mF3ACF0C303F6F986D92A2066A8228353FA0EA900 (void);
// 0x00000833 System.Byte[] System.Net.IPAddress::GetAddressBytes()
extern void IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9 (void);
// 0x00000834 System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern void IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (void);
// 0x00000835 System.Int64 System.Net.IPAddress::get_ScopeId()
extern void IPAddress_get_ScopeId_m464E5C5597F29B05135EDCA6DDB1667EFA70EEF8 (void);
// 0x00000836 System.String System.Net.IPAddress::ToString()
extern void IPAddress_ToString_m91FE727877BEAA0115F497387E2E9CB0B45C3895 (void);
// 0x00000837 System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern void IPAddress_IsLoopback_m673C9C63D59BF356AB7964CEE148EE1F3E01CC19 (void);
// 0x00000838 System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
extern void IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7 (void);
// 0x00000839 System.Boolean System.Net.IPAddress::Equals(System.Object)
extern void IPAddress_Equals_m5EA56A0CBC4F66012C11628D8CC75E03E5A8C462 (void);
// 0x0000083A System.Int32 System.Net.IPAddress::GetHashCode()
extern void IPAddress_GetHashCode_m243850627E81961E58E3A7A0A39A1F365C47A4BA (void);
// 0x0000083B System.Net.IPAddress System.Net.IPAddress::MapToIPv6()
extern void IPAddress_MapToIPv6_m3D243981B6A8235516A4D8A68FC555B59675DE33 (void);
// 0x0000083C System.Void System.Net.IPAddress::.cctor()
extern void IPAddress__cctor_mB1459880D331879EB11466988E78D88EBA0F6735 (void);
// 0x0000083D System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern void IPEndPoint_get_AddressFamily_m9941B51AEDFC4A65B614DCFFBD6A11644DBA5851 (void);
// 0x0000083E System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (void);
// 0x0000083F System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern void IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C (void);
// 0x00000840 System.Int32 System.Net.IPEndPoint::get_Port()
extern void IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429 (void);
// 0x00000841 System.String System.Net.IPEndPoint::ToString()
extern void IPEndPoint_ToString_mC285E84E3FB9A15B223DD4401DDFC1E4171E766A (void);
// 0x00000842 System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern void IPEndPoint_Serialize_m4495698C21946D39519728ADC8D4FB9860B52DD5 (void);
// 0x00000843 System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern void IPEndPoint_Create_m3F397111A683D18A38FC7275D55BB94B0FC7350D (void);
// 0x00000844 System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern void IPEndPoint_Equals_m480BC01DF0A7D8DA996A030546DCECBE2B5D6AF7 (void);
// 0x00000845 System.Int32 System.Net.IPEndPoint::GetHashCode()
extern void IPEndPoint_GetHashCode_m888B6D706296BF20224488C4909807D26655E4F3 (void);
// 0x00000846 System.Void System.Net.IPEndPoint::.cctor()
extern void IPEndPoint__cctor_mF8F48FE436F60E44A928B1967AA49F472E8D1D05 (void);
// 0x00000847 System.String System.Net.IPHostEntry::get_HostName()
extern void IPHostEntry_get_HostName_m04050E3890C11BC5CB02BF48FBDD8AB4938FC390 (void);
// 0x00000848 System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern void IPHostEntry_set_HostName_m4218E75B9A5D143AF361FEC708ED40CD3829920A (void);
// 0x00000849 System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern void IPHostEntry_set_Aliases_mCAB3DC9E9B474EA49C1A80E8010FF4932316B266 (void);
// 0x0000084A System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern void IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71 (void);
// 0x0000084B System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern void IPHostEntry_set_AddressList_mFC955717B52B0D1DC71059FC7B2ED6659E4729D8 (void);
// 0x0000084C System.Void System.Net.IPHostEntry::.ctor()
extern void IPHostEntry__ctor_mF2D2692AFFD3ED81CAF30F4CD42B7B0843952398 (void);
// 0x0000084D System.Net.WebRequest System.Net.IWebRequestCreate::Create(System.Uri)
// 0x0000084E System.Void System.Net.InternalException::.ctor()
extern void InternalException__ctor_m20A09E66E185FB1449C71227304AF40936C8011A (void);
// 0x0000084F System.Boolean System.Net.NclUtilities::IsAddressLocal(System.Net.IPAddress)
extern void NclUtilities_IsAddressLocal_mA952662DF0A2D8BF1AFF9E74B1FF46DBCA90812F (void);
// 0x00000850 System.Net.IPHostEntry System.Net.NclUtilities::GetLocalHost()
extern void NclUtilities_GetLocalHost_m7C77756A35C2F3CC268016902FA61CF88C5AD56F (void);
// 0x00000851 System.Net.IPAddress[] System.Net.NclUtilities::get_LocalAddresses()
extern void NclUtilities_get_LocalAddresses_mC5E3B1D849F83965C3F09ECF963B3CB252A8F22F (void);
// 0x00000852 System.Object System.Net.NclUtilities::get_LocalAddressesLock()
extern void NclUtilities_get_LocalAddressesLock_mDF3BAF033A2D11D70D5703B65302AB09525F7880 (void);
// 0x00000853 System.String System.Net.ValidationHelper::MakeStringNull(System.String)
extern void ValidationHelper_MakeStringNull_mFC25A67C52461BFCE2F30DB71823434BE37895C0 (void);
// 0x00000854 System.Boolean System.Net.ValidationHelper::IsBlankString(System.String)
extern void ValidationHelper_IsBlankString_mEE97DDAD061D54175C26B9E51E891C4F346E33B6 (void);
// 0x00000855 System.Boolean System.Net.ValidationHelper::ValidateTcpPort(System.Int32)
extern void ValidationHelper_ValidateTcpPort_m9042E85AFB8EA2756E2940065C116104C008CCB2 (void);
// 0x00000856 System.Void System.Net.ValidationHelper::.cctor()
extern void ValidationHelper__cctor_m24C6635AA32CE592CED801B39532BB4B7445AFC1 (void);
// 0x00000857 System.NotImplementedException System.Net.ExceptionHelper::get_MethodNotImplementedException()
extern void ExceptionHelper_get_MethodNotImplementedException_mF8678EE4622F1BBEEC6CDD54293E4D1B40A6D251 (void);
// 0x00000858 System.NotImplementedException System.Net.ExceptionHelper::get_PropertyNotImplementedException()
extern void ExceptionHelper_get_PropertyNotImplementedException_m5029CA867B083BAEE8D3D4577B1F571FEDDDE590 (void);
// 0x00000859 System.NotSupportedException System.Net.ExceptionHelper::get_PropertyNotSupportedException()
extern void ExceptionHelper_get_PropertyNotSupportedException_m5CC325461533A050D3EF68316653B789963A0DA2 (void);
// 0x0000085A System.Net.WebException System.Net.ExceptionHelper::get_RequestAbortedException()
extern void ExceptionHelper_get_RequestAbortedException_m3DF6599ECE269D18BE8B09099E6D8A9E6692B309 (void);
// 0x0000085B System.Net.IWebRequestCreate System.Net.WebRequestPrefixElement::get_Creator()
extern void WebRequestPrefixElement_get_Creator_mA4054182FA19EA0B452693C7F747122DC0A4A9ED (void);
// 0x0000085C System.Void System.Net.WebRequestPrefixElement::set_Creator(System.Net.IWebRequestCreate)
extern void WebRequestPrefixElement_set_Creator_mD7ECF1CF1BD68AC660ED2E3EE27582CF3903CCCE (void);
// 0x0000085D System.Void System.Net.WebRequestPrefixElement::.ctor(System.String,System.Net.IWebRequestCreate)
extern void WebRequestPrefixElement__ctor_mA9BEF8159EE6A6C7092797F6E7BE68FDE06E3C4B (void);
// 0x0000085E System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern void HttpContinueDelegate__ctor_mF88BDF13545D1FCB1962650C0A2B5C891BA83DF5 (void);
// 0x0000085F System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern void HttpContinueDelegate_Invoke_m911A3C37BB31B610864B0381AA08241D41B2CB7D (void);
// 0x00000860 System.Void System.Net.NetworkCredential::.ctor(System.String,System.String)
extern void NetworkCredential__ctor_mE50C6F50A386C1116DDEC3F21BD7A2894BDC902C (void);
// 0x00000861 System.Void System.Net.NetworkCredential::.ctor(System.String,System.String,System.String)
extern void NetworkCredential__ctor_m6AACF996F73DA7CE81D33CD301DF98362E7D3EB2 (void);
// 0x00000862 System.String System.Net.NetworkCredential::get_UserName()
extern void NetworkCredential_get_UserName_mEBB5D5B4928F1868DD79A104CF2BAFCFAC88AFA1 (void);
// 0x00000863 System.Void System.Net.NetworkCredential::set_UserName(System.String)
extern void NetworkCredential_set_UserName_m1C8F2119945861B5B7A512896A57F5E2C5537B2F (void);
// 0x00000864 System.String System.Net.NetworkCredential::get_Password()
extern void NetworkCredential_get_Password_m7F0F54ED0E4A41F66513296C4E3063D70AF6036C (void);
// 0x00000865 System.Void System.Net.NetworkCredential::set_Password(System.String)
extern void NetworkCredential_set_Password_mF0B964234CE60FF322135B014FFD8C28FEF5428B (void);
// 0x00000866 System.String System.Net.NetworkCredential::get_Domain()
extern void NetworkCredential_get_Domain_mFFC454BD64B52DC2FFA09971876B56A2B337DE17 (void);
// 0x00000867 System.Void System.Net.NetworkCredential::set_Domain(System.String)
extern void NetworkCredential_set_Domain_mF7A8246CA8329E6A86A7B2B5FA8C972371F5AABA (void);
// 0x00000868 System.String System.Net.NetworkCredential::InternalGetUserName()
extern void NetworkCredential_InternalGetUserName_m3C611F91EF4D0D363D0F727ED93B5BB71057BAA9 (void);
// 0x00000869 System.String System.Net.NetworkCredential::InternalGetPassword()
extern void NetworkCredential_InternalGetPassword_mC81DF1C74B2EC52EB60CFAC26B7D39D04EA0919C (void);
// 0x0000086A System.String System.Net.NetworkCredential::InternalGetDomain()
extern void NetworkCredential_InternalGetDomain_m23031ACE871266F13428419D081B8F0B76388D82 (void);
// 0x0000086B System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern void NetworkCredential_GetCredential_mA14F76598AB02327F11A1A09ABB896510F20C64F (void);
// 0x0000086C System.Void System.Net.ProtocolViolationException::.ctor()
extern void ProtocolViolationException__ctor_m0999A59A95131FA8BB4D6685FBF4BC0B74E01E34 (void);
// 0x0000086D System.Void System.Net.ProtocolViolationException::.ctor(System.String)
extern void ProtocolViolationException__ctor_m2C2665583590BF7DB9B53A7AF126FEFDDE364BA5 (void);
// 0x0000086E System.Void System.Net.ProtocolViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException__ctor_mD9B5606196795D66E9A101AE92EE2A8D9B9A7440 (void);
// 0x0000086F System.Void System.Net.ProtocolViolationException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_mA112E599073DE2CF2AC7F84E6CD354BFEBFA3170 (void);
// 0x00000870 System.Void System.Net.ProtocolViolationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException_GetObjectData_mF3C17B3E564B658959AF1A026E232D8E2D2CCEB9 (void);
// 0x00000871 System.Net.Sockets.AddressFamily System.Net.SocketAddress::get_Family()
extern void SocketAddress_get_Family_mF66C07BE26931A763DF421310667F1C7EE82EA20 (void);
// 0x00000872 System.Int32 System.Net.SocketAddress::get_Size()
extern void SocketAddress_get_Size_mBBA7758844EE6209A287989E0DBAE534C9A21A11 (void);
// 0x00000873 System.Byte System.Net.SocketAddress::get_Item(System.Int32)
extern void SocketAddress_get_Item_mFF97A6A1AF0D8AB36C662282C477B5DBAFD10FBD (void);
// 0x00000874 System.Void System.Net.SocketAddress::.ctor(System.Net.Sockets.AddressFamily,System.Int32)
extern void SocketAddress__ctor_mD56F67A8077F542F2DA0ABAF693EE192F5910ECB (void);
// 0x00000875 System.Void System.Net.SocketAddress::.ctor(System.Net.IPAddress)
extern void SocketAddress__ctor_mE024ADACE4B62D1FF2969E8D59E3D6A4B567DC30 (void);
// 0x00000876 System.Void System.Net.SocketAddress::.ctor(System.Net.IPAddress,System.Int32)
extern void SocketAddress__ctor_m33DA845BE27401842BFABDF79738F8EFA60B12B6 (void);
// 0x00000877 System.Net.IPAddress System.Net.SocketAddress::GetIPAddress()
extern void SocketAddress_GetIPAddress_m9F349596DE4F881222A989059162AF5880FBAA0D (void);
// 0x00000878 System.Net.IPEndPoint System.Net.SocketAddress::GetIPEndPoint()
extern void SocketAddress_GetIPEndPoint_m1B1532600216A9545A7CAC1EA49F23CBAC5C8C17 (void);
// 0x00000879 System.Boolean System.Net.SocketAddress::Equals(System.Object)
extern void SocketAddress_Equals_m68D7D3DC11E1070E43492BA30FD9AE5AEA51C49D (void);
// 0x0000087A System.Int32 System.Net.SocketAddress::GetHashCode()
extern void SocketAddress_GetHashCode_mA5B524859742D73CF5870F6984360E15F09FA719 (void);
// 0x0000087B System.String System.Net.SocketAddress::ToString()
extern void SocketAddress_ToString_m1C4AEB870E76472C9E3800224F2400A66DF8E46A (void);
// 0x0000087C System.Void System.Net.WebException::.ctor()
extern void WebException__ctor_m1F229FB262E89CA90779094218A3066F532EB8CB (void);
// 0x0000087D System.Void System.Net.WebException::.ctor(System.String)
extern void WebException__ctor_mFBC3890EC80132004827F36950EEB651595BF277 (void);
// 0x0000087E System.Void System.Net.WebException::.ctor(System.String,System.Exception)
extern void WebException__ctor_m8075F9F7345CECCBDB276E0B67DE820A9F7D03E9 (void);
// 0x0000087F System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
extern void WebException__ctor_m6C829021B5388956F84830FC249915324C1453A1 (void);
// 0x00000880 System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus,System.Net.WebExceptionInternalStatus,System.Exception)
extern void WebException__ctor_m7022740DDAF9DE008CB8B2B66CC04AE2C5C45174 (void);
// 0x00000881 System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern void WebException__ctor_m937A4670EAF10FD9EFA1E0AEAAE27515293339FD (void);
// 0x00000882 System.Void System.Net.WebException::.ctor(System.String,System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern void WebException__ctor_mA1609CA415DDD5C7C4AF37E9CD2CE77330C43384 (void);
// 0x00000883 System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse,System.Net.WebExceptionInternalStatus)
extern void WebException__ctor_m7A5D68872BF6CA52F8992EBFD74AB6BCB07EB77C (void);
// 0x00000884 System.Void System.Net.WebException::.ctor(System.String,System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse,System.Net.WebExceptionInternalStatus)
extern void WebException__ctor_mF29A3D816C156692A8C353A9C824CA2F5C60BBFD (void);
// 0x00000885 System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException__ctor_m6D36D5DBE171207E973C5BDFC9A57BE2A1E5DA7C (void);
// 0x00000886 System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_mAEABC5E4A1BAE8AD395EFC404CCEAA00345AD628 (void);
// 0x00000887 System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException_GetObjectData_mF735C851AF332C94DDDAB38C0C24AA1871DC2901 (void);
// 0x00000888 System.Net.WebExceptionStatus System.Net.WebException::get_Status()
extern void WebException_get_Status_m9B08D3B07C3D75A6783EADB1215EB54E2D3B9822 (void);
// 0x00000889 System.String System.Net.WebExceptionMapping::GetWebStatusString(System.Net.WebExceptionStatus)
extern void WebExceptionMapping_GetWebStatusString_mC6F3D28D6DCDD3E8674CBDA5CA684DF603DBCF69 (void);
// 0x0000088A System.Void System.Net.WebExceptionMapping::.cctor()
extern void WebExceptionMapping__cctor_m56C96AB4B5D49C51756576BE119AC1096CDD6C4C (void);
// 0x0000088B System.Void System.Net.WebHeaderCollection::NormalizeCommonHeaders()
extern void WebHeaderCollection_NormalizeCommonHeaders_mE1D83B9D009EB876D33D1EB93CDC65F4F97B5B77 (void);
// 0x0000088C System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::get_InnerCollection()
extern void WebHeaderCollection_get_InnerCollection_m544FF08AD232BC5BDD8C5109DF6CD21C5ECAE2D0 (void);
// 0x0000088D System.Boolean System.Net.WebHeaderCollection::AllowMultiValues(System.String)
extern void WebHeaderCollection_AllowMultiValues_mDE5975EA8A29DCB2347D5B3FCFD97473E12CDC16 (void);
// 0x0000088E System.Boolean System.Net.WebHeaderCollection::get_AllowHttpRequestHeader()
extern void WebHeaderCollection_get_AllowHttpRequestHeader_m3ED9F9796BC1B56D21105BAE17D4CABA83713889 (void);
// 0x0000088F System.Void System.Net.WebHeaderCollection::Remove(System.Net.HttpRequestHeader)
extern void WebHeaderCollection_Remove_m93990EF3A5F1D4F6D67232583029BB26483C7F67 (void);
// 0x00000890 System.Void System.Net.WebHeaderCollection::AddInternal(System.String,System.String)
extern void WebHeaderCollection_AddInternal_m0EE002E2F815150CA5C43EC865F6D193FD4B7777 (void);
// 0x00000891 System.Void System.Net.WebHeaderCollection::ChangeInternal(System.String,System.String)
extern void WebHeaderCollection_ChangeInternal_m170009EA1B341E9E69FD5A7DECF0AD2EE601C2EB (void);
// 0x00000892 System.Void System.Net.WebHeaderCollection::RemoveInternal(System.String)
extern void WebHeaderCollection_RemoveInternal_mC5B544F96C64E2087FE388E375DBE4A185E53AF0 (void);
// 0x00000893 System.String System.Net.WebHeaderCollection::CheckBadChars(System.String,System.Boolean)
extern void WebHeaderCollection_CheckBadChars_m1F7BCD4BF0DC01AF8C1378AD02862D9900B67D71 (void);
// 0x00000894 System.Boolean System.Net.WebHeaderCollection::ContainsNonAsciiChars(System.String)
extern void WebHeaderCollection_ContainsNonAsciiChars_mAE8D797265C12FBCAC784B15D734914273ED7AFD (void);
// 0x00000895 System.Void System.Net.WebHeaderCollection::ThrowOnRestrictedHeader(System.String)
extern void WebHeaderCollection_ThrowOnRestrictedHeader_mFBE0E21167D9EB5485BD3DC18B505FEC9BF6CF51 (void);
// 0x00000896 System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern void WebHeaderCollection_Add_m3E612375F241E3383BA9EC01972C5A5FCD9384CF (void);
// 0x00000897 System.Void System.Net.WebHeaderCollection::Add(System.String)
extern void WebHeaderCollection_Add_m9A3740A95FB8359CB0B56367D2E19E8C3CD77EDC (void);
// 0x00000898 System.Void System.Net.WebHeaderCollection::Set(System.String,System.String)
extern void WebHeaderCollection_Set_mD28BC00E4A0787295183E92F630DAAF9AD435D47 (void);
// 0x00000899 System.Void System.Net.WebHeaderCollection::SetInternal(System.String,System.String)
extern void WebHeaderCollection_SetInternal_m3E861ED032C85112F8FD4B715C6505508BD78679 (void);
// 0x0000089A System.Void System.Net.WebHeaderCollection::Remove(System.String)
extern void WebHeaderCollection_Remove_mD3D0E549867A561B0E71C7B4DC9B532208C60A6E (void);
// 0x0000089B System.String[] System.Net.WebHeaderCollection::GetValues(System.String)
extern void WebHeaderCollection_GetValues_mB75176E99C15DAE45AC897402491AA38C9D4FD33 (void);
// 0x0000089C System.String System.Net.WebHeaderCollection::ToString()
extern void WebHeaderCollection_ToString_m60D2996FFE881E3D8AAF700E761ECA34B0A24D86 (void);
// 0x0000089D System.String System.Net.WebHeaderCollection::GetAsString(System.Collections.Specialized.NameValueCollection,System.Boolean,System.Boolean)
extern void WebHeaderCollection_GetAsString_m7E801872DAF279F8228F57FF2EA5336CD29F2E4F (void);
// 0x0000089E System.Void System.Net.WebHeaderCollection::.ctor()
extern void WebHeaderCollection__ctor_m9C77B3E5FD0A3637283AE2B7084F5ED5D8CD7369 (void);
// 0x0000089F System.Void System.Net.WebHeaderCollection::.ctor(System.Net.WebHeaderCollectionType)
extern void WebHeaderCollection__ctor_mE6EBDC6DA6CA46B83FD87FA51A93BACCA7FCDB27 (void);
// 0x000008A0 System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection__ctor_m7FAAE403639DC42E7FFED6006B1D10BF5A1B4B5F (void);
// 0x000008A1 System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern void WebHeaderCollection_OnDeserialization_mDF73EE0F5BBF3AEE9C37273B79738A47530BECA4 (void);
// 0x000008A2 System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection_GetObjectData_mA9D238943F3E6D4DF3A1156A0EA6729F5CA6F911 (void);
// 0x000008A3 System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_mCB9569FEA54BEF369CF3BE5F56F36072D01D712D (void);
// 0x000008A4 System.String System.Net.WebHeaderCollection::Get(System.String)
extern void WebHeaderCollection_Get_m7EB2DFD01DAC1EA2CC4CA7290459BF47B06CABED (void);
// 0x000008A5 System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern void WebHeaderCollection_GetEnumerator_m8A77AE9A2EFFD0F12E60A1DDF51BBBF2C9F5904B (void);
// 0x000008A6 System.Int32 System.Net.WebHeaderCollection::get_Count()
extern void WebHeaderCollection_get_Count_mFD0A0FD946CC97663996F70E67BF64851F3A4B26 (void);
// 0x000008A7 System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern void WebHeaderCollection_Get_m99BCFF243942F451A075C334C2B67767B2332348 (void);
// 0x000008A8 System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern void WebHeaderCollection_GetKey_m568730550CD89F6A9C02478A059923E3BEE324BD (void);
// 0x000008A9 System.Void System.Net.WebHeaderCollection::.cctor()
extern void WebHeaderCollection__cctor_m065B6EEB9A340079FA0815B12CF08010D7A5FD81 (void);
// 0x000008AA System.Int32 System.Net.CaseInsensitiveAscii::GetHashCode(System.Object)
extern void CaseInsensitiveAscii_GetHashCode_m6196C976C5E2C2BF948F9775AF827D80AA0707B2 (void);
// 0x000008AB System.Int32 System.Net.CaseInsensitiveAscii::Compare(System.Object,System.Object)
extern void CaseInsensitiveAscii_Compare_mDA30468D238E946A8CA36C5D0CBD9C92EBB67B0B (void);
// 0x000008AC System.Int32 System.Net.CaseInsensitiveAscii::FastGetHashCode(System.String)
extern void CaseInsensitiveAscii_FastGetHashCode_m8185162F020C571335BCFB444577F786E6BB1E06 (void);
// 0x000008AD System.Boolean System.Net.CaseInsensitiveAscii::Equals(System.Object,System.Object)
extern void CaseInsensitiveAscii_Equals_m2F02CC88964600A235BA5B084B83ADA6CEE2EE5F (void);
// 0x000008AE System.Void System.Net.CaseInsensitiveAscii::.ctor()
extern void CaseInsensitiveAscii__ctor_mD964E182EFE7238322DE8F7A2CA169657B6C4F4A (void);
// 0x000008AF System.Void System.Net.CaseInsensitiveAscii::.cctor()
extern void CaseInsensitiveAscii__cctor_m769922E617CDF4088DCC27EDD5C2F0042D2318A3 (void);
// 0x000008B0 System.Object System.Net.WebRequest::get_InternalSyncObject()
extern void WebRequest_get_InternalSyncObject_mCCA701B3B01048CC2F26150D9E84D25CD194DFCF (void);
// 0x000008B1 System.Net.WebRequest System.Net.WebRequest::Create(System.Uri,System.Boolean)
extern void WebRequest_Create_m9DD92CB71F55DA62C44CDCB1797D1B4241E753DC (void);
// 0x000008B2 System.Net.WebRequest System.Net.WebRequest::Create(System.String)
extern void WebRequest_Create_m18D598C169B53797E9B26A710442CAF2D786B04A (void);
// 0x000008B3 System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern void WebRequest_Create_mD11C7BB286D0C12A92911F717AC8D2CAF9027611 (void);
// 0x000008B4 System.Collections.ArrayList System.Net.WebRequest::get_PrefixList()
extern void WebRequest_get_PrefixList_m233C839E7F75B2777B26A693A2DAD1AACC7B915D (void);
// 0x000008B5 System.Collections.ArrayList System.Net.WebRequest::PopulatePrefixList()
extern void WebRequest_PopulatePrefixList_m6E56B2280C7828A4FFFF0154681C3CD8B1B61E8B (void);
// 0x000008B6 System.Void System.Net.WebRequest::.ctor()
extern void WebRequest__ctor_m8A7037980E4A7E78EEF420F0C38A36C10DE3D642 (void);
// 0x000008B7 System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest__ctor_mFCD491607BF422AED49CB0368CFE19F2E37BE98A (void);
// 0x000008B8 System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m84834AA790D887F6742649C7D4001AD00089102B (void);
// 0x000008B9 System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest_GetObjectData_m1809AB7BE2251220AB0F64110CFD815EF882D3E7 (void);
// 0x000008BA System.Void System.Net.WebRequest::set_CachePolicy(System.Net.Cache.RequestCachePolicy)
extern void WebRequest_set_CachePolicy_mBDD930800DB2EFD353D0090BBEC03D8DE098C90A (void);
// 0x000008BB System.Void System.Net.WebRequest::InternalSetCachePolicy(System.Net.Cache.RequestCachePolicy)
extern void WebRequest_InternalSetCachePolicy_m48EE455302BEA5A1F75E18E5D7DCF5CA8A18F076 (void);
// 0x000008BC System.String System.Net.WebRequest::get_Method()
extern void WebRequest_get_Method_mFAE2E9E052F7031B81B2C5F05FBAF0AB1167A444 (void);
// 0x000008BD System.Void System.Net.WebRequest::set_Method(System.String)
extern void WebRequest_set_Method_mC0B76EDF551FA04D66ABF5F52D0725787EECD31C (void);
// 0x000008BE System.Uri System.Net.WebRequest::get_RequestUri()
extern void WebRequest_get_RequestUri_m91BE50BB8D64C8FD5D9B31A0F707EB066A64097A (void);
// 0x000008BF System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
extern void WebRequest_get_Headers_m26A0D1239097F7AA805B4A8D2CF6FA5B1DC56932 (void);
// 0x000008C0 System.Int64 System.Net.WebRequest::get_ContentLength()
extern void WebRequest_get_ContentLength_m1BF638AB4F757E2FAB7F765B63FD743BF0FCBF6B (void);
// 0x000008C1 System.Net.ICredentials System.Net.WebRequest::get_Credentials()
extern void WebRequest_get_Credentials_m47790A75D2014E80AB4F83A91BEBFED52785F500 (void);
// 0x000008C2 System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials)
extern void WebRequest_set_Credentials_mBD3AD4311A053F6FD323344BE1A0F1B17868428B (void);
// 0x000008C3 System.Boolean System.Net.WebRequest::get_UseDefaultCredentials()
extern void WebRequest_get_UseDefaultCredentials_m81F5CC1019777DFC87DDE33FEA663CCED0F3C0F9 (void);
// 0x000008C4 System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
extern void WebRequest_get_Proxy_m251BB31AEFFC7CFF8B760FE3AEAF2910743C092D (void);
// 0x000008C5 System.Void System.Net.WebRequest::set_Proxy(System.Net.IWebProxy)
extern void WebRequest_set_Proxy_mFDB69D2A0469AD21FC1A918EEB5515272D45F796 (void);
// 0x000008C6 System.Int32 System.Net.WebRequest::get_Timeout()
extern void WebRequest_get_Timeout_mB2F6910163AF508879886ABE5C9824ABA6D1D81C (void);
// 0x000008C7 System.Net.WebResponse System.Net.WebRequest::GetResponse()
extern void WebRequest_GetResponse_mF6F9D792949BD9CDA3AC8DC9635C6D31913D519B (void);
// 0x000008C8 System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern void WebRequest_BeginGetResponse_mBED5D8A0E2BDB198696F3117A2355564F6AA0299 (void);
// 0x000008C9 System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
extern void WebRequest_EndGetResponse_mBE7182580E7B9B64E560EDC8C7A2A68F385C4833 (void);
// 0x000008CA System.Threading.Tasks.Task`1<System.Net.WebResponse> System.Net.WebRequest::GetResponseAsync()
extern void WebRequest_GetResponseAsync_m43EB360A2947698EDE4671A9811FA0F6C52A23EC (void);
// 0x000008CB System.Security.Principal.WindowsIdentity System.Net.WebRequest::SafeCaptureIdenity()
extern void WebRequest_SafeCaptureIdenity_m75DF76AA29C004E643C39626ADD8A24D4C5EEDD9 (void);
// 0x000008CC System.Void System.Net.WebRequest::Abort()
extern void WebRequest_Abort_mC22268D6B6812F405039FB6F34208E726EF62A56 (void);
// 0x000008CD System.Net.Cache.RequestCacheProtocol System.Net.WebRequest::get_CacheProtocol()
extern void WebRequest_get_CacheProtocol_m2936E9CABE538D40E6A88C1DC3B78CE9336A711B (void);
// 0x000008CE System.Void System.Net.WebRequest::set_CacheProtocol(System.Net.Cache.RequestCacheProtocol)
extern void WebRequest_set_CacheProtocol_m708E1FF1630F00DF87309F698E837EA6E55428C4 (void);
// 0x000008CF System.Net.IWebProxy System.Net.WebRequest::get_InternalDefaultWebProxy()
extern void WebRequest_get_InternalDefaultWebProxy_m5FE1DF46DCB29A82C5AD3017F0D1BAD2A787A75C (void);
// 0x000008D0 System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern void WebRequest_get_DefaultWebProxy_m47BDCE9F61AF9563C4C88C0B8ED39242059EAE9F (void);
// 0x000008D1 System.Void System.Net.WebRequest::.cctor()
extern void WebRequest__cctor_mB67087F945455F2B1502CB55721CBF2ADB0A10F4 (void);
// 0x000008D2 System.Threading.Tasks.Task`1<System.Net.WebResponse> System.Net.WebRequest::<GetResponseAsync>b__79_0()
extern void WebRequest_U3CGetResponseAsyncU3Eb__79_0_m635D73DB9E3CEEEF92D50FC5AA0A5D0CCEA73E69 (void);
// 0x000008D3 System.Net.WebRequest System.Net.WebRequest/DesignerWebRequestCreate::Create(System.Uri)
extern void DesignerWebRequestCreate_Create_m759C6A157B3F3F6531844B2E2FA8018C1442AD28 (void);
// 0x000008D4 System.Void System.Net.WebRequest/DesignerWebRequestCreate::.ctor()
extern void DesignerWebRequestCreate__ctor_mBFB58FED978B03A3C53AE292C3855EDED4222C88 (void);
// 0x000008D5 System.Uri System.Net.WebRequest/WebProxyWrapperOpaque::GetProxy(System.Uri)
extern void WebProxyWrapperOpaque_GetProxy_m7400F7FCA17B6C667D776F18F13485717DF55C88 (void);
// 0x000008D6 System.Boolean System.Net.WebRequest/WebProxyWrapperOpaque::IsBypassed(System.Uri)
extern void WebProxyWrapperOpaque_IsBypassed_m98033B565DCE66CE6234C8C45A89FB3FC55F4999 (void);
// 0x000008D7 System.Net.ICredentials System.Net.WebRequest/WebProxyWrapperOpaque::get_Credentials()
extern void WebProxyWrapperOpaque_get_Credentials_m10A2D029CDF952EE2DC86D6FF4D35F4E3498A837 (void);
// 0x000008D8 System.Net.WebProxy System.Net.WebRequest/WebProxyWrapper::get_WebProxy()
extern void WebProxyWrapper_get_WebProxy_mA0997593F2FAE2C7778FADC0D00EC04FEE7B5453 (void);
// 0x000008D9 System.Void System.Net.WebRequest/<>c__DisplayClass79_0::.ctor()
extern void U3CU3Ec__DisplayClass79_0__ctor_m98DEB00C10B19311D74B7AA965FD379F91FA94B1 (void);
// 0x000008DA System.Threading.Tasks.Task`1<System.Net.WebResponse> System.Net.WebRequest/<>c__DisplayClass79_0::<GetResponseAsync>b__1()
extern void U3CU3Ec__DisplayClass79_0_U3CGetResponseAsyncU3Eb__1_mD03363C04D913541A4A1E21614CE2D60C92E2AA0 (void);
// 0x000008DB System.Void System.Net.WebResponse::.ctor()
extern void WebResponse__ctor_mC11AFFC628F1E49E53431A3129ADC7CEA012306B (void);
// 0x000008DC System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse__ctor_m845789E13F69DA82F94377A29D46186F2A43ADD1 (void);
// 0x000008DD System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m7251108700FDB16B091C135DC5E76053623F4FE6 (void);
// 0x000008DE System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse_GetObjectData_mDE55FE69900B3F6311ED36EC53D1F775E2A634CB (void);
// 0x000008DF System.Void System.Net.WebResponse::Close()
extern void WebResponse_Close_mDB1366AAB8237FC3D25C47B45FC7FA18055D7ADD (void);
// 0x000008E0 System.Void System.Net.WebResponse::Dispose()
extern void WebResponse_Dispose_mB68E6769F296DE95FF4BAF9A80AA9309EBB4AB4E (void);
// 0x000008E1 System.Void System.Net.WebResponse::Dispose(System.Boolean)
extern void WebResponse_Dispose_mAACC90307104A5FBE9D417E8E40569C2501D5568 (void);
// 0x000008E2 System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern void WebResponse_GetResponseStream_m90039E34DC39DA2764E4A465C47D7C8CFD553F88 (void);
// 0x000008E3 System.Uri System.Net.WebResponse::get_ResponseUri()
extern void WebResponse_get_ResponseUri_mCCB7A9F1A892AA99BA86A6913ADDB511C26D403C (void);
// 0x000008E4 System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern void WebResponse_get_Headers_mEC440184E979C51FD1111A6F1A65D956C20DBFED (void);
// 0x000008E5 System.Void System.Net.BufferOffsetSize::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern void BufferOffsetSize__ctor_mF73D1F45CFD84AD9AB753B1F923A762F00806BE5 (void);
// 0x000008E6 System.Void System.Net.BufferOffsetSize::.ctor(System.Byte[],System.Boolean)
extern void BufferOffsetSize__ctor_m2C19FA733634E3D23AD53D85EA0B94E876CF6861 (void);
// 0x000008E7 System.Void System.Net.HeaderParser::.ctor(System.Object,System.IntPtr)
extern void HeaderParser__ctor_m3E4BFAA908282AFA1EB023C1B84A03C222A68AAD (void);
// 0x000008E8 System.String[] System.Net.HeaderParser::Invoke(System.String)
extern void HeaderParser_Invoke_mCAC8132BC020AD64B0130E50BD0379A312245C8E (void);
// 0x000008E9 System.Void System.Net.HeaderInfo::.ctor(System.String,System.Boolean,System.Boolean,System.Boolean,System.Net.HeaderParser)
extern void HeaderInfo__ctor_mB82B9D1D7C19C78B649E9107B0DB316A96120CB8 (void);
// 0x000008EA System.String[] System.Net.HeaderInfoTable::ParseSingleValue(System.String)
extern void HeaderInfoTable_ParseSingleValue_m217B3A467422A5B17876254E9984F2C30E178F9A (void);
// 0x000008EB System.String[] System.Net.HeaderInfoTable::ParseMultiValue(System.String)
extern void HeaderInfoTable_ParseMultiValue_mCACE161A48EB4BC9DD4519BF3EC02CC83DD6C85C (void);
// 0x000008EC System.Void System.Net.HeaderInfoTable::.cctor()
extern void HeaderInfoTable__cctor_mD8B50AECD3CECAAC7E93610FAE44324679088EDC (void);
// 0x000008ED System.Net.HeaderInfo System.Net.HeaderInfoTable::get_Item(System.String)
extern void HeaderInfoTable_get_Item_mE388F21B37BFA30336BB82A1585C744E69A20021 (void);
// 0x000008EE System.Void System.Net.HeaderInfoTable::.ctor()
extern void HeaderInfoTable__ctor_mED0A17850B2F6AA3A3E6BFACF257E8640A7F3F50 (void);
// 0x000008EF System.Void System.Net.ICloseEx::CloseEx(System.Net.CloseExState)
// 0x000008F0 System.Net.LazyAsyncResult/ThreadContext System.Net.LazyAsyncResult::get_CurrentThreadContext()
extern void LazyAsyncResult_get_CurrentThreadContext_mC86876C2BE5FFCFB3CCD0B34ACAD7272E72725FD (void);
// 0x000008F1 System.Void System.Net.LazyAsyncResult::.ctor(System.Object,System.Object,System.AsyncCallback)
extern void LazyAsyncResult__ctor_m62BAF64A732506AD7544741700A0333B22CADE2F (void);
// 0x000008F2 System.Object System.Net.LazyAsyncResult::get_AsyncObject()
extern void LazyAsyncResult_get_AsyncObject_m599FB00838F916DBE45F359D64D26717EA2DF231 (void);
// 0x000008F3 System.Object System.Net.LazyAsyncResult::get_AsyncState()
extern void LazyAsyncResult_get_AsyncState_mA3C12FBA0D5D421B9E670017D1A6236CE54152D4 (void);
// 0x000008F4 System.Threading.WaitHandle System.Net.LazyAsyncResult::get_AsyncWaitHandle()
extern void LazyAsyncResult_get_AsyncWaitHandle_m1F208E301E0C68A5F50E6E20A5ECFACB303489BF (void);
// 0x000008F5 System.Boolean System.Net.LazyAsyncResult::LazilyCreateEvent(System.Threading.ManualResetEvent&)
extern void LazyAsyncResult_LazilyCreateEvent_mC82FEA0526DA66D9F1A9B03BE1858D1C181E252F (void);
// 0x000008F6 System.Boolean System.Net.LazyAsyncResult::get_CompletedSynchronously()
extern void LazyAsyncResult_get_CompletedSynchronously_m94758548683594ABECCE44E74B8A6FAE5F44D688 (void);
// 0x000008F7 System.Boolean System.Net.LazyAsyncResult::get_IsCompleted()
extern void LazyAsyncResult_get_IsCompleted_mE0A803876FB2D312361FCA5F631535B09F6C3125 (void);
// 0x000008F8 System.Boolean System.Net.LazyAsyncResult::get_InternalPeekCompleted()
extern void LazyAsyncResult_get_InternalPeekCompleted_m4E25420F3F5315AEA52DB59D671C65A3103EF2DE (void);
// 0x000008F9 System.Void System.Net.LazyAsyncResult::ProtectedInvokeCallback(System.Object,System.IntPtr)
extern void LazyAsyncResult_ProtectedInvokeCallback_mAB31EFC1A9671BA58BB38F59F381EAFE9C564410 (void);
// 0x000008FA System.Void System.Net.LazyAsyncResult::InvokeCallback(System.Object)
extern void LazyAsyncResult_InvokeCallback_m4A1E1A15818F5ED6E6DBAEB48104A06529A11C9A (void);
// 0x000008FB System.Void System.Net.LazyAsyncResult::Complete(System.IntPtr)
extern void LazyAsyncResult_Complete_m6B165AD8AEBAB7129514C42C4A3277114E0683BC (void);
// 0x000008FC System.Void System.Net.LazyAsyncResult::WorkerThreadComplete(System.Object)
extern void LazyAsyncResult_WorkerThreadComplete_m50589CB1937E4BA7FF703482ECC24706F0E1A1BF (void);
// 0x000008FD System.Void System.Net.LazyAsyncResult::Cleanup()
extern void LazyAsyncResult_Cleanup_mDB648575075A8BDAE413E4FB90C35A880A238B02 (void);
// 0x000008FE System.Object System.Net.LazyAsyncResult::InternalWaitForCompletion()
extern void LazyAsyncResult_InternalWaitForCompletion_mE52E38E8478ACA2C9344716035CCC46E5CA32A59 (void);
// 0x000008FF System.Object System.Net.LazyAsyncResult::WaitForCompletion(System.Boolean)
extern void LazyAsyncResult_WaitForCompletion_mA2CEEA13EF894CFD3997117924FE18FF3D782649 (void);
// 0x00000900 System.Void System.Net.LazyAsyncResult/ThreadContext::.ctor()
extern void ThreadContext__ctor_mBFFE2269F22D15B6570BD909390F40F213E9DBF1 (void);
// 0x00000901 System.String System.Net.NetRes::GetWebStatusString(System.String,System.Net.WebExceptionStatus)
extern void NetRes_GetWebStatusString_m35A90AB3B319FDDFAC2A2C4AA534504806B8555B (void);
// 0x00000902 System.String System.Net.NetRes::GetWebStatusString(System.Net.WebExceptionStatus)
extern void NetRes_GetWebStatusString_mE66B48DF30D7AD1CBBA22137E2DD0736065236C1 (void);
// 0x00000903 System.Void System.Net.TimerThread::.cctor()
extern void TimerThread__cctor_mC25B3C34109193014AFAA8AE22DEB5A82AE730E4 (void);
// 0x00000904 System.Net.TimerThread/Queue System.Net.TimerThread::CreateQueue(System.Int32)
extern void TimerThread_CreateQueue_mEE7746808FCC711657A10D38DAC9FC01B93B68D8 (void);
// 0x00000905 System.Void System.Net.TimerThread::StopTimerThread()
extern void TimerThread_StopTimerThread_m1E3A2BE926509E8E445BA5C00BA5B83C8283EDCE (void);
// 0x00000906 System.Void System.Net.TimerThread::OnDomainUnload(System.Object,System.EventArgs)
extern void TimerThread_OnDomainUnload_m789618CB693C29737319DBD4437199D0346FAF60 (void);
// 0x00000907 System.Void System.Net.TimerThread/Queue::.ctor(System.Int32)
extern void Queue__ctor_mD131B17E1C13BF9B3E8EBF5A909ACB274930B0A0 (void);
// 0x00000908 System.Void System.Net.TimerThread/Timer::.ctor(System.Int32)
extern void Timer__ctor_m74E9AEA5FB4F7DDDD8D9089D6F9C9EF7A3A96F3E (void);
// 0x00000909 System.Boolean System.Net.TimerThread/Timer::Cancel()
// 0x0000090A System.Void System.Net.TimerThread/Timer::Dispose()
extern void Timer_Dispose_m266A7BD332741D89F4AA204ECEA9BD4784AFC79E (void);
// 0x0000090B System.Void System.Net.TimerThread/Callback::.ctor(System.Object,System.IntPtr)
extern void Callback__ctor_mE36A85A258851A46EE477BBE1E87B5751C3CC9A9 (void);
// 0x0000090C System.Void System.Net.TimerThread/Callback::Invoke(System.Net.TimerThread/Timer,System.Int32,System.Object)
extern void Callback_Invoke_mE5F4E02D25CB58B34E93A55CC21418F00B55C1BE (void);
// 0x0000090D System.Void System.Net.TimerThread/TimerQueue::.ctor(System.Int32)
extern void TimerQueue__ctor_mCB1C60FF084C13E97E4FC8C4E56F6264649285D9 (void);
// 0x0000090E System.Void System.Net.TimerThread/InfiniteTimerQueue::.ctor()
extern void InfiniteTimerQueue__ctor_mC47879DB811308BFE6D5D4613791A81CCA215501 (void);
// 0x0000090F System.Void System.Net.TimerThread/TimerNode::.ctor()
extern void TimerNode__ctor_m259A5ECB2BA964982D8CB975EE945899CB14EA6A (void);
// 0x00000910 System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Next()
extern void TimerNode_get_Next_mB0E6D37D592DC92CBED33A26B0362F00959578D5 (void);
// 0x00000911 System.Void System.Net.TimerThread/TimerNode::set_Next(System.Net.TimerThread/TimerNode)
extern void TimerNode_set_Next_m77F9833E3DA4B66D565A10F0409C15B6B7677AB0 (void);
// 0x00000912 System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Prev()
extern void TimerNode_get_Prev_m358430B0F3DD4E039E38962A04118F937E6F5E4D (void);
// 0x00000913 System.Void System.Net.TimerThread/TimerNode::set_Prev(System.Net.TimerThread/TimerNode)
extern void TimerNode_set_Prev_m3A7D7FD5A4B654793FB48D0BAF7D8E0638BB1E47 (void);
// 0x00000914 System.Boolean System.Net.TimerThread/TimerNode::Cancel()
extern void TimerNode_Cancel_m6CAF1FDE8F05519F86383C25195AC922D5056489 (void);
// 0x00000915 System.Void System.Net.EmptyWebProxy::.ctor()
extern void EmptyWebProxy__ctor_m39EC8273552ED71301CD28CAFAFDDBAA5713179B (void);
// 0x00000916 System.Uri System.Net.EmptyWebProxy::GetProxy(System.Uri)
extern void EmptyWebProxy_GetProxy_m239EA2A5CEB841819958417A73D90F33C5FC93BB (void);
// 0x00000917 System.Boolean System.Net.EmptyWebProxy::IsBypassed(System.Uri)
extern void EmptyWebProxy_IsBypassed_mD5BE8E62895F1D280DD64FDC128086EEE14AD759 (void);
// 0x00000918 System.Net.ICredentials System.Net.EmptyWebProxy::get_Credentials()
extern void EmptyWebProxy_get_Credentials_m471224C14C2A6C30CE38A13FDDC3755177A4D8DD (void);
// 0x00000919 System.Void System.Net.Cookie::.ctor()
extern void Cookie__ctor_m3140A4DBF15D0D649321FEBD9D53EF22F39E4905 (void);
// 0x0000091A System.String System.Net.Cookie::get_Comment()
extern void Cookie_get_Comment_m51FBB45D81565655A5241B5DDD813BC3EC42B592 (void);
// 0x0000091B System.Void System.Net.Cookie::set_Comment(System.String)
extern void Cookie_set_Comment_m9DD420CD69AEF47A1D333E6F9DD80B3414EB1336 (void);
// 0x0000091C System.Void System.Net.Cookie::set_CommentUri(System.Uri)
extern void Cookie_set_CommentUri_mFC039B7C597CD8B07340BE1EC80645CA822365EB (void);
// 0x0000091D System.Void System.Net.Cookie::set_HttpOnly(System.Boolean)
extern void Cookie_set_HttpOnly_mBD64593F68CA7D9EC5D04AFE5F4F973B1D4AE541 (void);
// 0x0000091E System.Void System.Net.Cookie::set_Discard(System.Boolean)
extern void Cookie_set_Discard_m9E0EF24EBC58C5A3000E508D5FC7867484BE77C0 (void);
// 0x0000091F System.String System.Net.Cookie::get_Domain()
extern void Cookie_get_Domain_m4965D8397859F47975FD7E3C31E259B4979AF69A (void);
// 0x00000920 System.Void System.Net.Cookie::set_Domain(System.String)
extern void Cookie_set_Domain_m43C02F2CA6265AA63E8262F4A326E4238F1C4125 (void);
// 0x00000921 System.String System.Net.Cookie::get__Domain()
extern void Cookie_get__Domain_m8957AD2A8BF7C19270B62A6BF2C88E1E11347750 (void);
// 0x00000922 System.Boolean System.Net.Cookie::get_Expired()
extern void Cookie_get_Expired_m61AE9BC48CF91C4831984BAD0ABA77357FF40215 (void);
// 0x00000923 System.Void System.Net.Cookie::set_Expires(System.DateTime)
extern void Cookie_set_Expires_m4B58B8276A8D57BD0B37F05484A4292B96258D1D (void);
// 0x00000924 System.String System.Net.Cookie::get_Name()
extern void Cookie_get_Name_m8DE46D0C6ABF6E6B2D7B82E9A0AFCA04189FD6C1 (void);
// 0x00000925 System.Boolean System.Net.Cookie::InternalSetName(System.String)
extern void Cookie_InternalSetName_m97FFD3EEC5CD4232F2C95A8328F977EAD456E27A (void);
// 0x00000926 System.String System.Net.Cookie::get_Path()
extern void Cookie_get_Path_m805DD94569337D3ADA27B977CE95D672C344E448 (void);
// 0x00000927 System.Void System.Net.Cookie::set_Path(System.String)
extern void Cookie_set_Path_m2EC9F932D33A328A522976DDC2423AC1B62F3D5E (void);
// 0x00000928 System.String System.Net.Cookie::get__Path()
extern void Cookie_get__Path_mD7C431ED16B7443C45A872E061E389E16768CBE0 (void);
// 0x00000929 System.Boolean System.Net.Cookie::get_Plain()
extern void Cookie_get_Plain_m177DD473B1A9B7CD6E80E91862BFA3F9ED142453 (void);
// 0x0000092A System.Boolean System.Net.Cookie::IsDomainEqualToHost(System.String,System.String)
extern void Cookie_IsDomainEqualToHost_m3CE9C1502DEB31D44100BA130C5A277CF8548681 (void);
// 0x0000092B System.Boolean System.Net.Cookie::VerifySetDefaults(System.Net.CookieVariant,System.Uri,System.Boolean,System.String,System.Boolean,System.Boolean)
extern void Cookie_VerifySetDefaults_m5E440E1D11681168E64C83CA3ADB81B80603246C (void);
// 0x0000092C System.Boolean System.Net.Cookie::DomainCharsTest(System.String)
extern void Cookie_DomainCharsTest_mE423C477EE07BA0676C5571B03FD4153030B2EE9 (void);
// 0x0000092D System.Void System.Net.Cookie::set_Port(System.String)
extern void Cookie_set_Port_mBF4BE6DCE6A229EE32A361BD8571CCB213AACB1B (void);
// 0x0000092E System.Int32[] System.Net.Cookie::get_PortList()
extern void Cookie_get_PortList_m6CD4AE81E64F96345FA5F7DFA5A08B3D26585272 (void);
// 0x0000092F System.String System.Net.Cookie::get__Port()
extern void Cookie_get__Port_mAFC419B810D0D3BA8AA96A4934AD074E9603558D (void);
// 0x00000930 System.Boolean System.Net.Cookie::get_Secure()
extern void Cookie_get_Secure_mC66DA9E446CDBF94707FC0BB3986368C5BE3FC40 (void);
// 0x00000931 System.Void System.Net.Cookie::set_Secure(System.Boolean)
extern void Cookie_set_Secure_mCC65037E43CF517C5636B395936B938E1762B467 (void);
// 0x00000932 System.String System.Net.Cookie::get_Value()
extern void Cookie_get_Value_m2FA4FCF7BE3B02C07D7AF1942C135FF3CE2654F8 (void);
// 0x00000933 System.Void System.Net.Cookie::set_Value(System.String)
extern void Cookie_set_Value_m5532B3DAB33D22EF13BBD7A73D4C9B5C2F78BC4C (void);
// 0x00000934 System.Net.CookieVariant System.Net.Cookie::get_Variant()
extern void Cookie_get_Variant_m12BD01DEE266FDACF399BF3ADA69A827319B1511 (void);
// 0x00000935 System.String System.Net.Cookie::get_DomainKey()
extern void Cookie_get_DomainKey_mFA3136D76EB6D9860FFB594DE41DE00179A9C9C1 (void);
// 0x00000936 System.Int32 System.Net.Cookie::get_Version()
extern void Cookie_get_Version_m504ECB98B28863D90067A67125E9636888232C5B (void);
// 0x00000937 System.Void System.Net.Cookie::set_Version(System.Int32)
extern void Cookie_set_Version_m0610EA591E212AAD844B4742FC4204E3D0099AE9 (void);
// 0x00000938 System.String System.Net.Cookie::get__Version()
extern void Cookie_get__Version_m270926E18A41C5CA0E3C2251BEFF3EA14152FA54 (void);
// 0x00000939 System.Collections.IComparer System.Net.Cookie::GetComparer()
extern void Cookie_GetComparer_mFA19780A633FC62C6C1B11DED35FC7712546D396 (void);
// 0x0000093A System.Boolean System.Net.Cookie::Equals(System.Object)
extern void Cookie_Equals_mC107205C12870AB31E46A7DA9419D7A10F0F349F (void);
// 0x0000093B System.Int32 System.Net.Cookie::GetHashCode()
extern void Cookie_GetHashCode_m3105678D015466147809357A7E838789ACF08400 (void);
// 0x0000093C System.String System.Net.Cookie::ToString()
extern void Cookie_ToString_m006CFACD30904A14E95E554C61B8E51BFE710ABC (void);
// 0x0000093D System.Void System.Net.Cookie::.cctor()
extern void Cookie__cctor_m22FE8B9F624B4E9EC5A6AB1BB1C1E1A116D89011 (void);
// 0x0000093E System.Void System.Net.CookieTokenizer::.ctor(System.String)
extern void CookieTokenizer__ctor_mF40370160D2FE65FECE405F705D1F292E796D758 (void);
// 0x0000093F System.Boolean System.Net.CookieTokenizer::get_EndOfCookie()
extern void CookieTokenizer_get_EndOfCookie_mA5163BEED4C3D9D997862B52A9640C1F23B5EAD1 (void);
// 0x00000940 System.Void System.Net.CookieTokenizer::set_EndOfCookie(System.Boolean)
extern void CookieTokenizer_set_EndOfCookie_m07FC3A37954F1242B801EF06CCF3B113C68DC298 (void);
// 0x00000941 System.Boolean System.Net.CookieTokenizer::get_Eof()
extern void CookieTokenizer_get_Eof_m865305270272FE2C093E54DCC4015B09389EFC2E (void);
// 0x00000942 System.String System.Net.CookieTokenizer::get_Name()
extern void CookieTokenizer_get_Name_m6F1C07A7A3F440A5413E3D0A3A08714ED195F245 (void);
// 0x00000943 System.Void System.Net.CookieTokenizer::set_Name(System.String)
extern void CookieTokenizer_set_Name_mF4B810DDEB615A691C25172760D12DE403D8403F (void);
// 0x00000944 System.Boolean System.Net.CookieTokenizer::get_Quoted()
extern void CookieTokenizer_get_Quoted_m939D5156810D29E2FCA61562BAE9A6002D482D73 (void);
// 0x00000945 System.Void System.Net.CookieTokenizer::set_Quoted(System.Boolean)
extern void CookieTokenizer_set_Quoted_m85FFBCD24780380569B37E171E6EE608A2260169 (void);
// 0x00000946 System.Net.CookieToken System.Net.CookieTokenizer::get_Token()
extern void CookieTokenizer_get_Token_m870EB882CDF64A420DA1690E1AE663CF96EB9E98 (void);
// 0x00000947 System.Void System.Net.CookieTokenizer::set_Token(System.Net.CookieToken)
extern void CookieTokenizer_set_Token_m0AEFFBF2611EFB704C2288B04B3346A42240D351 (void);
// 0x00000948 System.String System.Net.CookieTokenizer::get_Value()
extern void CookieTokenizer_get_Value_mF53B7672616BF4742FB0F6068737C2FAD1A01039 (void);
// 0x00000949 System.Void System.Net.CookieTokenizer::set_Value(System.String)
extern void CookieTokenizer_set_Value_m020CC3D259799D42236BDCFAF9A8F3813EBA7D04 (void);
// 0x0000094A System.String System.Net.CookieTokenizer::Extract()
extern void CookieTokenizer_Extract_mC125173301149DD9CF1C465FB76745D8B03F22BD (void);
// 0x0000094B System.Net.CookieToken System.Net.CookieTokenizer::FindNext(System.Boolean,System.Boolean)
extern void CookieTokenizer_FindNext_m59EBA948C86DE59C7855DE17867A2586F87DAEDA (void);
// 0x0000094C System.Net.CookieToken System.Net.CookieTokenizer::Next(System.Boolean,System.Boolean)
extern void CookieTokenizer_Next_m4FFE73A0BB0E8D211774127D912E71B31839AC19 (void);
// 0x0000094D System.Void System.Net.CookieTokenizer::Reset()
extern void CookieTokenizer_Reset_m0847912A8521B353383CF36ECC8E910A87AA90C2 (void);
// 0x0000094E System.Net.CookieToken System.Net.CookieTokenizer::TokenFromName(System.Boolean)
extern void CookieTokenizer_TokenFromName_m1088952A7CC481EC49DE9E7699E98766A6E33F63 (void);
// 0x0000094F System.Void System.Net.CookieTokenizer::.cctor()
extern void CookieTokenizer__cctor_m9276A2CC4E4B24989FB7AF019C1FDD51953DA065 (void);
// 0x00000950 System.Void System.Net.CookieTokenizer/RecognizedAttribute::.ctor(System.String,System.Net.CookieToken)
extern void RecognizedAttribute__ctor_m57B8152BE5C905023F282B5B31A2EDC4A582990A (void);
// 0x00000951 System.Net.CookieToken System.Net.CookieTokenizer/RecognizedAttribute::get_Token()
extern void RecognizedAttribute_get_Token_mB866B1151FF6270E37D33EB30220FC2D7AB1BDEB (void);
// 0x00000952 System.Boolean System.Net.CookieTokenizer/RecognizedAttribute::IsEqualTo(System.String)
extern void RecognizedAttribute_IsEqualTo_m9DAB082F220BB64EBD6825DF9D3A578A99308E0F (void);
// 0x00000953 System.Void System.Net.CookieParser::.ctor(System.String)
extern void CookieParser__ctor_mCC2243C476AC3D7501F95E1313229A1F8DF3B85D (void);
// 0x00000954 System.Net.Cookie System.Net.CookieParser::Get()
extern void CookieParser_Get_mBFC52AE109B308C7EC0A780F864A99A0127B35FA (void);
// 0x00000955 System.String System.Net.CookieParser::CheckQuoted(System.String)
extern void CookieParser_CheckQuoted_m27BD4DA2D4E5EB47F4320778921B598C45C650B0 (void);
// 0x00000956 System.Int32 System.Net.Comparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern void Comparer_System_Collections_IComparer_Compare_mFA642F29069F3F342E2856B50EF80B295FDCA8D6 (void);
// 0x00000957 System.Void System.Net.Comparer::.ctor()
extern void Comparer__ctor_mEF67BBC47130D32EC011BCE7C838625DF32885F1 (void);
// 0x00000958 System.Void System.Net.CookieCollection::.ctor()
extern void CookieCollection__ctor_mBB680E674CC568601670CC1BC998FF92C73E24A6 (void);
// 0x00000959 System.Net.Cookie System.Net.CookieCollection::get_Item(System.Int32)
extern void CookieCollection_get_Item_m68CC6AC48A23053BDF8351C347C96B896E358111 (void);
// 0x0000095A System.Void System.Net.CookieCollection::Add(System.Net.Cookie)
extern void CookieCollection_Add_mA4ABC9A787016B5E6F3AC7B995BFE9DF025F9AEB (void);
// 0x0000095B System.Void System.Net.CookieCollection::Add(System.Net.CookieCollection)
extern void CookieCollection_Add_mFF9A879B83B84C060328C98921C90EBFE78A4F81 (void);
// 0x0000095C System.Int32 System.Net.CookieCollection::get_Count()
extern void CookieCollection_get_Count_m1D34E6D268DF9BDE18D7C8B3458E511F370C44A0 (void);
// 0x0000095D System.Object System.Net.CookieCollection::get_SyncRoot()
extern void CookieCollection_get_SyncRoot_m443908D7AF1954F484B39D1A13ED3279D1B8C00C (void);
// 0x0000095E System.Void System.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern void CookieCollection_CopyTo_mF009D844981C8174751F96A6916BC0F1664A9205 (void);
// 0x0000095F System.DateTime System.Net.CookieCollection::TimeStamp(System.Net.CookieCollection/Stamp)
extern void CookieCollection_TimeStamp_mAD6DFF22124CCE3EFA87188CFCC334125E86561A (void);
// 0x00000960 System.Boolean System.Net.CookieCollection::get_IsOtherVersionSeen()
extern void CookieCollection_get_IsOtherVersionSeen_m671AA0AB32F2CE8CCFCA1D5E9975C86EF86A3B3C (void);
// 0x00000961 System.Int32 System.Net.CookieCollection::InternalAdd(System.Net.Cookie,System.Boolean)
extern void CookieCollection_InternalAdd_mF1BF5B50950935BDBD8D7C8F90282DAC937C68A9 (void);
// 0x00000962 System.Int32 System.Net.CookieCollection::IndexOf(System.Net.Cookie)
extern void CookieCollection_IndexOf_m3B060681C5B1CC2BB468832ED6CBD6D97D905626 (void);
// 0x00000963 System.Void System.Net.CookieCollection::RemoveAt(System.Int32)
extern void CookieCollection_RemoveAt_mB59F81B489A1380746C38C42FCB485C874A91D6E (void);
// 0x00000964 System.Collections.IEnumerator System.Net.CookieCollection::GetEnumerator()
extern void CookieCollection_GetEnumerator_mDE48B747F67C2292E2997FD977A88B37893F79C0 (void);
// 0x00000965 System.Void System.Net.CookieCollection/CookieCollectionEnumerator::.ctor(System.Net.CookieCollection)
extern void CookieCollectionEnumerator__ctor_mC016736D0525F9411D3AF9E5FD93338E26E5AC0F (void);
// 0x00000966 System.Object System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.get_Current()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current_m130ABE61C4B3474C01DA1F80043A0702D598CC02 (void);
// 0x00000967 System.Boolean System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.MoveNext()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_MoveNext_m62C242220555CC0A0E1621F040C11A1AC824FDBA (void);
// 0x00000968 System.Void System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.Reset()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_Reset_mB24F3F140B1E9CE281C9ECB89BB4161B47746BF2 (void);
// 0x00000969 System.Void System.Net.HeaderVariantInfo::.ctor(System.String,System.Net.CookieVariant)
extern void HeaderVariantInfo__ctor_mA0EBB5018465610E64AC1C50B92C94B831721A85 (void);
// 0x0000096A System.String System.Net.HeaderVariantInfo::get_Name()
extern void HeaderVariantInfo_get_Name_m7F37F7252CA8DB9E929D9F5AFB0A4284B094AD42 (void);
// 0x0000096B System.Net.CookieVariant System.Net.HeaderVariantInfo::get_Variant()
extern void HeaderVariantInfo_get_Variant_mD5B9F8CC046969C22B093E491C917C714D9181D1 (void);
// 0x0000096C System.Void System.Net.CookieContainer::.ctor()
extern void CookieContainer__ctor_mDFB99605E29E20FC8F2379AB3F4F56FA9B67834F (void);
// 0x0000096D System.Void System.Net.CookieContainer::AddRemoveDomain(System.String,System.Net.PathList)
extern void CookieContainer_AddRemoveDomain_mE97997731AAFECA5BBC9C30D3A0D3EC829201BFC (void);
// 0x0000096E System.Void System.Net.CookieContainer::Add(System.Net.Cookie,System.Boolean)
extern void CookieContainer_Add_m8C74E813CE210BEF85C2C6F608908AFFF333B5F6 (void);
// 0x0000096F System.Boolean System.Net.CookieContainer::AgeCookies(System.String)
extern void CookieContainer_AgeCookies_mA09C7D26890FE1D96668EEF357F7004E126C73AA (void);
// 0x00000970 System.Int32 System.Net.CookieContainer::ExpireCollection(System.Net.CookieCollection)
extern void CookieContainer_ExpireCollection_m6743A1761960B6F514FFEB6FB73E22E4129C6C3C (void);
// 0x00000971 System.Boolean System.Net.CookieContainer::IsLocalDomain(System.String)
extern void CookieContainer_IsLocalDomain_m9CE5F87CE80369430472496E02D7650944FAE7FB (void);
// 0x00000972 System.Net.CookieCollection System.Net.CookieContainer::CookieCutter(System.Uri,System.String,System.String,System.Boolean)
extern void CookieContainer_CookieCutter_mAD4338632F2604DEE6710883A6AF2C59897A10BA (void);
// 0x00000973 System.Net.CookieCollection System.Net.CookieContainer::InternalGetCookies(System.Uri)
extern void CookieContainer_InternalGetCookies_mC3ABE646BBE4E26032001CC84D3B01B9E8EFB09D (void);
// 0x00000974 System.Void System.Net.CookieContainer::BuildCookieCollectionFromDomainMatches(System.Uri,System.Boolean,System.Int32,System.Net.CookieCollection,System.Collections.Generic.List`1<System.String>,System.Boolean)
extern void CookieContainer_BuildCookieCollectionFromDomainMatches_m9094634C41AC3EB66AE2EDD96A267D02AFF97F3C (void);
// 0x00000975 System.Void System.Net.CookieContainer::MergeUpdateCollections(System.Net.CookieCollection,System.Net.CookieCollection,System.Int32,System.Boolean,System.Boolean)
extern void CookieContainer_MergeUpdateCollections_mBB7E649333123FDBB89F427CC6D151600060140C (void);
// 0x00000976 System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
extern void CookieContainer_GetCookieHeader_m38B9D270352A467A83C4E4B6E1FD14F00106517A (void);
// 0x00000977 System.String System.Net.CookieContainer::GetCookieHeader(System.Uri,System.String&)
extern void CookieContainer_GetCookieHeader_m8C5DD95239D2D4513D25CDE52EF72FA7B350012A (void);
// 0x00000978 System.Void System.Net.CookieContainer::.cctor()
extern void CookieContainer__cctor_mBB3E08595D370CD1B27419990650DDA0FA98EF32 (void);
// 0x00000979 System.Void System.Net.PathList::.ctor()
extern void PathList__ctor_mE0DA71C528E33FE19BF275CB46CC42B0E7F70511 (void);
// 0x0000097A System.Int32 System.Net.PathList::get_Count()
extern void PathList_get_Count_mEA8DB1AA312D311B2CF6821BC4C8BC0B5ABDAAA7 (void);
// 0x0000097B System.Int32 System.Net.PathList::GetCookiesCount()
extern void PathList_GetCookiesCount_m4A311984AFC98AE15CB7581A445A90C796C4977B (void);
// 0x0000097C System.Collections.ICollection System.Net.PathList::get_Values()
extern void PathList_get_Values_m0A80782C84B57C445076B6EEEC3D1BFB6BBDB67E (void);
// 0x0000097D System.Object System.Net.PathList::get_Item(System.String)
extern void PathList_get_Item_mB529DE417A2A6FE25BD6EDB67391C6E70AB77C3D (void);
// 0x0000097E System.Void System.Net.PathList::set_Item(System.String,System.Object)
extern void PathList_set_Item_m3BCAAE9EAEE30AEBF39E4C69283259F94BBA3661 (void);
// 0x0000097F System.Collections.IEnumerator System.Net.PathList::GetEnumerator()
extern void PathList_GetEnumerator_mDD83CA63ED6506403CC63C95B73C93104484171C (void);
// 0x00000980 System.Object System.Net.PathList::get_SyncRoot()
extern void PathList_get_SyncRoot_m6903042A345F56C5D2184AE49F0443D2012A7CCA (void);
// 0x00000981 System.Int32 System.Net.PathList/PathListComparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern void PathListComparer_System_Collections_IComparer_Compare_m51FF85A38FDA9D131FB6EFC999560C8FD25ED336 (void);
// 0x00000982 System.Void System.Net.PathList/PathListComparer::.ctor()
extern void PathListComparer__ctor_m4905B0AA67ADC50CC792AF932CCF405531C75240 (void);
// 0x00000983 System.Void System.Net.PathList/PathListComparer::.cctor()
extern void PathListComparer__cctor_m47E69B632265CCB37A528B41F9AD5E93C76AF232 (void);
// 0x00000984 System.Void System.Net.CookieException::.ctor()
extern void CookieException__ctor_mB5A77C1F9648ECC0984F5F9DDCC05687C2E9CDED (void);
// 0x00000985 System.Void System.Net.CookieException::.ctor(System.String)
extern void CookieException__ctor_m0E120836351D3B4DFA0E6542D805CB96A941EEB1 (void);
// 0x00000986 System.Void System.Net.CookieException::.ctor(System.String,System.Exception)
extern void CookieException__ctor_m8B674A5CEE204C67B8CEEF88783A3A8598A537B4 (void);
// 0x00000987 System.Void System.Net.CookieException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void CookieException__ctor_m7E1E07FED04485652CBED5F27126F196CB9BC380 (void);
// 0x00000988 System.Void System.Net.CookieException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_mB8B637774354CC45258851E226837486ACBDF52D (void);
// 0x00000989 System.Void System.Net.CookieException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void CookieException_GetObjectData_mA90440563768260788500235B906AF63A798CDA3 (void);
// 0x0000098A System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern void FileWebRequest__ctor_m32AA08E0CE88EE4B4328D724C347D7D3F2B3E700 (void);
// 0x0000098B System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest__ctor_m7AF7635D835AAEA13DE9B5F7BF53869032B6E51F (void);
// 0x0000098C System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m73E50CCB8DA4A87382EE2B23DBA184184C238C67 (void);
// 0x0000098D System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest_GetObjectData_mB0C155782CDEA4ED9B05D66308F6223AB0C4E389 (void);
// 0x0000098E System.Boolean System.Net.FileWebRequest::get_Aborted()
extern void FileWebRequest_get_Aborted_mDCF5639158777EE8240560751536AF4CFF1FB3BE (void);
// 0x0000098F System.Int64 System.Net.FileWebRequest::get_ContentLength()
extern void FileWebRequest_get_ContentLength_mB16DDD3E7D2004FE16EC56A419F42146F8522436 (void);
// 0x00000990 System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
extern void FileWebRequest_get_Credentials_m15811E36CF44607B465463B7B5D304FA041D345E (void);
// 0x00000991 System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
extern void FileWebRequest_set_Credentials_m96C5BA6098F2A3A68B316B322590155D6D28666D (void);
// 0x00000992 System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
extern void FileWebRequest_get_Headers_mA3423794B56B845B6E6529CF51F3F8E7B6EE258B (void);
// 0x00000993 System.String System.Net.FileWebRequest::get_Method()
extern void FileWebRequest_get_Method_m8E953132A5F2EBAAAB77EF736122DC98D34A6CF4 (void);
// 0x00000994 System.Void System.Net.FileWebRequest::set_Method(System.String)
extern void FileWebRequest_set_Method_m73F004DA6365ADB70FD3B1F23311B071421F3324 (void);
// 0x00000995 System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
extern void FileWebRequest_get_Proxy_m3F86F95EC0CEBCBDC13A3527DAF7C13E3B4D2D11 (void);
// 0x00000996 System.Void System.Net.FileWebRequest::set_Proxy(System.Net.IWebProxy)
extern void FileWebRequest_set_Proxy_m496B133881523B919110F76A7CB02062388D2691 (void);
// 0x00000997 System.Int32 System.Net.FileWebRequest::get_Timeout()
extern void FileWebRequest_get_Timeout_mCB71B1C9B994821CBB9D13E0BFE48E2339956144 (void);
// 0x00000998 System.Uri System.Net.FileWebRequest::get_RequestUri()
extern void FileWebRequest_get_RequestUri_mED65BA2ED487CB6B9B59E6FCA427F2B8210D8382 (void);
// 0x00000999 System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern void FileWebRequest_BeginGetResponse_m08F29EBE802FE03432A5CB57FDFCA3C5A77CC9FF (void);
// 0x0000099A System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
extern void FileWebRequest_EndGetResponse_m2A6CE91546D40B688C7326A175CEDE7501949973 (void);
// 0x0000099B System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
extern void FileWebRequest_GetResponse_mC0E52C8B9885217929AC660B62A073CD2C63D481 (void);
// 0x0000099C System.Void System.Net.FileWebRequest::GetRequestStreamCallback(System.Object)
extern void FileWebRequest_GetRequestStreamCallback_m62CCC32A81F8350AC6975EEEB79B2D61CC428C8C (void);
// 0x0000099D System.Void System.Net.FileWebRequest::GetResponseCallback(System.Object)
extern void FileWebRequest_GetResponseCallback_m21A70D5427620CCA22552BC8263CEF014B3AF414 (void);
// 0x0000099E System.Void System.Net.FileWebRequest::UnblockReader()
extern void FileWebRequest_UnblockReader_mC1E7C9618A64BC7785D882EB222D92A95244F8B3 (void);
// 0x0000099F System.Boolean System.Net.FileWebRequest::get_UseDefaultCredentials()
extern void FileWebRequest_get_UseDefaultCredentials_m3A68945BADD01035A36BE0D6C46248B0C68EE5BA (void);
// 0x000009A0 System.Void System.Net.FileWebRequest::Abort()
extern void FileWebRequest_Abort_m5749D46C3CA5C4CBD0F8222A1F3308C46C6F77CB (void);
// 0x000009A1 System.Void System.Net.FileWebRequest::.cctor()
extern void FileWebRequest__cctor_m1034782E644D45E398ED29E1ADE0AA1454DFF5F9 (void);
// 0x000009A2 System.Void System.Net.FileWebRequestCreator::.ctor()
extern void FileWebRequestCreator__ctor_mDF264D86311EA60A56DA2B1FCE048E48F0BF6CAB (void);
// 0x000009A3 System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern void FileWebRequestCreator_Create_mB47FFBF665D3B3D20F250AE2396A3C5654637939 (void);
// 0x000009A4 System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern void FileWebStream__ctor_m0F3CC822C4DEE7C71B3FA3FFDCF5B25EAEB2CEAE (void);
// 0x000009A5 System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
extern void FileWebStream__ctor_m9E118415C0F3AD53809A5836C1BD6DFC9913C60B (void);
// 0x000009A6 System.Void System.Net.FileWebStream::Dispose(System.Boolean)
extern void FileWebStream_Dispose_m1155DD4853E8E2ADF2EB7E0A940289F18E4F8EF8 (void);
// 0x000009A7 System.Void System.Net.FileWebStream::System.Net.ICloseEx.CloseEx(System.Net.CloseExState)
extern void FileWebStream_System_Net_ICloseEx_CloseEx_m68BBF0B85ACACDFB200E96968A6E31E8FCA757C4 (void);
// 0x000009A8 System.Int32 System.Net.FileWebStream::Read(System.Byte[],System.Int32,System.Int32)
extern void FileWebStream_Read_mD35B2485DB5F8929EF92A5727FF64A28BF2A5DB0 (void);
// 0x000009A9 System.Void System.Net.FileWebStream::Write(System.Byte[],System.Int32,System.Int32)
extern void FileWebStream_Write_m216E33F6ABF32F817381DEF9DB3B133BC0587468 (void);
// 0x000009AA System.IAsyncResult System.Net.FileWebStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FileWebStream_BeginRead_mAAB039B0A955363303488218A4CBB9845CAEB4CF (void);
// 0x000009AB System.Int32 System.Net.FileWebStream::EndRead(System.IAsyncResult)
extern void FileWebStream_EndRead_m5AEA2D6B64A3CA7E005D9F0929C9D829766F6538 (void);
// 0x000009AC System.IAsyncResult System.Net.FileWebStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FileWebStream_BeginWrite_m686EDD328F0ECED1C8C51E819A61E3BD7A44F5B1 (void);
// 0x000009AD System.Void System.Net.FileWebStream::EndWrite(System.IAsyncResult)
extern void FileWebStream_EndWrite_m5162ABF5383D0F4A52DF6996687868DE6AF9E486 (void);
// 0x000009AE System.Void System.Net.FileWebStream::CheckError()
extern void FileWebStream_CheckError_m7C73A2B18D870AB5869B1F38F325C32E83305F6B (void);
// 0x000009AF System.Void System.Net.FileWebResponse::.ctor(System.Net.FileWebRequest,System.Uri,System.IO.FileAccess,System.Boolean)
extern void FileWebResponse__ctor_mDCECF4C7D821F8FCBA18B5FA8DF2AD303A029C30 (void);
// 0x000009B0 System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse__ctor_m63E4E435D6A83A6DFCE4FB6560F97FD09C50D973 (void);
// 0x000009B1 System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m92E0F46AC675AA9E4EEB159D1B465E085CB4CEC7 (void);
// 0x000009B2 System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse_GetObjectData_m8C157E17C06D23AE9B5E8B00FFDDB3F94209667A (void);
// 0x000009B3 System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
extern void FileWebResponse_get_Headers_m6ABB72A61FD21CD73DB65DD1197076DF0C1B6A89 (void);
// 0x000009B4 System.Uri System.Net.FileWebResponse::get_ResponseUri()
extern void FileWebResponse_get_ResponseUri_mAF08E8518D7536DEB992379B60086DB435F66D46 (void);
// 0x000009B5 System.Void System.Net.FileWebResponse::CheckDisposed()
extern void FileWebResponse_CheckDisposed_mEC4160F0E1B497A73227AB5E06ABFA3FA2E45119 (void);
// 0x000009B6 System.Void System.Net.FileWebResponse::Close()
extern void FileWebResponse_Close_m03BA89FC13B905EC65468C4AFB8FC44A1AFF3F83 (void);
// 0x000009B7 System.Void System.Net.FileWebResponse::System.Net.ICloseEx.CloseEx(System.Net.CloseExState)
extern void FileWebResponse_System_Net_ICloseEx_CloseEx_m9909306B65ECA8038FB0A1DE1D0E72DEC4EB3D39 (void);
// 0x000009B8 System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
extern void FileWebResponse_GetResponseStream_m3221F1B8ADA3CEB5CD010D5EF41ED44E3A9A32BC (void);
// 0x000009B9 System.Uri System.Net.IWebProxy::GetProxy(System.Uri)
// 0x000009BA System.Boolean System.Net.IWebProxy::IsBypassed(System.Uri)
// 0x000009BB System.Net.ICredentials System.Net.IWebProxy::get_Credentials()
// 0x000009BC System.Void System.Net.WebProxy::.ctor()
extern void WebProxy__ctor_m513721AC5813F35B2879182BF7558A2966DDBC34 (void);
// 0x000009BD System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern void WebProxy__ctor_m56D1C9B767710B435DFDCC58891651D915E9E96E (void);
// 0x000009BE System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern void WebProxy_get_Credentials_m76BB7DE06FD84E20406661BF0D98959DC73B28D9 (void);
// 0x000009BF System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern void WebProxy_get_UseDefaultCredentials_mA938B24C5D5406B88C515CC7450B91FBF3BBA28E (void);
// 0x000009C0 System.Void System.Net.WebProxy::set_UseDefaultCredentials(System.Boolean)
extern void WebProxy_set_UseDefaultCredentials_mF60535F31708D6DF7CECC2926EF1634C1333C002 (void);
// 0x000009C1 System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern void WebProxy_GetProxy_mB7D36975267535555BCB1BF449098DB35D01BC8E (void);
// 0x000009C2 System.Void System.Net.WebProxy::UpdateRegExList(System.Boolean)
extern void WebProxy_UpdateRegExList_m7B2EE98DAADC48CBDFA6ED2D491B4E4F00857F48 (void);
// 0x000009C3 System.Boolean System.Net.WebProxy::IsMatchInBypassList(System.Uri)
extern void WebProxy_IsMatchInBypassList_m4D28B54328E1AFB40D9BE518536EE192CE423F50 (void);
// 0x000009C4 System.Boolean System.Net.WebProxy::IsLocal(System.Uri)
extern void WebProxy_IsLocal_mA55F6EF93DD6449B262157E0795507C82356F154 (void);
// 0x000009C5 System.Boolean System.Net.WebProxy::IsLocalInProxyHash(System.Uri)
extern void WebProxy_IsLocalInProxyHash_m20B75565C09C609A0A9C000640B562C1D067A99A (void);
// 0x000009C6 System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern void WebProxy_IsBypassed_m4919E244B263600121FECB9F693AECBDBA30AE38 (void);
// 0x000009C7 System.Boolean System.Net.WebProxy::IsBypassedManual(System.Uri)
extern void WebProxy_IsBypassedManual_m89E6F6F73446B4663DEB837B77ED542A9D5A220B (void);
// 0x000009C8 System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy__ctor_mCD69F94F99FAE8B45E7983EDDD7C8C8FB82F03B6 (void);
// 0x000009C9 System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m80D2CE0C8665B8D1E6CBCAD584496A87934DE312 (void);
// 0x000009CA System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy_GetObjectData_mB8AB2DF20CBEF664997055463E7C4639E43BF52B (void);
// 0x000009CB System.Net.AutoWebProxyScriptEngine System.Net.WebProxy::get_ScriptEngine()
extern void WebProxy_get_ScriptEngine_m0B6FE570183127FAD115C72CBC6BFFF5020004DF (void);
// 0x000009CC System.Net.IWebProxy System.Net.WebProxy::CreateDefaultProxy()
extern void WebProxy_CreateDefaultProxy_mF54A2CCE4E97B5A463DD71DCEF0E7A2A9C1265F3 (void);
// 0x000009CD System.Void System.Net.WebProxy::.ctor(System.Boolean)
extern void WebProxy__ctor_m0D1F873D2441832F41295266069C0887BBD43641 (void);
// 0x000009CE System.Void System.Net.WebProxy::UnsafeUpdateFromRegistry()
extern void WebProxy_UnsafeUpdateFromRegistry_m450A4700AA84B7A0C467365724AB9926F6881167 (void);
// 0x000009CF System.Boolean System.Net.WebProxy::GetProxyAuto(System.Uri,System.Uri&)
extern void WebProxy_GetProxyAuto_m72DBD46E29CD88F40BC0B5D375BB8D30018029BC (void);
// 0x000009D0 System.Boolean System.Net.WebProxy::IsBypassedAuto(System.Uri,System.Boolean&)
extern void WebProxy_IsBypassedAuto_mF4D52FD050AC1CA1672AE503BD23B68794CFD60E (void);
// 0x000009D1 System.Boolean System.Net.WebProxy::AreAllBypassed(System.Collections.Generic.IEnumerable`1<System.String>,System.Boolean)
extern void WebProxy_AreAllBypassed_mD0ED2AEA81FAB6B141A13433406C53A9C8F10F59 (void);
// 0x000009D2 System.Uri System.Net.WebProxy::ProxyUri(System.String)
extern void WebProxy_ProxyUri_mAC61DB0E0378F9FE1ED4CFB5ABB61331312FB85B (void);
// 0x000009D3 System.Boolean System.Net.AutoWebProxyScriptEngine::GetProxies(System.Uri,System.Collections.Generic.IList`1<System.String>&)
extern void AutoWebProxyScriptEngine_GetProxies_m39AEDFB157EFDBE7CE80A569565EAFEA874AE381 (void);
// 0x000009D4 System.Boolean System.Net.AutoWebProxyScriptEngine::GetProxies(System.Uri,System.Collections.Generic.IList`1<System.String>&,System.Int32&)
extern void AutoWebProxyScriptEngine_GetProxies_m0EC7B4AB41D5BDC4DCBDF2CAB12EAF6CAFFD56D1 (void);
// 0x000009D5 System.Void System.Net.UnsafeNclNativeMethods/HttpApi::.cctor()
extern void HttpApi__cctor_m25500D20CEF836B5A6CDA8617F258E5E1B36E292 (void);
// 0x000009D6 System.String System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID::ToString(System.Int32)
extern void HTTP_REQUEST_HEADER_ID_ToString_mA04F9029112EC556EDFEA391089A880B12C0CCD1 (void);
// 0x000009D7 System.Void System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID::.cctor()
extern void HTTP_REQUEST_HEADER_ID__cctor_m7667A781C0701D5BC7191EA0C5D9BC34705C1C51 (void);
// 0x000009D8 System.String System.Net.UnsafeNclNativeMethods/SecureStringHelper::CreateString(System.Security.SecureString)
extern void SecureStringHelper_CreateString_m713072716339E2EE83265145F2F9FEEA105428C5 (void);
// 0x000009D9 System.Security.SecureString System.Net.UnsafeNclNativeMethods/SecureStringHelper::CreateSecureString(System.String)
extern void SecureStringHelper_CreateSecureString_mEB7FEF36DD2FD2DE189C394068B70EA57F56C6D9 (void);
// 0x000009DA System.Void System.Net.ServerCertValidationCallback::.ctor(System.Net.Security.RemoteCertificateValidationCallback)
extern void ServerCertValidationCallback__ctor_mF3AC814542EED45987465791FE7846DE2A8B5603 (void);
// 0x000009DB System.Void System.Net.ServerCertValidationCallback::Callback(System.Object)
extern void ServerCertValidationCallback_Callback_mF04B81117BD337FC77BDB94B8EAA8B8B99A4D72C (void);
// 0x000009DC System.Boolean System.Net.ServerCertValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ServerCertValidationCallback_Invoke_mDDC4DA8F50134EF50257E51B53BE36732550C7E6 (void);
// 0x000009DD System.Void System.Net.ServerCertValidationCallback/CallbackContext::.ctor(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void CallbackContext__ctor_mF5D13B557A13193C357723E572E78E52F108AEB7 (void);
// 0x000009DE System.Void System.Net.AuthenticationManager::EnsureModules()
extern void AuthenticationManager_EnsureModules_mBC5D1F04AC64C8BDE47ECD71540869384D5BE2FF (void);
// 0x000009DF System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void AuthenticationManager_Authenticate_m7A3395F4476A5EB3B63113925740318AE2FD0772 (void);
// 0x000009E0 System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void AuthenticationManager_DoAuthenticate_mF144BD702315E9EA9229EE6E5A64D80EED2464F2 (void);
// 0x000009E1 System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void AuthenticationManager_PreAuthenticate_mC833636F5B4F1628E562BF5D2EC0AF32C9B739E0 (void);
// 0x000009E2 System.Void System.Net.AuthenticationManager::.cctor()
extern void AuthenticationManager__cctor_m7C35169A2E8805181AF003C69A04ED50F8FBC3D2 (void);
// 0x000009E3 System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void BasicClient_Authenticate_mEDF29E1AA7FF454BD66A7666A50184A0BA6C2B76 (void);
// 0x000009E4 System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern void BasicClient_GetBytes_mE2C83F9E3D486DCED7C0C12AD0BA2474ADBEBF58 (void);
// 0x000009E5 System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void BasicClient_InternalAuthenticate_m2EF794B63CA17580CFC5C491044C7EB89A5DFBCC (void);
// 0x000009E6 System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void BasicClient_PreAuthenticate_m7092556C7F17020CF7771E907CA1C1D4A2FF3F38 (void);
// 0x000009E7 System.String System.Net.BasicClient::get_AuthenticationType()
extern void BasicClient_get_AuthenticationType_m7DD0FAFA34F73D71F5787E28A95ED4DC0754379A (void);
// 0x000009E8 System.Void System.Net.BasicClient::.ctor()
extern void BasicClient__ctor_mA1E74A0E4BC0FA70AF8679D1496E29A8D7934949 (void);
// 0x000009E9 System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern void BindIPEndPoint__ctor_mF27083AF738308137AB340ADA66696DEAD4FE3C4 (void);
// 0x000009EA System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern void BindIPEndPoint_Invoke_mDA96740B189FB74B6A3425E8A8A0112678D171A3 (void);
// 0x000009EB System.Void System.Net.DigestHeaderParser::.ctor(System.String)
extern void DigestHeaderParser__ctor_m89162972D1A691B65C14B5402683FB3C2FB4CE7E (void);
// 0x000009EC System.String System.Net.DigestHeaderParser::get_Realm()
extern void DigestHeaderParser_get_Realm_mA92099ECCCB683BA4490769F9E0DD80E925DE989 (void);
// 0x000009ED System.String System.Net.DigestHeaderParser::get_Opaque()
extern void DigestHeaderParser_get_Opaque_mA5DEB9241930B6E980B97255460FDDFADE75459B (void);
// 0x000009EE System.String System.Net.DigestHeaderParser::get_Nonce()
extern void DigestHeaderParser_get_Nonce_mAC661197509F3A8F50FD2056BE6DA476F54FFA18 (void);
// 0x000009EF System.String System.Net.DigestHeaderParser::get_Algorithm()
extern void DigestHeaderParser_get_Algorithm_mFB926080495CB2ABD8298568D7DBF8245DDED90F (void);
// 0x000009F0 System.String System.Net.DigestHeaderParser::get_QOP()
extern void DigestHeaderParser_get_QOP_m5796E6AFE8914BAD188B77C7F80D01BD4567C443 (void);
// 0x000009F1 System.Boolean System.Net.DigestHeaderParser::Parse()
extern void DigestHeaderParser_Parse_mF5F114E586CB7BEA50BD14AA20438DA7CA1D19CD (void);
// 0x000009F2 System.Void System.Net.DigestHeaderParser::SkipWhitespace()
extern void DigestHeaderParser_SkipWhitespace_m83A2E761FBB1290AFC5CD53130CFA60D0D5B67E2 (void);
// 0x000009F3 System.String System.Net.DigestHeaderParser::GetKey()
extern void DigestHeaderParser_GetKey_m03193506B7977BE72195ADFE3ADB5FE5C0B205D8 (void);
// 0x000009F4 System.Boolean System.Net.DigestHeaderParser::GetKeywordAndValue(System.String&,System.String&)
extern void DigestHeaderParser_GetKeywordAndValue_mB0FCB83A78B360CBA9CEE1A0E64A6D8099A5A235 (void);
// 0x000009F5 System.Void System.Net.DigestHeaderParser::.cctor()
extern void DigestHeaderParser__cctor_mA2DC2061CF8179977827EA19CF2B753FE2904CE5 (void);
// 0x000009F6 System.Void System.Net.DigestSession::.cctor()
extern void DigestSession__cctor_mA876EA67B0596D7097D1F951AEE5535A34891046 (void);
// 0x000009F7 System.Void System.Net.DigestSession::.ctor()
extern void DigestSession__ctor_mBC472E7D777C2734C1BB6A1CB8A6A3CC05A1A100 (void);
// 0x000009F8 System.String System.Net.DigestSession::get_Algorithm()
extern void DigestSession_get_Algorithm_mB31B9ED4EBCAC2093680C9F17BBB52B39F298D5B (void);
// 0x000009F9 System.String System.Net.DigestSession::get_Realm()
extern void DigestSession_get_Realm_m91E2F1AA08F29D0B6A0D01892C5FDE31DA48FF88 (void);
// 0x000009FA System.String System.Net.DigestSession::get_Nonce()
extern void DigestSession_get_Nonce_m8FDB05DDBF322A52A33A47C1B68117ACA6E196FF (void);
// 0x000009FB System.String System.Net.DigestSession::get_Opaque()
extern void DigestSession_get_Opaque_m3D8A178D0D39B7997956D18FCBCB1D648437A8B3 (void);
// 0x000009FC System.String System.Net.DigestSession::get_QOP()
extern void DigestSession_get_QOP_mB2876A36998E6B62399BAD9E7CD3C52EE2F9FBB1 (void);
// 0x000009FD System.String System.Net.DigestSession::get_CNonce()
extern void DigestSession_get_CNonce_m1EB2C04F305C4D6EB9C6A9C6FDCB0C7448072BD4 (void);
// 0x000009FE System.Boolean System.Net.DigestSession::Parse(System.String)
extern void DigestSession_Parse_m9F496F9394081988C708D66D7D4A20AB013D0044 (void);
// 0x000009FF System.String System.Net.DigestSession::HashToHexString(System.String)
extern void DigestSession_HashToHexString_m361FB17D751CF79D6653EA3B33133269C5551483 (void);
// 0x00000A00 System.String System.Net.DigestSession::HA1(System.String,System.String)
extern void DigestSession_HA1_mF32650BB006D375D5AB3F441E308CD3BA5BAC01E (void);
// 0x00000A01 System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
extern void DigestSession_HA2_m6E6CC00104804C9FE68FEFF0BE4B241AD7BCBF1E (void);
// 0x00000A02 System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
extern void DigestSession_Response_m5C59CBB9D15FE06153945D5A977791CD65E32F31 (void);
// 0x00000A03 System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void DigestSession_Authenticate_m820DC43ACC7FBA2D3CF80998301C130826B29844 (void);
// 0x00000A04 System.DateTime System.Net.DigestSession::get_LastUse()
extern void DigestSession_get_LastUse_m1C892CE95B0E4C48CF2862FF19EB253F69FDBF35 (void);
// 0x00000A05 System.Collections.Hashtable System.Net.DigestClient::get_Cache()
extern void DigestClient_get_Cache_m1ED967FA785B68D8E0E7A673965FB4AEAF7199A1 (void);
// 0x00000A06 System.Void System.Net.DigestClient::CheckExpired(System.Int32)
extern void DigestClient_CheckExpired_mA93FEFF9CC4EE37D447BB2C5C9A9FC039F492FF0 (void);
// 0x00000A07 System.Net.Authorization System.Net.DigestClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void DigestClient_Authenticate_m0F43DCC4896D346D6AC5CF0B1835A3048028A76F (void);
// 0x00000A08 System.Net.Authorization System.Net.DigestClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void DigestClient_PreAuthenticate_m662ECE67D74E24DFD4DA00891379156A0603981B (void);
// 0x00000A09 System.String System.Net.DigestClient::get_AuthenticationType()
extern void DigestClient_get_AuthenticationType_m3088368B9DC55E69D09F2413C16180138018BC42 (void);
// 0x00000A0A System.Void System.Net.DigestClient::.ctor()
extern void DigestClient__ctor_mEF363337211025F9FF45487F42B75794759A801B (void);
// 0x00000A0B System.Void System.Net.DigestClient::.cctor()
extern void DigestClient__cctor_mCD15E0F5AD318C7B6C913B035A0C08B14AC34C46 (void);
// 0x00000A0C System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&,System.Int32)
extern void Dns_GetHostByName_internal_m2538DE340BD4D2D3B6A80057E6A528B89A3D4F21 (void);
// 0x00000A0D System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&,System.Int32)
extern void Dns_GetHostByAddr_internal_m6DBC90F0916C6AF585F088270CF46958AD6D8F26 (void);
// 0x00000A0E System.Boolean System.Net.Dns::GetHostName_internal(System.String&)
extern void Dns_GetHostName_internal_m0146430415EF65E6B051BA4297C59C577E6AEA8C (void);
// 0x00000A0F System.Void System.Net.Dns::Error_11001(System.String)
extern void Dns_Error_11001_m23687C2F5E4CB975F023D3775A1E7DC5B61DB83C (void);
// 0x00000A10 System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String,System.String[],System.String[])
extern void Dns_hostent_to_IPHostEntry_mC5D77A6DE5F97D1A47AD86CAD4F69FF780A12159 (void);
// 0x00000A11 System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern void Dns_GetHostByAddressFromString_mE3A65EDABDD9DBBA0879B21F4A545BA7613683A8 (void);
// 0x00000A12 System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern void Dns_GetHostEntry_m01156278E5CDAE38B7E1B2EC617F505A4B836D02 (void);
// 0x00000A13 System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern void Dns_GetHostEntry_m09C47D2D4329E24D56DCA5BDA6D4F28FEC45EC87 (void);
// 0x00000A14 System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern void Dns_GetHostByName_m554E787DE7A847C2730E1BE8F74C56E9594C3D3F (void);
// 0x00000A15 System.String System.Net.Dns::GetHostName()
extern void Dns_GetHostName_mF728787FF8A38620054B934FD08E021460A7C14D (void);
// 0x00000A16 System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern void FtpAsyncResult__ctor_m4E85B95A228569C6AC0ED5195884770F1C0C2FC6 (void);
// 0x00000A17 System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern void FtpAsyncResult_get_AsyncState_m8BD267B85A2A145321420582AB4C8D49323FC18B (void);
// 0x00000A18 System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern void FtpAsyncResult_get_AsyncWaitHandle_m78F44D9204B1EC74E82D9144918A64737255187B (void);
// 0x00000A19 System.Boolean System.Net.FtpAsyncResult::get_CompletedSynchronously()
extern void FtpAsyncResult_get_CompletedSynchronously_m906804774D418DCFCE4379A908196662EC6FB4A3 (void);
// 0x00000A1A System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern void FtpAsyncResult_get_IsCompleted_m5FF995186933F3BA66105C4F6E0E96AD08473C12 (void);
// 0x00000A1B System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern void FtpAsyncResult_get_GotException_m93C05C830E3F59871DB6F8C6E36C81EAD122C7AA (void);
// 0x00000A1C System.Exception System.Net.FtpAsyncResult::get_Exception()
extern void FtpAsyncResult_get_Exception_m457173F8A721C385E888AE5E9A5F463CA559138E (void);
// 0x00000A1D System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern void FtpAsyncResult_get_Response_m5D1A596DFA255FB22FEEA9DB0B12AD0C578CF372 (void);
// 0x00000A1E System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern void FtpAsyncResult_set_Stream_m24E44F3AE35589D7D478D12FE7864DCA6FB21718 (void);
// 0x00000A1F System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern void FtpAsyncResult_WaitUntilComplete_m06A75502900D0BFA47399C0D33074FFCED9315A8 (void);
// 0x00000A20 System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern void FtpAsyncResult_SetCompleted_m3CC4806B14D76D46E8637DB0EEBA950AA01E61AC (void);
// 0x00000A21 System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern void FtpAsyncResult_SetCompleted_mE407445A24BBB44A4AD1B08F176B9F856A1703A6 (void);
// 0x00000A22 System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern void FtpAsyncResult_SetCompleted_mDE601AEDEB48DB8FB64E4A0919487B999337A7DA (void);
// 0x00000A23 System.Void System.Net.FtpAsyncResult::DoCallback()
extern void FtpAsyncResult_DoCallback_mD3F4E5CD082ED7A26D78F533B6B8551588484741 (void);
// 0x00000A24 System.Void System.Net.FtpDataStream::.ctor(System.Net.FtpWebRequest,System.IO.Stream,System.Boolean)
extern void FtpDataStream__ctor_m0D04EE8797AF05DEC33F199DC03A6E3BCFEAC40A (void);
// 0x00000A25 System.Boolean System.Net.FtpDataStream::get_CanRead()
extern void FtpDataStream_get_CanRead_mB136FDA74BD17ECC05F810CEC8DA8452725F88BC (void);
// 0x00000A26 System.Boolean System.Net.FtpDataStream::get_CanWrite()
extern void FtpDataStream_get_CanWrite_mAD89E9F515C503810E61BB8F044CF512DDD9E0EE (void);
// 0x00000A27 System.Boolean System.Net.FtpDataStream::get_CanSeek()
extern void FtpDataStream_get_CanSeek_m16CFE4B9386DA93BD72857FD3DDAC124B68BEEAA (void);
// 0x00000A28 System.Int64 System.Net.FtpDataStream::get_Length()
extern void FtpDataStream_get_Length_m41102D2823EC5DA138301485C9A96DA8BC507614 (void);
// 0x00000A29 System.Int64 System.Net.FtpDataStream::get_Position()
extern void FtpDataStream_get_Position_m61B62F61A716965679CC54C94B1C16E4694CD957 (void);
// 0x00000A2A System.Void System.Net.FtpDataStream::set_Position(System.Int64)
extern void FtpDataStream_set_Position_m079639CACCF2F27743CA7213A0DB8A64759D04B0 (void);
// 0x00000A2B System.Void System.Net.FtpDataStream::Close()
extern void FtpDataStream_Close_m2994645818E1892A088FBDCA8FE2029698CA5EFE (void);
// 0x00000A2C System.Void System.Net.FtpDataStream::Flush()
extern void FtpDataStream_Flush_m68DD6058C64DF629BD9E77C15821CE07E4CB8157 (void);
// 0x00000A2D System.Int64 System.Net.FtpDataStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void FtpDataStream_Seek_m14D6F555BAE0811E39C12619CED96986472CABC7 (void);
// 0x00000A2E System.Int32 System.Net.FtpDataStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern void FtpDataStream_ReadInternal_m37AB01359804474D7AB8E9EA68B44C0348980B3E (void);
// 0x00000A2F System.IAsyncResult System.Net.FtpDataStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FtpDataStream_BeginRead_m5164D1F47EBDF439C369ECF12776AFF3A721FAAA (void);
// 0x00000A30 System.Int32 System.Net.FtpDataStream::EndRead(System.IAsyncResult)
extern void FtpDataStream_EndRead_m0C22E9C40BBBCBFA9ACA9D672059F8E3A852339C (void);
// 0x00000A31 System.Int32 System.Net.FtpDataStream::Read(System.Byte[],System.Int32,System.Int32)
extern void FtpDataStream_Read_m80A22ED0497EEACE48277E18ED0E9B4190542D44 (void);
// 0x00000A32 System.Void System.Net.FtpDataStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern void FtpDataStream_WriteInternal_m75C61600719DFA6970DC97AB5510FC3B66E2317F (void);
// 0x00000A33 System.IAsyncResult System.Net.FtpDataStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FtpDataStream_BeginWrite_m5C92FBF9A19E02023A289311E0BBD2647F4D64FF (void);
// 0x00000A34 System.Void System.Net.FtpDataStream::EndWrite(System.IAsyncResult)
extern void FtpDataStream_EndWrite_mC462BE976E9BBDD4EDD8CF8DE0EC5E9224973CC9 (void);
// 0x00000A35 System.Void System.Net.FtpDataStream::Write(System.Byte[],System.Int32,System.Int32)
extern void FtpDataStream_Write_m5B917E5BAB484222765206736846B9816A835183 (void);
// 0x00000A36 System.Void System.Net.FtpDataStream::Finalize()
extern void FtpDataStream_Finalize_mF2CCF562A760DD1E19A01F26C8F0FE9A659AC051 (void);
// 0x00000A37 System.Void System.Net.FtpDataStream::System.IDisposable.Dispose()
extern void FtpDataStream_System_IDisposable_Dispose_mCB31301C6E8B5BD5993CAD65FD8B429EAE817F9A (void);
// 0x00000A38 System.Void System.Net.FtpDataStream::Dispose(System.Boolean)
extern void FtpDataStream_Dispose_m40A248B7B3B4AA751449298E068A48711AF2437A (void);
// 0x00000A39 System.Void System.Net.FtpDataStream::CheckDisposed()
extern void FtpDataStream_CheckDisposed_m4C268B1A3D4971528BE4CB7A7D13998FCD36506E (void);
// 0x00000A3A System.Void System.Net.FtpDataStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern void WriteDelegate__ctor_mE3ACD413735537F95E1FFBFE55828874421EED3E (void);
// 0x00000A3B System.Void System.Net.FtpDataStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern void WriteDelegate_Invoke_m606B74F2B74505874614E65BB41D146DB6679095 (void);
// 0x00000A3C System.IAsyncResult System.Net.FtpDataStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void WriteDelegate_BeginInvoke_mBE5883BEDBEC5E6B1578ADFCE8D977C3A547575B (void);
// 0x00000A3D System.Void System.Net.FtpDataStream/WriteDelegate::EndInvoke(System.IAsyncResult)
extern void WriteDelegate_EndInvoke_m0D6B2C8201F837EE8AC6C38EFCC8E4D646BB361A (void);
// 0x00000A3E System.Void System.Net.FtpDataStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
extern void ReadDelegate__ctor_m801629AC172220BA2426EBC9FBABD9B646545E56 (void);
// 0x00000A3F System.Int32 System.Net.FtpDataStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern void ReadDelegate_Invoke_m7D90C040C37AB216FD5BEAEEDDC42615A2289090 (void);
// 0x00000A40 System.IAsyncResult System.Net.FtpDataStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void ReadDelegate_BeginInvoke_m4553D0969D0F03811F79BE9F6A9E303B2758A730 (void);
// 0x00000A41 System.Int32 System.Net.FtpDataStream/ReadDelegate::EndInvoke(System.IAsyncResult)
extern void ReadDelegate_EndInvoke_mC8A99411E7F410288E998A01744E40FC4A57E728 (void);
// 0x00000A42 System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern void FtpRequestCreator_Create_m82E124A7B920BEA5FAB9CF5DDA14B24DDD8D7FE4 (void);
// 0x00000A43 System.Void System.Net.FtpRequestCreator::.ctor()
extern void FtpRequestCreator__ctor_m3DB914BE12BDA428301625BE3E772AC0405B535A (void);
// 0x00000A44 System.Void System.Net.FtpStatus::.ctor(System.Net.FtpStatusCode,System.String)
extern void FtpStatus__ctor_m331E4573150926CDA6FAB237EA5653F15F0E01D7 (void);
// 0x00000A45 System.Net.FtpStatusCode System.Net.FtpStatus::get_StatusCode()
extern void FtpStatus_get_StatusCode_m240BED357998C87889C93C28AD3D975080A260FE (void);
// 0x00000A46 System.String System.Net.FtpStatus::get_StatusDescription()
extern void FtpStatus_get_StatusDescription_m9FCF79AFD4944ECD43F260BA33782756C7903499 (void);
// 0x00000A47 System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern void FtpWebRequest__ctor_mE322968A58EF47DADD907F88EAA7FB4E00543B77 (void);
// 0x00000A48 System.Exception System.Net.FtpWebRequest::GetMustImplement()
extern void FtpWebRequest_GetMustImplement_mFF269B9D5592EC1DE3BAA8F42FFE1E8FA368EC75 (void);
// 0x00000A49 System.Int64 System.Net.FtpWebRequest::get_ContentLength()
extern void FtpWebRequest_get_ContentLength_mAF7452EC5E6497F2E093A56BE157B27EF30AA052 (void);
// 0x00000A4A System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
extern void FtpWebRequest_get_Credentials_mD7E41D3F3E9D53C87C8FBC639554C134E834B5DA (void);
// 0x00000A4B System.Void System.Net.FtpWebRequest::set_Credentials(System.Net.ICredentials)
extern void FtpWebRequest_set_Credentials_m6BD777D7820D5BBA97E49B2A480420AF2DD79B9A (void);
// 0x00000A4C System.Boolean System.Net.FtpWebRequest::get_EnableSsl()
extern void FtpWebRequest_get_EnableSsl_mE30506F987A04EB9771FD530066BC18A9F2A7ED8 (void);
// 0x00000A4D System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
extern void FtpWebRequest_get_Headers_mAA9F97EA5BF0115BD58AEC6E4E9C610643C5F031 (void);
// 0x00000A4E System.String System.Net.FtpWebRequest::get_Method()
extern void FtpWebRequest_get_Method_m76600B77DC79C16B5ED7E4E8A8D8998B82FBD506 (void);
// 0x00000A4F System.Void System.Net.FtpWebRequest::set_Method(System.String)
extern void FtpWebRequest_set_Method_mC770F8F66E7CEE6C513DDE38D97D50CC7E5C0560 (void);
// 0x00000A50 System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
extern void FtpWebRequest_get_Proxy_m58F2BDAB196B855C65E59D432B5C0760C0E0AF21 (void);
// 0x00000A51 System.Void System.Net.FtpWebRequest::set_Proxy(System.Net.IWebProxy)
extern void FtpWebRequest_set_Proxy_mA142CDA01AA7953FF40A1448B98BFF8845D973BF (void);
// 0x00000A52 System.Int32 System.Net.FtpWebRequest::get_ReadWriteTimeout()
extern void FtpWebRequest_get_ReadWriteTimeout_mB6F0DF85418ED4107E9AA448C46B289C3C36CECF (void);
// 0x00000A53 System.Uri System.Net.FtpWebRequest::get_RequestUri()
extern void FtpWebRequest_get_RequestUri_mE435FBA45447DC0D5826C9128DCD99474CE12D0D (void);
// 0x00000A54 System.Net.ServicePoint System.Net.FtpWebRequest::get_ServicePoint()
extern void FtpWebRequest_get_ServicePoint_m18C759570EC5DD4D44264BEF53356637B1142F7B (void);
// 0x00000A55 System.Boolean System.Net.FtpWebRequest::get_UseDefaultCredentials()
extern void FtpWebRequest_get_UseDefaultCredentials_mAD856EDBDCF69FB4ABDE74722A1D446C59000A86 (void);
// 0x00000A56 System.Int32 System.Net.FtpWebRequest::get_Timeout()
extern void FtpWebRequest_get_Timeout_m58C5D209E4958C3F49DEA797966FBE802BE33010 (void);
// 0x00000A57 System.String System.Net.FtpWebRequest::get_DataType()
extern void FtpWebRequest_get_DataType_mF6681117F91646E791FB2556DB26962D85651F1C (void);
// 0x00000A58 System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
extern void FtpWebRequest_get_State_mBBE80E64A8F04964B76528B84EED588824890600 (void);
// 0x00000A59 System.Void System.Net.FtpWebRequest::set_State(System.Net.FtpWebRequest/RequestState)
extern void FtpWebRequest_set_State_m0814DE4544E0DE0FA446C3C49A5D61C5EF5E229A (void);
// 0x00000A5A System.Void System.Net.FtpWebRequest::Abort()
extern void FtpWebRequest_Abort_m692F58C2CAE79DF9BE85C883804FBDF8ED3ADF8E (void);
// 0x00000A5B System.IAsyncResult System.Net.FtpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern void FtpWebRequest_BeginGetResponse_mEB30D254D530BA29140C679AA1BDE6F8D472DEBF (void);
// 0x00000A5C System.Net.WebResponse System.Net.FtpWebRequest::EndGetResponse(System.IAsyncResult)
extern void FtpWebRequest_EndGetResponse_mB67129902D8A7767D96CCECB5A1B5B25F8C1EBB8 (void);
// 0x00000A5D System.Net.WebResponse System.Net.FtpWebRequest::GetResponse()
extern void FtpWebRequest_GetResponse_m2E40BD4F0CCC5D9B8B6D5C20509CE9AC5EE2FFFA (void);
// 0x00000A5E System.Net.ServicePoint System.Net.FtpWebRequest::GetServicePoint()
extern void FtpWebRequest_GetServicePoint_m369915FEB96529F5E1DBEFE832A091D9F3B53D4B (void);
// 0x00000A5F System.Void System.Net.FtpWebRequest::ResolveHost()
extern void FtpWebRequest_ResolveHost_m4BFAAC8F188CBCC0E2D49CCB8D0BC756B8395C62 (void);
// 0x00000A60 System.Void System.Net.FtpWebRequest::ProcessRequest()
extern void FtpWebRequest_ProcessRequest_mC6F332082E298184271C966BFDBA5537ADE9A2BF (void);
// 0x00000A61 System.Void System.Net.FtpWebRequest::SetType()
extern void FtpWebRequest_SetType_mFDAE78155ECB584AA68D41DCAEB5AFD83CF8636A (void);
// 0x00000A62 System.String System.Net.FtpWebRequest::GetRemoteFolderPath(System.Uri)
extern void FtpWebRequest_GetRemoteFolderPath_m57A1BF695209BE691A1656E1F02E4CA4A64F7EF5 (void);
// 0x00000A63 System.Void System.Net.FtpWebRequest::CWDAndSetFileName(System.Uri)
extern void FtpWebRequest_CWDAndSetFileName_m6CEF2693EFCCC700E53430DEADB552ED3E2E774B (void);
// 0x00000A64 System.Void System.Net.FtpWebRequest::ProcessMethod()
extern void FtpWebRequest_ProcessMethod_mE613340024C44C2EAEFE71062378325F1F6295B8 (void);
// 0x00000A65 System.Void System.Net.FtpWebRequest::CloseControlConnection()
extern void FtpWebRequest_CloseControlConnection_m3C5233FA9F4473EF597A8653D8E7A93AEC4C0E5C (void);
// 0x00000A66 System.Void System.Net.FtpWebRequest::CloseDataConnection()
extern void FtpWebRequest_CloseDataConnection_m28B54AE1E2A5B618E8E77DB83EFE0E6EFF9F3315 (void);
// 0x00000A67 System.Void System.Net.FtpWebRequest::CloseConnection()
extern void FtpWebRequest_CloseConnection_mAEBBB47BB26F8C8BF7BA465B5EE4E20F96FDDD78 (void);
// 0x00000A68 System.Void System.Net.FtpWebRequest::ProcessSimpleMethod()
extern void FtpWebRequest_ProcessSimpleMethod_mBC422DFE925B1B2CACA07DAEC91F499C2C121FE0 (void);
// 0x00000A69 System.Void System.Net.FtpWebRequest::UploadData()
extern void FtpWebRequest_UploadData_m9567D9C96FF847FF532FD122E7B4A84FC068B0F7 (void);
// 0x00000A6A System.Void System.Net.FtpWebRequest::DownloadData()
extern void FtpWebRequest_DownloadData_mCB871EECA82AE93A6F5E1248A261AF494771D2CC (void);
// 0x00000A6B System.Void System.Net.FtpWebRequest::CheckRequestStarted()
extern void FtpWebRequest_CheckRequestStarted_m5AC3FB45CDDC221231FD710B981073C813315B2C (void);
// 0x00000A6C System.Void System.Net.FtpWebRequest::OpenControlConnection()
extern void FtpWebRequest_OpenControlConnection_m082B9F4ADB13B5611801B36D755D1374B2002988 (void);
// 0x00000A6D System.String System.Net.FtpWebRequest::GetInitialPath(System.Net.FtpStatus)
extern void FtpWebRequest_GetInitialPath_mC099032D91D4FA69F025C41710ADD386658561C4 (void);
// 0x00000A6E System.Net.Sockets.Socket System.Net.FtpWebRequest::SetupPassiveConnection(System.String,System.Boolean)
extern void FtpWebRequest_SetupPassiveConnection_m714596923B571CBA8D744061218217F35A620542 (void);
// 0x00000A6F System.Int32 System.Net.FtpWebRequest::GetPortV4(System.String)
extern void FtpWebRequest_GetPortV4_mE66B65FD64DF6E79DC3416D648210CF05BAAB18A (void);
// 0x00000A70 System.Int32 System.Net.FtpWebRequest::GetPortV6(System.String)
extern void FtpWebRequest_GetPortV6_m88D13799C19B9BC3C8F798083EBCB4AD079912C6 (void);
// 0x00000A71 System.String System.Net.FtpWebRequest::FormatAddress(System.Net.IPAddress,System.Int32)
extern void FtpWebRequest_FormatAddress_m94930DDEFF314661E2735325302A94EA336AD089 (void);
// 0x00000A72 System.String System.Net.FtpWebRequest::FormatAddressV6(System.Net.IPAddress,System.Int32)
extern void FtpWebRequest_FormatAddressV6_mD43D5B10E865916D76B8EFD3DFD408FFC83D7ECA (void);
// 0x00000A73 System.Exception System.Net.FtpWebRequest::CreateExceptionFromResponse(System.Net.FtpStatus)
extern void FtpWebRequest_CreateExceptionFromResponse_m1AC4CCD5E55962947E6AF924B743502867715A8E (void);
// 0x00000A74 System.Void System.Net.FtpWebRequest::SetTransferCompleted()
extern void FtpWebRequest_SetTransferCompleted_m6DD85C30BC3A5D4A623C31F2AF9DFCA332E8E3D8 (void);
// 0x00000A75 System.Void System.Net.FtpWebRequest::OperationCompleted()
extern void FtpWebRequest_OperationCompleted_m00D08F9A9861B41906117523627D85C4A1DE8AC0 (void);
// 0x00000A76 System.Void System.Net.FtpWebRequest::SetCompleteWithError(System.Exception)
extern void FtpWebRequest_SetCompleteWithError_m6BD21B72584F0E2D12CC797ECF5D26ADAC61C4BD (void);
// 0x00000A77 System.Net.Sockets.Socket System.Net.FtpWebRequest::InitDataConnection()
extern void FtpWebRequest_InitDataConnection_m3FFBCF8092CC74B1C8DFD0B35E7EB9AF750C003B (void);
// 0x00000A78 System.Void System.Net.FtpWebRequest::OpenDataConnection()
extern void FtpWebRequest_OpenDataConnection_m627DEBC2C46A1150F86CB7B134E279C7BFBD5287 (void);
// 0x00000A79 System.Void System.Net.FtpWebRequest::Authenticate()
extern void FtpWebRequest_Authenticate_m2B8E0577D69D8C0C24BB5D4CB62C6357ACA1D0C6 (void);
// 0x00000A7A System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.String,System.String[])
extern void FtpWebRequest_SendCommand_mCD940557567706A2143CF32B9CE7EF7AB19B0D4A (void);
// 0x00000A7B System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.Boolean,System.String,System.String[])
extern void FtpWebRequest_SendCommand_m8F108E3A43FA1757873AC7E089B5ED659135F768 (void);
// 0x00000A7C System.Net.FtpStatus System.Net.FtpWebRequest::ServiceNotAvailable()
extern void FtpWebRequest_ServiceNotAvailable_m3F2F9791C285D0ABE146BF356096E1B52942D904 (void);
// 0x00000A7D System.Net.FtpStatus System.Net.FtpWebRequest::GetResponseStatus()
extern void FtpWebRequest_GetResponseStatus_m12A45B91B01ABA28DCC05ED006ACF8955F9A0EBE (void);
// 0x00000A7E System.Void System.Net.FtpWebRequest::InitiateSecureConnection(System.IO.Stream&)
extern void FtpWebRequest_InitiateSecureConnection_mB0DD9BA8E2E36CE7E1E9EF49418F06A829805135 (void);
// 0x00000A7F System.Boolean System.Net.FtpWebRequest::ChangeToSSLSocket(System.IO.Stream&)
extern void FtpWebRequest_ChangeToSSLSocket_m0B886C31234A1866D3D746AC830ED9405BE4131A (void);
// 0x00000A80 System.Boolean System.Net.FtpWebRequest::InFinalState()
extern void FtpWebRequest_InFinalState_m7980C29355CB780471F3DBB6A43B962D35D681E3 (void);
// 0x00000A81 System.Boolean System.Net.FtpWebRequest::InProgress()
extern void FtpWebRequest_InProgress_m23A44C6F2ECC5D5A480C3934A48616360FF68CF8 (void);
// 0x00000A82 System.Void System.Net.FtpWebRequest::CheckIfAborted()
extern void FtpWebRequest_CheckIfAborted_mF18A64E7C0A8BD08F157D7B71926C1562AA66557 (void);
// 0x00000A83 System.Void System.Net.FtpWebRequest::CheckFinalState()
extern void FtpWebRequest_CheckFinalState_m4FFEEEB78A1D6AA2337A400828FA62EE15617D68 (void);
// 0x00000A84 System.Void System.Net.FtpWebRequest::.cctor()
extern void FtpWebRequest__cctor_m828B5A5267951FE5E80B4AE153163FCBA4BF026D (void);
// 0x00000A85 System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
extern void FtpWebResponse__ctor_mA9C28022A58CAF689B3FB04458E3D6E86ACCBEB4 (void);
// 0x00000A86 System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
extern void FtpWebResponse__ctor_m3BD8D0E1DE29F4E8C7AB3CBCC0FF4F794752C3FB (void);
// 0x00000A87 System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
extern void FtpWebResponse__ctor_mA0C7B694338D843A89A13494F7E959A17DFED7B0 (void);
// 0x00000A88 System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
extern void FtpWebResponse_get_Headers_m0EC3B53A0804C6442101F3187F141C4ED1EA6D0F (void);
// 0x00000A89 System.Uri System.Net.FtpWebResponse::get_ResponseUri()
extern void FtpWebResponse_get_ResponseUri_m6B5B02E5CF3F53F21100824DA95850AE1AF6A3B3 (void);
// 0x00000A8A System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
extern void FtpWebResponse_set_LastModified_m6007A54B820FE638A2A3ED8FEDE244FE98B21445 (void);
// 0x00000A8B System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
extern void FtpWebResponse_set_BannerMessage_m0A94D165356AB5DF576D276ACB7E53D4AD866672 (void);
// 0x00000A8C System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
extern void FtpWebResponse_set_WelcomeMessage_m2050A8CE4C88FCC004BF72D4753BE32D73A35347 (void);
// 0x00000A8D System.Void System.Net.FtpWebResponse::set_StatusCode(System.Net.FtpStatusCode)
extern void FtpWebResponse_set_StatusCode_m89F9F5254D0253B8FB9F67E9109EF15265508E7C (void);
// 0x00000A8E System.Void System.Net.FtpWebResponse::Close()
extern void FtpWebResponse_Close_m25B6EDDB1321F60623EB7ADA95D0A5A44DAE025B (void);
// 0x00000A8F System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
extern void FtpWebResponse_GetResponseStream_m9D103F0115A561706EAD524F43F6CD7296C0231E (void);
// 0x00000A90 System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
extern void FtpWebResponse_set_Stream_m8619106017163CF5D45353CE26762D8FB7614FC2 (void);
// 0x00000A91 System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
extern void FtpWebResponse_UpdateStatus_mE7BEDCE12311FFE4262E68A663823E7C35A9F07A (void);
// 0x00000A92 System.Void System.Net.FtpWebResponse::CheckDisposed()
extern void FtpWebResponse_CheckDisposed_m872003FFB3429E7742E1BE4924497C7B42AF2DC5 (void);
// 0x00000A93 System.Boolean System.Net.FtpWebResponse::IsFinal()
extern void FtpWebResponse_IsFinal_m2CE7E21FBD4A377B069BFFCFB8C57EE1E16BC9E0 (void);
// 0x00000A94 System.Void System.Net.HttpRequestCreator::.ctor()
extern void HttpRequestCreator__ctor_mA6D07F56561A4C93100584384CCDED5171C45F50 (void);
// 0x00000A95 System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern void HttpRequestCreator_Create_m25D9085B7B59931A1A4DBA18DE828D8FA376A139 (void);
// 0x00000A96 System.Void System.Net.HttpWebRequest::.cctor()
extern void HttpWebRequest__cctor_m5B96D0A29F3F6BA4C78CC0DE32C81A78A75767EF (void);
// 0x00000A97 System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern void HttpWebRequest__ctor_m37C92DEFA8C4C0282FE5B11E065D65C25CF8B91F (void);
// 0x00000A98 System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest__ctor_m94F348B8E4338E5D0404A8425F5F43B339B322BE (void);
// 0x00000A99 System.Void System.Net.HttpWebRequest::ResetAuthorization()
extern void HttpWebRequest_ResetAuthorization_mC7AA3C31078EA81423351F8DAC62F68E9F15060E (void);
// 0x00000A9A System.Uri System.Net.HttpWebRequest::get_Address()
extern void HttpWebRequest_get_Address_mC0579CE0CED2FDCBF69FAF3232706F7994EAC20D (void);
// 0x00000A9B System.Void System.Net.HttpWebRequest::set_Address(System.Uri)
extern void HttpWebRequest_set_Address_mF1FB65319326DEC98CD2974645708BD5EB4C286C (void);
// 0x00000A9C System.Boolean System.Net.HttpWebRequest::get_AllowWriteStreamBuffering()
extern void HttpWebRequest_get_AllowWriteStreamBuffering_m1DAB805DEEB2F8EFD85121F1B28646697EF3862A (void);
// 0x00000A9D System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
extern void HttpWebRequest_get_AutomaticDecompression_mF4F41C35BE09F1457645769FA0183BE0446C5503 (void);
// 0x00000A9E System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
extern void HttpWebRequest_get_InternalAllowBuffering_m47A76FBFB1A14D8772FB025A8B7ADA399983D9B2 (void);
// 0x00000A9F System.Boolean System.Net.HttpWebRequest::get_MethodWithBuffer()
extern void HttpWebRequest_get_MethodWithBuffer_m00882296A2A9AE6BBD49F6922782EE8D6C94444D (void);
// 0x00000AA0 Mono.Security.Interface.MonoTlsProvider System.Net.HttpWebRequest::get_TlsProvider()
extern void HttpWebRequest_get_TlsProvider_m6F166810BBCC188276F5E0515133808186E68911 (void);
// 0x00000AA1 Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::get_TlsSettings()
extern void HttpWebRequest_get_TlsSettings_mE4E8C9107E0930061977FA03EE87DECE51C503D9 (void);
// 0x00000AA2 System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
extern void HttpWebRequest_get_ClientCertificates_mD9F70A07C623462FC910E764511471D542AB102F (void);
// 0x00000AA3 System.Int64 System.Net.HttpWebRequest::get_ContentLength()
extern void HttpWebRequest_get_ContentLength_mDC0C3ABBD7CE8D8D6700312576ABF4550512F1CC (void);
// 0x00000AA4 System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
extern void HttpWebRequest_set_InternalContentLength_m63B44B8FECB63B37955E43D18BAD0A02322C846F (void);
// 0x00000AA5 System.Boolean System.Net.HttpWebRequest::get_ThrowOnError()
extern void HttpWebRequest_get_ThrowOnError_m67A6F4D03676F55D5A0FB51C5F4CDCC97AB9EAE1 (void);
// 0x00000AA6 System.Void System.Net.HttpWebRequest::set_ThrowOnError(System.Boolean)
extern void HttpWebRequest_set_ThrowOnError_mB232259B74EC15F9E119944A41934D673A7DE4E7 (void);
// 0x00000AA7 System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
extern void HttpWebRequest_get_Credentials_m7F0C956E3B027E40BD988A8929FC67A87A614950 (void);
// 0x00000AA8 System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
extern void HttpWebRequest_set_Credentials_mD0DDC0FE9AB1FBA3F133664E19D11372696D4FAF (void);
// 0x00000AA9 System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
extern void HttpWebRequest_get_Headers_m2FC7464A722CC94EC59DA55E7ECC459489933AC6 (void);
// 0x00000AAA System.String System.Net.HttpWebRequest::get_Host()
extern void HttpWebRequest_get_Host_mE23F8F15207CEF1E64CF212EEA7643185207923C (void);
// 0x00000AAB System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
extern void HttpWebRequest_get_KeepAlive_m9D4647C1AAA18E341680BEF0CFF8EFE9B2196055 (void);
// 0x00000AAC System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
extern void HttpWebRequest_get_ReadWriteTimeout_m205CB5B4385D50CAD93FBD9CA73AFCCD4DE24C2C (void);
// 0x00000AAD System.String System.Net.HttpWebRequest::get_Method()
extern void HttpWebRequest_get_Method_m53724C2BBE6691C96CCDDFF6746C2760D0F97621 (void);
// 0x00000AAE System.Void System.Net.HttpWebRequest::set_Method(System.String)
extern void HttpWebRequest_set_Method_m481863546C0CBBA0336CB6269544DAD7A1A672CC (void);
// 0x00000AAF System.Version System.Net.HttpWebRequest::get_ProtocolVersion()
extern void HttpWebRequest_get_ProtocolVersion_m549796C52E9DB1EB8E74EF92E422C7BC427CBA39 (void);
// 0x00000AB0 System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
extern void HttpWebRequest_get_Proxy_mFFD8590DADC6CFC81B90EDD5ED93AF3402EA518E (void);
// 0x00000AB1 System.Void System.Net.HttpWebRequest::set_Proxy(System.Net.IWebProxy)
extern void HttpWebRequest_set_Proxy_mA6BC20894ADEA5E308CA89BFD8300B6A6B7ADDCC (void);
// 0x00000AB2 System.Uri System.Net.HttpWebRequest::get_RequestUri()
extern void HttpWebRequest_get_RequestUri_mE3E21CB2D024E94F32EB77715CED6F6B4D9B0889 (void);
// 0x00000AB3 System.Boolean System.Net.HttpWebRequest::get_SendChunked()
extern void HttpWebRequest_get_SendChunked_m75F75FCEE3F2973A4D391A83935A2E0FA5E586FC (void);
// 0x00000AB4 System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern void HttpWebRequest_get_ServicePoint_m170B921D095437FC5B7FE5920F327F1AABF532D6 (void);
// 0x00000AB5 System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePointNoLock()
extern void HttpWebRequest_get_ServicePointNoLock_m302BC1F3A189D46E652B79981E8D29095E5D5C61 (void);
// 0x00000AB6 System.Int32 System.Net.HttpWebRequest::get_Timeout()
extern void HttpWebRequest_get_Timeout_m598D870198C70FFA7F73385629E915A935413B2E (void);
// 0x00000AB7 System.String System.Net.HttpWebRequest::get_TransferEncoding()
extern void HttpWebRequest_get_TransferEncoding_mA49328310D1BC2799022DA2E65B85FFDD8302F7C (void);
// 0x00000AB8 System.Boolean System.Net.HttpWebRequest::get_UseDefaultCredentials()
extern void HttpWebRequest_get_UseDefaultCredentials_m6CD88BA33D7D837FA5D41F53D074F53DC94C76CD (void);
// 0x00000AB9 System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
extern void HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m57505F8056F2DC380C49EF95971438CCD8C3F307 (void);
// 0x00000ABA System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
extern void HttpWebRequest_get_ExpectContinue_m65FAF05A8DBCF3D72A6A1F3044CB4FCD00B118A6 (void);
// 0x00000ABB System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
extern void HttpWebRequest_set_ExpectContinue_m63F438B00F3D621D52077E8D4595A88BEE7904BE (void);
// 0x00000ABC System.Uri System.Net.HttpWebRequest::get_AuthUri()
extern void HttpWebRequest_get_AuthUri_mA9CDA63656394B69E2EE031330CC77C3BB570052 (void);
// 0x00000ABD System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
extern void HttpWebRequest_get_ProxyQuery_m40AC053B4EBE5E2A5257D92B7FD353D19104E53F (void);
// 0x00000ABE System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::get_ServerCertValidationCallback()
extern void HttpWebRequest_get_ServerCertValidationCallback_m8822E8093BBEE23482561CCB65D6AF3B7B1B464E (void);
// 0x00000ABF System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern void HttpWebRequest_GetServicePoint_m936C89220DFB9BE810A223E84E36E6D933510DB7 (void);
// 0x00000AC0 System.Net.WebOperation System.Net.HttpWebRequest::SendRequest(System.Boolean,System.Net.BufferOffsetSize,System.Threading.CancellationToken)
extern void HttpWebRequest_SendRequest_m9CFD21B34BCCA09123225ED98ED24DF1984B3130 (void);
// 0x00000AC1 System.Threading.Tasks.Task`1<T> System.Net.HttpWebRequest::RunWithTimeout(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>>,System.Int32,System.Action)
// 0x00000AC2 System.Threading.Tasks.Task`1<T> System.Net.HttpWebRequest::RunWithTimeout(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>>)
// 0x00000AC3 System.Threading.Tasks.Task`1<System.Net.HttpWebResponse> System.Net.HttpWebRequest::MyGetResponseAsync(System.Threading.CancellationToken)
extern void HttpWebRequest_MyGetResponseAsync_m78CC847A96C7F759F6AE3A9CC1E203DC6BCCFB70 (void);
// 0x00000AC4 System.Threading.Tasks.Task`1<System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>> System.Net.HttpWebRequest::GetResponseFromData(System.Net.WebResponseStream,System.Threading.CancellationToken)
extern void HttpWebRequest_GetResponseFromData_mD04B5CA08B449F9C962012CAB3611C4948E8875D (void);
// 0x00000AC5 System.Exception System.Net.HttpWebRequest::FlattenException(System.Exception)
extern void HttpWebRequest_FlattenException_mF0D9565F401231C7F7C6A973F829CCB37E34C3EA (void);
// 0x00000AC6 System.Net.WebException System.Net.HttpWebRequest::GetWebException(System.Exception)
extern void HttpWebRequest_GetWebException_mB699B6186A7651571D7DFE937DCF59EB74427377 (void);
// 0x00000AC7 System.Net.WebException System.Net.HttpWebRequest::CreateRequestAbortedException()
extern void HttpWebRequest_CreateRequestAbortedException_m41FEA3FF8090E01D94158036B9F7FD367D7146DE (void);
// 0x00000AC8 System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern void HttpWebRequest_BeginGetResponse_m6FA3A32A7BCF6B488CD863F5472B38E5F06EB79D (void);
// 0x00000AC9 System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
extern void HttpWebRequest_EndGetResponse_m240591D6112B3B1709E99659811F773B837F0F79 (void);
// 0x00000ACA System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
extern void HttpWebRequest_GetResponse_m2CF2E0658F4E65A66F6ABD02E976B7FFB5EAF73D (void);
// 0x00000ACB System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
extern void HttpWebRequest_set_FinishedReading_m440CD437FD61FD266FD2132AC1476680550DE88E (void);
// 0x00000ACC System.Boolean System.Net.HttpWebRequest::get_Aborted()
extern void HttpWebRequest_get_Aborted_m038DC4286A2AA32A06EB31C052CDB857B7ADA31E (void);
// 0x00000ACD System.Void System.Net.HttpWebRequest::Abort()
extern void HttpWebRequest_Abort_m12EF7197E8CD7183C44EB3A9EE57EDB69EBF7FC1 (void);
// 0x00000ACE System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_mDB54A2BCCE38E278C44D3A136F6988CEEA92F5FE (void);
// 0x00000ACF System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest_GetObjectData_m6C3C1BB107DB72006CDF96892EF910400CFA9266 (void);
// 0x00000AD0 System.Void System.Net.HttpWebRequest::CheckRequestStarted()
extern void HttpWebRequest_CheckRequestStarted_m3AA735AF2A7257EF984729EA0E938368F83FCE41 (void);
// 0x00000AD1 System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
extern void HttpWebRequest_DoContinueDelegate_mE011EC2040FC3C1CCB2C4A5857D4B380EA53C9A0 (void);
// 0x00000AD2 System.Void System.Net.HttpWebRequest::RewriteRedirectToGet()
extern void HttpWebRequest_RewriteRedirectToGet_mFEAFF0F6D013F3D5F8FADFEB393C08ACB3AF4BB8 (void);
// 0x00000AD3 System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.HttpStatusCode,System.Net.WebResponse)
extern void HttpWebRequest_Redirect_m1B29FDD7A5E85A9B79C87E1A1AF64C428E11F2BD (void);
// 0x00000AD4 System.String System.Net.HttpWebRequest::GetHeaders()
extern void HttpWebRequest_GetHeaders_m445286DB0D71DC60C6D758ED0F1CAF32163501FA (void);
// 0x00000AD5 System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
extern void HttpWebRequest_DoPreAuthenticate_m68D0A70C954476778222049FBDA8FBD3FE8AFA98 (void);
// 0x00000AD6 System.Byte[] System.Net.HttpWebRequest::GetRequestHeaders()
extern void HttpWebRequest_GetRequestHeaders_m3E883236EB532FCA98675E243EC583434ECF7661 (void);
// 0x00000AD7 System.ValueTuple`2<System.Net.WebOperation,System.Boolean> System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebResponseStream,System.Net.HttpWebResponse,System.Net.BufferOffsetSize,System.Threading.CancellationToken)
extern void HttpWebRequest_HandleNtlmAuth_m33D4EB84E92290ADD0AD9EBE369F5E5A7259CCE3 (void);
// 0x00000AD8 System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
extern void HttpWebRequest_CheckAuthorization_m9D4930C90DD3E7B6B5ACC3EEFAF794FF12F519B4 (void);
// 0x00000AD9 System.ValueTuple`2<System.Threading.Tasks.Task`1<System.Net.BufferOffsetSize>,System.Net.WebException> System.Net.HttpWebRequest::GetRewriteHandler(System.Net.HttpWebResponse,System.Boolean)
extern void HttpWebRequest_GetRewriteHandler_m8025064C747A834952F2B11F4E1B94D5855FE498 (void);
// 0x00000ADA System.ValueTuple`4<System.Boolean,System.Boolean,System.Threading.Tasks.Task`1<System.Net.BufferOffsetSize>,System.Net.WebException> System.Net.HttpWebRequest::CheckFinalStatus(System.Net.HttpWebResponse)
extern void HttpWebRequest_CheckFinalStatus_mD069A9D0FF6C6DA943B3D3BF9B19806956EA0FF6 (void);
// 0x00000ADB System.Threading.Tasks.Task`1<System.Net.BufferOffsetSize> System.Net.HttpWebRequest::<GetRewriteHandler>b__263_0()
extern void HttpWebRequest_U3CGetRewriteHandlerU3Eb__263_0_mA8F141A7EF4407A60B65C7F1DED64F9AF8F6B0DA (void);
// 0x00000ADC System.Void System.Net.HttpWebRequest::.ctor()
extern void HttpWebRequest__ctor_m1AF72A90B1265EE52584D72B1B225DCC95E62722 (void);
// 0x00000ADD System.Boolean System.Net.HttpWebRequest/AuthorizationState::get_IsCompleted()
extern void AuthorizationState_get_IsCompleted_m60FA1039CD41A7AD50984DADEA562F82E60470AB (void);
// 0x00000ADE System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::get_NtlmAuthState()
extern void AuthorizationState_get_NtlmAuthState_m93CF64385E0E77039CF782E319EED9EC96ED063C (void);
// 0x00000ADF System.Boolean System.Net.HttpWebRequest/AuthorizationState::get_IsNtlmAuthenticated()
extern void AuthorizationState_get_IsNtlmAuthenticated_m901CE42BD2DB28DD9D6605500D8E4D360309DA8A (void);
// 0x00000AE0 System.Void System.Net.HttpWebRequest/AuthorizationState::.ctor(System.Net.HttpWebRequest,System.Boolean)
extern void AuthorizationState__ctor_m6DDA04B33B8A520B93FBDF8AC4BBA3B7CCC03CBE (void);
// 0x00000AE1 System.Boolean System.Net.HttpWebRequest/AuthorizationState::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
extern void AuthorizationState_CheckAuthorization_mD23E50FD196D22054A710B9200FC6510D5098EA5 (void);
// 0x00000AE2 System.Void System.Net.HttpWebRequest/AuthorizationState::Reset()
extern void AuthorizationState_Reset_mE7C4981CBBB1630D605A83D09D74D7C56AE0B9B9 (void);
// 0x00000AE3 System.String System.Net.HttpWebRequest/AuthorizationState::ToString()
extern void AuthorizationState_ToString_m6426C6029B83D041B9F1B9871A4541F70A2EFC00 (void);
// 0x00000AE4 System.Void System.Net.HttpWebRequest/<>c__234`1::.cctor()
// 0x00000AE5 System.Void System.Net.HttpWebRequest/<>c__234`1::.ctor()
// 0x00000AE6 System.Nullable`1<System.Int32> System.Net.HttpWebRequest/<>c__234`1::<RunWithTimeout>b__234_0(System.Threading.Tasks.Task`1<T>)
// 0x00000AE7 System.Void System.Net.HttpWebRequest/<RunWithTimeout>d__234`1::MoveNext()
// 0x00000AE8 System.Void System.Net.HttpWebRequest/<RunWithTimeout>d__234`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000AE9 System.Void System.Net.HttpWebRequest/<MyGetResponseAsync>d__236::MoveNext()
extern void U3CMyGetResponseAsyncU3Ed__236_MoveNext_mFBD2D479D77244D04F25FB873DBC765EB9CBF79C (void);
// 0x00000AEA System.Void System.Net.HttpWebRequest/<MyGetResponseAsync>d__236::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMyGetResponseAsyncU3Ed__236_SetStateMachine_mAFA7F97DD138F2C8984F7BDA6EA2FB2E5F6D021F (void);
// 0x00000AEB System.Void System.Net.HttpWebRequest/<GetResponseFromData>d__237::MoveNext()
extern void U3CGetResponseFromDataU3Ed__237_MoveNext_mAEE81AAA2DC7E3FB0B2E7631C6EC526E38C2AE0A (void);
// 0x00000AEC System.Void System.Net.HttpWebRequest/<GetResponseFromData>d__237::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetResponseFromDataU3Ed__237_SetStateMachine_m8B33A8FE618AA966D8ABD2149C19C4E6DD568F8A (void);
// 0x00000AED System.Void System.Net.HttpWebRequest/<<GetRewriteHandler>b__263_0>d::MoveNext()
extern void U3CU3CGetRewriteHandlerU3Eb__263_0U3Ed_MoveNext_m31240B9D21116E276C0ECED04A4E62161F0EE147 (void);
// 0x00000AEE System.Void System.Net.HttpWebRequest/<<GetRewriteHandler>b__263_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CGetRewriteHandlerU3Eb__263_0U3Ed_SetStateMachine_mE374C4F526074CD29C9C6EB7F2B6419861F80077 (void);
// 0x00000AEF System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.HttpStatusCode,System.Net.WebHeaderCollection)
extern void HttpWebResponse__ctor_m16E803C4AA1579083FF43CED5ABEEB4BAF6CF15E (void);
// 0x00000AF0 System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebResponseStream,System.Net.CookieContainer)
extern void HttpWebResponse__ctor_mFBB2D6E983BB1443E80D8D600E04D092B59F078F (void);
// 0x00000AF1 System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebResponse__ctor_m7AD80C3EBF0E8B5AE39E70039B8DD38768D6EBF3 (void);
// 0x00000AF2 System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern void HttpWebResponse_get_Headers_mB3888AD82B4F3565A473C62EB89C725B1DCB5A4D (void);
// 0x00000AF3 System.Uri System.Net.HttpWebResponse::get_ResponseUri()
extern void HttpWebResponse_get_ResponseUri_m685CEFFDB32B2D352DED9FA8CB4E3B5513AA71CB (void);
// 0x00000AF4 System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern void HttpWebResponse_get_StatusCode_mE53A864C0F6C64902E9E0414111C4843D0BF3D02 (void);
// 0x00000AF5 System.String System.Net.HttpWebResponse::get_StatusDescription()
extern void HttpWebResponse_get_StatusDescription_m3C28B4A3A77EAF3AC9ACB30CA5870E3BDE284330 (void);
// 0x00000AF6 System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern void HttpWebResponse_GetResponseStream_m62CB2C514EC40749A8E3CF0A2D29D1CB136CFACA (void);
// 0x00000AF7 System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m5C290981E0AA728B2D9E4DB14122789EA8F157E7 (void);
// 0x00000AF8 System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebResponse_GetObjectData_mB6558A01B7A601BDAB1A2C345937B5DDFC2EC3E8 (void);
// 0x00000AF9 System.Void System.Net.HttpWebResponse::Close()
extern void HttpWebResponse_Close_m335C79B7B3B30A0D7171C48741F46D628E10E23C (void);
// 0x00000AFA System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern void HttpWebResponse_System_IDisposable_Dispose_m9D2B039C1D8B4015D6E43455A151EA39E142C703 (void);
// 0x00000AFB System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern void HttpWebResponse_Dispose_m0FF01C40481F4C0BBAB0FC3CE132BAAF6103AD55 (void);
// 0x00000AFC System.Void System.Net.HttpWebResponse::CheckDisposed()
extern void HttpWebResponse_CheckDisposed_mA093612C4AB921FEACAF615EC05A586E90BAAEF4 (void);
// 0x00000AFD System.Void System.Net.HttpWebResponse::FillCookies()
extern void HttpWebResponse_FillCookies_m98797F0765051578D6D76731359555CD25E5DB3B (void);
// 0x00000AFE System.Void System.Net.HttpWebResponse::.ctor()
extern void HttpWebResponse__ctor_m6F0B7400E052741717E540E682479B23788F7714 (void);
// 0x00000AFF System.Void System.Net.IPv6AddressFormatter::.ctor(System.UInt16[],System.Int64)
extern void IPv6AddressFormatter__ctor_m724F22E5D122B2F5FCD830B4B8D5995A69169663 (void);
// 0x00000B00 System.UInt16 System.Net.IPv6AddressFormatter::SwapUShort(System.UInt16)
extern void IPv6AddressFormatter_SwapUShort_mD8495BB2ECDCDEA49DA0F4C4E82511494CFF43B7 (void);
// 0x00000B01 System.UInt32 System.Net.IPv6AddressFormatter::AsIPv4Int()
extern void IPv6AddressFormatter_AsIPv4Int_m595ECC7763D02462B0FF1327A629F5BEF53D9CD7 (void);
// 0x00000B02 System.Boolean System.Net.IPv6AddressFormatter::IsIPv4Compatible()
extern void IPv6AddressFormatter_IsIPv4Compatible_m0E070C1C8D153AF6B8CB76231CF01F091EDD06E3 (void);
// 0x00000B03 System.Boolean System.Net.IPv6AddressFormatter::IsIPv4Mapped()
extern void IPv6AddressFormatter_IsIPv4Mapped_m17D6698E8EF2F468DCC0D3828EDB92C2083CE0DF (void);
// 0x00000B04 System.String System.Net.IPv6AddressFormatter::ToString()
extern void IPv6AddressFormatter_ToString_m4758E87FE39266AB9A24AF592D8D3B3B703C7735 (void);
// 0x00000B05 System.Void System.Net.MonoChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
extern void MonoChunkStream__ctor_mDCC2D6D4EF6C36404655FCC1A2FFD3362CDF5206 (void);
// 0x00000B06 System.Void System.Net.MonoChunkStream::.ctor(System.Net.WebHeaderCollection)
extern void MonoChunkStream__ctor_mCC2B9F0BC8A2BCAFD5C012FDA2A8DB7BD00CF70E (void);
// 0x00000B07 System.Void System.Net.MonoChunkStream::ResetBuffer()
extern void MonoChunkStream_ResetBuffer_m096F58F6E8FA887B651C4124105455392C680F1B (void);
// 0x00000B08 System.Void System.Net.MonoChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern void MonoChunkStream_WriteAndReadBack_mAE8A5A7FB348952B005B409DE4A88C745BA8625B (void);
// 0x00000B09 System.Int32 System.Net.MonoChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_Read_m8FCB52AFA194A53AF181B7CF1F3889CC455AD134 (void);
// 0x00000B0A System.Int32 System.Net.MonoChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_ReadFromChunks_mD7FC45820FE1083D3D1F27E0E3F09FBF66989B54 (void);
// 0x00000B0B System.Void System.Net.MonoChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_Write_m94778E903E092C7364123E7B9B5C49A4998FF157 (void);
// 0x00000B0C System.Void System.Net.MonoChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_InternalWrite_m52BBC6C1B7A2D8F451A99E0532CB059609783BB9 (void);
// 0x00000B0D System.Boolean System.Net.MonoChunkStream::get_WantMore()
extern void MonoChunkStream_get_WantMore_m25DF1BFCAD7BA3FE426BA8BC2396685743F4D87B (void);
// 0x00000B0E System.Boolean System.Net.MonoChunkStream::get_DataAvailable()
extern void MonoChunkStream_get_DataAvailable_m08D62EA4EA8451D4DDBE9E8CFD8B00951B9DCCEC (void);
// 0x00000B0F System.Int32 System.Net.MonoChunkStream::get_ChunkLeft()
extern void MonoChunkStream_get_ChunkLeft_m79B084EBCE037A0320814129BB41AE0FB1367D37 (void);
// 0x00000B10 System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadBody_m86B3CC978ACAD5573923E8AB4B4A34F958F2233B (void);
// 0x00000B11 System.Net.MonoChunkStream/State System.Net.MonoChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_GetChunkSize_mC0DBEAA906BFB23AFF2AFFEAD237B75CA5C13270 (void);
// 0x00000B12 System.String System.Net.MonoChunkStream::RemoveChunkExtension(System.String)
extern void MonoChunkStream_RemoveChunkExtension_mE17D1215C046B285A923A34BCA4C449F2F88882F (void);
// 0x00000B13 System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadCRLF_m38921B70E4B83DA9A32C922BC566F8C6BFA3507C (void);
// 0x00000B14 System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadTrailer_mA190877FA8AD218DEF2A6301ADD30395EFC0B657 (void);
// 0x00000B15 System.Void System.Net.MonoChunkStream::ThrowProtocolViolation(System.String)
extern void MonoChunkStream_ThrowProtocolViolation_m669527275859A66266ABBC930FD42F03A265716F (void);
// 0x00000B16 System.Void System.Net.MonoChunkStream/Chunk::.ctor(System.Byte[])
extern void Chunk__ctor_mF202CB02BA64F497A48650F3FA077FD5DCC07655 (void);
// 0x00000B17 System.Int32 System.Net.MonoChunkStream/Chunk::Read(System.Byte[],System.Int32,System.Int32)
extern void Chunk_Read_m8E7D3484239FA34941B9ACFE6E7A01FF8B298B0F (void);
// 0x00000B18 System.Void System.Net.NtlmClient::.ctor()
extern void NtlmClient__ctor_m15C02BC0F1AF986CA239D4FDD70F3F7259AC3E0D (void);
// 0x00000B19 System.Net.Authorization System.Net.NtlmClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void NtlmClient_Authenticate_m31D3B3D7B8B49703C6E481D4BD52191D6C736864 (void);
// 0x00000B1A System.Net.Authorization System.Net.NtlmClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void NtlmClient_PreAuthenticate_mDB65713088A839B4520E0B42E72242C6D73DB453 (void);
// 0x00000B1B System.String System.Net.NtlmClient::get_AuthenticationType()
extern void NtlmClient_get_AuthenticationType_m14936001CFF19B0901D566983730807EEFC02CA1 (void);
// 0x00000B1C System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern void ServicePoint__ctor_mCB9C3306C21E33715C63BB6DA2A5E14F062F5B4A (void);
// 0x00000B1D System.Net.ServicePointScheduler System.Net.ServicePoint::get_Scheduler()
extern void ServicePoint_get_Scheduler_m8D88559C1664084C10D97FEDE33CCF227798F374 (void);
// 0x00000B1E System.Uri System.Net.ServicePoint::get_Address()
extern void ServicePoint_get_Address_m015784C41DB6A35AAF028D645EFAFF67A03F148D (void);
// 0x00000B1F System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern void ServicePoint_get_ConnectionLimit_m0CC608F18FE94755E430FADADD650D853FF22AA4 (void);
// 0x00000B20 System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern void ServicePoint_get_ProtocolVersion_mF8178863DE2AB400CD72BE253D17E0619DFA4224 (void);
// 0x00000B21 System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern void ServicePoint_set_Expect100Continue_mDDB9FC522313DDC57B1B348B711CF888516AA4CD (void);
// 0x00000B22 System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern void ServicePoint_get_UseNagleAlgorithm_m381A071F1426513296B517C39D29F26C81E42572 (void);
// 0x00000B23 System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern void ServicePoint_set_UseNagleAlgorithm_mC025F081ED6C7014665EB20388747D12476D03C3 (void);
// 0x00000B24 System.Boolean System.Net.ServicePoint::get_SendContinue()
extern void ServicePoint_get_SendContinue_m7DCF3A3D65BEB2543979D8892941E4B3BAE175D3 (void);
// 0x00000B25 System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern void ServicePoint_set_SendContinue_m5480B6A8C6478BA620030302C861A842DF9F6AD3 (void);
// 0x00000B26 System.Void System.Net.ServicePoint::SetTcpKeepAlive(System.Boolean,System.Int32,System.Int32)
extern void ServicePoint_SetTcpKeepAlive_m225D363A70F7971133192A44745C8D284DE19084 (void);
// 0x00000B27 System.Void System.Net.ServicePoint::KeepAliveSetup(System.Net.Sockets.Socket)
extern void ServicePoint_KeepAliveSetup_mDC710830A237760D228FECDF53E7CA9FA683B8CB (void);
// 0x00000B28 System.Void System.Net.ServicePoint::PutBytes(System.Byte[],System.UInt32,System.Int32)
extern void ServicePoint_PutBytes_m8AE9C9FFF67808769A76CCCD2CB5582329751667 (void);
// 0x00000B29 System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern void ServicePoint_get_UsesProxy_m518ED2EF0BDC87C490AB426BC455CD11296DED30 (void);
// 0x00000B2A System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern void ServicePoint_set_UsesProxy_m48157456CF1FF842A098916FE6F485CCA2FB9B62 (void);
// 0x00000B2B System.Boolean System.Net.ServicePoint::get_UseConnect()
extern void ServicePoint_get_UseConnect_m114AAE62269A6D6A4C1E2687C00A3DAEF89BFE20 (void);
// 0x00000B2C System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern void ServicePoint_set_UseConnect_mD34B72F3B4F0532EB58DAB315A58143E5882A81F (void);
// 0x00000B2D System.Boolean System.Net.ServicePoint::get_HasTimedOut()
extern void ServicePoint_get_HasTimedOut_m03A85D9E4DBA7955DED1DDD71657AA0FC239CCC1 (void);
// 0x00000B2E System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern void ServicePoint_get_HostEntry_mE028095CE8AEB4B93F382356BFB2CDE00F1D850C (void);
// 0x00000B2F System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern void ServicePoint_SetVersion_mC457CF4440C824FDBC565D67D060D92B3C1A2A89 (void);
// 0x00000B30 System.Void System.Net.ServicePoint::SendRequest(System.Net.WebOperation,System.String)
extern void ServicePoint_SendRequest_mB271F49FB5B3DB5DA556253585CC150A51E7C9CA (void);
// 0x00000B31 System.Void System.Net.ServicePoint::UpdateServerCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void ServicePoint_UpdateServerCertificate_mA5119A83F8A76B1098E4C0B7BEACED9F04288D10 (void);
// 0x00000B32 System.Void System.Net.ServicePoint::UpdateClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void ServicePoint_UpdateClientCertificate_m1C24F73E61F345E535D184110A3625B2EAF8C6AD (void);
// 0x00000B33 System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern void ServicePoint_CallEndPointDelegate_m4AA30128ACB46BECF1D16A2AE84BB0A26FD4EDBE (void);
// 0x00000B34 System.Void System.Net.ServicePointManager::.cctor()
extern void ServicePointManager__cctor_m8067E1B281672361100384C9FD668FB793EEE44A (void);
// 0x00000B35 System.Net.ICertificatePolicy System.Net.ServicePointManager::GetLegacyCertificatePolicy()
extern void ServicePointManager_GetLegacyCertificatePolicy_mBD5DCFD553FEEE50F78A70BAB63F95ACF21A25FC (void);
// 0x00000B36 System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern void ServicePointManager_get_CheckCertificateRevocationList_mC0CDB007A91C59573B664FAB178B756F78561534 (void);
// 0x00000B37 System.Int32 System.Net.ServicePointManager::get_DnsRefreshTimeout()
extern void ServicePointManager_get_DnsRefreshTimeout_m055EA4A9A2A57D3A43DAC32D2228144865E02430 (void);
// 0x00000B38 System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern void ServicePointManager_get_SecurityProtocol_m30A1F0981535D5FCD93219E4759C13136FE1DACB (void);
// 0x00000B39 System.Net.ServerCertValidationCallback System.Net.ServicePointManager::get_ServerCertValidationCallback()
extern void ServicePointManager_get_ServerCertValidationCallback_m9436D7CB2C84F88A2F878C700D5B3B34B85B911D (void);
// 0x00000B3A System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern void ServicePointManager_FindServicePoint_m8B83339FF47FF2FDB7671C114BD56B71743ED2F4 (void);
// 0x00000B3B System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Uri,System.Boolean)
extern void SPKey__ctor_m30BE1C73F21DEB53327E47A0EFDC05D39726E2FB (void);
// 0x00000B3C System.Boolean System.Net.ServicePointManager/SPKey::get_UsesProxy()
extern void SPKey_get_UsesProxy_mD847C0A3FA96B142882A340E221D4C4AE6BE3E76 (void);
// 0x00000B3D System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
extern void SPKey_GetHashCode_mEF88EF3AB042F1A3B7BE41171F53155177ED0B4F (void);
// 0x00000B3E System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
extern void SPKey_Equals_mDFDEB4BBCC2EE4F43F4F36CBA81A35DCFE1CA114 (void);
// 0x00000B3F System.Net.ServicePoint System.Net.ServicePointScheduler::get_ServicePoint()
extern void ServicePointScheduler_get_ServicePoint_m846DBB399E3CAF876D0AD23483D93D7F26A62F91 (void);
// 0x00000B40 System.Int32 System.Net.ServicePointScheduler::get_MaxIdleTime()
extern void ServicePointScheduler_get_MaxIdleTime_m21249A6395FFC3A9227AD0918D8DB5056EC44E53 (void);
// 0x00000B41 System.Int32 System.Net.ServicePointScheduler::get_ConnectionLimit()
extern void ServicePointScheduler_get_ConnectionLimit_mF395BF30D71999C79F2C454D1BE7E730A8522BA6 (void);
// 0x00000B42 System.Void System.Net.ServicePointScheduler::.ctor(System.Net.ServicePoint,System.Int32,System.Int32)
extern void ServicePointScheduler__ctor_m31580DC08F3E2491616C5067921AD44899E58004 (void);
// 0x00000B43 System.Void System.Net.ServicePointScheduler::Run()
extern void ServicePointScheduler_Run_mE03FE3F967A5517DE94B6D585C0A200A971ACBD4 (void);
// 0x00000B44 System.Void System.Net.ServicePointScheduler::StartScheduler()
extern void ServicePointScheduler_StartScheduler_mAE6B11E28FC8D4F01D0536BCAE8604FD594D0D27 (void);
// 0x00000B45 System.Void System.Net.ServicePointScheduler::Cleanup()
extern void ServicePointScheduler_Cleanup_mDD1F681510B15A1F4E6FBAEEF9A89631C564BA58 (void);
// 0x00000B46 System.Void System.Net.ServicePointScheduler::RunSchedulerIteration()
extern void ServicePointScheduler_RunSchedulerIteration_m2117263966C4AE978C0E8B775632FD7DDD0FE2AB (void);
// 0x00000B47 System.Boolean System.Net.ServicePointScheduler::OperationCompleted(System.Net.ServicePointScheduler/ConnectionGroup,System.Net.WebOperation,System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>)
extern void ServicePointScheduler_OperationCompleted_m5E723C9B5DF2238A5A58A1834CDF97E2169BE7EA (void);
// 0x00000B48 System.Void System.Net.ServicePointScheduler::CloseIdleConnection(System.Net.ServicePointScheduler/ConnectionGroup,System.Net.WebConnection)
extern void ServicePointScheduler_CloseIdleConnection_mCC2356BF17FCBD9027E14AB8B2FE22CD2DAC689E (void);
// 0x00000B49 System.Boolean System.Net.ServicePointScheduler::SchedulerIteration(System.Net.ServicePointScheduler/ConnectionGroup)
extern void ServicePointScheduler_SchedulerIteration_m31123036C09CCE9ED9EBC56F1C96E7F39000B1D8 (void);
// 0x00000B4A System.Void System.Net.ServicePointScheduler::RemoveOperation(System.Net.WebOperation)
extern void ServicePointScheduler_RemoveOperation_m463750D1CB7A1C6AF8C03C0DA884052EA232D781 (void);
// 0x00000B4B System.Void System.Net.ServicePointScheduler::RemoveIdleConnection(System.Net.WebConnection)
extern void ServicePointScheduler_RemoveIdleConnection_mFAC34695888DE0B3C35A2D4181AE3050861431BA (void);
// 0x00000B4C System.Void System.Net.ServicePointScheduler::SendRequest(System.Net.WebOperation,System.String)
extern void ServicePointScheduler_SendRequest_m6915605C55AC898BF656A67E50AE2F848C6B1E33 (void);
// 0x00000B4D System.Net.ServicePointScheduler/ConnectionGroup System.Net.ServicePointScheduler::GetConnectionGroup(System.String)
extern void ServicePointScheduler_GetConnectionGroup_m66B4204E51C9943A1AF26EC8AC9F68A15EFEEE56 (void);
// 0x00000B4E System.Void System.Net.ServicePointScheduler::OnConnectionCreated(System.Net.WebConnection)
extern void ServicePointScheduler_OnConnectionCreated_m46A2D1AF41524B1B1AC74E5921D2908D9A7A1D4A (void);
// 0x00000B4F System.Void System.Net.ServicePointScheduler::OnConnectionClosed(System.Net.WebConnection)
extern void ServicePointScheduler_OnConnectionClosed_m403D809F1E2F0CEBF65D98191648149A018678C7 (void);
// 0x00000B50 System.Net.ServicePointScheduler System.Net.ServicePointScheduler/ConnectionGroup::get_Scheduler()
extern void ConnectionGroup_get_Scheduler_m772B4A995312A0EBD1568471CDF17F520CB3F39C (void);
// 0x00000B51 System.Void System.Net.ServicePointScheduler/ConnectionGroup::.ctor(System.Net.ServicePointScheduler,System.String)
extern void ConnectionGroup__ctor_m374EEC30B4DB339157E1FEFE8D9908F1602B5103 (void);
// 0x00000B52 System.Boolean System.Net.ServicePointScheduler/ConnectionGroup::IsEmpty()
extern void ConnectionGroup_IsEmpty_m49E444CB48C362DC3E0829F0DDF9C22EB90E3190 (void);
// 0x00000B53 System.Void System.Net.ServicePointScheduler/ConnectionGroup::RemoveConnection(System.Net.WebConnection)
extern void ConnectionGroup_RemoveConnection_m4E4DFFE07C6E0005F796957B2BA4D5F4D3D6241B (void);
// 0x00000B54 System.Void System.Net.ServicePointScheduler/ConnectionGroup::Cleanup()
extern void ConnectionGroup_Cleanup_m60D92E1B982C50094D7E9FE55C9B847016E79A1A (void);
// 0x00000B55 System.Void System.Net.ServicePointScheduler/ConnectionGroup::EnqueueOperation(System.Net.WebOperation)
extern void ConnectionGroup_EnqueueOperation_m8983F33FE2FA7D64032535682A1D31CE680BB8E6 (void);
// 0x00000B56 System.Net.WebOperation System.Net.ServicePointScheduler/ConnectionGroup::GetNextOperation()
extern void ConnectionGroup_GetNextOperation_mF20C309F1E74118AFA48F7D177CCDF0927005E4B (void);
// 0x00000B57 System.Net.WebConnection System.Net.ServicePointScheduler/ConnectionGroup::FindIdleConnection(System.Net.WebOperation)
extern void ConnectionGroup_FindIdleConnection_mBDC3AA72FD05E858F1C345C7FB6C1B143C1AEAF8 (void);
// 0x00000B58 System.ValueTuple`2<System.Net.WebConnection,System.Boolean> System.Net.ServicePointScheduler/ConnectionGroup::CreateOrReuseConnection(System.Net.WebOperation,System.Boolean)
extern void ConnectionGroup_CreateOrReuseConnection_mE7153E7911E2165B717181367C4111A7639C7B98 (void);
// 0x00000B59 System.Threading.Tasks.Task`1<System.Boolean> System.Net.ServicePointScheduler/AsyncManualResetEvent::WaitAsync(System.Int32)
extern void AsyncManualResetEvent_WaitAsync_m1EFF97EB9E343AE6CE5842B6D1E72A46AB236BDF (void);
// 0x00000B5A System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent::Set()
extern void AsyncManualResetEvent_Set_m3D541CCC4B5CB8393A63D23B9E5F104C85258549 (void);
// 0x00000B5B System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent::Reset()
extern void AsyncManualResetEvent_Reset_mF5E53CF13FD2EBC3563AF67D316307671B58854F (void);
// 0x00000B5C System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent::.ctor(System.Boolean)
extern void AsyncManualResetEvent__ctor_mC5C973C7ACD4C923325E8B98C3E4DF293C08C757 (void);
// 0x00000B5D System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::MoveNext()
extern void U3CWaitAsyncU3Ed__3_MoveNext_m70BD3156E3C9225DC6FA0051F6F1CFA5C51DC82D (void);
// 0x00000B5E System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitAsyncU3Ed__3_SetStateMachine_m3C70A70D68A142473023CE4E99F132863B0B90F2 (void);
// 0x00000B5F System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.cctor()
extern void U3CU3Ec__cctor_mF229783494E9F1BE9EB2E4C7D11B94F0AE5FD9C5 (void);
// 0x00000B60 System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.ctor()
extern void U3CU3Ec__ctor_m42F5C86E7E31C11A87C17A9FBE7A56B703102A01 (void);
// 0x00000B61 System.Boolean System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<Set>b__4_0(System.Object)
extern void U3CU3Ec_U3CSetU3Eb__4_0_m7ABBA00DFE7F256F3DD9640FB9A9D68CF5988498 (void);
// 0x00000B62 System.Void System.Net.ServicePointScheduler/<StartScheduler>d__32::MoveNext()
extern void U3CStartSchedulerU3Ed__32_MoveNext_mA205AFA620495AA4DFF9C4C0F8BEE0D6A5E7F24B (void);
// 0x00000B63 System.Void System.Net.ServicePointScheduler/<StartScheduler>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartSchedulerU3Ed__32_SetStateMachine_mB15C867BE900F84093D5B0C44A2307129F47A4A4 (void);
// 0x00000B64 System.Void System.Net.WebCompletionSource::.ctor()
extern void WebCompletionSource__ctor_m595FCD0310B0C281ED73DB9F36F9C6FC4507F854 (void);
// 0x00000B65 System.Boolean System.Net.WebCompletionSource::TrySetCompleted()
extern void WebCompletionSource_TrySetCompleted_m07D00A6E11FA20E08868D2D42D03A55B791E4C89 (void);
// 0x00000B66 System.Boolean System.Net.WebCompletionSource::TrySetCanceled()
extern void WebCompletionSource_TrySetCanceled_mC2F909347FBD89AE6EFAEA9BF7C9459F69CE9294 (void);
// 0x00000B67 System.Boolean System.Net.WebCompletionSource::TrySetException(System.Exception)
extern void WebCompletionSource_TrySetException_mBE47B14713AD933391D5C0610CCFB93DB4F1CB42 (void);
// 0x00000B68 System.Boolean System.Net.WebCompletionSource::get_IsCompleted()
extern void WebCompletionSource_get_IsCompleted_m11970173495B3A157284F06D0FA36F0B86F59CAC (void);
// 0x00000B69 System.Void System.Net.WebCompletionSource::ThrowOnError()
extern void WebCompletionSource_ThrowOnError_m9B7E7976E2223C48F992EB5FF6DAD8AE68F0D6CD (void);
// 0x00000B6A System.Threading.Tasks.Task`1<System.Boolean> System.Net.WebCompletionSource::WaitForCompletion(System.Boolean)
extern void WebCompletionSource_WaitForCompletion_m37D6F38C911CFAC1045F93A20FD71C52044CD51C (void);
// 0x00000B6B System.Net.WebCompletionSource/State System.Net.WebCompletionSource/Result::get_State()
extern void Result_get_State_m75D0BFE57D9913EA452CB02AEED40A2C819B6AFC (void);
// 0x00000B6C System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Net.WebCompletionSource/Result::get_Error()
extern void Result_get_Error_mD51240A11BA346DC1DCEE37EA765F7133D764448 (void);
// 0x00000B6D System.Void System.Net.WebCompletionSource/Result::.ctor(System.Net.WebCompletionSource/State,System.Runtime.ExceptionServices.ExceptionDispatchInfo)
extern void Result__ctor_m03B9081B8B36569A6D3AA4C37932F5C54B061515 (void);
// 0x00000B6E System.Void System.Net.WebCompletionSource/<WaitForCompletion>d__8::MoveNext()
extern void U3CWaitForCompletionU3Ed__8_MoveNext_m86A34E1FB02C2D0736D72DFF4FB1D6B05E6775BB (void);
// 0x00000B6F System.Void System.Net.WebCompletionSource/<WaitForCompletion>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitForCompletionU3Ed__8_SetStateMachine_mFFB894666023227C9CF56BD8D7AB8D557BF0AF81 (void);
// 0x00000B70 System.Net.ServicePoint System.Net.WebConnection::get_ServicePoint()
extern void WebConnection_get_ServicePoint_m4C098A63D94F997688FD4BB5FC568B551CD38645 (void);
// 0x00000B71 System.Void System.Net.WebConnection::.ctor(System.Net.ServicePoint)
extern void WebConnection__ctor_m32F4B741B160C0724A9B40EE632F3B08D97E9F53 (void);
// 0x00000B72 System.Boolean System.Net.WebConnection::CanReuse()
extern void WebConnection_CanReuse_m67D480B205585300E85B9F06670BC8F612DD9FCC (void);
// 0x00000B73 System.Boolean System.Net.WebConnection::CheckReusable()
extern void WebConnection_CheckReusable_m2A8053F16639B650007329BE6ABBA3043224B69E (void);
// 0x00000B74 System.Threading.Tasks.Task System.Net.WebConnection::Connect(System.Net.WebOperation,System.Threading.CancellationToken)
extern void WebConnection_Connect_m5CAD1298E6A1A1E630A008A9A8A198024AA0DBB4 (void);
// 0x00000B75 System.Threading.Tasks.Task`1<System.Boolean> System.Net.WebConnection::CreateStream(System.Net.WebOperation,System.Boolean,System.Threading.CancellationToken)
extern void WebConnection_CreateStream_m6F1060C833BB1F22C65D0776BEFDD8633AA37CA1 (void);
// 0x00000B76 System.Threading.Tasks.Task`1<System.Net.WebRequestStream> System.Net.WebConnection::InitConnection(System.Net.WebOperation,System.Threading.CancellationToken)
extern void WebConnection_InitConnection_m32CEA4DBECE53D6AFC8B0FC2682088112E1A5DA9 (void);
// 0x00000B77 System.Net.WebException System.Net.WebConnection::GetException(System.Net.WebExceptionStatus,System.Exception)
extern void WebConnection_GetException_m2FBA30456EF75E6FA16A2173AE06AD48095AA5EE (void);
// 0x00000B78 System.Boolean System.Net.WebConnection::ReadLine(System.Byte[],System.Int32&,System.Int32,System.String&)
extern void WebConnection_ReadLine_m6784631C079E707ACEF53175119FE3AC0DEE730F (void);
// 0x00000B79 System.Boolean System.Net.WebConnection::CanReuseConnection(System.Net.WebOperation)
extern void WebConnection_CanReuseConnection_mF22CE45D40A6AC67849E8509FB3A4D540DAA0322 (void);
// 0x00000B7A System.Boolean System.Net.WebConnection::PrepareSharingNtlm(System.Net.WebOperation)
extern void WebConnection_PrepareSharingNtlm_mA5DCD6D29D73A48C9B3BAC40FEEDD26622ABE3B8 (void);
// 0x00000B7B System.Void System.Net.WebConnection::Reset()
extern void WebConnection_Reset_mAE0ED7B4E2139686F19310C905B9C065209E7747 (void);
// 0x00000B7C System.Void System.Net.WebConnection::Close(System.Boolean)
extern void WebConnection_Close_mB451C06EF8412B688EE8DCBD0B70951B0415D791 (void);
// 0x00000B7D System.Void System.Net.WebConnection::CloseSocket()
extern void WebConnection_CloseSocket_m435216C8E7C8EC2B0F7DBFE95A2A4A9D3E7D7B74 (void);
// 0x00000B7E System.Boolean System.Net.WebConnection::get_Closed()
extern void WebConnection_get_Closed_m694BBD50DC7A2DBAF4310DC3D6CD9B8C484689F4 (void);
// 0x00000B7F System.DateTime System.Net.WebConnection::get_IdleSince()
extern void WebConnection_get_IdleSince_mF993001C85933378CC91E97D3F42CD022A49DBCF (void);
// 0x00000B80 System.Boolean System.Net.WebConnection::StartOperation(System.Net.WebOperation,System.Boolean)
extern void WebConnection_StartOperation_m2A6DA9F90E247259A9C87404551CCE9A0CA48945 (void);
// 0x00000B81 System.Boolean System.Net.WebConnection::Continue(System.Net.WebOperation)
extern void WebConnection_Continue_m819B02E671427E9AE55682A79A91DFA4497BA409 (void);
// 0x00000B82 System.Void System.Net.WebConnection::Dispose(System.Boolean)
extern void WebConnection_Dispose_mAA356D7546A523F3FAC8EEC34502DA3EDFD797F2 (void);
// 0x00000B83 System.Void System.Net.WebConnection::Dispose()
extern void WebConnection_Dispose_m619217D576EFF59E4939308F24595E8F498175F4 (void);
// 0x00000B84 System.Void System.Net.WebConnection::ResetNtlm()
extern void WebConnection_ResetNtlm_mBD715060318622998A51E76EEF7C4106C18779A3 (void);
// 0x00000B85 System.Boolean System.Net.WebConnection::get_NtlmAuthenticated()
extern void WebConnection_get_NtlmAuthenticated_m7FA737CC04322CCB263FFE93F146FE813F55DB7F (void);
// 0x00000B86 System.Void System.Net.WebConnection::set_NtlmAuthenticated(System.Boolean)
extern void WebConnection_set_NtlmAuthenticated_mA30B27A4B2E723C8709C3105F16D62174C559294 (void);
// 0x00000B87 System.Net.NetworkCredential System.Net.WebConnection::get_NtlmCredential()
extern void WebConnection_get_NtlmCredential_mD50351AC608003E09FC7B9A9FDCE975D9D8CFD04 (void);
// 0x00000B88 System.Void System.Net.WebConnection::set_NtlmCredential(System.Net.NetworkCredential)
extern void WebConnection_set_NtlmCredential_mE981429BEEE9CBBF313915A622447AB3E20E15AF (void);
// 0x00000B89 System.Boolean System.Net.WebConnection::get_UnsafeAuthenticatedConnectionSharing()
extern void WebConnection_get_UnsafeAuthenticatedConnectionSharing_m9C88624FC7CE2BABF57955A2AD519164CC43D2AD (void);
// 0x00000B8A System.Void System.Net.WebConnection::set_UnsafeAuthenticatedConnectionSharing(System.Boolean)
extern void WebConnection_set_UnsafeAuthenticatedConnectionSharing_mFFF3DD269EDE64EE43D52980902C1F5D597AB86D (void);
// 0x00000B8B System.Void System.Net.WebConnection/<Connect>d__16::MoveNext()
extern void U3CConnectU3Ed__16_MoveNext_mA0B90B92C30BB0285B7B55977D90D52881745535 (void);
// 0x00000B8C System.Void System.Net.WebConnection/<Connect>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectU3Ed__16_SetStateMachine_m22694F920ED2EB556AF7CA8CE687A9DDB5353084 (void);
// 0x00000B8D System.Void System.Net.WebConnection/<CreateStream>d__18::MoveNext()
extern void U3CCreateStreamU3Ed__18_MoveNext_mB242737C480B2DDB8D6071451FAF6E7828B80ECD (void);
// 0x00000B8E System.Void System.Net.WebConnection/<CreateStream>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateStreamU3Ed__18_SetStateMachine_m42351407A9838DDBDC53E29F727A2AAD84D322C9 (void);
// 0x00000B8F System.Void System.Net.WebConnection/<InitConnection>d__19::MoveNext()
extern void U3CInitConnectionU3Ed__19_MoveNext_m4208190EF7B0009B922D95619E8CDB5882393573 (void);
// 0x00000B90 System.Void System.Net.WebConnection/<InitConnection>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitConnectionU3Ed__19_SetStateMachine_m3D94D0DB6431FD261C02E722F749FA086FE4FC33 (void);
// 0x00000B91 System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.WebOperation,System.IO.Stream)
extern void WebConnectionStream__ctor_mC7B6D7183B609F41FAD8A95719AF880AA69AF096 (void);
// 0x00000B92 System.Net.HttpWebRequest System.Net.WebConnectionStream::get_Request()
extern void WebConnectionStream_get_Request_m5D249821B6B456CD00D767DD196C6C03F8E524BE (void);
// 0x00000B93 System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
extern void WebConnectionStream_get_Connection_m3D2B38E915D22E92361A3C1EA4BE33A47FB21A6C (void);
// 0x00000B94 System.Net.WebOperation System.Net.WebConnectionStream::get_Operation()
extern void WebConnectionStream_get_Operation_m4AA77F1982DF079835A899F34F8314C83461E191 (void);
// 0x00000B95 System.Net.ServicePoint System.Net.WebConnectionStream::get_ServicePoint()
extern void WebConnectionStream_get_ServicePoint_mE67D2E1EFC856E4691FDD414CB09B470FF2E96A1 (void);
// 0x00000B96 System.IO.Stream System.Net.WebConnectionStream::get_InnerStream()
extern void WebConnectionStream_get_InnerStream_mFE00D228FB01ABCB4748B1B9EF93941347B4D918 (void);
// 0x00000B97 System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
extern void WebConnectionStream_get_ReadTimeout_m63528BC1ADFFA5F3BFF76ECC59CD211B163B89CF (void);
// 0x00000B98 System.Void System.Net.WebConnectionStream::set_ReadTimeout(System.Int32)
extern void WebConnectionStream_set_ReadTimeout_m5008E79B50AF06560E8062E5B264DC5FF9E6BFC6 (void);
// 0x00000B99 System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
extern void WebConnectionStream_get_WriteTimeout_m5A29F733B70566085E56079134A55688569D0F7E (void);
// 0x00000B9A System.Exception System.Net.WebConnectionStream::GetException(System.Exception)
extern void WebConnectionStream_GetException_m3313D7A38D03506D4AAF516218BB642E86BA0A6B (void);
// 0x00000B9B System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
extern void WebConnectionStream_Read_m8B8BD44CDBBCFD25C5B26F281A4820CCC46EC23A (void);
// 0x00000B9C System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void WebConnectionStream_BeginRead_mA96D5CB87AC997DFC97ADC582526DA20F7DBEEF2 (void);
// 0x00000B9D System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
extern void WebConnectionStream_EndRead_mF68A783972A40C75F2179EB9C0DACED9BC331181 (void);
// 0x00000B9E System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void WebConnectionStream_BeginWrite_m160C07263EE5D91F2796D7D89ADD297380E4ED1C (void);
// 0x00000B9F System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
extern void WebConnectionStream_EndWrite_mDE469D2BF2F2F0CA564B320CBB045AC8111FCEC1 (void);
// 0x00000BA0 System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
extern void WebConnectionStream_Write_mF0B41699BE67CD1E548CCCB2906F8B251C4B226F (void);
// 0x00000BA1 System.Void System.Net.WebConnectionStream::Flush()
extern void WebConnectionStream_Flush_mAC7DDC2420A44452D14150623AAC32F9AAAA437F (void);
// 0x00000BA2 System.Void System.Net.WebConnectionStream::InternalClose()
extern void WebConnectionStream_InternalClose_m966182378317AA13391CD47EF3704BBDC6DE75EA (void);
// 0x00000BA3 System.Void System.Net.WebConnectionStream::Close_internal(System.Boolean&)
// 0x00000BA4 System.Void System.Net.WebConnectionStream::Close()
extern void WebConnectionStream_Close_mB27E3D9691342DF2D025984BB9439E99A49493B9 (void);
// 0x00000BA5 System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void WebConnectionStream_Seek_m1A8BC571CF13B6CC58AB4A0AD53CF05A22332D30 (void);
// 0x00000BA6 System.Boolean System.Net.WebConnectionStream::get_CanSeek()
extern void WebConnectionStream_get_CanSeek_m04A46F31C326B54CFE97FB856B9EB8F319C1D1CD (void);
// 0x00000BA7 System.Int64 System.Net.WebConnectionStream::get_Position()
extern void WebConnectionStream_get_Position_m2E762B56BDFB771A5D1C3E7E93534C545F4576E8 (void);
// 0x00000BA8 System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
extern void WebConnectionStream_set_Position_m24B0723560698F0359E92FC899CE7692EEDD830B (void);
// 0x00000BA9 System.Net.HttpWebRequest System.Net.WebConnectionTunnel::get_Request()
extern void WebConnectionTunnel_get_Request_mD906DAE227BDF9ED70D915216807396D11990365 (void);
// 0x00000BAA System.Uri System.Net.WebConnectionTunnel::get_ConnectUri()
extern void WebConnectionTunnel_get_ConnectUri_m3D8E1B2D155F2BAA9EE65D7CFDA84356C855150E (void);
// 0x00000BAB System.Void System.Net.WebConnectionTunnel::.ctor(System.Net.HttpWebRequest,System.Uri)
extern void WebConnectionTunnel__ctor_mAF2B67AD3C1D7F21B445C3CA6B04A13A6736B8B1 (void);
// 0x00000BAC System.Boolean System.Net.WebConnectionTunnel::get_Success()
extern void WebConnectionTunnel_get_Success_m9FF3A167A38BD5159D454B8C99FE04E737F1FF36 (void);
// 0x00000BAD System.Void System.Net.WebConnectionTunnel::set_Success(System.Boolean)
extern void WebConnectionTunnel_set_Success_m1634E1BED63E792D345807BA8CCE4567B51A93E4 (void);
// 0x00000BAE System.Boolean System.Net.WebConnectionTunnel::get_CloseConnection()
extern void WebConnectionTunnel_get_CloseConnection_m3A1DC8F8B3FA5EA8CE9A68831649D629735AEA78 (void);
// 0x00000BAF System.Void System.Net.WebConnectionTunnel::set_CloseConnection(System.Boolean)
extern void WebConnectionTunnel_set_CloseConnection_mDDF0692EC6F20EF25A91B8DAE131E925A02739F9 (void);
// 0x00000BB0 System.Int32 System.Net.WebConnectionTunnel::get_StatusCode()
extern void WebConnectionTunnel_get_StatusCode_m4AF5F0894868E995C6BA26D66507C8B6EC957A49 (void);
// 0x00000BB1 System.Void System.Net.WebConnectionTunnel::set_StatusCode(System.Int32)
extern void WebConnectionTunnel_set_StatusCode_m392A21B7D338D4866D48A2636532A9CCED1F723D (void);
// 0x00000BB2 System.Void System.Net.WebConnectionTunnel::set_StatusDescription(System.String)
extern void WebConnectionTunnel_set_StatusDescription_mE77B2AF630A7B2A8B5412D8BBFCAF15DA0F3638B (void);
// 0x00000BB3 System.String[] System.Net.WebConnectionTunnel::get_Challenge()
extern void WebConnectionTunnel_get_Challenge_mBF5B353466186BB75BBECC3B045ED5E7BEF635A5 (void);
// 0x00000BB4 System.Void System.Net.WebConnectionTunnel::set_Challenge(System.String[])
extern void WebConnectionTunnel_set_Challenge_m05873D8D218E47A45E24326F9E21CF97E3CB4CE9 (void);
// 0x00000BB5 System.Net.WebHeaderCollection System.Net.WebConnectionTunnel::get_Headers()
extern void WebConnectionTunnel_get_Headers_m1FB2FB7624FE7739B75BA93C6F80E2DA9DA36C41 (void);
// 0x00000BB6 System.Void System.Net.WebConnectionTunnel::set_Headers(System.Net.WebHeaderCollection)
extern void WebConnectionTunnel_set_Headers_m9081605AFF3E455A252E132C1741D1138371D80F (void);
// 0x00000BB7 System.Version System.Net.WebConnectionTunnel::get_ProxyVersion()
extern void WebConnectionTunnel_get_ProxyVersion_mA7A0D36376F979005C541F790299617371647B59 (void);
// 0x00000BB8 System.Void System.Net.WebConnectionTunnel::set_ProxyVersion(System.Version)
extern void WebConnectionTunnel_set_ProxyVersion_m98AF972297438D0B6787F046E3977F8C29828AFD (void);
// 0x00000BB9 System.Byte[] System.Net.WebConnectionTunnel::get_Data()
extern void WebConnectionTunnel_get_Data_m31F4E1F83D5E2AB65A5F7128A9AD64870DEE58BA (void);
// 0x00000BBA System.Void System.Net.WebConnectionTunnel::set_Data(System.Byte[])
extern void WebConnectionTunnel_set_Data_mF7094E254E090ED83D750B964A386AF4283E50AD (void);
// 0x00000BBB System.Threading.Tasks.Task System.Net.WebConnectionTunnel::Initialize(System.IO.Stream,System.Threading.CancellationToken)
extern void WebConnectionTunnel_Initialize_m79BA6644344B2C6D8B48EFAED9641CB369861852 (void);
// 0x00000BBC System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>> System.Net.WebConnectionTunnel::ReadHeaders(System.IO.Stream,System.Threading.CancellationToken)
extern void WebConnectionTunnel_ReadHeaders_mD9B5B8D1DD76A6CABFBA312DF0BAA433D9F3A2DE (void);
// 0x00000BBD System.Void System.Net.WebConnectionTunnel::FlushContents(System.IO.Stream,System.Int32)
extern void WebConnectionTunnel_FlushContents_m90AF991DB26D5A89D87585E05F7A8AB5F53880B4 (void);
// 0x00000BBE System.Void System.Net.WebConnectionTunnel/<Initialize>d__42::MoveNext()
extern void U3CInitializeU3Ed__42_MoveNext_m4E82E3BAC6AD66ACEF6A50B10D2AEA2695188FDA (void);
// 0x00000BBF System.Void System.Net.WebConnectionTunnel/<Initialize>d__42::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeU3Ed__42_SetStateMachine_m3DD116C544191BC17E335CE0D18C37EE6C35CA67 (void);
// 0x00000BC0 System.Void System.Net.WebConnectionTunnel/<ReadHeaders>d__43::MoveNext()
extern void U3CReadHeadersU3Ed__43_MoveNext_mEE6975063FFC03A4D0B05304C117BC806C945FEC (void);
// 0x00000BC1 System.Void System.Net.WebConnectionTunnel/<ReadHeaders>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadHeadersU3Ed__43_SetStateMachine_m4D09694F06F8E84E2FF5FBD90906333AC3E62CB1 (void);
// 0x00000BC2 System.Net.HttpWebRequest System.Net.WebOperation::get_Request()
extern void WebOperation_get_Request_mE63B277CB5DDAC32FC97D18F8EDDF2893931926A (void);
// 0x00000BC3 System.Net.WebConnection System.Net.WebOperation::get_Connection()
extern void WebOperation_get_Connection_m0F6A9F7E900AAB18334E77E5322967EF7CFF954B (void);
// 0x00000BC4 System.Void System.Net.WebOperation::set_Connection(System.Net.WebConnection)
extern void WebOperation_set_Connection_m5439BC6DECA3FF12B69F359D8350826ACB81EFDC (void);
// 0x00000BC5 System.Net.ServicePoint System.Net.WebOperation::get_ServicePoint()
extern void WebOperation_get_ServicePoint_mAF2A0E3681196651A6DEDAF678D10E6BB8E76123 (void);
// 0x00000BC6 System.Void System.Net.WebOperation::set_ServicePoint(System.Net.ServicePoint)
extern void WebOperation_set_ServicePoint_m86014427BEBB1FE040BEB0BFA1327563A21DB043 (void);
// 0x00000BC7 System.Net.BufferOffsetSize System.Net.WebOperation::get_WriteBuffer()
extern void WebOperation_get_WriteBuffer_m3D6CF961FF93DCE220A288C2C4CAAEAD8300A1BA (void);
// 0x00000BC8 System.Boolean System.Net.WebOperation::get_IsNtlmChallenge()
extern void WebOperation_get_IsNtlmChallenge_m53FFCE03BD50D526832BB33FD0C9157A5BE76F12 (void);
// 0x00000BC9 System.Void System.Net.WebOperation::.ctor(System.Net.HttpWebRequest,System.Net.BufferOffsetSize,System.Boolean,System.Threading.CancellationToken)
extern void WebOperation__ctor_mB1EF58FA22FB617795F258E9EAFDB42D7155A8F9 (void);
// 0x00000BCA System.Boolean System.Net.WebOperation::get_Aborted()
extern void WebOperation_get_Aborted_m13F76B284A1764A868FA9B79BBC79BA1239E6379 (void);
// 0x00000BCB System.Boolean System.Net.WebOperation::get_Closed()
extern void WebOperation_get_Closed_mD726F9FD6C5BB172597C9887E391C258E5E1C3CF (void);
// 0x00000BCC System.Void System.Net.WebOperation::Abort()
extern void WebOperation_Abort_m5EFC513866CBF182B16BC67AC7194CDA08F53655 (void);
// 0x00000BCD System.Void System.Net.WebOperation::Close()
extern void WebOperation_Close_mE0267FA8946A72CDCC6971A2BD66E47296212CBD (void);
// 0x00000BCE System.Void System.Net.WebOperation::SetCanceled()
extern void WebOperation_SetCanceled_mF675DB306852202B101E808CFA3E9181531B881D (void);
// 0x00000BCF System.Void System.Net.WebOperation::SetError(System.Exception)
extern void WebOperation_SetError_m6C688E1E2F66CD03B67112D7085FE66E749B6349 (void);
// 0x00000BD0 System.ValueTuple`2<System.Runtime.ExceptionServices.ExceptionDispatchInfo,System.Boolean> System.Net.WebOperation::SetDisposed(System.Runtime.ExceptionServices.ExceptionDispatchInfo&)
extern void WebOperation_SetDisposed_m59C0C97A6507ACE681C3234A9043252CEADC1468 (void);
// 0x00000BD1 System.Void System.Net.WebOperation::ThrowIfDisposed()
extern void WebOperation_ThrowIfDisposed_mA25DBD38306EC4A54FD1CB814640E43609D542A4 (void);
// 0x00000BD2 System.Void System.Net.WebOperation::ThrowIfDisposed(System.Threading.CancellationToken)
extern void WebOperation_ThrowIfDisposed_m2C8B9A4C53FEC510F9DAE1288D25830DDE52CEC0 (void);
// 0x00000BD3 System.Void System.Net.WebOperation::ThrowIfClosedOrDisposed()
extern void WebOperation_ThrowIfClosedOrDisposed_m86AFE5300A22F2363900EA844F0631C7E7CF4E70 (void);
// 0x00000BD4 System.Void System.Net.WebOperation::ThrowIfClosedOrDisposed(System.Threading.CancellationToken)
extern void WebOperation_ThrowIfClosedOrDisposed_m8C2C3FAEC1176C5ACCE2683A9B0437C34B6BE775 (void);
// 0x00000BD5 System.Void System.Net.WebOperation::ThrowDisposed(System.Runtime.ExceptionServices.ExceptionDispatchInfo&)
extern void WebOperation_ThrowDisposed_mD6DDCA1D037CF78AEE3E339B4FF7329C4EA79778 (void);
// 0x00000BD6 System.Void System.Net.WebOperation::RegisterRequest(System.Net.ServicePoint,System.Net.WebConnection)
extern void WebOperation_RegisterRequest_m5BEC561C8D1922A5DB7DAC16D423640332908FAD (void);
// 0x00000BD7 System.Void System.Net.WebOperation::SetPriorityRequest(System.Net.WebOperation)
extern void WebOperation_SetPriorityRequest_mD33F750FB12A4A72A2364529EE30A73C89F2CBE9 (void);
// 0x00000BD8 System.Threading.Tasks.Task`1<System.Net.WebRequestStream> System.Net.WebOperation::GetRequestStream()
extern void WebOperation_GetRequestStream_m3DBF6E379422198F63C1206FA7E620C683D7224D (void);
// 0x00000BD9 System.Net.WebRequestStream System.Net.WebOperation::get_WriteStream()
extern void WebOperation_get_WriteStream_m9C703DD92BCDE4AA5E9AB89C1269516E437FBEEA (void);
// 0x00000BDA System.Threading.Tasks.Task`1<System.Net.WebResponseStream> System.Net.WebOperation::GetResponseStream()
extern void WebOperation_GetResponseStream_m062725ECCF83FE33E0B49A9F3D324C09928FD86E (void);
// 0x00000BDB System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>> System.Net.WebOperation::WaitForCompletion(System.Boolean)
extern void WebOperation_WaitForCompletion_mF0922E9B6573BBD0D1C1350F7034CBE52AFE2806 (void);
// 0x00000BDC System.Void System.Net.WebOperation::Run()
extern void WebOperation_Run_mAF0FDCBAD9680E702CB3704DA73620F83BFFB48B (void);
// 0x00000BDD System.Void System.Net.WebOperation::FinishReading()
extern void WebOperation_FinishReading_m84D54A3B0757CAFEF140DCBC3485A7082A8A2A45 (void);
// 0x00000BDE System.Void System.Net.WebOperation::CompleteRequestWritten(System.Net.WebRequestStream,System.Exception)
extern void WebOperation_CompleteRequestWritten_mB56FD943A35ED3D73668E23AEF94190BC39A796B (void);
// 0x00000BDF System.Void System.Net.WebOperation::CompleteResponseRead(System.Boolean,System.Exception)
extern void WebOperation_CompleteResponseRead_mEE8D9042C6E9B1B87088785F941C88875C75F4FA (void);
// 0x00000BE0 System.Void System.Net.WebOperation::<RegisterRequest>b__46_0()
extern void WebOperation_U3CRegisterRequestU3Eb__46_0_mA6FDD84FBEC06BE0AA5DD8CA963FDB821C2AB69E (void);
// 0x00000BE1 System.Void System.Net.WebOperation/<WaitForCompletion>d__53::MoveNext()
extern void U3CWaitForCompletionU3Ed__53_MoveNext_m60F40364903BB53293D6DB6380D95DEF05C30025 (void);
// 0x00000BE2 System.Void System.Net.WebOperation/<WaitForCompletion>d__53::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitForCompletionU3Ed__53_SetStateMachine_m2D1B2C8F1AAD9115FA7DC7FB18585CE5186ADED7 (void);
// 0x00000BE3 System.Void System.Net.WebOperation/<Run>d__54::MoveNext()
extern void U3CRunU3Ed__54_MoveNext_mE284183F33E17445D2C1C1AB42DD2F188FDBFC17 (void);
// 0x00000BE4 System.Void System.Net.WebOperation/<Run>d__54::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRunU3Ed__54_SetStateMachine_mF7358A14C9EC6C10281CDDA4761FE1B1C89A9D0F (void);
// 0x00000BE5 System.Void System.Net.WebOperation/<FinishReading>d__55::MoveNext()
extern void U3CFinishReadingU3Ed__55_MoveNext_m3BA1E8FC40146118D2F626BE486F78F46C6B83A2 (void);
// 0x00000BE6 System.Void System.Net.WebOperation/<FinishReading>d__55::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CFinishReadingU3Ed__55_SetStateMachine_mF6B782E86696FFF0546FB0ED0812E669D7960BB4 (void);
// 0x00000BE7 System.Void System.Net.WebRequestStream::.ctor(System.Net.WebConnection,System.Net.WebOperation,System.IO.Stream,System.Net.WebConnectionTunnel)
extern void WebRequestStream__ctor_m09FC879FF23F47582270C74E163BBA7FCF6A86E9 (void);
// 0x00000BE8 System.Boolean System.Net.WebRequestStream::get_KeepAlive()
extern void WebRequestStream_get_KeepAlive_m0DA3C6F92A59A8AD909D656CAF308AF6DF6150F0 (void);
// 0x00000BE9 System.Int64 System.Net.WebRequestStream::get_Length()
extern void WebRequestStream_get_Length_m6AF737229D028D3C08D1C81A66D7194DBB972EB5 (void);
// 0x00000BEA System.Boolean System.Net.WebRequestStream::get_CanRead()
extern void WebRequestStream_get_CanRead_mE9AA44CF4CF1933BF6C506B80FE9978A595A797A (void);
// 0x00000BEB System.Boolean System.Net.WebRequestStream::get_CanWrite()
extern void WebRequestStream_get_CanWrite_m461EA88FA9F94C4D75AC82907F25EE01EFC429DA (void);
// 0x00000BEC System.Boolean System.Net.WebRequestStream::get_HasWriteBuffer()
extern void WebRequestStream_get_HasWriteBuffer_mB63C93A8938E80BCBDCE89A414AF548835872CF2 (void);
// 0x00000BED System.Int32 System.Net.WebRequestStream::get_WriteBufferLength()
extern void WebRequestStream_get_WriteBufferLength_mA60FFC816A99DBABB03687ED232848B9956B74E4 (void);
// 0x00000BEE System.Net.BufferOffsetSize System.Net.WebRequestStream::GetWriteBuffer()
extern void WebRequestStream_GetWriteBuffer_m237CDECF52B801216D2E4C495C47A90008CEE8DC (void);
// 0x00000BEF System.Threading.Tasks.Task System.Net.WebRequestStream::FinishWriting(System.Threading.CancellationToken)
extern void WebRequestStream_FinishWriting_m61E9B3AE084876D491326E505F3A1AD33D7F3AA6 (void);
// 0x00000BF0 System.Threading.Tasks.Task System.Net.WebRequestStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebRequestStream_WriteAsync_m3B3CDCE6E7EED065B5BB0C14681575F12D3C0EA9 (void);
// 0x00000BF1 System.Threading.Tasks.Task System.Net.WebRequestStream::ProcessWrite(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebRequestStream_ProcessWrite_m75A0AD29E2184026CF586AA1374E975EDBCE71D1 (void);
// 0x00000BF2 System.Void System.Net.WebRequestStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
extern void WebRequestStream_CheckWriteOverflow_m61D38BBEE25138BB04386018781A0265F0076ADE (void);
// 0x00000BF3 System.Threading.Tasks.Task System.Net.WebRequestStream::Initialize(System.Threading.CancellationToken)
extern void WebRequestStream_Initialize_mBB7C67320C11ED21DD06A3DF11D667BE4B2F6613 (void);
// 0x00000BF4 System.Threading.Tasks.Task System.Net.WebRequestStream::SetHeadersAsync(System.Boolean,System.Threading.CancellationToken)
extern void WebRequestStream_SetHeadersAsync_m85BF0321D732F809D2B0A413F2CCC5FC24203015 (void);
// 0x00000BF5 System.Threading.Tasks.Task System.Net.WebRequestStream::WriteRequestAsync(System.Threading.CancellationToken)
extern void WebRequestStream_WriteRequestAsync_mF6555E71773BB5CF58AF43830B9FB7B683E7B875 (void);
// 0x00000BF6 System.Threading.Tasks.Task System.Net.WebRequestStream::WriteChunkTrailer_inner(System.Threading.CancellationToken)
extern void WebRequestStream_WriteChunkTrailer_inner_mD2C08DF8C283B6D613ABBFD913F5594198E7409D (void);
// 0x00000BF7 System.Threading.Tasks.Task System.Net.WebRequestStream::WriteChunkTrailer()
extern void WebRequestStream_WriteChunkTrailer_m81C42840BA636FF8F4E26B60FEDF49EE388F6D8A (void);
// 0x00000BF8 System.Void System.Net.WebRequestStream::KillBuffer()
extern void WebRequestStream_KillBuffer_m82B1D659C9069740760E88118F94008D6DA38B4A (void);
// 0x00000BF9 System.Threading.Tasks.Task`1<System.Int32> System.Net.WebRequestStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebRequestStream_ReadAsync_m5737BDA87DA2A46A85A7BCE12279D5F52768E3A4 (void);
// 0x00000BFA System.Void System.Net.WebRequestStream::Close_internal(System.Boolean&)
extern void WebRequestStream_Close_internal_m43348C9C7F2F0BC6B93EA91CD6924587C9208175 (void);
// 0x00000BFB System.Void System.Net.WebRequestStream::.cctor()
extern void WebRequestStream__cctor_m10D75C2D8BC6234CBFE3C9848BE933613CF5443E (void);
// 0x00000BFC System.Void System.Net.WebRequestStream/<FinishWriting>d__30::MoveNext()
extern void U3CFinishWritingU3Ed__30_MoveNext_mEE4AC8EC28527F808A53FD5BB8B6A612C717BA59 (void);
// 0x00000BFD System.Void System.Net.WebRequestStream/<FinishWriting>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CFinishWritingU3Ed__30_SetStateMachine_m826AA573335332BFA1BE941DE9BD655DF9E7A82B (void);
// 0x00000BFE System.Void System.Net.WebRequestStream/<WriteAsync>d__31::MoveNext()
extern void U3CWriteAsyncU3Ed__31_MoveNext_m118EF33A63C9389D87A9F12799C926D40B14D047 (void);
// 0x00000BFF System.Void System.Net.WebRequestStream/<WriteAsync>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWriteAsyncU3Ed__31_SetStateMachine_mF5D8834A6D2FDD61C899CF3DEAE017005A33E292 (void);
// 0x00000C00 System.Void System.Net.WebRequestStream/<ProcessWrite>d__32::MoveNext()
extern void U3CProcessWriteU3Ed__32_MoveNext_m909AF6057238B0C301CCD03E59093162668B6855 (void);
// 0x00000C01 System.Void System.Net.WebRequestStream/<ProcessWrite>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessWriteU3Ed__32_SetStateMachine_m8CA38433A90F2E77784FB7C57F78E916932E3EA8 (void);
// 0x00000C02 System.Void System.Net.WebRequestStream/<Initialize>d__34::MoveNext()
extern void U3CInitializeU3Ed__34_MoveNext_mC46A2082BDCEA3D6090CF344BC4F9C0F20AC152D (void);
// 0x00000C03 System.Void System.Net.WebRequestStream/<Initialize>d__34::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeU3Ed__34_SetStateMachine_m91656B6F2C4CE356B78B5683A345FB0419E9DC50 (void);
// 0x00000C04 System.Void System.Net.WebRequestStream/<SetHeadersAsync>d__35::MoveNext()
extern void U3CSetHeadersAsyncU3Ed__35_MoveNext_m590745E97FF89EB8743E44A0C588F0721C25F64F (void);
// 0x00000C05 System.Void System.Net.WebRequestStream/<SetHeadersAsync>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSetHeadersAsyncU3Ed__35_SetStateMachine_mC514C7FEA01B5C0FF9BEE0F038D3D5F04B760465 (void);
// 0x00000C06 System.Void System.Net.WebRequestStream/<WriteRequestAsync>d__36::MoveNext()
extern void U3CWriteRequestAsyncU3Ed__36_MoveNext_mCE917482309E220A35B308EB92267DE4333C0D9F (void);
// 0x00000C07 System.Void System.Net.WebRequestStream/<WriteRequestAsync>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWriteRequestAsyncU3Ed__36_SetStateMachine_mECDCF8826C312E485A7504D8F63F2DB5D7AE21A0 (void);
// 0x00000C08 System.Void System.Net.WebRequestStream/<WriteChunkTrailer_inner>d__37::MoveNext()
extern void U3CWriteChunkTrailer_innerU3Ed__37_MoveNext_mFD300E7950CD77F3EF10F3561F711FA5B4B090C5 (void);
// 0x00000C09 System.Void System.Net.WebRequestStream/<WriteChunkTrailer_inner>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWriteChunkTrailer_innerU3Ed__37_SetStateMachine_m7C3E6AC7F159D272F887732DB9D5B10A7390878F (void);
// 0x00000C0A System.Void System.Net.WebRequestStream/<WriteChunkTrailer>d__38::MoveNext()
extern void U3CWriteChunkTrailerU3Ed__38_MoveNext_mA363A5B8053962B7408D2475E026E69EC61EBBAB (void);
// 0x00000C0B System.Void System.Net.WebRequestStream/<WriteChunkTrailer>d__38::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWriteChunkTrailerU3Ed__38_SetStateMachine_mB505AD1314323C5876A9B77C8A7AB8550B868F49 (void);
// 0x00000C0C System.Net.WebRequestStream System.Net.WebResponseStream::get_RequestStream()
extern void WebResponseStream_get_RequestStream_mECC05433F57625C2A8982DDD50F49B1B7B88E0AE (void);
// 0x00000C0D System.Net.WebHeaderCollection System.Net.WebResponseStream::get_Headers()
extern void WebResponseStream_get_Headers_mD8D78D21C51F06E0B919113138A523AC480390FE (void);
// 0x00000C0E System.Void System.Net.WebResponseStream::set_Headers(System.Net.WebHeaderCollection)
extern void WebResponseStream_set_Headers_m82B75F347F94D2F50F2AA4F224F34995A30E13DD (void);
// 0x00000C0F System.Net.HttpStatusCode System.Net.WebResponseStream::get_StatusCode()
extern void WebResponseStream_get_StatusCode_m44386FC08813FC891C56A9B2B4E337E446147E65 (void);
// 0x00000C10 System.Void System.Net.WebResponseStream::set_StatusCode(System.Net.HttpStatusCode)
extern void WebResponseStream_set_StatusCode_m33DDEF0B2B90C522BADCAD68554764A4A99D0C9A (void);
// 0x00000C11 System.String System.Net.WebResponseStream::get_StatusDescription()
extern void WebResponseStream_get_StatusDescription_mAFCE55D34C81BFA7FFFD4F3D23CCB73CE5898E22 (void);
// 0x00000C12 System.Void System.Net.WebResponseStream::set_StatusDescription(System.String)
extern void WebResponseStream_set_StatusDescription_mD6119140ABFF681276EC42ADD903A4D32A3A845C (void);
// 0x00000C13 System.Version System.Net.WebResponseStream::get_Version()
extern void WebResponseStream_get_Version_m837C4A8CBE3EF4D4687727CC32B896B546D7F040 (void);
// 0x00000C14 System.Void System.Net.WebResponseStream::set_Version(System.Version)
extern void WebResponseStream_set_Version_mC0532D5AC1C9E56EBBAED3B974A9000AABAFFF33 (void);
// 0x00000C15 System.Boolean System.Net.WebResponseStream::get_KeepAlive()
extern void WebResponseStream_get_KeepAlive_mC1A1D85FA069E283F957419D2CCD8892B5880A69 (void);
// 0x00000C16 System.Void System.Net.WebResponseStream::set_KeepAlive(System.Boolean)
extern void WebResponseStream_set_KeepAlive_m4BA3D90AC384E29540B6539F9A1322F4741033F7 (void);
// 0x00000C17 System.Void System.Net.WebResponseStream::.ctor(System.Net.WebRequestStream)
extern void WebResponseStream__ctor_m8D8614AD87C669DC1399E62CE52F7A1E1A26288E (void);
// 0x00000C18 System.Int64 System.Net.WebResponseStream::get_Length()
extern void WebResponseStream_get_Length_m9B80EEBE68D61D7075948FA0334B73854E66F4F1 (void);
// 0x00000C19 System.Boolean System.Net.WebResponseStream::get_CanRead()
extern void WebResponseStream_get_CanRead_m0AA9DC0D5BFE24767727DD1A590342BD8BAA291C (void);
// 0x00000C1A System.Boolean System.Net.WebResponseStream::get_CanWrite()
extern void WebResponseStream_get_CanWrite_m9A7A9C2EAF507A7A7578ECCB0F74ECB0A77FFDFB (void);
// 0x00000C1B System.Boolean System.Net.WebResponseStream::get_ChunkedRead()
extern void WebResponseStream_get_ChunkedRead_m48FD9457C5C383E32D660F4D04D5F8C265DD6C19 (void);
// 0x00000C1C System.Void System.Net.WebResponseStream::set_ChunkedRead(System.Boolean)
extern void WebResponseStream_set_ChunkedRead_m732CB538B6F9208EDF65212FFBBD2167534C22C8 (void);
// 0x00000C1D System.Net.MonoChunkStream System.Net.WebResponseStream::get_ChunkStream()
extern void WebResponseStream_get_ChunkStream_m4B6DB8D367E893488C5B660BF1DDADF02547073A (void);
// 0x00000C1E System.Void System.Net.WebResponseStream::set_ChunkStream(System.Net.MonoChunkStream)
extern void WebResponseStream_set_ChunkStream_m16697805F6C64466882707BE4F445013FE036CE7 (void);
// 0x00000C1F System.Threading.Tasks.Task`1<System.Int32> System.Net.WebResponseStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebResponseStream_ReadAsync_m317685A7D847F9336F91E292554DE06C20941823 (void);
// 0x00000C20 System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>> System.Net.WebResponseStream::ProcessRead(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebResponseStream_ProcessRead_m9675808DD6D55D6B396F29D605CD8A4FA3896BF7 (void);
// 0x00000C21 System.Threading.Tasks.Task`1<System.Int32> System.Net.WebResponseStream::InnerReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebResponseStream_InnerReadAsync_m452B408226FE5B066BF8B5866DB53D50B7304CB5 (void);
// 0x00000C22 System.Threading.Tasks.Task`1<System.Int32> System.Net.WebResponseStream::EnsureReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebResponseStream_EnsureReadAsync_mCB1871DDB2AC4DE2FD8BDC1D86AA9C9D28D74435 (void);
// 0x00000C23 System.Boolean System.Net.WebResponseStream::CheckAuthHeader(System.String)
extern void WebResponseStream_CheckAuthHeader_m04E77A3D3239BFA7E706BC239CB01777467A9E88 (void);
// 0x00000C24 System.Boolean System.Net.WebResponseStream::IsNtlmAuth()
extern void WebResponseStream_IsNtlmAuth_mB111551A9CE18EB3136D546617DD5E2188A5010E (void);
// 0x00000C25 System.Boolean System.Net.WebResponseStream::get_ExpectContent()
extern void WebResponseStream_get_ExpectContent_m512B25E47F44791C64C35D6F9E24A11337B12189 (void);
// 0x00000C26 System.Threading.Tasks.Task System.Net.WebResponseStream::Initialize(System.Net.BufferOffsetSize,System.Threading.CancellationToken)
extern void WebResponseStream_Initialize_mE18E78224D8451DE74799CD4974BD1C8701F22D2 (void);
// 0x00000C27 System.Threading.Tasks.Task System.Net.WebResponseStream::ReadAllAsync(System.Boolean,System.Threading.CancellationToken)
extern void WebResponseStream_ReadAllAsync_m6CECC40606CEA87CDE61B1493C017EE673027811 (void);
// 0x00000C28 System.Threading.Tasks.Task System.Net.WebResponseStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebResponseStream_WriteAsync_m2C5A3EEFC2514172B516F6710832C1490DF01B6D (void);
// 0x00000C29 System.Void System.Net.WebResponseStream::Close_internal(System.Boolean&)
extern void WebResponseStream_Close_internal_m362FACAB4483B56E21112ECD80EE57EDF786BC88 (void);
// 0x00000C2A System.Net.WebException System.Net.WebResponseStream::GetReadException(System.Net.WebExceptionStatus,System.Exception,System.String)
extern void WebResponseStream_GetReadException_m173F0AD9D8787E01923788DB880925854EFF7FF2 (void);
// 0x00000C2B System.Threading.Tasks.Task System.Net.WebResponseStream::InitReadAsync(System.Threading.CancellationToken)
extern void WebResponseStream_InitReadAsync_m9CD0CB610F1F76DAC12ED7CB95259475797554A7 (void);
// 0x00000C2C System.Boolean System.Net.WebResponseStream::GetResponse(System.Net.BufferOffsetSize,System.Int32&,System.Net.ReadState&)
extern void WebResponseStream_GetResponse_mE1882EE6BEF80729842FDEB863E58BD2AF8EFD85 (void);
// 0x00000C2D System.Void System.Net.WebResponseStream/<>c__DisplayClass48_0::.ctor()
extern void U3CU3Ec__DisplayClass48_0__ctor_m56BDB60E8B7E84733519A1AB3FB12A83BAEC0447 (void);
// 0x00000C2E System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>> System.Net.WebResponseStream/<>c__DisplayClass48_0::<ReadAsync>b__0(System.Threading.CancellationToken)
extern void U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__0_m64629E8313F646BC6128C1BD6FE536BC887E9DE9 (void);
// 0x00000C2F System.Void System.Net.WebResponseStream/<>c__DisplayClass48_0::<ReadAsync>b__1()
extern void U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__1_mE3D966B24CDFE85BAB30D283AEE82FC0FADD1473 (void);
// 0x00000C30 System.Void System.Net.WebResponseStream/<ReadAsync>d__48::MoveNext()
extern void U3CReadAsyncU3Ed__48_MoveNext_mFC68310659E4585F3E0B277689CE8F3545B36A42 (void);
// 0x00000C31 System.Void System.Net.WebResponseStream/<ReadAsync>d__48::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadAsyncU3Ed__48_SetStateMachine_mE4C27C131B2CF9A1877103B20A58D7CF18B86A68 (void);
// 0x00000C32 System.Void System.Net.WebResponseStream/<ProcessRead>d__49::MoveNext()
extern void U3CProcessReadU3Ed__49_MoveNext_mCF1DDA8282F122707865DD7843D8B9333BFA8995 (void);
// 0x00000C33 System.Void System.Net.WebResponseStream/<ProcessRead>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessReadU3Ed__49_SetStateMachine_m7DCB2CE9CBF4BC51713AF916B260D2A34CB1A804 (void);
// 0x00000C34 System.Void System.Net.WebResponseStream/<InnerReadAsync>d__50::MoveNext()
extern void U3CInnerReadAsyncU3Ed__50_MoveNext_m8661E9A672D05A5BB37C6B71ADDB733DD0A3BA0E (void);
// 0x00000C35 System.Void System.Net.WebResponseStream/<InnerReadAsync>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadAsyncU3Ed__50_SetStateMachine_m4C4D1E71476FAE6608F789668595696A888BCFF0 (void);
// 0x00000C36 System.Void System.Net.WebResponseStream/<EnsureReadAsync>d__51::MoveNext()
extern void U3CEnsureReadAsyncU3Ed__51_MoveNext_mBA1912ECF12B36F3B28037F9C81973B9988E211F (void);
// 0x00000C37 System.Void System.Net.WebResponseStream/<EnsureReadAsync>d__51::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CEnsureReadAsyncU3Ed__51_SetStateMachine_m20AE4061614B8AA8E6AA3EC4C4DFCF82150C6BC8 (void);
// 0x00000C38 System.Void System.Net.WebResponseStream/<Initialize>d__56::MoveNext()
extern void U3CInitializeU3Ed__56_MoveNext_mB6330AF9653EAB35D98177F0E077BC9D12561CC6 (void);
// 0x00000C39 System.Void System.Net.WebResponseStream/<Initialize>d__56::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeU3Ed__56_SetStateMachine_mC34B7BE729B3657CDD84BE6308D2452C6686B589 (void);
// 0x00000C3A System.Void System.Net.WebResponseStream/<ReadAllAsync>d__57::MoveNext()
extern void U3CReadAllAsyncU3Ed__57_MoveNext_mBFD8843716DBCF5131C5F214020B9B4C442BB028 (void);
// 0x00000C3B System.Void System.Net.WebResponseStream/<ReadAllAsync>d__57::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadAllAsyncU3Ed__57_SetStateMachine_m3335349A75579BA1BF3A5594B505B269667DDC46 (void);
// 0x00000C3C System.Void System.Net.WebResponseStream/<InitReadAsync>d__61::MoveNext()
extern void U3CInitReadAsyncU3Ed__61_MoveNext_mC2B382B0CBF4566CA8F85CA4DDD89B43A15D0F07 (void);
// 0x00000C3D System.Void System.Net.WebResponseStream/<InitReadAsync>d__61::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitReadAsyncU3Ed__61_SetStateMachine_mDA4F4F7AC52B912662DAA9683564D58D82AFDAC2 (void);
// 0x00000C3E System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
extern void SocketException_WSAGetLastError_internal_m32EE4D44376A1A6BC4F32C0726112248AC1AC8F3 (void);
// 0x00000C3F System.Void System.Net.Sockets.SocketException::.ctor()
extern void SocketException__ctor_mDDA59569C2C05AB013AF9670BD6EC070086239AB (void);
// 0x00000C40 System.Void System.Net.Sockets.SocketException::.ctor(System.Int32,System.String)
extern void SocketException__ctor_m0F0444CE9F1E2BF7AF1D0A89DC29FD973AE743AC (void);
// 0x00000C41 System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
extern void SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64 (void);
// 0x00000C42 System.Void System.Net.Sockets.SocketException::.ctor(System.Net.Sockets.SocketError)
extern void SocketException__ctor_m5E9DDE94C8009DE11B8CE2EF1611A5CE8A900AC3 (void);
// 0x00000C43 System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void SocketException__ctor_m830447309D5813D7FDE050DB3A075BDCE787B046 (void);
// 0x00000C44 System.String System.Net.Sockets.SocketException::get_Message()
extern void SocketException_get_Message_mA34986089059D346C42DB47FB8BD331856BE0492 (void);
// 0x00000C45 System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
extern void SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6 (void);
// 0x00000C46 System.Void System.Net.Sockets.LingerOption::.ctor(System.Boolean,System.Int32)
extern void LingerOption__ctor_m0BECD7DEA12AC52917D065B27818677F4DE7CEBC (void);
// 0x00000C47 System.Void System.Net.Sockets.LingerOption::set_Enabled(System.Boolean)
extern void LingerOption_set_Enabled_mEDF2FED046EA58F9C23BEF3BF1184C3A890419DB (void);
// 0x00000C48 System.Void System.Net.Sockets.LingerOption::set_LingerTime(System.Int32)
extern void LingerOption_set_LingerTime_mDC6B06F96C04C5A69E19912EBB37DC5BDE5A6DFB (void);
// 0x00000C49 System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
extern void NetworkStream__ctor_m1E6CEBB6583CF44E9FA25A38E84B212C9BC91CD8 (void);
// 0x00000C4A System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern void NetworkStream__ctor_mA44C3DB90F5B64F230CC2176DC7E722F4077A9DE (void);
// 0x00000C4B System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::get_InternalSocket()
extern void NetworkStream_get_InternalSocket_m58624516F119DC056AC5C53B1E3D412D0394F999 (void);
// 0x00000C4C System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern void NetworkStream_get_CanRead_mE61A13D0F12690A65200D3FD0947A0DC2442643E (void);
// 0x00000C4D System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern void NetworkStream_get_CanSeek_mAF6CE2068CC8DC3DDD922C6C2C187D286A3F5044 (void);
// 0x00000C4E System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern void NetworkStream_get_CanWrite_mD3EBED79804ED2676F028892B84DC7F8F9FDAA6A (void);
// 0x00000C4F System.Int32 System.Net.Sockets.NetworkStream::get_ReadTimeout()
extern void NetworkStream_get_ReadTimeout_m9B4ABB17E07B7CB59AAB1A2F26973D0870EC6993 (void);
// 0x00000C50 System.Void System.Net.Sockets.NetworkStream::set_ReadTimeout(System.Int32)
extern void NetworkStream_set_ReadTimeout_m1FEDCDB6F079AFA7787F05C145597A2C1BEAF521 (void);
// 0x00000C51 System.Int32 System.Net.Sockets.NetworkStream::get_WriteTimeout()
extern void NetworkStream_get_WriteTimeout_mD598023F9B6DA63B85F55EECCED2A32F21677AB1 (void);
// 0x00000C52 System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern void NetworkStream_get_Length_mA738206EC6CF6C8A07FEC82C3702A5F494569496 (void);
// 0x00000C53 System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern void NetworkStream_get_Position_m6DAEE19231A91693081BE120ABCB5B031DC95E61 (void);
// 0x00000C54 System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern void NetworkStream_set_Position_mACE85A7C1D600E5B6D18CF5FF32D859F4734010D (void);
// 0x00000C55 System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void NetworkStream_Seek_mD5CE01FBB731FF52A66451C5F688837AC4ADD906 (void);
// 0x00000C56 System.Void System.Net.Sockets.NetworkStream::InitNetworkStream(System.Net.Sockets.Socket,System.IO.FileAccess)
extern void NetworkStream_InitNetworkStream_m0D13876222C80AE5B33F26D06A8FDC538C2CA9C0 (void);
// 0x00000C57 System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern void NetworkStream_Read_mB0EBC9488D9E3291AB4C6412F3AE70E8D6EEDBA7 (void);
// 0x00000C58 System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern void NetworkStream_Write_mFF7B408A0A6322FDEFB54BD0C759C3C6E6268AFE (void);
// 0x00000C59 System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern void NetworkStream_Dispose_m23F2CD1DBD8BBDCC96B36F93E663F3D5FF20B7F3 (void);
// 0x00000C5A System.Void System.Net.Sockets.NetworkStream::Finalize()
extern void NetworkStream_Finalize_mE8FF3552F90C61575174F96CB6EF435268BE792A (void);
// 0x00000C5B System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void NetworkStream_BeginRead_mCC685D1B566FEC09C2AE76871AB01917D2446144 (void);
// 0x00000C5C System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern void NetworkStream_EndRead_m53CDED13D3A6DD8D42F8533F2336D0EA6C752701 (void);
// 0x00000C5D System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void NetworkStream_BeginWrite_mE2F47607B52FC7FA99DD00337DB2AA0F5673E7C0 (void);
// 0x00000C5E System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern void NetworkStream_EndWrite_m843683738E14624DEBEF963D2480C8F3DB5EC848 (void);
// 0x00000C5F System.Void System.Net.Sockets.NetworkStream::Flush()
extern void NetworkStream_Flush_m8DAEB9385D9E7B5531733900D507531E0B628F9B (void);
// 0x00000C60 System.Void System.Net.Sockets.NetworkStream::SetSocketTimeoutOption(System.Net.Sockets.SocketShutdown,System.Int32,System.Boolean)
extern void NetworkStream_SetSocketTimeoutOption_m8D7C33643C44CDC7170ECBE81F59D05B5F369D43 (void);
// 0x00000C61 System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (void);
// 0x00000C62 System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern void Socket_get_SupportsIPv4_mA99B8DC8EC66E4420EBB5E47FDD3B325246C1EB6 (void);
// 0x00000C63 System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv4()
extern void Socket_get_OSSupportsIPv4_m779A662683A5FBD8D7B4D1E5E940B04C6AFA0120 (void);
// 0x00000C64 System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern void Socket_get_SupportsIPv6_mFE2438C5E347F2F9434AAA3E6255A5A4AA5B71D4 (void);
// 0x00000C65 System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv6()
extern void Socket_get_OSSupportsIPv6_m45BC8FD78EDFCB853CA509A8DDD23EF42203B6D4 (void);
// 0x00000C66 System.IntPtr System.Net.Sockets.Socket::get_Handle()
extern void Socket_get_Handle_mBF42AC5E9403C23BE532F17EE337BF9F150A0256 (void);
// 0x00000C67 System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern void Socket_get_AddressFamily_m42C390D31345314080EC35356ACFBBFF7E1123E5 (void);
// 0x00000C68 System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
extern void Socket_get_SocketType_mAFBEF108992F069AF0B8AD26D47EBBEADB8D2661 (void);
// 0x00000C69 System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern void Socket_get_ProtocolType_m364A0E823BF3EA78DAFC1ED3A6B39658FB6A23BB (void);
// 0x00000C6A System.Void System.Net.Sockets.Socket::set_DontFragment(System.Boolean)
extern void Socket_set_DontFragment_mCF6F7D2735A7FD4E327617826C62ED015001DFF6 (void);
// 0x00000C6B System.Boolean System.Net.Sockets.Socket::get_DualMode()
extern void Socket_get_DualMode_m8B45BA120D7A03DB5EF8C3CF9483C829E19CEFCA (void);
// 0x00000C6C System.Void System.Net.Sockets.Socket::set_DualMode(System.Boolean)
extern void Socket_set_DualMode_m08152574129C01AC8941AAB43752C3CD1525C193 (void);
// 0x00000C6D System.Boolean System.Net.Sockets.Socket::get_IsDualMode()
extern void Socket_get_IsDualMode_m1CB3E1554CD046481E3408B20D887C7EC8470CFA (void);
// 0x00000C6E System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern void Socket_Send_m3174031DF8ADFDAF158BEB0D8AC5CBB445F8D21C (void);
// 0x00000C6F System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Send_mF846BE4031BE538814BC497FFDC8BB02AC9F5A33 (void);
// 0x00000C70 System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Receive_m29FED7D6FE4F95DD3B71CE6425AE19A3781FADBE (void);
// 0x00000C71 System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern void Socket_Receive_mF4189DF1BB210034B41CC593C0FEC2F21D8DFF47 (void);
// 0x00000C72 System.Int32 System.Net.Sockets.Socket::IOControl(System.Net.Sockets.IOControlCode,System.Byte[],System.Byte[])
extern void Socket_IOControl_mEADB9616747250B4E647DD6BD4CA42D36A95248C (void);
// 0x00000C73 System.Void System.Net.Sockets.Socket::SetIPProtectionLevel(System.Net.Sockets.IPProtectionLevel)
extern void Socket_SetIPProtectionLevel_mC243CFB942D4DA0F2A148A0DAD3B5559DB005CDB (void);
// 0x00000C74 System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern void Socket_BeginSend_m36452399B2D44A215795BFB0F1E06AEFD451E7C3 (void);
// 0x00000C75 System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
extern void Socket_EndSend_mC636AB62DC23FA2E8BDB612F5CDB203E6CAE4D17 (void);
// 0x00000C76 System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern void Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738 (void);
// 0x00000C77 System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
extern void Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364 (void);
// 0x00000C78 System.Object System.Net.Sockets.Socket::get_InternalSyncObject()
extern void Socket_get_InternalSyncObject_m11CB9CA23D0CDFF801C26121CB479BA162D19ACD (void);
// 0x00000C79 System.Boolean System.Net.Sockets.Socket::get_CleanedUp()
extern void Socket_get_CleanedUp_m8F6EDAE37C56CBC282D3EAF9D93B5726EEC85988 (void);
// 0x00000C7A System.Void System.Net.Sockets.Socket::InitializeSockets()
extern void Socket_InitializeSockets_mF69CCC3B14A53FC7CD95F6E87FC726812ADB3AE2 (void);
// 0x00000C7B System.Void System.Net.Sockets.Socket::Dispose()
extern void Socket_Dispose_mED966D36CA8914F199BCE9497FFC5261AC99C1AC (void);
// 0x00000C7C System.Void System.Net.Sockets.Socket::Finalize()
extern void Socket_Finalize_m1350F4F84C06E9DF703C32E47B1579C84A22B742 (void);
// 0x00000C7D System.Void System.Net.Sockets.Socket::InternalShutdown(System.Net.Sockets.SocketShutdown)
extern void Socket_InternalShutdown_mD0EF08D54151D53369D32CD61C8518454AAAEFE8 (void);
// 0x00000C7E System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32,System.Boolean)
extern void Socket_SetSocketOption_m4939E9F69DFA288DD47E2CBF18D1762C7E171350 (void);
// 0x00000C7F System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Net.Sockets.SafeSocketHandle)
extern void Socket__ctor_m91002BA76E3B56D33CDEB6D30EFE923F92822CE4 (void);
// 0x00000C80 System.Void System.Net.Sockets.Socket::SocketDefaults()
extern void Socket_SocketDefaults_mEEA679EDCFED63435F630A133916BD5F97BF1FFB (void);
// 0x00000C81 System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern void Socket_Socket_internal_m38C1C722EBA63E2DEE7DF77B02A75ED1CC9E5BCF (void);
// 0x00000C82 System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
extern void Socket_get_LocalEndPoint_m3A2B4E60F0096E2DB31F7C28EF3CDE148D256E26 (void);
// 0x00000C83 System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.Net.Sockets.SafeSocketHandle,System.Int32,System.Int32&)
extern void Socket_LocalEndPoint_internal_m45692ABAA313C15963E4CCA7EFE6E7FB1692297A (void);
// 0x00000C84 System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32,System.Int32&)
extern void Socket_LocalEndPoint_internal_m699B7C7F957FCA100D69E18735C15C4FA0E99CCB (void);
// 0x00000C85 System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern void Socket_get_Blocking_mE3DB6D71A54F6376624DDA9522C783B914860ED3 (void);
// 0x00000C86 System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern void Socket_set_Blocking_mAE329D3DA788B19FDDC6B773F5B0A1C31FBE9A7B (void);
// 0x00000C87 System.Void System.Net.Sockets.Socket::Blocking_internal(System.Net.Sockets.SafeSocketHandle,System.Boolean,System.Int32&)
extern void Socket_Blocking_internal_mCD8DDA2B42FCD3694E0DF5977ECDCFB080CA54BA (void);
// 0x00000C88 System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern void Socket_Blocking_internal_m5BA5FA9ABDF0429D983B2FE91DAD20CA025D466A (void);
// 0x00000C89 System.Boolean System.Net.Sockets.Socket::get_Connected()
extern void Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5 (void);
// 0x00000C8A System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern void Socket_set_NoDelay_m1F7ACCEF219BB8745AB17F29CEA618088E0B2405 (void);
// 0x00000C8B System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
extern void Socket_Poll_m65D8E383FBE5A1D4A115942182620422B6646B98 (void);
// 0x00000C8C System.Boolean System.Net.Sockets.Socket::Poll_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern void Socket_Poll_internal_mA9D6DA0F9323BE621CD3ACBEBEA80641F55AAA11 (void);
// 0x00000C8D System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern void Socket_Poll_internal_m765C9C063BFFFE7FC9CCB01285FDA50E267B8C54 (void);
// 0x00000C8E System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
extern void Socket_Accept_m11B031FF408E1899034B993B352178D9D6B37C1A (void);
// 0x00000C8F System.Void System.Net.Sockets.Socket::Accept(System.Net.Sockets.Socket)
extern void Socket_Accept_mAF83623B54FEA675F0F16C29EACE1F24DE6C02FF (void);
// 0x00000C90 System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.IAsyncResult)
extern void Socket_EndAccept_m6A7BE15D82A8C8DCA5AD786CC97E0A12FF354D09 (void);
// 0x00000C91 System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.Byte[]&,System.Int32&,System.IAsyncResult)
extern void Socket_EndAccept_m96B08273E42578EAB0A297A707A1F15956F69FB0 (void);
// 0x00000C92 System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::Accept_internal(System.Net.Sockets.SafeSocketHandle,System.Int32&,System.Boolean)
extern void Socket_Accept_internal_m993249D44B5193CB8B5CFFDDEDBCE4D4DFBB9D6A (void);
// 0x00000C93 System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
extern void Socket_Accept_internal_mD39545A1FDE765CF9F54924D3A3C2549CD72FAFB (void);
// 0x00000C94 System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern void Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA (void);
// 0x00000C95 System.Void System.Net.Sockets.Socket::Bind_internal(System.Net.Sockets.SafeSocketHandle,System.Net.SocketAddress,System.Int32&)
extern void Socket_Bind_internal_m85DF18886A077D271720DCF0ACDA05AACED2B7C8 (void);
// 0x00000C96 System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern void Socket_Bind_internal_mE0AA19CD4841C1FFE9A4176ACBE6E11BA958F202 (void);
// 0x00000C97 System.Void System.Net.Sockets.Socket::Listen(System.Int32)
extern void Socket_Listen_m734803DAC514E64828168AF9212D6A9EC63B32EC (void);
// 0x00000C98 System.Void System.Net.Sockets.Socket::Listen_internal(System.Net.Sockets.SafeSocketHandle,System.Int32,System.Int32&)
extern void Socket_Listen_internal_m2802EDACE64C106C3E87CFE335BE2507486B6DD4 (void);
// 0x00000C99 System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
extern void Socket_Listen_internal_m3224BE95C5D016939BF9C22FB44ABE2ED2485BE1 (void);
// 0x00000C9A System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
extern void Socket_Connect_m874A510F986F4D91446B2F53688D0BCFFE0A6BE1 (void);
// 0x00000C9B System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.EndPoint,System.AsyncCallback,System.Object)
extern void Socket_BeginConnect_m5CBFB6B9DC973279CDC9E8935431972464F9E0B4 (void);
// 0x00000C9C System.Void System.Net.Sockets.Socket::BeginMConnect(System.Net.Sockets.SocketAsyncResult)
extern void Socket_BeginMConnect_m37A5BAD3A1B8CDE7C71C1CA02679046849C08B09 (void);
// 0x00000C9D System.Void System.Net.Sockets.Socket::BeginSConnect(System.Net.Sockets.SocketAsyncResult)
extern void Socket_BeginSConnect_mA7E5FC617A838175878CEE04B922372FEA50C3E1 (void);
// 0x00000C9E System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
extern void Socket_EndConnect_m10F5B4F43A68F96891DB3AEF493AB160CD8104D6 (void);
// 0x00000C9F System.Void System.Net.Sockets.Socket::Connect_internal(System.Net.Sockets.SafeSocketHandle,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_Connect_internal_mB28CEC91E12F9B621FF2B074CACC575629E33746 (void);
// 0x00000CA0 System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_Connect_internal_m726179D62CA3CA8039CC1351A8145477E73670D2 (void);
// 0x00000CA1 System.Void System.Net.Sockets.Socket::Disconnect(System.Boolean)
extern void Socket_Disconnect_mFECF870A7A5604A9AFD79DBB6354F1697A96C422 (void);
// 0x00000CA2 System.Void System.Net.Sockets.Socket::EndDisconnect(System.IAsyncResult)
extern void Socket_EndDisconnect_mCD874CA31D96229FBF311AB941DFB1FAE4897BE8 (void);
// 0x00000CA3 System.Void System.Net.Sockets.Socket::Disconnect_internal(System.Net.Sockets.SafeSocketHandle,System.Boolean,System.Int32&)
extern void Socket_Disconnect_internal_m78AD76E91C83AE6CE27D4FC952FD1D28EA33FE91 (void);
// 0x00000CA4 System.Void System.Net.Sockets.Socket::Disconnect_internal(System.IntPtr,System.Boolean,System.Int32&)
extern void Socket_Disconnect_internal_m05114A11C947B0D0C02233B65E3D8819DC21DD14 (void);
// 0x00000CA5 System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Receive_mF387A0975239872402A6118D3F196B020060021C (void);
// 0x00000CA6 System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Receive_m51DFAB2284E194E286E5B086F874EFDA80A7C687 (void);
// 0x00000CA7 System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern void Socket_BeginReceive_m6CE71DB94ED6C33A5B0921F13530283D68979B54 (void);
// 0x00000CA8 System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern void Socket_EndReceive_m080D7964C40358B101AA6AF0B55635B3CBC9DFB3 (void);
// 0x00000CA9 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mD1316BB323E539121369401B592F3B054551E90A (void);
// 0x00000CAA System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_m50CFB1A7DEFA33735613188E6AA6D9439E80EE37 (void);
// 0x00000CAB System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mFFD3DE5D5B14A0730765CE470002536254B94789 (void);
// 0x00000CAC System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mB2C515952128D43441C550DCF5A4AB7D3C2A2654 (void);
// 0x00000CAD System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Net.Sockets.SocketError&)
extern void Socket_ReceiveFrom_mFCCD977ED8761DBBF13EC14BEFC4615662CE501C (void);
// 0x00000CAE System.Int32 System.Net.Sockets.Socket::EndReceiveFrom(System.IAsyncResult,System.Net.EndPoint&)
extern void Socket_EndReceiveFrom_mAE3C7B82193AD982F47EE74B8C75CB52E7DB15BA (void);
// 0x00000CAF System.Int32 System.Net.Sockets.Socket::ReceiveFrom_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&,System.Boolean)
extern void Socket_ReceiveFrom_internal_m5C01BB7E993A7899973D0FC82A6E2D86F8F813AE (void);
// 0x00000CB0 System.Int32 System.Net.Sockets.Socket::ReceiveFrom_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&,System.Boolean)
extern void Socket_ReceiveFrom_internal_m03158D1D16520CBCE294BFAED04B2644F35B425C (void);
// 0x00000CB1 System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Send_mC5F7C598421E94D9098B7A65073193E7E574A1C7 (void);
// 0x00000CB2 System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Send_m6414CA18C059F7262E069F92A17A2B31BB83E2F7 (void);
// 0x00000CB3 System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern void Socket_BeginSend_m0BBAE4C48B338F9F6EBFD4F0E6FE236FE4BDE64C (void);
// 0x00000CB4 System.Void System.Net.Sockets.Socket::BeginSendCallback(System.Net.Sockets.SocketAsyncResult,System.Int32)
extern void Socket_BeginSendCallback_m7BAA6F54C7D4AEAF6BC6B2552D23C3464C0F787D (void);
// 0x00000CB5 System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern void Socket_EndSend_m78EE767A837539CAFEA99FA8A2EB0EF24444123E (void);
// 0x00000CB6 System.Int32 System.Net.Sockets.Socket::Send_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_mAED1C3A20DB7EB11A59927CDD3ABC5579D0C43BB (void);
// 0x00000CB7 System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_mD61B4C771A2627CB8C0F34B27E5B66F0BE7752F6 (void);
// 0x00000CB8 System.Int32 System.Net.Sockets.Socket::Send_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_mAEE2FA94300B035241FCE5C276EAA4B956FA89B2 (void);
// 0x00000CB9 System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_mEDB8816465E73FDF63FA51421A33461F44F38D4D (void);
// 0x00000CBA System.Int32 System.Net.Sockets.Socket::EndSendTo(System.IAsyncResult)
extern void Socket_EndSendTo_mC35D110ED10CFAFEF443A1AEFCDEA438DE0101EC (void);
// 0x00000CBB System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern void Socket_GetSocketOption_m39C453F9FA4D1EC664C660851CED73271B1162A2 (void);
// 0x00000CBC System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern void Socket_GetSocketOption_obj_internal_m5C6F74BA7CBC5A7AF3FED034A1557A2CD65804EA (void);
// 0x00000CBD System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern void Socket_GetSocketOption_obj_internal_mBA1E9B89A4AA0CB87DED7CCA6173BA11E1163001 (void);
// 0x00000CBE System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern void Socket_SetSocketOption_m19085C1856DE21260294680B7725610D71D66A58 (void);
// 0x00000CBF System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern void Socket_SetSocketOption_internal_mF5D974153131AD9CA8713FA0F0549DE238C88CD5 (void);
// 0x00000CC0 System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern void Socket_SetSocketOption_internal_m2FBC1775F65CF09AF87F1C9396DD794F4BAB0095 (void);
// 0x00000CC1 System.Int32 System.Net.Sockets.Socket::IOControl(System.Int32,System.Byte[],System.Byte[])
extern void Socket_IOControl_mFB46E7CECA515C5FCCDCE0377727025E49241080 (void);
// 0x00000CC2 System.Int32 System.Net.Sockets.Socket::IOControl_internal(System.Net.Sockets.SafeSocketHandle,System.Int32,System.Byte[],System.Byte[],System.Int32&)
extern void Socket_IOControl_internal_m7A8937A6BC0A93FDA751E57150CB868364AC0E5E (void);
// 0x00000CC3 System.Int32 System.Net.Sockets.Socket::IOControl_internal(System.IntPtr,System.Int32,System.Byte[],System.Byte[],System.Int32&)
extern void Socket_IOControl_internal_mC2565B58A6416BDF359815D27E81C04E83D8DE48 (void);
// 0x00000CC4 System.Void System.Net.Sockets.Socket::Close()
extern void Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4 (void);
// 0x00000CC5 System.Void System.Net.Sockets.Socket::Close(System.Int32)
extern void Socket_Close_mE6673231EFBF35BBF5228BC5C7A2BA08DAD5237F (void);
// 0x00000CC6 System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern void Socket_Close_internal_mB425FD973E99698A24B5C89FF71DA8E515D8B4D1 (void);
// 0x00000CC7 System.Void System.Net.Sockets.Socket::Shutdown_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketShutdown,System.Int32&)
extern void Socket_Shutdown_internal_mEF0F7AAEE1A7ECB909B871A31ABC8A44D08697EC (void);
// 0x00000CC8 System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern void Socket_Shutdown_internal_m900059941244628BEB848B7DAB4F7B98C4928361 (void);
// 0x00000CC9 System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern void Socket_Dispose_mD208C78BC53159B6E12EEAD70784ED7F19B38724 (void);
// 0x00000CCA System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern void Socket_Linger_m24D121E76C38D9E302EF059712EE0C90B5312FBF (void);
// 0x00000CCB System.Void System.Net.Sockets.Socket::ThrowIfDisposedAndClosed()
extern void Socket_ThrowIfDisposedAndClosed_m93567578970C10A4E56C7DF84D7D18A1E5AB8CE5 (void);
// 0x00000CCC System.Void System.Net.Sockets.Socket::ThrowIfBufferNull(System.Byte[])
extern void Socket_ThrowIfBufferNull_m80732B6CF5F7BFA314905627BF1B9D28D4E2A41F (void);
// 0x00000CCD System.Void System.Net.Sockets.Socket::ThrowIfBufferOutOfRange(System.Byte[],System.Int32,System.Int32)
extern void Socket_ThrowIfBufferOutOfRange_m22646D99174E99B57B816E260C93D959CE4FB143 (void);
// 0x00000CCE System.Void System.Net.Sockets.Socket::ThrowIfUdp()
extern void Socket_ThrowIfUdp_m006AEC31161FCD9D704DBC20A4C8896B719ED6FA (void);
// 0x00000CCF System.Net.Sockets.SocketAsyncResult System.Net.Sockets.Socket::ValidateEndIAsyncResult(System.IAsyncResult,System.String,System.String)
extern void Socket_ValidateEndIAsyncResult_m3B62AE8C5CB328C37CE3FB3264B5A0299E1DD3A3 (void);
// 0x00000CD0 System.Void System.Net.Sockets.Socket::QueueIOSelectorJob(System.Threading.SemaphoreSlim,System.IntPtr,System.IOSelectorJob)
extern void Socket_QueueIOSelectorJob_m7342EB18C3E806FFE6C87FC356C89E23064A7FB4 (void);
// 0x00000CD1 System.Net.IPEndPoint System.Net.Sockets.Socket::RemapIPEndPoint(System.Net.IPEndPoint)
extern void Socket_RemapIPEndPoint_m8B03D3304FF55B1B423F96A2917F34732B258D73 (void);
// 0x00000CD2 System.Void System.Net.Sockets.Socket::cancel_blocking_socket_operation(System.Threading.Thread)
extern void Socket_cancel_blocking_socket_operation_mF7D69972B1CC9D769A3E5BF9946125C5CC661172 (void);
// 0x00000CD3 System.Int32 System.Net.Sockets.Socket::get_FamilyHint()
extern void Socket_get_FamilyHint_m133ABCFB7BF5184CFA0AA12E4BC031D9598CBAC8 (void);
// 0x00000CD4 System.Boolean System.Net.Sockets.Socket::IsProtocolSupported_internal(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern void Socket_IsProtocolSupported_internal_m4C4E9B469DECA875DCDE5AFCA5B522F09C3B44EA (void);
// 0x00000CD5 System.Boolean System.Net.Sockets.Socket::IsProtocolSupported(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern void Socket_IsProtocolSupported_m063B4A00EC7B0FF7FB37507F33C22BFBD0177F18 (void);
// 0x00000CD6 System.Void System.Net.Sockets.Socket::.cctor()
extern void Socket__cctor_mD7400247DF81848730C006F1CDFE51353C2F3F16 (void);
// 0x00000CD7 System.Void System.Net.Sockets.Socket/<>c::.cctor()
extern void U3CU3Ec__cctor_m038CF32946815BC1EC22307A7B49E3CA24C281AF (void);
// 0x00000CD8 System.Void System.Net.Sockets.Socket/<>c::.ctor()
extern void U3CU3Ec__ctor_mBED1A732D3342D1A48A4088765AA6159F66308A3 (void);
// 0x00000CD9 System.Void System.Net.Sockets.Socket/<>c::<BeginSend>b__242_0(System.IOAsyncResult)
extern void U3CU3Ec_U3CBeginSendU3Eb__242_0_mD3991BEAE3E701CD4DFE0CD88CDA34FA92CBDE34 (void);
// 0x00000CDA System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_0(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_0_m78BAFD002681A3153EFA1D99AD1FA73CE5C6D497 (void);
// 0x00000CDB System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_1(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_1_mB5591AD589C6768F490B0D0B54E57819E5A5AB93 (void);
// 0x00000CDC System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_2(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_2_mA23AC673459AEF9A5266F2E76CDC36B7A0202526 (void);
// 0x00000CDD System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_3(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_3_mE0290571356E428FDD0BD7D6F68F77E29711F1AF (void);
// 0x00000CDE System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_4(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_4_mB745E591EB617D9E2C4F1A916DAA67074654EFBF (void);
// 0x00000CDF System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_5(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_5_m05BF8F056ADF873CCDFEBF440674D277FE2F7006 (void);
// 0x00000CE0 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_6(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_6_m08576ECB30BC93839B7EE8A0C47F2C8F57CA123C (void);
// 0x00000CE1 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_7(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_7_m0561800D9E4E561DFC04D331A71DC75177B1D41B (void);
// 0x00000CE2 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_8(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_8_m203B412928890D791D5CA33F20136CD6ED41AF7C (void);
// 0x00000CE3 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_9(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_9_m104DDE3D502D2B41D2D26BDFC51F4B755748EDD9 (void);
// 0x00000CE4 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_10(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_10_m785946EC496FB08E3509F8CFA15E74EBBB106D91 (void);
// 0x00000CE5 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_11(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_11_m1477519094CE46AE2DF260FEBDAD7BD96D9C0404 (void);
// 0x00000CE6 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_12(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_12_m3FEABEC5B22A1A8C52CB613BF6DFA66FF37C0108 (void);
// 0x00000CE7 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_13(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_13_mC3C9626E90525A0BCC01942AA3F8FDB8E1BD9B5F (void);
// 0x00000CE8 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_14(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_14_m821160348241293FC22B49EECBDC975F7EBD4E6F (void);
// 0x00000CE9 System.Void System.Net.Sockets.Socket/<>c__DisplayClass243_0::.ctor()
extern void U3CU3Ec__DisplayClass243_0__ctor_mE46586621BE2BAD2AB2E3E6AC707E33CFD8806B1 (void);
// 0x00000CEA System.Void System.Net.Sockets.Socket/<>c__DisplayClass243_0::<BeginSendCallback>b__0(System.IOAsyncResult)
extern void U3CU3Ec__DisplayClass243_0_U3CBeginSendCallbackU3Eb__0_m4191C24BA6A1E93D58A2A3094EB31AE103DB013E (void);
// 0x00000CEB System.Void System.Net.Sockets.Socket/<>c__DisplayClass299_0::.ctor()
extern void U3CU3Ec__DisplayClass299_0__ctor_m99CFD051D6B2F4A61EB68106EB6F0DCCDC90DE8D (void);
// 0x00000CEC System.Void System.Net.Sockets.Socket/<>c__DisplayClass299_0::<QueueIOSelectorJob>b__0(System.Threading.Tasks.Task)
extern void U3CU3Ec__DisplayClass299_0_U3CQueueIOSelectorJobU3Eb__0_m8F058B49A64734E9ED20E1B0956CBB8186B9985B (void);
// 0x00000CED System.Void System.Net.Sockets.SafeSocketHandle::.ctor(System.IntPtr,System.Boolean)
extern void SafeSocketHandle__ctor_mA17D19F4D9F5F0D3C29A0C46702E85B9C9D87295 (void);
// 0x00000CEE System.Boolean System.Net.Sockets.SafeSocketHandle::ReleaseHandle()
extern void SafeSocketHandle_ReleaseHandle_m6861A54261EEC98F3DB4BB27251AA7ED6BD4DCE3 (void);
// 0x00000CEF System.Void System.Net.Sockets.SafeSocketHandle::RegisterForBlockingSyscall()
extern void SafeSocketHandle_RegisterForBlockingSyscall_mFCDDEAB42C472D9A8E46B76C0BAECEB7D1832A98 (void);
// 0x00000CF0 System.Void System.Net.Sockets.SafeSocketHandle::UnRegisterForBlockingSyscall()
extern void SafeSocketHandle_UnRegisterForBlockingSyscall_m806E8BB959EDBB3B78061C5628A6F2F6EB6800B4 (void);
// 0x00000CF1 System.Void System.Net.Sockets.SafeSocketHandle::.cctor()
extern void SafeSocketHandle__cctor_m7691BE9F87F473365D4973842102E05614970DE8 (void);
// 0x00000CF2 System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_AcceptSocket()
extern void SocketAsyncEventArgs_get_AcceptSocket_mF12CD5B1067314F3970759A5AE7C94BF1070A4CE (void);
// 0x00000CF3 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_AcceptSocket(System.Net.Sockets.Socket)
extern void SocketAsyncEventArgs_set_AcceptSocket_m1F265F9F17EE63050B267DFE9B5CA0F3E487B93B (void);
// 0x00000CF4 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BytesTransferred(System.Int32)
extern void SocketAsyncEventArgs_set_BytesTransferred_mAB2EB75BE1BB7B97DBEFCAF3DD42E26BC787D625 (void);
// 0x00000CF5 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
extern void SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2 (void);
// 0x00000CF6 System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose(System.Boolean)
extern void SocketAsyncEventArgs_Dispose_mA5B8D8ADB8521BC9219061C13CB7C07BD02E16DB (void);
// 0x00000CF7 System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
extern void SocketAsyncEventArgs_Dispose_m6DCE1086200FEDE70AFC93B221810F02334FCEA1 (void);
// 0x00000CF8 System.Void System.Net.Sockets.SocketAsyncEventArgs::Complete()
extern void SocketAsyncEventArgs_Complete_m1685C41BBB00E16C614832FA2869F94D9A8D7EC9 (void);
// 0x00000CF9 System.Void System.Net.Sockets.SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs)
extern void SocketAsyncEventArgs_OnCompleted_mA73590353C7D619F0A57E5D65C7D6CF1EF41AD6C (void);
// 0x00000CFA System.IntPtr System.Net.Sockets.SocketAsyncResult::get_Handle()
extern void SocketAsyncResult_get_Handle_mBEAD04497226B5110889462C480B2BBF93AAD430 (void);
// 0x00000CFB System.Void System.Net.Sockets.SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
extern void SocketAsyncResult__ctor_m3C1FE5E660B13BB4C17D1756B918D9EEC6052F79 (void);
// 0x00000CFC System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncResult::get_ErrorCode()
extern void SocketAsyncResult_get_ErrorCode_m2CFEB18E19F49775804758830C58B1B068CF936C (void);
// 0x00000CFD System.Void System.Net.Sockets.SocketAsyncResult::CheckIfThrowDelayedException()
extern void SocketAsyncResult_CheckIfThrowDelayedException_m25275FD1C77F37FB2CFDE46BDC669CF9B31031C9 (void);
// 0x00000CFE System.Void System.Net.Sockets.SocketAsyncResult::CompleteDisposed()
extern void SocketAsyncResult_CompleteDisposed_m41B0FF709D71B1B321871B18BCFAAB3005419BAC (void);
// 0x00000CFF System.Void System.Net.Sockets.SocketAsyncResult::Complete()
extern void SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA (void);
// 0x00000D00 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Boolean)
extern void SocketAsyncResult_Complete_m218F8233E7ADB1AFFE69406F6337E09726E640D2 (void);
// 0x00000D01 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Int32)
extern void SocketAsyncResult_Complete_mC5E61EFDC26D56DCFD98A8600B185043FA285B6E (void);
// 0x00000D02 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception,System.Boolean)
extern void SocketAsyncResult_Complete_m6F201277AC561C7A755617A4963735B70D178B12 (void);
// 0x00000D03 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception)
extern void SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513 (void);
// 0x00000D04 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket)
extern void SocketAsyncResult_Complete_mD191B47C619B02AB538B7A00721E689AAFBBD3EA (void);
// 0x00000D05 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket,System.Int32)
extern void SocketAsyncResult_Complete_m85EF6089B3B9ECB2A9737E9C694BCCFFEAE48CF1 (void);
// 0x00000D06 System.Void System.Net.Sockets.SocketAsyncResult/<>c::.cctor()
extern void U3CU3Ec__cctor_m0F0A7E1C51C668515103160DCC4D3F3ED8B7C5C6 (void);
// 0x00000D07 System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
extern void U3CU3Ec__ctor_mAC11B6F52B2C5BA43E6B14CF8338841CAA0ABF26 (void);
// 0x00000D08 System.Void System.Net.Sockets.SocketAsyncResult/<>c::<Complete>b__27_0(System.Object)
extern void U3CU3Ec_U3CCompleteU3Eb__27_0_m267CAA8BCD77C0263EF3DAC0336FC29A937D2C76 (void);
// 0x00000D09 System.Threading.Tasks.Task System.Net.Sockets.SocketTaskExtensions::ConnectAsync(System.Net.Sockets.Socket,System.Net.EndPoint)
extern void SocketTaskExtensions_ConnectAsync_m495C65ABCE0EF0CDBD3D8433BCB92D522C06FA9E (void);
// 0x00000D0A System.Void System.Net.Sockets.SocketTaskExtensions/<>c::.cctor()
extern void U3CU3Ec__cctor_m73B05517DA6153C46B0FC67073C5862BAADA9FE6 (void);
// 0x00000D0B System.Void System.Net.Sockets.SocketTaskExtensions/<>c::.ctor()
extern void U3CU3Ec__ctor_mEBF8C773AA57A0FF10F424AC2B933D767F816735 (void);
// 0x00000D0C System.IAsyncResult System.Net.Sockets.SocketTaskExtensions/<>c::<ConnectAsync>b__2_0(System.Net.EndPoint,System.AsyncCallback,System.Object)
extern void U3CU3Ec_U3CConnectAsyncU3Eb__2_0_mB89D17757D9875DF67171B2522FB79E7EF8ADC2F (void);
// 0x00000D0D System.Void System.Net.Sockets.SocketTaskExtensions/<>c::<ConnectAsync>b__2_1(System.IAsyncResult)
extern void U3CU3Ec_U3CConnectAsyncU3Eb__2_1_mDBDA6A36C781708913C7D207FF0C9750C09D8571 (void);
// 0x00000D0E System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern void AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357 (void);
// 0x00000D0F System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern void AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7 (void);
// 0x00000D10 System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern void AuthenticatedStream_Dispose_m031F600EE876A06427FB0713D992FF02B9C3320F (void);
// 0x00000D11 System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated()
// 0x00000D12 System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern void RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367 (void);
// 0x00000D13 System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83 (void);
// 0x00000D14 System.Void System.Net.Security.LocalCertSelectionCallback::.ctor(System.Object,System.IntPtr)
extern void LocalCertSelectionCallback__ctor_mA7B36924E69A918A71649CFF95CB361E33317C38 (void);
// 0x00000D15 System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertSelectionCallback::Invoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9 (void);
// 0x00000D16 Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::get_Impl()
extern void SslStream_get_Impl_m8A1529A4D52B0C4046898BC70F090400A4390C18 (void);
// 0x00000D17 System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void SslStream__ctor_m222C4F58E1CBA2382263444001AA70862B2EC462 (void);
// 0x00000D18 Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::CreateMonoSslStream(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void SslStream_CreateMonoSslStream_mDE89ED397F8F36A81DD9C82298BDED42F4146C16 (void);
// 0x00000D19 System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern void SslStream_get_IsAuthenticated_m5056C714711944DA54B35F6F2A3025A720B49290 (void);
// 0x00000D1A System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern void SslStream_get_CanSeek_mA98FD41EDB70B03DB44F714CE952E128CA9D9B4B (void);
// 0x00000D1B System.Boolean System.Net.Security.SslStream::get_CanRead()
extern void SslStream_get_CanRead_m0B2ED5711B4D7C796529F56D7039AD546571FEF2 (void);
// 0x00000D1C System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern void SslStream_get_CanWrite_mCBCABFAC940539066F34E4480E52E07CA06DA7CE (void);
// 0x00000D1D System.Int32 System.Net.Security.SslStream::get_ReadTimeout()
extern void SslStream_get_ReadTimeout_m75B9430F39F610082318B1D37925CA4B651F1E12 (void);
// 0x00000D1E System.Void System.Net.Security.SslStream::set_ReadTimeout(System.Int32)
extern void SslStream_set_ReadTimeout_m0043E5CDEDC5690A118A429F79CF54DC071F895F (void);
// 0x00000D1F System.Int32 System.Net.Security.SslStream::get_WriteTimeout()
extern void SslStream_get_WriteTimeout_mDC207A2CBAD4D969AC4924A0704242936086D0FF (void);
// 0x00000D20 System.Int64 System.Net.Security.SslStream::get_Length()
extern void SslStream_get_Length_mD6515D77DBB57912C598761F67C321B6B16E129C (void);
// 0x00000D21 System.Int64 System.Net.Security.SslStream::get_Position()
extern void SslStream_get_Position_mD2DBB36BA22F4620B635557B5748E0928F28B6A2 (void);
// 0x00000D22 System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern void SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2 (void);
// 0x00000D23 System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25 (void);
// 0x00000D24 System.Void System.Net.Security.SslStream::Flush()
extern void SslStream_Flush_m61B328FCFEB939DE23740823CE3EB7E8DF3B14A4 (void);
// 0x00000D25 System.Void System.Net.Security.SslStream::CheckDisposed()
extern void SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95 (void);
// 0x00000D26 System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern void SslStream_Dispose_m187B76F54E2471469F5B62B8DDB33E11E40EE397 (void);
// 0x00000D27 System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern void SslStream_Read_mEAFC2AA192D9EAF401E2B067395EA08EDC5FB47E (void);
// 0x00000D28 System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern void SslStream_Write_mCF650FDF725E1AAEDC462A016A38E535F7210F3C (void);
// 0x00000D29 System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SslStream_BeginRead_m716BC242891C530ECB08DA4989AE27EEBAC71C98 (void);
// 0x00000D2A System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern void SslStream_EndRead_m881FE67FB5376508CBB50A96ED65BC672FB3A7A0 (void);
// 0x00000D2B System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SslStream_BeginWrite_m66F3B2CDAAE0E1FD662552A8D1ECAC889F2AD2D0 (void);
// 0x00000D2C System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern void SslStream_EndWrite_m78C915054198C80ECEE67CBB07D782E10686BA61 (void);
// 0x00000D2D System.Boolean System.Net.NetworkInformation.IPGlobalProperties::get_PlatformNeedsLibCWorkaround()
extern void IPGlobalProperties_get_PlatformNeedsLibCWorkaround_m60DD6D6B797F1C3C28EF5F2C1168F91C73EF3862 (void);
// 0x00000D2E System.Net.NetworkInformation.IPGlobalProperties System.Net.NetworkInformation.IPGlobalProperties::GetIPGlobalProperties()
extern void IPGlobalProperties_GetIPGlobalProperties_m78B851B32A1D963CC616CCA6DC7116F5EAC15753 (void);
// 0x00000D2F System.Net.NetworkInformation.IPGlobalProperties System.Net.NetworkInformation.IPGlobalProperties::InternalGetIPGlobalProperties()
extern void IPGlobalProperties_InternalGetIPGlobalProperties_m72EC7CD424FA4463DBF973ECB688CE857A01578E (void);
// 0x00000D30 System.String System.Net.NetworkInformation.IPGlobalProperties::get_DomainName()
// 0x00000D31 System.Void System.Net.NetworkInformation.IPGlobalProperties::.ctor()
extern void IPGlobalProperties__ctor_mD47A72AA48932214CA1D4736A83CE60D87446DB8 (void);
// 0x00000D32 System.Void System.Net.NetworkInformation.NetworkInformationException::.ctor()
extern void NetworkInformationException__ctor_m8992B1B77A115833022DD305333E1797720222A3 (void);
// 0x00000D33 System.Void System.Net.NetworkInformation.NetworkInformationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NetworkInformationException__ctor_mA372BF930B6E92FE250F1EE5281926897AF58734 (void);
// 0x00000D34 System.Int32 System.Net.NetworkInformation.CommonUnixIPGlobalProperties::getdomainname(System.Byte[],System.Int32)
extern void CommonUnixIPGlobalProperties_getdomainname_mDED17DB0D08BAAFF5A3A46A08883814FA1E6159E (void);
// 0x00000D35 System.String System.Net.NetworkInformation.CommonUnixIPGlobalProperties::get_DomainName()
extern void CommonUnixIPGlobalProperties_get_DomainName_mB1A7E8779FEC53B9173DD83534EC1848B61D6CD3 (void);
// 0x00000D36 System.Void System.Net.NetworkInformation.CommonUnixIPGlobalProperties::.ctor()
extern void CommonUnixIPGlobalProperties__ctor_m4C97E24A699CDFBCA98BB57A8236D5EC0806BF6F (void);
// 0x00000D37 System.Void System.Net.NetworkInformation.UnixIPGlobalProperties::.ctor()
extern void UnixIPGlobalProperties__ctor_m7C68E5E75ABCFD9694B55C352EA28CF1F6D091D9 (void);
// 0x00000D38 System.String System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties::get_DomainName()
extern void UnixNoLibCIPGlobalProperties_get_DomainName_m9E9249E674D90387F9B8D0630B235CF13631A65D (void);
// 0x00000D39 System.Void System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties::.ctor()
extern void UnixNoLibCIPGlobalProperties__ctor_m8D0E2274FDB799A5493898AF4DF589608BA75CA3 (void);
// 0x00000D3A System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.ctor(System.String)
extern void MibIPGlobalProperties__ctor_mC6E0577D711361950A406A31853C727053E40656 (void);
// 0x00000D3B System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.cctor()
extern void MibIPGlobalProperties__cctor_m9209E4C955952375F1EB92444A36933BF23878DF (void);
// 0x00000D3C System.String System.Net.NetworkInformation.Win32IPGlobalProperties::get_DomainName()
extern void Win32IPGlobalProperties_get_DomainName_m606701D1FC345ED0DEE4776A2EFE5BB69E5AAE45 (void);
// 0x00000D3D System.Void System.Net.NetworkInformation.Win32IPGlobalProperties::.ctor()
extern void Win32IPGlobalProperties__ctor_m9B513B7EF6994299CD6F5043C32868D9521264EA (void);
// 0x00000D3E System.Int32 System.Net.NetworkInformation.Win32NetworkInterface::GetNetworkParams(System.IntPtr,System.Int32&)
extern void Win32NetworkInterface_GetNetworkParams_mA2E02CD896547407FEF7BACC80FE5B3ECFD57A32 (void);
// 0x00000D3F System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32NetworkInterface::get_FixedInfo()
extern void Win32NetworkInterface_get_FixedInfo_m90FC6BF37040C5B5548AB86E4532C16CED57F7A4 (void);
// 0x00000D40 System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode()
extern void DefaultProxySectionInternal_GetDefaultProxy_UsingOldMonoCode_mE92DE08E220E7F8B610BF188DCD06BE990F8CFB3 (void);
// 0x00000D41 System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::GetSystemWebProxy()
extern void DefaultProxySectionInternal_GetSystemWebProxy_m149FAD86815FA437C5D6FEF7ABCA97CD2C3C94D7 (void);
// 0x00000D42 System.Object System.Net.Configuration.DefaultProxySectionInternal::get_ClassSyncObject()
extern void DefaultProxySectionInternal_get_ClassSyncObject_m6C8A102D494E67F287EA10DEACD3EA151C0D085D (void);
// 0x00000D43 System.Net.Configuration.DefaultProxySectionInternal System.Net.Configuration.DefaultProxySectionInternal::GetSection()
extern void DefaultProxySectionInternal_GetSection_mC347FAA709106553F94BA8097F9593383BCA22FC (void);
// 0x00000D44 System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::get_WebProxy()
extern void DefaultProxySectionInternal_get_WebProxy_mF4F15C1A7C6088706CA2834D70E8CD52086AFBDA (void);
// 0x00000D45 System.Void System.Net.Configuration.DefaultProxySectionInternal::.ctor()
extern void DefaultProxySectionInternal__ctor_m9EDD9E9D9F38DCA0B5260A4F040F27CE1650D430 (void);
// 0x00000D46 System.Net.Configuration.SettingsSectionInternal System.Net.Configuration.SettingsSectionInternal::get_Section()
extern void SettingsSectionInternal_get_Section_m2B7B6F6B8C13E9FAD46C76116CCDE663741ECF35 (void);
// 0x00000D47 System.Boolean System.Net.Configuration.SettingsSectionInternal::get_Ipv6Enabled()
extern void SettingsSectionInternal_get_Ipv6Enabled_m4DF56EE72066B70B389C21B2B4A30EAFC05D20F0 (void);
// 0x00000D48 System.Void System.Net.Configuration.SettingsSectionInternal::.ctor()
extern void SettingsSectionInternal__ctor_mF034B00EA94462E6FA1F906C97BD7B59AA00F1C3 (void);
// 0x00000D49 System.Void System.Net.Configuration.SettingsSectionInternal::.cctor()
extern void SettingsSectionInternal__cctor_m8BEE9C7B1B87EC7507FC1D686220BAF2B94087C2 (void);
// 0x00000D4A System.Void System.Net.Cache.RequestCache::.cctor()
extern void RequestCache__cctor_m0207CC97983238EC3130462CE421F3FD8C56AC8D (void);
// 0x00000D4B System.Object System.Net.Cache.RequestCacheValidator::CreateValidator()
extern void RequestCacheValidator_CreateValidator_mBFF46C1FCE42C817FD8596B221ADC9D880399CAD (void);
// 0x00000D4C System.Net.Cache.RequestCache System.Net.Cache.RequestCacheBinding::get_Cache()
extern void RequestCacheBinding_get_Cache_m96C4E0E7F9A2616C261B185E2BB28766929D9800 (void);
// 0x00000D4D System.Net.Cache.RequestCacheValidator System.Net.Cache.RequestCacheBinding::get_Validator()
extern void RequestCacheBinding_get_Validator_m74A9BB1C0CD37CD6B536782553DBCA4E67C145FC (void);
// 0x00000D4E System.Net.Cache.RequestCacheLevel System.Net.Cache.RequestCachePolicy::get_Level()
extern void RequestCachePolicy_get_Level_m2D45A6E3059B05DED8BFD8D1EA20AEC907D920D3 (void);
// 0x00000D4F System.Void System.Net.Cache.RequestCacheProtocol::.ctor(System.Object,System.Object)
extern void RequestCacheProtocol__ctor_m4E7F5A158A0507C5E58846CDA06B9847FF0C3D9C (void);
// 0x00000D50 System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern void U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC09A19935970846B38570D03608F0E5F25E2020C (void);
// 0x00000D51 System.Void System.Net.Configuration.BypassElementCollection::.ctor()
extern void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (void);
// 0x00000D52 System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (void);
// 0x00000D53 System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
extern void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (void);
// 0x00000D54 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
extern void ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (void);
// 0x00000D55 System.Void System.Net.Configuration.DefaultProxySection::.ctor()
extern void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (void);
// 0x00000D56 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
extern void DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (void);
// 0x00000D57 System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
extern void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (void);
// 0x00000D58 System.Void System.Net.Configuration.ProxyElement::.ctor()
extern void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (void);
// 0x00000D59 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
extern void ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (void);
// 0x00000D5A System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
extern void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (void);
// 0x00000D5B System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
extern void HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (void);
// 0x00000D5C System.Void System.Net.Configuration.Ipv6Element::.ctor()
extern void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (void);
// 0x00000D5D System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
extern void Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (void);
// 0x00000D5E System.Void System.Net.Configuration.NetSectionGroup::.ctor()
extern void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (void);
// 0x00000D5F System.Void System.Net.Configuration.SettingsSection::.ctor()
extern void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (void);
// 0x00000D60 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
extern void SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (void);
// 0x00000D61 System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
extern void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (void);
// 0x00000D62 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
extern void PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (void);
// 0x00000D63 System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
extern void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (void);
// 0x00000D64 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
extern void ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (void);
// 0x00000D65 System.Void System.Net.Configuration.SocketElement::.ctor()
extern void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (void);
// 0x00000D66 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
extern void SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (void);
// 0x00000D67 System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
extern void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (void);
// 0x00000D68 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
extern void WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (void);
// 0x00000D69 System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
extern void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (void);
// 0x00000D6A System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
extern void WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (void);
// 0x00000D6B System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
extern void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (void);
// 0x00000D6C System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (void);
// 0x00000D6D System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern void DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (void);
// 0x00000D6E System.Void Unity.ThrowStub::ThrowNotSupportedException()
extern void ThrowStub_ThrowNotSupportedException_m0E6C3891D0501FEF5BF1A72B7AA4D6310CE082DD (void);
static Il2CppMethodPointer s_methodPointers[3438] = 
{
	SR_GetString_mB884C0B8E14A5EAEF312B9B826B02A1099A4FD1E,
	SR_GetString_m1DE6C7B5F3EA2376154944895AEE12AEA5CA4E04,
	SR_GetString_m44F285DC771AF094795A39DCB84A799B1BFD641A,
	SR_Format_m3D9CF4AA0D105231DB5784C772B350142E49EE67,
	MonoPInvokeCallbackAttribute__ctor_m8B720CC4ADB295EF6F98ECB4B14AB5010CBC8C28,
	CertHelper_AddCertificatesToNativeChain_m6A078F5FFEA16184F19AEEDD4F9C8E00F68BDD48,
	CertHelper_AddCertificateToNativeChain_m04D6F01E00DF4D0C134704DF9403167E1878675A,
	Debug_CheckAndThrow_m0DC4C61C1A5FA2DF49E11420953CD3032843D59F,
	Debug_CheckAndThrow_m47BE0492786EEE30351AF6662609556CABAB0A80,
	UnityTls_GetUnityTlsInterface_m47FB014BA17E899E2AE904DE3F59A84763D924F0,
	UnityTls_get_IsSupported_m7A43EE578D088D942479C11C7A1718432ED1F048,
	UnityTls_get_NativeInterface_m48CD53391B9897F81D41D180A899D4C48F9B374B,
	unitytls_x509verify_callback__ctor_mEDC6857514FD696562638B3F1DFE959920D1EB26,
	unitytls_x509verify_callback_Invoke_mB53E808E78AE5BD02CECCA0BE198295ECAB83B9A,
	unitytls_tlsctx_write_callback__ctor_m1A216E476EA91B415C0FD89765E6560410A7F7F5,
	unitytls_tlsctx_write_callback_Invoke_mF1F1D27A9BE14950A905685370EDAE5EAB051712,
	unitytls_tlsctx_read_callback__ctor_mEAC57775C6AB86A2E9E6DDC440E27C845BFAA4C0,
	unitytls_tlsctx_read_callback_Invoke_m0B21AFD4EACBDBEC6EEFBEB61E142051F338194B,
	unitytls_tlsctx_trace_callback__ctor_mB9CC97640B55911851D544F3F85CAFB5B85B647A,
	unitytls_tlsctx_trace_callback_Invoke_m9511E6D873C0FFE4EBDA45E52CA47228A483A01F,
	unitytls_tlsctx_certificate_callback__ctor_m9A3F05E07D9A69B8FF419421DF8167DF9CE7E77A,
	unitytls_tlsctx_certificate_callback_Invoke_m37CB366C6D6E0A27CE4E1E4943DF2DE1F32E2BF1,
	unitytls_tlsctx_x509verify_callback__ctor_m8583619DBB13F6EDF2A385C37DFAE8796EB89C0F,
	unitytls_tlsctx_x509verify_callback_Invoke_m1F7A6DA53EF61AC64F2DD9A33AF40541F97C6874,
	unitytls_interface_struct__ctor_mCBFC829FE6CEA8E6545EA7B61E756FFA2EC4A22D,
	unitytls_errorstate_create_t__ctor_m291CCEF12E6C9729662E0BBECB5D4FA6BDBA2F02,
	unitytls_errorstate_create_t_Invoke_m8B9A9835EA7C6A11E1627CA8904F3F853FB61BC0,
	unitytls_errorstate_raise_error_t__ctor_mF30A64F84A8FC246DD062993A45C038B30FC6009,
	unitytls_errorstate_raise_error_t_Invoke_m9B2B3433846A318340EDF0ED0E33C45030CCEA02,
	unitytls_key_get_ref_t__ctor_mEDA7937D1EC76342E6CE92AF394E7E1A37F664B1,
	unitytls_key_get_ref_t_Invoke_mF5D3582922E868C42BCF32EB14471F8C800BB66E,
	unitytls_key_parse_der_t__ctor_m25AD8C01A87CF5F737E649F1FB9CA340A9A832A8,
	unitytls_key_parse_der_t_Invoke_m244086296EBDE0C0B0F072B33AAD5BA39A030DB6,
	unitytls_key_parse_pem_t__ctor_m8F4D69BD7B0988BF7682B3E5EA5934141BFEE440,
	unitytls_key_parse_pem_t_Invoke_mE842DC1436977A2982224694DB5BCC2FF8A9B331,
	unitytls_key_free_t__ctor_m935A5571CE60C369950D58C79432FB1C50231C37,
	unitytls_key_free_t_Invoke_m860A3C396228B7ADF9406AE78D439BDCD12FB98E,
	unitytls_x509_export_der_t__ctor_m9BF2B0B567856AE42AB0ED274CD26ACE5FC0186B,
	unitytls_x509_export_der_t_Invoke_m13DB2E205EF9ED37B75F5B763C5080E7077841AD,
	unitytls_x509list_get_ref_t__ctor_m6977636DC288FB0809D7C0CE8D9D31D25795F77C,
	unitytls_x509list_get_ref_t_Invoke_mE7C675B7847FFEF96C25AE757D34CE920AA16EC2,
	unitytls_x509list_get_x509_t__ctor_mFF7BC99AB91FE7F9CCB586988B246F597ADF53DD,
	unitytls_x509list_get_x509_t_Invoke_m9080273A34FE768B80024B96001D5B7451A46EC0,
	unitytls_x509list_create_t__ctor_m41F2B1E6C767CD3A39F4E0FAD41B678AF61A14A6,
	unitytls_x509list_create_t_Invoke_m05D8719D913109E4997FF913015E66455BC3C7D3,
	unitytls_x509list_append_t__ctor_m22FAC52BA432FBCF2048DA6236633970E4E18CB0,
	unitytls_x509list_append_t_Invoke_mEF1811CFAD02743F745D8A8E09E2E84D68154976,
	unitytls_x509list_append_der_t__ctor_mB33965F4253393C8B17E44DACA1ECDBCC17EB673,
	unitytls_x509list_append_der_t_Invoke_m3D900F0F07C8747B9F046512DAC7579D0C7CD193,
	unitytls_x509list_free_t__ctor_mA156855741A0AA67C20B87507BE55F188ECBFFD4,
	unitytls_x509list_free_t_Invoke_m0974FBCD7B6920A4EC57BDCB080E1A7307EEEA02,
	unitytls_x509verify_default_ca_t__ctor_m936B931A7A5A10B4A514630F84CF136A799AFA23,
	unitytls_x509verify_default_ca_t_Invoke_m1D112FD2010361D2DB08F08A598000ADCD0875C3,
	unitytls_x509verify_explicit_ca_t__ctor_m1812F92F4C92CE54233697CE380177EBA629A1F1,
	unitytls_x509verify_explicit_ca_t_Invoke_m4028A9AE8FD6B69DB36BAE68CC3A3362A825738B,
	unitytls_tlsctx_create_server_t__ctor_m035F9FCC9C4B71D3BA4F1610FBCFB7E87E28EDD7,
	unitytls_tlsctx_create_server_t_Invoke_mCEB3E8CADCB316F4DF606A68182A4E5C9EC4D3B9,
	unitytls_tlsctx_create_client_t__ctor_m898460A0D30C6EEF737F445DFBA96076E4D22130,
	unitytls_tlsctx_create_client_t_Invoke_m728BCBF32A45326A1AD8B1E17933372F7D9E01EE,
	unitytls_tlsctx_server_require_client_authentication_t__ctor_m3E84F3D43AA2928DA825256C6179E2D0CF926C60,
	unitytls_tlsctx_server_require_client_authentication_t_Invoke_m0B6DAC7CA95263D1245C9B0A466AF00D073059EB,
	unitytls_tlsctx_set_certificate_callback_t__ctor_m31E0497908A2C272B9AB80B4659D1517F9647E20,
	unitytls_tlsctx_set_certificate_callback_t_Invoke_mFC277320977BC310A0EB484EE505E25B6E2C7CA3,
	unitytls_tlsctx_set_trace_callback_t__ctor_m262F20124214D62819468C226E925221D2527D96,
	unitytls_tlsctx_set_trace_callback_t_Invoke_mC98468DD35AA05DE628FEAE7669B4F71205CCBD7,
	unitytls_tlsctx_set_x509verify_callback_t__ctor_mE6C3A39FA8A1903C74826A5BFF748DFEB1A4D06D,
	unitytls_tlsctx_set_x509verify_callback_t_Invoke_mA9AE094A7DB71B4B7B051BB3D67CB98A7F48D3CE,
	unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m856B5362E3479A5C75709F62B5A316C0A0F913FF,
	unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_m8E153461EFCEAAAF59D1E918F7C06B14358B43E2,
	unitytls_tlsctx_get_ciphersuite_t__ctor_mFD8DF58601BB4A8F00C3A56F881F2E92D7536CA9,
	unitytls_tlsctx_get_ciphersuite_t_Invoke_m2DF155D62800CFFD66AC63538F69DB2275EC3FFD,
	unitytls_tlsctx_get_protocol_t__ctor_mAA5710F913B95E0964AD90EDF59FD71E984DD00E,
	unitytls_tlsctx_get_protocol_t_Invoke_m3D931DDD241F0B3EDA8F6F1EFA159C0669E7E3F0,
	unitytls_tlsctx_process_handshake_t__ctor_m163A6D53CE45B5161FD5586DBBD8BB90B9EDDA45,
	unitytls_tlsctx_process_handshake_t_Invoke_mD8F2422C5C6C9FF0ADDAB17AECB998C2E225CF7A,
	unitytls_tlsctx_read_t__ctor_m55B52EA0C5ED94A8030D80A9B7967F34850AC799,
	unitytls_tlsctx_read_t_Invoke_m0FB34952D7592128A211AA0DA5536A325494FA04,
	unitytls_tlsctx_write_t__ctor_mD229A38085F7CAE944D6CF0D505C6F167C709E96,
	unitytls_tlsctx_write_t_Invoke_mC6A06FBF8E4C5652830248B521C83865B3F2DBBC,
	unitytls_tlsctx_notify_close_t__ctor_m700B77B204CFF6F4113F3E3F4CF6673CF7ACC0FB,
	unitytls_tlsctx_notify_close_t_Invoke_m6E5688DDA03F313A1C470E4C30263C5B4A174138,
	unitytls_tlsctx_free_t__ctor_m46E06E2335A31589194453E910356B6456160E7E,
	unitytls_tlsctx_free_t_Invoke_mC5D5191740D2507A83D95B4B3E6CE4C4A9FBAFD2,
	unitytls_random_generate_bytes_t__ctor_mFAC4CCD07765DE0827186AEC35DCCFC2E66BE066,
	unitytls_random_generate_bytes_t_Invoke_mF0A5B5E7279FF32FBFF48DBB98EB07C88C63EF92,
	UnityTlsContext__ctor_m4EE30AD7CFE2E7B85E631E174B820609A45EACDC,
	UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate_mAAD3045A2D64C314FD288C3468D41767DD47205A,
	UnityTlsContext_get_IsAuthenticated_mA566E1D02B55C267233595651ACBDE0AB14D0361,
	UnityTlsContext_get_LocalClientCertificate_m359CCA879BFE0788C1BA3E57287AE744A501BDD1,
	UnityTlsContext_Read_m461E85BF4B42B72297B42A6E7EE5A756A25259FD,
	UnityTlsContext_Write_m11529FF555E48CA82577431E6856FEE3E4E0FA28,
	UnityTlsContext_Shutdown_m6DD342ACE3206195381E15E5CD5BB4845CDBDBE6,
	UnityTlsContext_Dispose_m5E0A4A0D9AF08F03E82CBF45BD14477E7D2D34DB,
	UnityTlsContext_StartHandshake_m56718DFC2F7D4A03C3B1AD6C9ABE502EDCB6BC0A,
	UnityTlsContext_ProcessHandshake_m098B5D0081E137B05DB4FB7B7F74805EF749C09D,
	UnityTlsContext_FinishHandshake_m4F1BF52160E1BFCF223717415D5F1DB96B5F9556,
	UnityTlsContext_WriteCallback_m53DD70115C97432A676F3E437E8FB42F9FC068F5,
	UnityTlsContext_WriteCallback_m28708B36ED5744CED29D543B86A2E117DFF661BA,
	UnityTlsContext_ReadCallback_m15F3A217E44D480CAED06EB5A88503FB6259D7EC,
	UnityTlsContext_ReadCallback_mE4765DDC1755E4A030F1D3B59B255072FF656ED1,
	UnityTlsContext_VerifyCallback_m75D7C072718405EBBF8A2A9C794C4DDFB2595BD0,
	UnityTlsContext_VerifyCallback_m2498A768960C1A792A1B60A1F47D16624E543537,
	UnityTlsContext_CertificateCallback_mF5E626BA2545CFFA64428622678E409702C2045A,
	UnityTlsContext_CertificateCallback_m5A4C050D5D49709202B72A50F33533E7C5C6B113,
	UnityTlsConversions_GetMinProtocol_m0E691D4227CAB79BDC7F6E30E5CF2698D2F5813F,
	UnityTlsConversions_GetMaxProtocol_mC7381248C4DA2168508E3A4C5DE049BE58C7F250,
	UnityTlsConversions_ConvertProtocolVersion_mB9C0E5A59CC1564EDF56D06C396461DA678CAD0B,
	UnityTlsConversions_VerifyResultToAlertDescription_m23B95B4CEFBE8FB8329DF4A53E744F9592C40DA6,
	UnityTlsConversions_VerifyResultToPolicyErrror_mB06345404F480D729F65553A12271472F31A9353,
	UnityTlsConversions_VerifyResultToChainStatus_m266E87DEE12D19BFD385BCCE2F5F30C527D6DB74,
	UnityTlsProvider_get_Name_m24407BD8B3C23C4DCF2EDF41F9056463763E7389,
	UnityTlsProvider_get_ID_mE43288EBB589EFFC6EE6E49209FBE8295BE577F1,
	UnityTlsProvider_get_SupportsSslStream_mBB478D61296FAF8CAC3145C816E27AA7A1CE8CC8,
	UnityTlsProvider_get_SupportsMonoExtensions_mC34E3757CB6273E3838F8DF33503CF6E4E4ADC01,
	UnityTlsProvider_get_SupportsConnectionInfo_mF18DD7A3E1806F86AB471A580EEAD68AB736FB73,
	UnityTlsProvider_get_SupportsCleanShutdown_mBB7DCD0ACF8B5239D89F4695859B90D2F5275D50,
	UnityTlsProvider_get_SupportedProtocols_m59C751B343CAC7A9692B1C12FC986450EF700C88,
	UnityTlsProvider_CreateSslStream_m50488CAF06C5C529D0F9ED314BA5FC3B44585256,
	UnityTlsProvider_CreateSslStreamInternal_mD5D24950FCA28780226D72726021DBC7A3EF6936,
	UnityTlsProvider_x509verify_callback_m47823254E133F7304ABFAE5A1F0D218402BC5B45,
	UnityTlsProvider_ValidateCertificate_mED5D74CFE362F7E9EF9FEE458FC41CF686006E06,
	UnityTlsProvider__ctor_m0C11027324407A76EB81EB51C37FF5C8F6F219A8,
	UnityTlsStream__ctor_mD0965D52471984AB34DC176AC1D57BDA6B9AD2B6,
	UnityTlsStream_CreateContext_mAC6A975CC1CC537BA54526DDAA2507AE9859B583,
	X509ChainImplUnityTls__ctor_mD653A56ED8AD47C0A46DB3D89749A055D4BB1ABC,
	X509ChainImplUnityTls_get_IsValid_mC01A80C0AF85FC18A5C790EF35586C8503D6B36F,
	X509ChainImplUnityTls_get_NativeCertificateChain_mBFE146631BDB57BB66B00EBB21414AC7AFF73E72,
	X509ChainImplUnityTls_get_ChainElements_m88A7F21DC30467829291CF89448C65025D7A15A4,
	X509ChainImplUnityTls_AddStatus_mF8C26841864A662C616E5A94A762EA3A19EF71D4,
	X509ChainImplUnityTls_Reset_m1AD27C4C44348EADFBF5C6CF802F8AF60B562474,
	X509ChainImplUnityTls_Dispose_m8E23D2EF6C322FF694E5E6098A52FB54388FC446,
	CFObject_dlopen_m47EA2C1E16FA7DB80ACB16F474759D8C6E0CFBAB,
	CFObject_dlsym_m31D239BD674D93B932B04D4BA18F31A5DE45020F,
	CFObject_dlclose_mB59FBDB69DF8A429D37B1D58D6242774CB01FE0B,
	CFObject_GetIndirect_mB0127ADF09F46284621D55601907599F22B4FFEC,
	CFObject_GetCFObjectHandle_mD91080F3EBDBA6E4E22DC0E159EA0965C8ADD735,
	CFObject__ctor_mE1E449B8A9173AF0F40A09A1FBDFC1744D22C065,
	CFObject_Finalize_mD241E36A23CEF2FA3CBF0480ADA0424D32A418AB,
	CFObject_get_Handle_m925865229AE5EBE8286F3660ED558FFE686ED039,
	CFObject_set_Handle_m50BAFCC3DFEBA51B960FB6D176A574B608E94C5F,
	CFObject_CFRetain_m6BB93F0A945924FDBC5168EA6ECD41BA3C93DB22,
	CFObject_Retain_m80D4C1A88BC8031AAD21C3F6CD7DB9C43EBBF1DC,
	CFObject_CFRelease_mF71C8B82AAE8C7554E8D54AB120165E4801A16F8,
	CFObject_Release_mF6E6EC0F9064DD3AFA29CBC50CE197983BB02CE0,
	CFObject_Dispose_mB4149998ABF0937223922B7BBB599772A8733C43,
	CFObject_Dispose_mA74C8A55D70E74A52C0E13341D9F6D61D5BCA9B7,
	CFArray__ctor_m202BC884213088991A278A942D25F48E5C07D261,
	CFArray__cctor_m408AB2FCF74786EFA1267F7B50DC8FC548D6EEA3,
	CFArray_CFArrayGetCount_mDA5084F1D051059FEE1931FB911616C75BEFF965,
	CFArray_get_Count_mFBE5322B2096ED0CDDC53F317F76FAA8DAF5B560,
	CFArray_CFArrayGetValueAtIndex_mFF309490404F21B869A832261D02B655CCD45E8C,
	CFArray_get_Item_m3C7A42E815BA4C928DFBBA5AFE260B8E8BD6BA45,
	CFNumber_CFNumberGetValue_mC44FEBA6B827F3FF3EA1849C4D83E627B6646B3C,
	CFNumber_AsInt32_m5E1C7213FA2BBE4A6A950F10585A048DCF8A3221,
	CFRange__ctor_mE95FD6CECA2FA0AD9454A1334058B5D16B2A4928,
	CFString__ctor_mB68EB060C624A4873D0B3154956195735A68D60C,
	CFString_CFStringCreateWithCharacters_m5E3F710DBEB407A72943328D31A938E96A5E8EFD,
	CFString_Create_m4B279CF1EC2596123BA90594E2F91123305ACB72,
	CFString_CFStringGetLength_mF4D4D57AB0BDD1127FC7E5432E65A456C097B920,
	CFString_CFStringGetCharactersPtr_mB25683FCFC92BB3A0289562F1B5D8237ACD52123,
	CFString_CFStringGetCharacters_m244AC087A22E451D7A311740485D82A83E58F11C,
	CFString_AsString_m4E784AA013B1FFF5CF986AB2DB8D9A6E7216A192,
	CFString_ToString_mCBA7C89F507E4120C8B596401C09CF4CBE2BC6E2,
	CFDictionary__cctor_m24EAFFEEF4F900B4158AEE3B15A9DC2C8CE1326D,
	CFDictionary__ctor_mD0A96DAB733F068700A8F29437D4620D1DAEBD35,
	CFDictionary_CFDictionaryGetValue_m1C3C692BFD6E5C89458419271228C197C87744CE,
	CFDictionary_GetValue_mD7C60A6B494B2697B41AD4E15C471F7064FA10C7,
	CFDictionary_get_Item_mBFB4E28F75E0CD3A6A6C3FFCE5F2014D1924BC6E,
	CFUrl__ctor_mD8E0E636102764BD28D4DE48F9CF92F0DCCEB59B,
	CFUrl_CFURLCreateWithString_mC0BE41B5F6B01B3A1DCA146CD2E0AEB829A890B2,
	CFUrl_Create_m2681FB04AB964D3D50E7F26C82EF98CEC0B0294A,
	CFRunLoop_CFRunLoopAddSource_mFA7C2F2321FE055A2F5AAB41F118C36602A32B48,
	CFRunLoop_CFRunLoopRemoveSource_mAA8641E0D03103F914264D9FF7C3696B9AAE6B53,
	CFRunLoop_CFRunLoopRunInMode_mB3B8C300A003665D0AAC95B9C8C86BAFC5BA11B2,
	CFRunLoop_CFRunLoopGetCurrent_m13D1F1ACC2FD90029A99B0AF2052FA220AB62AD8,
	CFRunLoop_CFRunLoopStop_m57693DF0D380734ADE3B4939236743E630B87A20,
	CFRunLoop__ctor_m94B20293C11883CF75A63AB136599BC3EE92A8EB,
	CFRunLoop_get_CurrentRunLoop_mB01FC5D5DA544A97FB5B0B63AE4311DEC3220083,
	CFRunLoop_AddSource_m8A3BA481E15B1F6EFC82953CB0C5C13923F3627B,
	CFRunLoop_RemoveSource_m7F0B16955EA2C242D0A1B5F51895A09EC1281CBF,
	CFRunLoop_RunInMode_mBDAC5E28522F4D823C182B34C8F91C30DD437D4E,
	CFRunLoop_Stop_m49E01C4720388A9CA079F8B048B577558A6B63CD,
	CFProxy__cctor_mCDDCA90FB251CF5C898BA5F856A03B3F342797A7,
	CFProxy__ctor_m67D1B8DBACF6EA8839C977130D39E890C4723A39,
	CFProxy_CFProxyTypeToEnum_mFACFCE7E1EA03988C7105DF73289F3693731DA41,
	CFProxy_get_AutoConfigurationJavaScript_mB5F43867F3AC1FC61BD404178C50EEFF4D609A61,
	CFProxy_get_AutoConfigurationUrl_m0C5688FBA050FC7228E1FBDF5607800E9BF0EA87,
	CFProxy_get_HostName_m0BE8DBDA2EC6992EA7C7B7325364C497174A34CE,
	CFProxy_get_Password_m3825254AB68E6CFCAB964C8BBB77B8B94475D30D,
	CFProxy_get_Port_m0A52ACB0E89915ED1A81940E6F7B0A1F5EB7BEA5,
	CFProxy_get_ProxyType_m3283AE01B332F8D6D89F70F205A948A3AD4D6B5D,
	CFProxy_get_Username_m1DAB5C1C340E98AA8570B882D9F9DC827321313D,
	CFProxySettings__cctor_m2694CDB9885EE8F2B9F6EF4385AC41ED53C68646,
	CFProxySettings__ctor_m305ADF5DD84EC2EE389F1CDA80F32AC916248CE5,
	CFProxySettings_get_Dictionary_mB467239A85647E2D8D76844689D8DFC39578E121,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptSequential_mEBBD43A71AB1DD3974AEE7CCC93E13F5E80F0207,
	CFNetwork_CFNetworkExecuteProxyAutoConfigurationURL_mC58ED74443390B487F87CB43EAA8F28E1E7D80FA,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread_m87C679827AD4065EBFE640A944169877B18B6295,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScript_m60AA5977018E352A62A14DC0A9206581B6BB1C3F,
	CFNetwork_CopyProxiesForAutoConfigurationScript_m0720953EADB5FAE26DC088AEEFDF0238F8C2F62C,
	CFNetwork_GetProxiesForAutoConfigurationScript_m4E27540B670B7445FF350FAC09C2C4E3D5E51C9F,
	CFNetwork_GetProxiesForAutoConfigurationScript_mB2B534BA692731A12D6A5192002019B5BAE0C64D,
	CFNetwork_ExecuteProxyAutoConfigurationURL_m49A5649BB3FB43D1ED544D2861AEBFEFF0618A66,
	CFNetwork_CFNetworkCopyProxiesForURL_m94FFB6E33862C27721FA9F26F0BF1E291691368C,
	CFNetwork_CopyProxiesForURL_m8CB22D7F5FB1F4987576EBF90590F10640486A5F,
	CFNetwork_GetProxiesForURL_m7694384E4E21659A6399D6891A04EEAF1294A13A,
	CFNetwork_GetProxiesForUri_mC6A6F2A3B3EFC95C34ACDBA2D33B162C549ABE03,
	CFNetwork_CFNetworkCopySystemProxySettings_m1E565FD09D0467C8CCEEE5489020600B6C14A103,
	CFNetwork_GetSystemProxySettings_mC07138110C2A249FE50BAF69459C3B2C8231A9FF,
	CFNetwork_GetDefaultProxy_m436083745C406965606C55E3AC139978CBF45EC0,
	CFNetwork__cctor_m356780C556B67F6401B5C7141E4BCBC9A035C932,
	GetProxyData_Dispose_m0D9268338DB4B3A6853E386D6DCE4F77F9C04945,
	GetProxyData__ctor_m1D6DC9726176842C506F8F2F97E752FDD3D0A07C,
	CFProxyAutoConfigurationResultCallback__ctor_m249A7EA0776BDBD70E5F3B72413E5F479C38C141,
	CFProxyAutoConfigurationResultCallback_Invoke_m954B06FC7D5EF619F76FD0365F40050A7F6676AC,
	CFWebProxy__ctor_m4DF517ED54DD3EBC8CF423DE769E71DD6B8D8A14,
	CFWebProxy_get_Credentials_mDD31387A4FB46336C159D558D293F429C5837D80,
	CFWebProxy_GetProxyUri_m8E6C26B0360FE86C6B5152CCB4E745A17DABCCD2,
	CFWebProxy_GetProxyUriFromScript_m8D94ED537C1D3B9D603517DAA3BB6348184DD814,
	CFWebProxy_ExecuteProxyAutoConfigurationURL_mE61275371E4954BE5EA9F86F81924CAD19B9E878,
	CFWebProxy_SelectProxy_m7C2316E9D3AE8A9B9FD5684C2EF711F759335858,
	CFWebProxy_GetProxy_mB13A91B37B93CD6889E73855CA4C5B5F5FF1B3F0,
	CFWebProxy_IsBypassed_m6DD643FC5C0CC4B2EB1BA18CD7A70E76EBC653BF,
	U3CU3Ec__DisplayClass13_0__ctor_mECB957C4CC63A5C8FD201D14D2A2E5B7858065A7,
	U3CU3Ec__DisplayClass13_0_U3CExecuteProxyAutoConfigurationURLU3Eb__0_m5B0690DED785108C4C7E5502CD48DCC90BF12B57,
	BufferOffsetSize_get_EndOffset_m114650CE0C422157F8EDCD8C0F1B89C5FFE7F9C9,
	BufferOffsetSize_get_Remaining_mB3CB4287B2AAAD7976374B914E95ABFCE71B1A4E,
	BufferOffsetSize__ctor_mB62BB1F461998563FB6793F509FF26FB79B81955,
	BufferOffsetSize_ToString_m2C7B9A215EDE5C22ED8C51534365E110BB56C083,
	BufferOffsetSize2__ctor_m773DC687399F95F23BE42179B942303C0B52FF07,
	BufferOffsetSize2_Reset_m1B80AE03ED0C2BAC447F3BDEC8F827CEE6053E7F,
	BufferOffsetSize2_MakeRoom_mCE9261D07E745C72E3032A9FDC19FA54FEF0BE28,
	BufferOffsetSize2_AppendData_mA85DD811BF73EB8F153F9DB2668C11E907F258A5,
	AsyncProtocolResult_get_UserResult_mEDF85928DEE138CA072E0BADB697024616981ABF,
	AsyncProtocolResult_get_Error_m2A01329BA71151C59E17E3D8812932AD02EF5C05,
	AsyncProtocolResult__ctor_m2999944493F7C75F19D5BA3811118ED10A889305,
	AsyncProtocolResult__ctor_m80187A7036019F9768BA1941362CB6785F10E99F,
	AsyncProtocolRequest_get_Parent_m20DA5526115969E9D32B61999A044FF0618AFF92,
	AsyncProtocolRequest_get_RunSynchronously_m5E10561209866EE44A27D35A1F4762008063B4BF,
	AsyncProtocolRequest_get_Name_m3D5DC63A43FFCA24B1E5A9825B76BD391D790F84,
	AsyncProtocolRequest_get_UserResult_mA77AFFB0D9A5FD69E5EEC51CB0F80C25E31D0759,
	AsyncProtocolRequest_set_UserResult_mD84274B3348783A6E03B9000BB82E0737E1EC974,
	AsyncProtocolRequest__ctor_mDF1F675DC3E001867DFFD9B1C14CF5559BE3035A,
	AsyncProtocolRequest_RequestRead_mD55DC015A50E42EF2FA7DB75FE1E7E3FCFA3CFA0,
	AsyncProtocolRequest_RequestWrite_mA6AB8ACEA16A14CD6A232DA256C417CD183EE69F,
	AsyncProtocolRequest_StartOperation_m3BFF3E84B25BBE13881D3592FF4CAEC3736FBEDD,
	AsyncProtocolRequest_ProcessOperation_m7210D0C2351D69FF9FF798860C85FAA7F91C050F,
	AsyncProtocolRequest_InnerRead_mF418FD1D9403BFD08A44D00EEAF8E9F3ECD25A02,
	NULL,
	AsyncProtocolRequest_ToString_m76F3449064B096829BE4288E38F10DF76B124F1F,
	U3CStartOperationU3Ed__23_MoveNext_mDE591A3806D9523FC8D2E26ED510CEE7963F8FF2,
	U3CStartOperationU3Ed__23_SetStateMachine_mA0C8C029457FAAE036C6098FDC66C98574D0BD03,
	U3CProcessOperationU3Ed__24_MoveNext_mA73F0FD80CE65D2E3E12390E49E3F34CFF47E98B,
	U3CProcessOperationU3Ed__24_SetStateMachine_mA9912D191EE4A99536A61DEED059DC89B765A823,
	U3CInnerReadU3Ed__25_MoveNext_mC4567E370C71DA9DA0F704C570308D106D4DDB2C,
	U3CInnerReadU3Ed__25_SetStateMachine_m15DB2E97371A46CBCCD53DCAE7A4FE6F5FF84DCE,
	AsyncHandshakeRequest__ctor_m741ADA23A424389AD20579B23AE2DBE8FA00CFF7,
	AsyncHandshakeRequest_Run_m345A76BCFDDE5E054B97BD4F5FE238A05D3F4C26,
	AsyncReadOrWriteRequest_get_UserBuffer_mD158BF301713ADC8899B3F3CFF7D18B76A956417,
	AsyncReadOrWriteRequest_get_CurrentSize_m4230AD05749403B840042BB7531124C6A96980E6,
	AsyncReadOrWriteRequest_set_CurrentSize_mBCD300A1CD6FF110A3527E80711A820FEFC2F9E1,
	AsyncReadOrWriteRequest__ctor_m4DCAC7C20097985A9A4FDCB73719DD2E508CF07D,
	AsyncReadOrWriteRequest_ToString_m1D1115D6B97BD767A3482863B6B64642D0733696,
	AsyncReadRequest__ctor_mE67D11354154F1844761E0FFB869BBF05F1AE741,
	AsyncReadRequest_Run_m2D98252200B926F53624E90AE9649767F0C110ED,
	AsyncWriteRequest__ctor_m627E554957F61C80484B10AD0D85849C1E9A0548,
	AsyncWriteRequest_Run_m10D193A545B0D8D5B68FED13056B0EE6099A92A0,
	ServerCertValidationCallbackWrapper__ctor_mA2FB8FF1A944C192B300001F0384A1B84018EBF6,
	ServerCertValidationCallbackWrapper_Invoke_mF3D5202B761BCC08F34C786C7202E8CACC555920,
	ChainValidationHelper_GetInternalValidator_mDC966DAB9B1384F7BF4427E2296CA0DD5E38F8B1,
	ChainValidationHelper_Create_mB28B56589E1EA418ECABCE9DD1D67190CE89BF26,
	ChainValidationHelper__ctor_m7B48076597464A2A15D9F3975FD8511D2ECFD26A,
	ChainValidationHelper_DefaultSelectionCallback_m9662623B23235E63F7081F6632A3305D3C6C0220,
	ChainValidationHelper_get_Settings_m94E2DC79CB696A4F54956D812983E62FEB33D22E,
	ChainValidationHelper_SelectClientCertificate_m77B577FD626B93B7018F62E6843727168F7876EA,
	ChainValidationHelper_ValidateCertificate_m859E258B2CF6F570984C618241A26AAFE2B7104D,
	ChainValidationHelper_ValidateChain_m60FB1695D7C8F3A0C01C864FDFEC2EC3CF648F79,
	ChainValidationHelper_ValidateChain_m6E88B46B65F70D52BDD9438D218D7E3BE55BB1C7,
	MobileAuthenticatedStream__ctor_mAB5975E8F7301C8D7FE2B6732BEBC185FB61C369,
	MobileAuthenticatedStream_get_Settings_m21B268EC66FBAF762EC443B8FC784F1251444A96,
	MobileAuthenticatedStream_get_Provider_m6884D1ACCE776CE9EBF8803A56C53A496E551C63,
	MobileAuthenticatedStream_CheckThrow_m9E35E722A793A807809AD00C9756997AB7561396,
	MobileAuthenticatedStream_GetSSPIException_m04F38FF55AEEC19087840F3A722D2C225050F427,
	MobileAuthenticatedStream_GetIOException_m80A6F9660142728B73A169E1B09AB8BE268DD517,
	MobileAuthenticatedStream_SetException_m490704BA8728AB01E7BA158FE545FD4D7C080448,
	MobileAuthenticatedStream_AuthenticateAsClient_mEB1237B52A4AB1FF3D7D3E52F61CE78A744973FC,
	MobileAuthenticatedStream_AuthenticateAsClientAsync_mBD8A0E7FFAFDE608063E545EF057304AF2C35EF2,
	MobileAuthenticatedStream_get_AuthenticatedStream_m4634AB6CFBFE0A9B9A37E267704E1E497FE86589,
	MobileAuthenticatedStream_ProcessAuthentication_mE602EA95BF254196F19CC50E5D209459558145EE,
	NULL,
	MobileAuthenticatedStream_BeginRead_m6EFD75415D783607848E1ADE3D70D8B353A4494F,
	MobileAuthenticatedStream_EndRead_m79E9056842EE2E0CF0D575A00F1EBD4E6AAA91C4,
	MobileAuthenticatedStream_BeginWrite_mE179BF436CBF0A173149899E11516C4DF1CEEABC,
	MobileAuthenticatedStream_EndWrite_mFCAC0306927C198919FD0F4933063151EBF32B78,
	MobileAuthenticatedStream_Read_m6EC3DEF7CDD081863F58DC0E16120040DEB79622,
	MobileAuthenticatedStream_Write_mD339F8D2C127E4A82A7C22A0EE9AF82F0A07A942,
	MobileAuthenticatedStream_ReadAsync_mFA908C90B562D2C958DC1762A90F883DB3AC5F13,
	MobileAuthenticatedStream_WriteAsync_m764C5294A8B64C33B593CD388DC0BD9FFE120753,
	MobileAuthenticatedStream_StartOperation_m8E632D323D991C8393DE86E4EC3E02DCA5AB31AF,
	MobileAuthenticatedStream_InternalRead_m90FE0F2015227506EF5E6EA18E49EEA5E3A1C319,
	MobileAuthenticatedStream_InternalRead_m5989243EA8E865C58630A151F50FD9286501238A,
	MobileAuthenticatedStream_InternalWrite_mDCC759D5D81736625897B956239DBEEE8F7AE743,
	MobileAuthenticatedStream_InternalWrite_m0B6A441B8194AAE474EECE582DA3627AB26CFB54,
	MobileAuthenticatedStream_InnerRead_m62766E47172B5468B6934BED507A4EF4054396ED,
	MobileAuthenticatedStream_InnerWrite_m137287DEDB6C2BC5E8DDDAC999787FA5A0B4B570,
	MobileAuthenticatedStream_ProcessHandshake_mEB04A5B2D731558886E0FE3D20174BC0F1DFE091,
	MobileAuthenticatedStream_ProcessRead_mB8FC6C872B55E0631A80824636220F3B73270441,
	MobileAuthenticatedStream_ProcessWrite_mC26A594E550853A399B5AD111CE704D06C500992,
	MobileAuthenticatedStream_get_IsAuthenticated_m46A9D2671C2864D1F5C559FC6C5284701BA8AB1E,
	MobileAuthenticatedStream_Dispose_m0D094AAD63D7E66A3F88EA02B58CC039BF9D0F52,
	MobileAuthenticatedStream_Flush_mCD0E572BA47A644E4B22167074AC8B4B926E6C60,
	MobileAuthenticatedStream_get_InternalLocalCertificate_m2CD310D810957E8E1F819BA7AFF4E6640BFB136F,
	MobileAuthenticatedStream_Seek_mC6C077D712D53180D6D3676CCAB67810A57041DE,
	MobileAuthenticatedStream_get_CanRead_m206F7DA5CC6E445B2E23678344AD847C72929BED,
	MobileAuthenticatedStream_get_CanWrite_m6FBD6254C19E3391BAC2EFFDE46005BB0CDDEA84,
	MobileAuthenticatedStream_get_CanSeek_mF7A4E5EC7EAFCAA07CBDD7D35B1A764177612503,
	MobileAuthenticatedStream_get_Length_mF8ACA717EFBD5E1E15B9ABBEFC9F5EC41127469C,
	MobileAuthenticatedStream_get_Position_mDC516AFB4C932E61DA6DBFEF056CD9D798129035,
	MobileAuthenticatedStream_set_Position_mDA69F8B3575A0D6E3B11621BCB334371E80B9D56,
	MobileAuthenticatedStream_get_ReadTimeout_m8CB544C81A7A2D5B882E91A691C97513912DB866,
	MobileAuthenticatedStream_set_ReadTimeout_m152C3065A8D914E2F6CDFB4E2EDC19DD8C466082,
	MobileAuthenticatedStream_get_WriteTimeout_mDB098ADC853F298E298C4712405BF78BC4C4FFCC,
	MobileAuthenticatedStream__cctor_mAE00872557415DE85E6CB57122CAD50E9F3080FE,
	MobileAuthenticatedStream_U3CInnerWriteU3Eb__67_0_mEC1BC0A19130E44F6E542F229CE3FFAC0CD78697,
	U3CProcessAuthenticationU3Ed__47_MoveNext_m43E7652EA23BFB6926E99D87A635920E8C10B422,
	U3CProcessAuthenticationU3Ed__47_SetStateMachine_mD020F0C8569DCDC3496AF18CE204E77E7919A6EC,
	U3CStartOperationU3Ed__58_MoveNext_mE4390271E237A2642BC6C9CC2522A860DB0AC91E,
	U3CStartOperationU3Ed__58_SetStateMachine_m6D7E173F740C08FCBBA924ADB742B956BC31B92F,
	U3CU3Ec__DisplayClass66_0__ctor_m0649BF5458CDCAB6017C443988C36967E3000993,
	U3CU3Ec__DisplayClass66_0_U3CInnerReadU3Eb__0_m3F3293E1DD48D7532F3B8D84D7C8402698D60F36,
	U3CInnerReadU3Ed__66_MoveNext_m5DFDC2139602BBC2F86D14BDA64B4A49ECDD90EB,
	U3CInnerReadU3Ed__66_SetStateMachine_mBA42C0B565B5D3F43D109D2A8CC66EE8CE9BC920,
	U3CInnerWriteU3Ed__67_MoveNext_mDF6F0FEA0FCAE97EEB2E5A2546446C00674CCEA3,
	U3CInnerWriteU3Ed__67_SetStateMachine_m7448CF503BCD3FEC38241FB22DBA3AB4B91FF5B1,
	MobileTlsContext__ctor_mBC6250BC13D9F2395C790689A48AC34C533D6227,
	MobileTlsContext_get_Parent_mC509F430FE5581A104C62FB3A08AE9D97DE19098,
	MobileTlsContext_get_Settings_m68D8D1488C1778311BE2EE65F549081B0E7D362C,
	NULL,
	MobileTlsContext_get_IsServer_m79E765F4FA8DAF1C98322134D48F6CACBEC824B7,
	MobileTlsContext_get_TargetHost_m82FF5791372BEF41AC5E73E368824231CC4F5528,
	MobileTlsContext_get_ServerName_m3CF7B9F7D249B9B2F553B5A72F439B5502229BF3,
	MobileTlsContext_get_ClientCertificates_m675A2D5E4F7FCB85B4B412A5659953184065C9EE,
	NULL,
	NULL,
	NULL,
	MobileTlsContext_get_LocalServerCertificate_m20FDC85F1F18C42644D48872EBAF9A6247624E09,
	NULL,
	NULL,
	NULL,
	NULL,
	MobileTlsContext_ValidateCertificate_m3C91E89E8C148DA23146F3749DD323681CFEF9D1,
	MobileTlsContext_SelectClientCertificate_m0B7118391910FA19C13F307ECED5DE52D586948E,
	MobileTlsContext_Dispose_m7C7D11F95AC2F7663D397D6FA4ECF82ECC7C0F9A,
	MobileTlsContext_Dispose_m020A795EE75CF99916490B91697E0EB31C5A2F94,
	MobileTlsContext_Finalize_mC58200C1813B8458AD3DB37BC15338F2AC750DF9,
	MonoTlsProviderFactory_GetProviderInternal_mBC124EF2982B5FB4F00F189F50A42BC279C31607,
	MonoTlsProviderFactory_InitializeInternal_mB0843306BA58C8CBDE17485CBFCE45BAD8CFA356,
	MonoTlsProviderFactory_LookupProvider_m6D4B1D58FF109BD87C2D75BE911E265A624A6AA2,
	MonoTlsProviderFactory_InitializeProviderRegistration_mDC8AEDEE018FFC5374E746A72B55A337B675CB82,
	MonoTlsProviderFactory_CreateDefaultProviderImpl_m0FA86D0054C7B6025BFCC836EE2093D129B0B5EE,
	MonoTlsProviderFactory_GetProvider_mF98C9785B969091A19AE96D3DDFAA98C09900DFA,
	MonoTlsProviderFactory__cctor_mA2C103AE727F17D8706F964DB378FB0644CA70D1,
	MonoTlsStream_get_Request_m5F3CDE9EA1921F1A45C0FAE20DD4BA634D0D8D83,
	MonoTlsStream_get_ExceptionStatus_mBB3A6B7073808EF33BA869786BA9B3617851796B,
	MonoTlsStream_get_CertificateValidationFailed_m28A1EF3B3EC723A5A0114B613F7BF9B6AB90555F,
	MonoTlsStream_set_CertificateValidationFailed_m225E1AA3894B292682A2BF06B886693A11DEAFEC,
	MonoTlsStream__ctor_mAED0E21D701587D3C110F379FF2C3D9318EB31DF,
	MonoTlsStream_CreateStream_m320FE226FFD28910A3FB1A8BCD19B9CB6E0395F1,
	U3CCreateStreamU3Ed__17_MoveNext_m2C5C58B4824641D56245C496817CBADF69343260,
	U3CCreateStreamU3Ed__17_SetStateMachine_m1830D99E90C0D7A32F6DA3021ADD38487CADEE71,
	NoReflectionHelper_GetInternalValidator_m795882CC895991AAC96B1CD6CD7DA1AE8C6321D6,
	SystemCertificateValidator__cctor_m6C2E43AD95D74AF470013B88B823825B13937E30,
	SystemCertificateValidator_NeedsChain_mEA1D649FC72CD6D61ACECF098C7CC871AEC5A215,
	CallbackHelpers_MonoToPublic_mC0C146376B8EB6B831AE401CE53650C5ED5D69F2,
	CallbackHelpers_MonoToInternal_m895AC89217D5876DB6CC95D7C656C9BA13D4D618,
	U3CU3Ec__DisplayClass5_0__ctor_mDEAE80535B75B48ABC04D0F037E9418BD9267B77,
	U3CU3Ec__DisplayClass5_0_U3CMonoToPublicU3Eb__0_m4F845793FA40587672AC0E7B41112A88E696E3D5,
	U3CU3Ec__DisplayClass8_0__ctor_m6314CCF15B90FA141A52812284AB1885D149CD5A,
	U3CU3Ec__DisplayClass8_0_U3CMonoToInternalU3Eb__0_mF7ADE5C0A69E9E18CC61626FC0AA31EEDD83038F,
	NtlmSession__ctor_mEEEFFA1F5F08E6F04718A3008CB72006CC8BED71,
	NtlmSession_Authenticate_m57C3EA3E259871B2300FA1B1AB9FA4AE5E9AA1FC,
	NtlmClient_Authenticate_m29234A413BB7C853DE1F4E9921FDB58DE8227BDF,
	NtlmClient_PreAuthenticate_mF198BBB5898754D555B383C4019F73F15BE23276,
	NtlmClient_get_AuthenticationType_mB7D44D8F528617CBD02F8DA2D95245B2738C8178,
	NtlmClient__ctor_mDE10BA5EAC5F7ABCF7B9E83C412425BE1DD178DC,
	NtlmClient__cctor_mF8E5E7112DBDA1CF249AC91942A5BD9950DB524F,
	U3CU3Ec__cctor_m274D237C2D332237DF0CEFC0F104AAE71FCAB3AA,
	U3CU3Ec__ctor_m8EC0DBE120D2CB08BE2ED3F5A706BCEF9716603C,
	U3CU3Ec_U3CAuthenticateU3Eb__1_0_mE2F40D1D8564A82A6EFFA6D78EDF09514115E79A,
	NativeMethods_DuplicateHandle_m7D1F5D03EF5254E9B4B670BDECD2EDEF7AA0B00D,
	NativeMethods_DuplicateHandle_m5C21EA8CF525CF8393A163DC71A4C77790F5B706,
	NativeMethods_GetCurrentProcess_mD74A4139227DCBBC998906A9A4A74B9A7C176CE1,
	NativeMethods_GetExitCodeProcess_mE82305F94ACE81CA86DC12C37B0129CF596CE110,
	NativeMethods_GetExitCodeProcess_m6189E8FBCC4A4ADC62D0BE2A614CDEB848F0313D,
	NativeMethods_GetCurrentProcessId_m9E674A6B2BE2E6BC7B228DA4CA9330E144430F24,
	NativeMethods_CloseProcess_mC58317B5182D4057EB1D65C8ABD2A3AE5A6D00D4,
	SafeProcessHandle__ctor_m347300F5032173FAA9287B4CDC692BBA71D82E95,
	SafeProcessHandle__ctor_mF35A5C60AA1DFE35E75F353C346E941D62DB8859,
	SafeProcessHandle_ReleaseHandle_m9026551EED6D5751BCBB3F413986A339E0DFE258,
	SafeProcessHandle__cctor_mB58028777298714AC693447FF3F9878F04073021,
	UriBuilder__ctor_m1CBBB001D2542111D5B3334356E2AC65AFB80D27,
	UriBuilder_set_Host_m7CD9C7B0B9CACAF15A57ACFC363C766F19178930,
	UriBuilder_set_Path_mD17EF197B4A8A764682938B468B647DAE716E9D0,
	UriBuilder_set_Scheme_m02C71DED53B5BDB8CA03E7484B8B554D0EF4B3BA,
	UriBuilder_get_Uri_mD0DF3F7DDF7C56CC99E2D29E06C959F80A4171A1,
	UriBuilder_Equals_m2318FB925C63380B75D92D199A9C2AE4AA98F322,
	UriBuilder_GetHashCode_m8ECFACD3573A5E927B335A3443481248118C8310,
	UriBuilder_SetFieldsFromUri_mB6015DF5AA0D123A1B2749378D88FA26D409788E,
	UriBuilder_ToString_m0DEFF1C8981338B9D30B81620E839DCF2CFF4713,
	SecurityUtils_DemandReflectionAccess_mE5DD76091B53E4D8E1FFC66F7B925ECBAD4780A7,
	SecurityUtils_HasReflectionPermission_m5B4DA8E0E402CC81DCF03D9F48E31177D6BF3465,
	SecurityUtils_SecureCreateInstance_mDE7E56409D0674CB8601DA0E37761FF83DCEFE32,
	SecurityUtils_SecureCreateInstance_mD642B41CCEFD053670E9BBC47EBC3B71493D73FE,
	SecurityUtils_SecureConstructorInvoke_mACB3821F34281C37E13A3535D63C834B84CE371A,
	SecurityUtils_SecureConstructorInvoke_m1AEE51CBB019E631EB2D71F3A0508B016765E2E4,
	InvariantComparer__ctor_m42B33CC43C194F792B70B96258F930ECF46970A5,
	InvariantComparer_Compare_m74CBFBF1B02F2E9C149AC405D969DB2F4A802889,
	InvariantComparer__cctor_m319780C01DB316EE447344855F394630AF6F3C6F,
	IriHelper_CheckIriUnicodeRange_m47EF9FBD5FE075A464AE2A242FB43BEBC7C4F775,
	IriHelper_CheckIriUnicodeRange_m76D54508F06B0BD021CF86889C71C44578B495FB,
	IriHelper_CheckIsReserved_mFF947D4AEDC2D811E2B5379B9706901ED2B29868,
	IriHelper_EscapeUnescapeIri_mE7C6E85447A41E32A050856BC24B40279EDFF6E5,
	Uri_get_IsImplicitFile_m8D1A522158E4EB8AD8C077376D023ED1262998F6,
	Uri_get_IsUncOrDosPath_m33F2D8808AB44816518C1C464152D4B7872374F0,
	Uri_get_IsDosPath_m16357B61F5D111C45EF7D40276B96429E414F0D2,
	Uri_get_IsUncPath_m2D9E7E2DB4EA57EF268B9BA167A1389E18AE9835,
	Uri_get_HostType_mA30DC51045EE5FE94B3CB84B0D361A9C28EE572E,
	Uri_get_Syntax_mCBAC18B1DC71D269BF6C98417D923674DE258DC2,
	Uri_get_IsNotAbsoluteUri_m374185EB37A209B6102F955427913168C5543028,
	Uri_IriParsingStatic_m5FACD38C4EDB61BC6AC465759CDB56F24C34C3B8,
	Uri_get_AllowIdn_m612B747CE2F03FCA867D81F14710758B561209E7,
	Uri_AllowIdnStatic_m0B61B2A586F2BF870D185A1BD65151F52EFBC457,
	Uri_IsIntranet_m3AC6DBC7C35F309DFAD0951ABC7D95A8000548EE,
	Uri_get_UserDrivenParsing_mF2426529046B3DF3292A7AA2F4885F8D6591BBBD,
	Uri_SetUserDrivenParsing_mDE80D352D6343F50F152EB65EF142E84F7F79D69,
	Uri_get_SecuredPathIndex_m575B7B28B17F8F7EE3FA563ACF6390B0926732AD,
	Uri_NotAny_mB88A38A602D4A784CADBD43FDF4CDA0235371E81,
	Uri_InFact_mEEE8ADE0780C0712A3DEB8935BD6FC7B23F38A7B,
	Uri_StaticNotAny_mC49F6501AFE849E383AC6777CEB63D2B409B264E,
	Uri_StaticInFact_m85C3E521AD9916CC030AC01E311F79D90E981B05,
	Uri_EnsureUriInfo_m6FE387306AF82CDCFC56E2E9C2171C406D1FA982,
	Uri_EnsureParseRemaining_mDF7D4313A56047EB22457E12330C138156D54783,
	Uri_EnsureHostString_m7F5F3ED8488F83170A857CD51F0CFEB8322AA055,
	Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A,
	Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B,
	Uri__ctor_mD7EC916948CBFE71F80298DDA6E4209724958B09,
	Uri_CreateUri_m9D81A5F3B332C44FDD875893EF619631708791F2,
	Uri_GetCombinedString_mA3D01108BC32A4594A578A4345BA0F012F554521,
	Uri_GetException_m9BD1AF317D6DE516C8D3909A0ECD460BA35996F7,
	Uri__ctor_mE1AB9FB0563073B8DFB381A69A54E9E0459D583F,
	Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m39D9B260E68B8715E9B693A125A2116CE14D760D,
	Uri_GetObjectData_m0D16C2BC060F0B88503DCC0EEACB151D43FA16CA,
	Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA,
	Uri_get_PrivateAbsolutePath_mF7B63FC5EBFAB1EE164BF868900B548962C5A546,
	Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE,
	Uri_get_LocalPath_m60EE736E6F601238CBC20CE7DBB647C61F16DB0E,
	Uri_get_Authority_m5BE92DE43B1B4BCD6849FEBDE5530AB97E0C31EB,
	Uri_get_HostNameType_m710282366272F2807B7D09D79C20014515BB81D3,
	Uri_get_IsDefaultPort_m1BFC89B27306852E9AFDEF92897FD52B0B3ECD06,
	Uri_get_IsFile_m760E384ED177DC9197D5010B763F64196552DF5F,
	Uri_get_IsLoopback_m0E865DCC324F483C0C60E7D8E6FEF7AD0F46059A,
	Uri_get_PathAndQuery_m33B64A4AAF08510C0199CF5A85918B91D1008E5C,
	Uri_get_IsUnc_mB190B452D6A7B09FC8BDD967A5C38F32E87E0FCA,
	Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C,
	Uri_StaticIsFile_mDA17D91238AB2D1C549C55C524F67C714145D9CF,
	Uri_get_InitializeLock_mBC92A79EFBC775C9192BB5992F88AB868576D9CF,
	Uri_InitializeUriConfig_mADB8B77C49B053970C363E91FE4BDD8315401364,
	Uri_GetLocalPath_mDC900B37A0BEA02CAD7298582C2042221F9859DE,
	Uri_get_Port_m7A1413AC9D9A2FC5DC8A7F89DF4A01ACA0241A02,
	Uri_get_Query_m17DEC663263C486C8C8177AF9C4BFE2FFBE51178,
	Uri_get_Fragment_m3CB7AD14DA9618ADE406039D4713F67D6951D835,
	Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F,
	Uri_get_OriginalStringSwitched_mBE7152D5DA7A1D922B728B9EA8C64815B0469FB7,
	Uri_get_OriginalString_m3031F9054CA10F2C55C0E2415CC19810D360A5D6,
	Uri_get_DnsSafeHost_mE5001E7AE7F1879A2059024EA06C9031F6320A2B,
	Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF,
	Uri_get_UserEscaped_m5A376B8E2DDB815CAA2E34AF8890FBA943DC2085,
	Uri_get_UserInfo_mC0189C851F71ACF0B48A462E74C7F3EB86501C8D,
	Uri_IsGenDelim_mB6256291D6D90DAFB8B923D197BBD48A371F4265,
	Uri_CheckSchemeName_m00DF91AC5BC363425D403696C6251A6BCC5E9E62,
	Uri_IsHexDigit_m65CBC0215C67105D79C7B49FAF5DD4676B86ED20,
	Uri_FromHex_m16EF28AD07AF8D499C8157124A9E7C01D6FFFAA8,
	Uri_GetHashCode_m41959A208E51019C57C20014B2505993FB94B70C,
	Uri_ToString_mDD98375BF8CEBEF6E3708BBCA6C4AB0B54165DA2,
	Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682,
	Uri_op_Inequality_mC32A3382EF16D80BF39005BDD2AB452203D76D6E,
	Uri_Equals_m1BD19791DD8A42FEFF5844C29623626C2849C452,
	Uri_InternalEscapeString_m4F24E88E5A581C3992C85B23EA0EDE0952A4B82F,
	Uri_ParseScheme_m97A1B445A9528F29FC3007B02F2F8789AC201E82,
	Uri_ParseMinimal_m24D824EC77216C64F4B8B9175915CD6C3C6DB7B5,
	Uri_PrivateParseMinimal_m4D4C3CB26AC0DE8B0E1F7DC4143F2004D9D25B17,
	Uri_PrivateParseMinimalIri_mD8C7CA7EE14D994E915B48FB6A2CDE62253D4F1E,
	Uri_CreateUriInfo_m3B4F804AB6CB010246F2A52F123D6E44DECDE998,
	Uri_CreateHostString_mBBAF0ACD4E2EE673F8F7F4E416D87517D94245CF,
	Uri_CreateHostStringHelper_mB7076A86E12D57D5722AA4AC0993B38332A21C8D,
	Uri_GetHostViaCustomSyntax_m6632DAD1F66901E82C60A47D626A9140A586C802,
	Uri_GetParts_m432C93EAC8684C7410585D36DA00B04F6DC34357,
	Uri_GetEscapedParts_m0C33275AFEA210E5CAD22649E8B61B49FB43971E,
	Uri_GetUnescapedParts_m57F83B75B05C5D8EAB6B8ACCB6C8E4F0922CB7ED,
	Uri_ReCreateParts_mB622FFDF74676902D184FD96C4E6B740B65140AF,
	Uri_GetUriPartsFromUserString_m3D6EEB76609CCC54A0ABE65911CC24603A184B29,
	Uri_ParseRemaining_m9134D26360C9EEDFAFAFEE1ECA1A5CEE66BE5A3A,
	Uri_ParseSchemeCheckImplicitFile_m8244C40705A553AA88036339B231B1BB279580DC,
	Uri_CheckKnownSchemes_mB4E8E77DD15C70FACC9DA5078083E670B0EC9FA1,
	Uri_CheckSchemeSyntax_m7D9517CBE8B09F13A24AF4EEF0AE2D185C3E1C2D,
	Uri_CheckAuthorityHelper_m7946931160B7EC50E7167A11E570A4AF8AEB5B2E,
	Uri_CheckAuthorityHelperHandleDnsIri_mB737EC35D3A477668E6E289D09DFB43EAD4D4D62,
	Uri_CheckAuthorityHelperHandleAnyHostIri_mE38845CEFA41AB52AB949CAE2A43D77FB397C08D,
	Uri_FindEndOfComponent_m59CB1EFDA410B42014EA7DCDBA0C9FC9F5996E02,
	Uri_FindEndOfComponent_m198F7AC80BEA08E8DAA6B4577D8A872B41C519B1,
	Uri_CheckCanonical_m54AFA85AA00A9909C2EC01F026873F12532AD7F7,
	Uri_GetCanonicalPath_m66FA22F6E85D79E360A7EE86C0E03F1A009F6F99,
	Uri_UnescapeOnly_m16364432252C3908D378B0BC2BC37F9AD5CED9A6,
	Uri_Compress_m0A24E0C5DD7555EA7723C37FF428B0B1CA6B976D,
	Uri_CalculateCaseInsensitiveHashCode_mC84DC2B6AE39DB00143C7DE8BD0CDA05872635A5,
	Uri_CombineUri_m0A99C4A1F80FF7E6C8747545BB4610ABC4B4F9D1,
	Uri_get_HasAuthority_m2180FC17FB6FE7A11EBA0BDE1EF5EB9EF808A909,
	Uri_IsLWS_m16D38DDA4D0A7CD3899DEEE31CEF160EAF2C3A44,
	Uri_IsAsciiLetter_mFDC33D2D538AFF6A5819B73CB555709865ADE841,
	Uri_IsAsciiLetterOrDigit_m44901130AFF9E14663C5F9E6437BE44484A82BB8,
	Uri_IsBidiControlCharacter_m17A486D6ED9263488C6F4B3F3EDF1BF95352765E,
	Uri_StripBidiControlCharacter_m259E2D3AA84B455ADD63DFBC4EC802241E4317FA,
	Uri_CreateThis_m522F36D576D9A8803410439127DB32837331BA3A,
	Uri_InitializeUri_m044EA7C6188B132874B4522D5CA41EEFDB9A1718,
	Uri_CheckForConfigLoad_mC7297EBC00884B1793FDB16F79BF0FCFD53E9FA7,
	Uri_CheckForUnicode_mC763EF0DDC61EE359A6256B95209736EC0353AA1,
	Uri_CheckForEscapedUnreserved_mCEF702F733C72BE825E9FEBBEA751540A6A78D11,
	Uri_TryCreate_mBDD7F98C3BEBD9C3936DDF7960533CBB56478FDF,
	Uri_GetComponents_m30E3EAD4E9A39939456E764FEF94AFD4D6B7532A,
	Uri_UnescapeDataString_mD0A4732F7ED9CA5DB9E46D802971B5406094CC77,
	Uri_EscapeUnescapeIri_m14C0CD1A4C14E2458685E5A10049204B1A15C16C,
	Uri__ctor_m6EA3AF49C103A3D56EBBB24BCAEE8DE7E8676AF4,
	Uri_CreateHelper_mC4FC141C7E569879417FFC24BCB47E22CE09163B,
	Uri_ResolveHelper_m8FD2A09E63507DB5178AE3C182C323E8EA4B8752,
	Uri_GetRelativeSerializationString_mDEB0AD1094EC2842C2F0830C1E43FF2FFDEB6F5B,
	Uri_GetComponentsHelper_m83D8E4A027E180AFB34BA5290A8FF381EBCBCB75,
	Uri_CreateThisFromUri_m986BB8F1CF8D75EEFA12D9D0963BA927FA394BE5,
	Uri__cctor_mED6507CF356205205DE18F0D9D2A660D4C094F23,
	UriInfo__ctor_m88A6E3E7164B78B18C70D83CA5AD734517D308B3,
	MoreInfo__ctor_m4AC1286A4D4DAD0AB0EE99A2C952D54BFA5F44A7,
	UriFormatException__ctor_m4D218C92C093CD0CDDDC012911A1E10CB327BB70,
	UriFormatException__ctor_m718A5DEB020FAAD1F654CD05E63C3988AA7712D3,
	UriFormatException__ctor_m15F8C1205D9A648F72DD5D94DB92FD1FA1397FE0,
	UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_mF5C6CA057915A5F7F4E9D8FBE5D6EB2595A4FD80,
	UriHelper_EscapeString_m616525587FFF13665945B9173F3C2EC41C9EDDA8,
	UriHelper_EnsureDestinationSize_m4CAB570AAAC5145D6DAF9AC4362812693C324887,
	UriHelper_UnescapeString_m978B253231CE4F7BA6F6DC7778D679C19F77CB54,
	UriHelper_UnescapeString_mD137E2B3F648504A96E7F244796CDCEBE6BB9BE1,
	UriHelper_MatchUTF8Sequence_m0E963F060C446C4BBBBD60E4D54CAE9A36D5A3F7,
	UriHelper_EscapeAsciiChar_m3B740B3721EF4D93E9B9DFB2F881138AF4DE4452,
	UriHelper_EscapedAscii_mC7BE08D5B7803E83C57B8269F298B6DFA9EC5120,
	UriHelper_IsNotSafeForUnescape_mD11825AB8FE6E410A5C0D6D7850C607DBF697D7E,
	UriHelper_IsReservedUnreservedOrHash_mEAD756DAD5DB17F71960CC501BBB7CF9AB5EF74F,
	UriHelper_IsUnreserved_m3171C456B602B4F7052B4E865F2DF04C71553797,
	UriHelper_Is3986Unreserved_m06ED29AEFC563547A29E1DAA6A55760ADD9FCC30,
	UriHelper__cctor_mEBD15B6A7F8E49B4188075DC2EF1A2956E7E3185,
	UriParser_get_SchemeName_m3BD969B4E8EEA3769D070FA42CE340CDC766F47D,
	UriParser_get_DefaultPort_m38684C86B40F59960533D8F812B311ACBBEB7AA5,
	UriParser_OnNewUri_m752BC0174A2E3F7AA99F1088E1D539E5B8F7B5B2,
	UriParser_InitializeAndValidate_m5B38A10B57DC49B1CE13F361ABD78D7269EDA886,
	UriParser_Resolve_m7CC03524A2848FBD24BAB57CC62A19C751937182,
	UriParser_GetComponents_m230F3341901B4B90DC4650093272BC15A1161FAF,
	UriParser_get_ShouldUseLegacyV2Quirks_m2BDF10B430FDA291AA6962104CD838776F31D20E,
	UriParser__cctor_m9E43C905DCA4EE1855EE2C0236A1FCB6075841C5,
	UriParser_get_Flags_mBE183D7CBEEEBEC670CCF1DF21D56B354796D6C3,
	UriParser_NotAny_mCE6CF6736414BE547215F6E44C3E1283DEA05F56,
	UriParser_InFact_m3C07C3050DE1E69F6B0BC816EC34AF610373E532,
	UriParser_IsAllSet_mEE811F1E7BBCC34D7A32BC30A18AD5D34E690813,
	UriParser_IsFullMatch_mFC1C9EEDD31F040997931B26EF54CE7988495550,
	UriParser__ctor_m4FA54685DFA00FC6AEA73E94CD59C5FF2872E55A,
	UriParser_FindOrFetchAsUnknownV1Syntax_m29D45A9BF93C7C4FC7C819658043B6E753E7F01A,
	UriParser_GetSyntax_mD610CEF6784E137AF251EBC41629E2FE1D344615,
	UriParser_get_IsSimple_m8ED850D585BA3BA0FDC239496065E6D2D973C7E5,
	UriParser_InternalOnNewUri_m93B84E04949FAE8FE3B6919DA9F933B682D4B2F8,
	UriParser_InternalValidate_m69157B3E80381F3FC104788160F2213B3FE8F39D,
	UriParser_InternalResolve_mD1963080EBCF493DA78656AA5AEA458BF5138F5B,
	UriParser_InternalGetComponents_m52F450C5283A1820D5AFD07505E5FE82D4F476B0,
	BuiltInUriParser__ctor_m6E9775075E7360DD524B7E3E456A3FFA58F89E79,
	DomainNameHelper_ParseCanonicalName_m12865C6C2427B6ED804747CB1117D0B80E332F4D,
	DomainNameHelper_IsValid_m9E1909F6CA353F469ACF623BCBE1E3B545164752,
	DomainNameHelper_IsValidByIri_mE5772C5B7528885976ACB5AB11881B79A410CE24,
	DomainNameHelper_IdnEquivalent_m14CEBD0BD7B1BF46F8806E4EB5BB1901F7F29E2A,
	DomainNameHelper_IdnEquivalent_mD8EBF17C7A0A50FFAA03EAA9CA737899C9A0881E,
	DomainNameHelper_IsIdnAce_m063EE4431000F1D566D2D62B3BBB947A00CDA8EF,
	DomainNameHelper_IsIdnAce_mC429C00971921E7C357FA9A57D14AAB9A0CF3566,
	DomainNameHelper_UnicodeEquivalent_mD229718EC61E3ECBFA7AF5C894D22ADEEDE1B4ED,
	DomainNameHelper_UnicodeEquivalent_m62B17C161795C1C6AC76D49A3FB50B16693CC9DB,
	DomainNameHelper_IsASCIILetterOrDigit_mFAF590F20333B1D787428537FCD1CFF3993FE1F6,
	DomainNameHelper_IsValidDomainLabelCharacter_m957B15160BE378C49B6E25CC4F0D99BBA1FE06C6,
	IPv4AddressHelper_ParseCanonicalName_m25D822E5AC4B56E40C2404C8DE1C03E70ABCF72C,
	IPv4AddressHelper_ParseHostNumber_m4784E0623B1DD368E4A9588DCE7EB58CCDED9121,
	IPv4AddressHelper_IsValid_m1E626B5740F8C0F4F4AEA9D8D9E06933BD79C7AE,
	IPv4AddressHelper_IsValidCanonical_mBE62564C4A9F8F584C9FBC0E6A5D5159071BE23E,
	IPv4AddressHelper_ParseNonCanonical_m4ACD00B972D7DBEB80BC3D7A9C36BB2CEA81638E,
	IPv4AddressHelper_Parse_m61983BF8F1D7D827BABB3BD87AE4A2CE2BA92906,
	IPv4AddressHelper_ParseCanonical_m4E4481DDC7EBC7FB9809A60A6C51975049A81F97,
	IPv6AddressHelper_ParseCanonicalName_m148CB0071D79C29D97FE7E537B0BFA2CB27B709C,
	IPv6AddressHelper_CreateCanonicalName_mB8D24CD9497080513478C86986430DC749EF2A21,
	IPv6AddressHelper_FindCompressionRange_m683176BF25BCAB80F1870FCBC97C96ACE4204DA4,
	IPv6AddressHelper_ShouldHaveIpv4Embedded_m0A87D4ED16D7EEE726B5970DA6FF9FDD5DDE390F,
	IPv6AddressHelper_InternalIsValid_m23A4A563DF5766AC8391628217ADE8670A740D3D,
	IPv6AddressHelper_IsValid_mEA13C6DB64BF812706785DA99E9AFFBC95C1C3E7,
	IPv6AddressHelper_IsValidStrict_m63AA667FE446A0F20109E4680BE64B9B60F73123,
	IPv6AddressHelper_Parse_m799328E366987B99968E9D134301AF228F06C77E,
	UncNameHelper_ParseCanonicalName_mB07DBCB21F6996E1A2BC9D4D4DD427AE0E5D36E2,
	UncNameHelper_IsValid_m677F95E73B0278AC062F862BEA6BE646048127D4,
	IOAsyncCallback__ctor_m58A7C732444005CB72C5B352096C2DB252A6F113,
	IOAsyncCallback_Invoke_m70CC21061AD0965DBC87CB382AD395A35E1788B2,
	IOAsyncResult__ctor_mCDC93C97872E9DAB6A1D9F27C1FA14DDFC6A400D,
	IOAsyncResult_get_AsyncCallback_mC6150F5FC2CEE8FDC22EACD9B9BC72544FE801CC,
	IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A,
	IOAsyncResult_get_AsyncWaitHandle_mA0350FACA25DDD429DBE840269101E8168DCD42E,
	IOAsyncResult_get_CompletedSynchronously_m26279BC02AFFE83009A7EEABFFF58EEB2D12CD24,
	IOAsyncResult_set_CompletedSynchronously_m29ECF9F6388C1F9A12AF83DF8CD19D9FFB4B4D6D,
	IOAsyncResult_get_IsCompleted_m0EAD0BE09029EE4AFC303B76DC5E1EBE4269BEE8,
	IOAsyncResult_set_IsCompleted_m72D907352B8AC32DF47864E4F4EDFADEC825A6F9,
	NULL,
	IOSelectorJob__ctor_mA67864E470C66B78F683571EBD6A6315D9247DE1,
	IOSelectorJob_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem_m896BBDBDBB91D3771569204789FEF8E700123D79,
	IOSelectorJob_System_Threading_IThreadPoolWorkItem_MarkAborted_m3F59E62D7927340D04264BAA081F7FAE0533C9CE,
	IOSelectorJob_MarkDisposed_mBCCE13D70B97BB7AE46D976AE207DF642C4531F0,
	IOSelector_Add_m170DDEAFEE849601BFE7ADBCFD630A7F2BA96057,
	Platform_uname_m2FFDF5380552E8C2E29AFD7AF0BF683A5AA47AC3,
	Platform_CheckOS_m8F1287D867BC38834F974981272A0BC2A2FB4B07,
	Platform_get_IsMacOS_mBD4CA63562755EC465B1E6DD17E7CD193C6CA10E,
	UriTypeConverter__ctor_m02CB01E1305031BE5A45FB54601E520748B6EDB6,
	UriTypeConverter_CanConvert_m970377ED30FF1B6875CCDA64FDC87EFE7D381DE3,
	UriTypeConverter_CanConvertFrom_mD5D419C5B80FC3A5D175655A6278E54FC80928E7,
	UriTypeConverter_CanConvertTo_m119145C6F2FDE221E99ACDAF0EF723003388E8EE,
	UriTypeConverter_ConvertFrom_m079712540B92F2B6AF1780A5793F36EA77CA32ED,
	UriTypeConverter_ConvertTo_mA975FACF630714EBEA487EFC770EA0742756A764,
	Regex__ctor_mE3A1B095FDFDDA41434B5A2CC70403EB18FE8251,
	Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD,
	Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621,
	Regex__ctor_mA8EBF2F80CC00D741BFD2FFD7DC9DB26FBCEE2A4,
	Regex__ctor_m890D2C0E4B5EFD50FA4DCCE8B9242CD03A4CCEFA,
	Regex_System_Runtime_Serialization_ISerializable_GetObjectData_mD788EE38607BF5D618FDA920048707DF4CA4B99C,
	Regex_ValidateMatchTimeout_mA50CD0CB49AB9B42B548900335CA6EABC30BD18F,
	Regex_InitDefaultMatchTimeout_mC441DFFACCC15C2710E85B95820DAB49AE9C47A7,
	Regex_get_Options_m165C450CC7D77E4EA9BBFFED62C73269A6989EF2,
	Regex_get_MatchTimeout_mD3DAA431E1A207786AB12C6FCFE26DB86BD55265,
	Regex_get_RightToLeft_m52C4DEE1DC94FC9531785B74111022F3BCC1DF4B,
	Regex_ToString_m4982DE4C344F7D529666314646F071580A450D5B,
	Regex_GroupNameFromNumber_mC99A37419C4C0C9C3869BCDF055EDC72782D53FF,
	Regex_IsMatch_m967E98137B140DFD845C5E1699D1BC8EF08CC76C,
	Regex_IsMatch_m3709329406E39A80F61F4DD2CC9AB672835A3E81,
	Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49,
	Regex_IsMatch_mC358D80573E765ECC19F9F5882664E3B1FA0966E,
	Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84,
	Regex_Match_mDF110993CAA26CD41AE9F5DB7F0C307B2680CED3,
	Regex_Matches_mD0E47C23B403AC380AF7EAECA48E63C61DC39CDF,
	Regex_InitializeReferences_m55385AD102411A38BF4426C08F6FEC6E55E4D4D6,
	Regex_Run_m4DCD2202C599273C00D6052A77BDD2F39E2F5BF8,
	Regex_LookupCachedAndUpdate_m142F78BC8AE569C2EFDC0C3F9AD831B6CF4E42A5,
	Regex_CacheCode_m5789078ED69C8A3DF1DFE727E338F031549CEABA,
	Regex_UseOptionR_mFAB8780E9F998BE60C4B1127D57DD627A3B5629C,
	Regex_UseOptionInvariant_mD51BCBA0BF4C1B5CEBE9423B4AAA93CD83569B60,
	Regex__cctor_mF29CE2FFB1941E7609C5B67C0236AC98003F675F,
	CachedCodeEntry__ctor_mEA6346EE850E19CF3B775AD68F545BD91F67AE92,
	ExclusiveReference_Get_mEDBF163180AB80C7C79A6BD41FEE0AF28EE7582A,
	ExclusiveReference_Release_mA9EA9A4CF23B58E09F66479E5D3E63AC82D94807,
	ExclusiveReference__ctor_m41EB96FC1FA261CB792752B89F15E6513FEA1722,
	SharedReference__ctor_mFE8F1F42AE73A63B3184CFE997076870C33924B7,
	RegexBoyerMoore__ctor_mFDCB1AB420E718548B67DE42C233402955BBB189,
	RegexBoyerMoore_MatchPattern_m0E84EAABBFCDA85484466A41A7B90187D3489E8C,
	RegexBoyerMoore_IsMatch_mC09692237823CC6C74D4F5D8900D82CEC840FB47,
	RegexBoyerMoore_Scan_m86EB5A209D33DA3F4C7335F8FE133238666FA57B,
	RegexBoyerMoore_ToString_mA3710CA0D37FDA057EB4A7034FECB98E91F1325D,
	Capture__ctor_mDC1197B1E29487F3D086091CF3D5B1029D593402,
	Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A,
	Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC,
	Capture_ToString_mC843EDDC990DBE2696BA08D08B1081CA12228F2C,
	Capture__ctor_mC5CF26C74D61540739B92848EB84D13AD912A6CE,
	CaptureCollection_get_SyncRoot_mDD4E8BD300179AA10BFD374A7997E70882164426,
	CaptureCollection_get_Count_mA45A82BA7103D81E8FC506A02DA2FF862344006E,
	CaptureCollection_get_Item_m9E773C623570B88CA00A8E1309C69EE1C60719CC,
	CaptureCollection_CopyTo_m9A82FE43F6FBA0E2259FFAAED41A9C3EBB2B7F41,
	CaptureCollection_GetEnumerator_m9741991231D034DB55237037C882D93E0F5024CD,
	CaptureCollection_GetCapture_mE5861EC54212C16A889D4DBEE0919A890E2CAA3F,
	CaptureCollection__ctor_m78149EC3020BFBAEC7ECA490F738EB38345F56CB,
	CaptureEnumerator__ctor_mED0FAD8D2FC8045185C8E2CE90AF50B0AC0DF3D2,
	CaptureEnumerator_MoveNext_mC987D36B99568A1551E4CF22FCBDA65AB1DCA122,
	CaptureEnumerator_get_Current_mFCA1782A406906DDFD62AA928C9148F219F73222,
	CaptureEnumerator_get_Capture_m0630B5F64855136073AA64ABE432D23B0ABA8260,
	CaptureEnumerator_Reset_m4A1034C4CD772E01D855794D43BFAB130F807208,
	RegexCharClass__cctor_m70495E564EC18CDEF2A2687F8012C96E571A0631,
	RegexCharClass__ctor_m165680E6EA10035E0630220C967BD772F5D6F52E,
	RegexCharClass__ctor_mFAD2AF3D7B0D4D3DC8BC850B8899C5C4D55F8B49,
	RegexCharClass_get_CanMerge_mC093FE4BE7C1933BA9F146CF2A33CD729A965172,
	RegexCharClass_set_Negate_m8EA71CB8F671E99EF0B388CB520F44B8B6653A6B,
	RegexCharClass_AddChar_mED269B31D5C606032B3394A9B9305ED172D16746,
	RegexCharClass_AddCharClass_mDE8C70A6A99B2223DE4EA36A4753A13B5EEDE7BB,
	RegexCharClass_AddSet_mFC202CC46631017C7D64ED17EAA9C786C5C7CE83,
	RegexCharClass_AddSubtraction_m4EF34AFB93C001C6A4521E1F1C5F4B54833E8A12,
	RegexCharClass_AddRange_mB1188A62712FE4ABB7F5DB28645351E375B5C6A7,
	RegexCharClass_AddCategoryFromName_m032AED661665AE30D7F3F712914E2937F6E4FF97,
	RegexCharClass_AddCategory_m3A3C78511F279FD0CF67A3EE36F59A548A37269A,
	RegexCharClass_AddLowercase_mB87FC245CC837E582370E5410A6B40B23BEAC0BE,
	RegexCharClass_AddLowercaseRange_m75E07C55A082FE5B2926997F2564B611DF61A343,
	RegexCharClass_AddWord_mAED995BB6613893E0950C5895515204F1E95D152,
	RegexCharClass_AddSpace_mD1BF3AD215D69EC6CF0E49A359F7FC709FD6FBB6,
	RegexCharClass_AddDigit_m04C1001F7E8DA85CB2D262ED403BA9BD215A7A8E,
	RegexCharClass_SingletonChar_m11683F48B3AA3E0B5CD5849C40ADDCECC91BFF10,
	RegexCharClass_IsMergeable_mD017475B43D0621F15ECAF5006410D4D0CCC46AD,
	RegexCharClass_IsEmpty_mDD55987C8F4B887716E46869730F5E1E31593A44,
	RegexCharClass_IsSingleton_mF23CB7003B555ADB4C5035A1B3A218A8ED847D12,
	RegexCharClass_IsSingletonInverse_m62E7E31998BEBC824A4EED3CEE5A2D3FB3BF5831,
	RegexCharClass_IsSubtraction_m069CC20713C5757A8AAD9BA556F07C8E042F3BE8,
	RegexCharClass_IsNegated_m66E1348EBCAAD253AEEA5EDC3F9A93E84A433947,
	RegexCharClass_IsECMAWordChar_m3A2920E6309D58F982B8B7AE20D9166601DDCA0B,
	RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94,
	RegexCharClass_CharInClass_mAF6EE8C936383EB630F17C8C268F10BB8C10BC83,
	RegexCharClass_CharInClassRecursive_m7B2DC6EF52CFA494C26DC8AA976F3A06DDAF22FC,
	RegexCharClass_CharInClassInternal_m166B4DDEB0553E88B58A2F3E859CA2D29995CF54,
	RegexCharClass_CharInCategory_m1B20968374CE9C35FE81D172C3325E37433897E1,
	RegexCharClass_CharInCategoryGroup_mDDAA3F1975AC1A7527137AE6951121F381703D48,
	RegexCharClass_NegateCategory_m1C615694A5F8EECBBE4C09BA293454D856F52F50,
	RegexCharClass_Parse_m4766E7E53BF572FD9815DEEBD9831380C33C796A,
	RegexCharClass_ParseRecursive_m6ABF2F2B8B8C5A559866EBF3FBA305247DE4CCF6,
	RegexCharClass_RangeCount_m36A38A50CD2E3E61B5F55D95562BD92923F981F1,
	RegexCharClass_ToStringClass_m6B0B92A0A525001CD78A6C2A766295268E0FED57,
	RegexCharClass_GetRangeAt_m67B8198B09F344044D8F742C5C9869034C4A3128,
	RegexCharClass_Canonicalize_m77EEBAD046B3EAD5110DD472434BDE16851C7A9E,
	RegexCharClass_SetFromProperty_m75FD04D8F9EA5FD996E4C8B4A2DF45BEEE6BABC5,
	LowerCaseMapping__ctor_m06D0A21D5D72E39535F82076EF046F98C62D7D5A,
	SingleRangeComparer_Compare_m917FDE86E5F31A755D07077EA095F8B7E27E130B,
	SingleRangeComparer__ctor_m9B430EFE70974D964D73913D81E7C6C9236BBCCE,
	SingleRange__ctor_m14FD490AFB119E412298554D31FADDCB9465511E,
	RegexCode__ctor_mB6B1143570412865B02CB6AE3DC3F81C0FB6D6C0,
	RegexCode_OpcodeBacktracks_m77D0680FD94F152F85C6CF8724A5EBFFE07A1397,
	RegexFCD_FirstChars_mF01A2365FACEC127CC0EDEEC60340851A0C018A7,
	RegexFCD_Prefix_m6D786604F799DF1EEF509BEA577E2DC50C75FB6E,
	RegexFCD_Anchors_mF19C2B50200C6D7E38566E5C4854DB04EADFF5CE,
	RegexFCD_AnchorFromType_mF944273F420E8D43F4F9EC93950E3797B4C10A47,
	RegexFCD__ctor_mCF73BE925BE1ECF69F189405F3A29DDAFE008BA9,
	RegexFCD_PushInt_m0B38AFDAF0D14FF1E41AC90838B40C4C866D8875,
	RegexFCD_IntIsEmpty_m05E3C6FF40B69E98D90CF1C12DF3F32AEC800B5E,
	RegexFCD_PopInt_m1DF4F5E6B4BA9E15AFF2B3C44D1A233EA46EFCD0,
	RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675,
	RegexFCD_FCIsEmpty_m749E6423466EAD51E38445AC91E76DE31258574F,
	RegexFCD_PopFC_mB83F2100E8EBACF17904BD5CACB57525D2966628,
	RegexFCD_TopFC_mAE41171B96938FD879E0C0AE7C0D06645AAA84CD,
	RegexFCD_RegexFCFromRegexTree_mD5A53219905969B914CE27404553A4360DA78500,
	RegexFCD_SkipChild_m5ACE619BAC10DD5DFE755655DB6151E7DB0885FD,
	RegexFCD_CalculateFC_m16F7EB523C02B530A741A7F6364F2E46865DCC91,
	RegexFC__ctor_m18E889B95C8C6014582FD2C6991F789190519F0A,
	RegexFC__ctor_m073D88DF033828EB626DBEA191FE78296CADB57D,
	RegexFC__ctor_m69E0058CD2F4A36F14589250B3F5CBAD7025D6F5,
	RegexFC_AddFC_m61D0F8CDE635ED3A48AEA069A7700B100D2AE851,
	RegexFC_GetFirstChars_m6BAC398ABDCA5AF58CBE678143C9792611A2A3E8,
	RegexFC_IsCaseInsensitive_m99FC1448E7D14596DB9B7AA327A937E719CC161E,
	RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4,
	RegexPrefix_get_Prefix_m844D02262C0720B0DC488AD1541713AD37BC518E,
	RegexPrefix_get_CaseInsensitive_m4DAE2D9E91916BFFAB928F7DCAA20A5ABD4560E6,
	RegexPrefix_get_Empty_m3D63F7F64529D4CA3C0929F94E035EEED7D9E0F9,
	RegexPrefix__cctor_mF7EA052790930134AC69C755D0066C70CA86363E,
	Group__ctor_mFDE74CF068520CBE797B563B419B8817E60CB58C,
	Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F,
	Group__cctor_mC3032FEBEBFB00282A4485A8D95E47649CE2B881,
	Group__ctor_mEB6936CDFD191A4C92766CE3F3301161D7505C5E,
	GroupCollection_get_SyncRoot_m7505B29FFFE40E5319BAD3F3B3332F8A6299570A,
	GroupCollection_get_Count_mE8775E53B4F5DA6D520BEF5ECEED2E0C08A26B39,
	GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3,
	GroupCollection_GetGroup_m8EDFDB8D85D8BEC6EB98B68CA69EE0022FC16B13,
	GroupCollection_GetGroupImpl_m27CE16949BE0A9CFC61CC6CBF3FB179F63654D92,
	GroupCollection_CopyTo_m122BEB82372AC34C575FCB8C71188A2A49CCC482,
	GroupCollection_GetEnumerator_m47E269C5A8C902948812AF4F52D0C96759550EE9,
	GroupCollection__ctor_mB178F93E8DB52AA6412FF28E5FE50943E2BABFFB,
	GroupEnumerator__ctor_m46D826F06B9D95983146DF49810664D0587A79A9,
	GroupEnumerator_MoveNext_m631A4859F0C83A63B37F5C890ACF2AD0BBCBEE4F,
	GroupEnumerator_get_Current_m3E2FCB1F45CE0B479C8201E8F1FE09AAB0143D50,
	GroupEnumerator_get_Capture_mDA80B69ADC22DF2536DC7BC4F257B01D47B3C671,
	GroupEnumerator_Reset_mA6AFA1D425CAF9207D81F9E5F1B3D7687E5818E3,
	RegexInterpreter__ctor_mB81896A8292574F7532CF707F74A1AC1DECEA9FF,
	RegexInterpreter_InitTrackCount_mFFFBE9294C6FCB854D4502362473C40A5ABBBFC4,
	RegexInterpreter_Advance_m01094234871D9E0AD3DE9225443828647676F55A,
	RegexInterpreter_Advance_m31E2455F84B61536DE535BE51D4D0B42DC33857B,
	RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9,
	RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850,
	RegexInterpreter_Trackto_mDFDFF0401BC8F2B2D26AEC65B54B963F84A089AE,
	RegexInterpreter_Textstart_mDF185C6B3E245A2307A8B0B9F5FE5DF8C8C9936E,
	RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC,
	RegexInterpreter_Trackpos_m6BDE792A7333FADB2533591B88211FD77E8F0401,
	RegexInterpreter_TrackPush_mC82959F407482A4713C419296455A18F5D861E93,
	RegexInterpreter_TrackPush_mA225A4A0302F57CE82842189DCB8895A9AAEDB3D,
	RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878,
	RegexInterpreter_TrackPush_m606F28BD60B479F0FD3073F8B5627836DB89230E,
	RegexInterpreter_TrackPush2_m5131F1DCBCA4D4D2231B44A85B08DE319BE31C9F,
	RegexInterpreter_TrackPush2_m18FF10B704A6586A18D9AB21D28737DC32DA2797,
	RegexInterpreter_Backtrack_m8D227FAE1EFD91174D43FF070D9200291941E593,
	RegexInterpreter_SetOperator_m693B374C6827D36CE755EFFDA53E245FB04652EC,
	RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1,
	RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B,
	RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861,
	RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699,
	RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60,
	RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F,
	RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF,
	RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681,
	RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991,
	RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8,
	RegexInterpreter_Operator_m3BD9AD7DCDA4E84DE4821DA786E1B1483E677B58,
	RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560,
	RegexInterpreter_Leftchars_m6FD5AA399927D1767633B24AE234D596CBDD4002,
	RegexInterpreter_Rightchars_m0D684BDADC810F61B803D30D121506833AD07CD7,
	RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1,
	RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6,
	RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1,
	RegexInterpreter_Stringmatch_m89AE288DB294AC0146C7772193CAD3B702849E54,
	RegexInterpreter_Refmatch_m457B37C3E3B0671E7E89B7F6C16396D36EB32F68,
	RegexInterpreter_Backwardnext_m0C573AFAD3FAEBED37991618A232ACB169F524FF,
	RegexInterpreter_CharAt_m9EFCB7CE5FB311B6C061AA996705CD3D402F8E8C,
	RegexInterpreter_FindFirstChar_m87D986F0502AEEFC4F13EBD0EAD891C495C4845F,
	RegexInterpreter_Go_m1CF26F8D95231F3B2235EA98AFB286C3F1629BED,
	Match_get_Empty_m9565EFA0F267BAF2886447CB8169A654C5471918,
	Match__ctor_m2A6BD37E98680890114AC62CDD23E1821E80A53A,
	Match_Reset_m53A78F16760B7CD5CC8A104F6CD95CA255D888AA,
	Match_AddMatch_m5F28F3255C64D67D56C1542CE32A9D324F96780E,
	Match_BalanceMatch_m85EA44453E637DEBE24ABC7562BF91EE1222DBFD,
	Match_RemoveMatch_m154DB10030027B3738903FFB50DE511D71656B04,
	Match_IsMatched_m9D6E0C0AB1F3E1E8E49E77E3A0A0ECCD7C2C4FBA,
	Match_MatchIndex_m97F06DECDDA8BD3E4D8DF6B9224B8E24C0764F35,
	Match_MatchLength_m5C93EA60B018A79D9D05C8E69D25835848471B01,
	Match_Tidy_mF0A46109EAF0E91CBCA732985265E1DC20CA3F51,
	Match__cctor_mAB49EF64F5132A336358E3F1922FF173EA10CE3C,
	Match__ctor_mBABEF8F11A3BC6DB713519819D135CC87AC1B4CD,
	MatchSparse__ctor_m7CEA8A7F538C706527778E8E75003DD74AC2FD41,
	MatchCollection__ctor_mCB1E897117A6976A5932C82A9EA0F11FF7BCABFE,
	MatchCollection_GetMatch_mFDC0D40A44A2A7B8DD98B2042C58F087C906FB6D,
	MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926,
	MatchCollection_get_SyncRoot_m5E9A0515710C5B63B349C1B9E4D937D76AF43E68,
	MatchCollection_CopyTo_m840C9BD921059464F949874DACD5D253AD3D7F9D,
	MatchCollection_GetEnumerator_mEDB2417DB45B514C8015043F52630DE1AD15447B,
	MatchCollection__cctor_m21581D057DC6333B7A289F12FB337006C060D7DE,
	MatchCollection__ctor_m816A933886BCC9F63F61F20057F42B2322B5E512,
	MatchEnumerator__ctor_m92310EA085303D3D5AE499C710E0D789CDFA96D0,
	MatchEnumerator_MoveNext_m0BFFC9A7F6D578256C480ACFCE704183AED5984B,
	MatchEnumerator_get_Current_m75587B3BA722F9087035BC3E97E4299F84B0A315,
	MatchEnumerator_Reset_m5B2A386F35D391C963536C417714DFE78D0243FF,
	RegexMatchTimeoutException__ctor_m24286DF7231B227E3A8B3C31AE33447361971005,
	RegexMatchTimeoutException__ctor_mA8C497C6700E1233B4953A8AA7B8F57C8682C410,
	RegexMatchTimeoutException__ctor_m7DE41C173C1A57CEA5D015FF63DDFCB70CFF4FBF,
	RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m6F530DBA34FE5CBECBCD322C8FBD4AE28054688C,
	RegexMatchTimeoutException_Init_m68E86C1F84B3CB55302AEF9AF3F7DA3E707FB3CE,
	RegexMatchTimeoutException_Init_m6C0E5F51202C11983B507B8FE32CB5F556B892BD,
	RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B,
	RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B,
	RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA,
	RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F,
	RegexNode__ctor_m5ECC62B9C3918CD043542E5BEAAD39A06158E27A,
	RegexNode_UseOptionR_mEBD872419C386D7C7802D2A6D2187E7B6D1D1641,
	RegexNode_ReverseLeft_m251846220299FD022068361A09B9A7A4CF67A586,
	RegexNode_MakeRep_mFDCFC9F5DA5DCBFC66D6F00A8E08A602F00C5F48,
	RegexNode_Reduce_m9D14953F47CD1D924C3EEB9D0287D7F257AD2D98,
	RegexNode_StripEnation_m2BACBC29E58CEC452B91534BCFA2A21639712B61,
	RegexNode_ReduceGroup_m62F5B20C564AC8A8E8C1C9E00684A8BB9A988E3B,
	RegexNode_ReduceRep_m85B3760500D732A04B60CD3F247CE8ECA1E6F8C1,
	RegexNode_ReduceSet_mD307DD149936830074467A0F24C2E20032F708E9,
	RegexNode_ReduceAlternation_m193F3C5A073401BA987E5AB7D35F59B1FC902341,
	RegexNode_ReduceConcatenation_m95EE4F324360AC71D52EDEC1C53F6F81D73C67C3,
	RegexNode_MakeQuantifier_mA6A10E1AEF5AA80F82BD1BE6D28E62259208B5BC,
	RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8,
	RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27,
	RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D,
	RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019,
	RegexParser_Parse_m5AE448041BC21B17EF68A2039991EC85F91AA9BB,
	RegexParser__ctor_m99DC2B2C4B64E7298BBF49AD862BFD12007E38E4,
	RegexParser_SetPattern_m852D668CE45FBCAA3A6ACC415B94BDD0A7190265,
	RegexParser_Reset_m426A8C90F4D8065486802AE7AC9FB07FC599EB01,
	RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D,
	RegexParser_ScanCharClass_mB6B50794EFC71B8228365D0D72EC66D3643C2800,
	RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D,
	RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7,
	RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82,
	RegexParser_ScanBackslash_m89037831C296A1D781891B426A4016E643C042EF,
	RegexParser_ScanBasicBackslash_m2F491AA1A30B1C901BCADE1C93DE9BA49008300C,
	RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7,
	RegexParser_ScanOctal_m95EA0AE4B61D5418914DDD3815C6277471B4EDFD,
	RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161,
	RegexParser_ScanHex_mDD96A112E30DABDB5BC0C558373DA5607F8ACF95,
	RegexParser_HexDigit_mD112E7ACEDAD4A29DEA1A771854CA34CEB259053,
	RegexParser_ScanControl_m26274BE5776CF5AC03E8EAC7B5972C0A8AF2A95B,
	RegexParser_IsOnlyTopOption_mAA13B95864B8B314B8B6689B47FA4BFE3B433280,
	RegexParser_ScanOptions_m56F01464F53558D3AF3BF1CD874A2656930AF31C,
	RegexParser_ScanCharEscape_mA872DDDD24E165F5B5C5F62DCFAE3B02CCF97C98,
	RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38,
	RegexParser_TypeFromCode_m11B176B0B9A6EF391370E021B111101AE56F4CC6,
	RegexParser_OptionFromCode_mD6CDD96F9917C0518A437DB77BC53130AE702627,
	RegexParser_CountCaptures_m2ECDC9ED534F245A12224038BB86DE5D66DB56A3,
	RegexParser_NoteCaptureSlot_m21BD1F90FF2C62FFA445303D574D271757D62222,
	RegexParser_NoteCaptureName_m5CDAF94FD43B665DE067B6DC02BD72A315D48FFD,
	RegexParser_AssignNameSlots_mC5738B99DE328E7D1FA7279A717640EC2044857E,
	RegexParser_CaptureSlotFromName_mE18BA49BCA1CE4B972DC804E52C78E48905FEFAB,
	RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3,
	RegexParser_IsCaptureName_m5DC0D7BF3AD01C929CB982048722BCD43797CEAE,
	RegexParser_UseOptionN_mD441B71AC8368C644B8D9A0CCB3DB8BD681639B3,
	RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701,
	RegexParser_UseOptionM_mAE3FC2655A6E80EA35D5CEBEE1D82B5B07529118,
	RegexParser_UseOptionS_m070AD4458172FB14FF21E4502DCA6ECEE8938994,
	RegexParser_UseOptionX_m0BFB48EDC8A2F38A29A8F6CEC85080D9E04010FC,
	RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9,
	RegexParser_IsSpecial_m4AC43B42D2727513B568B534C6FF09093ACB2754,
	RegexParser_IsStopperX_mF8FCEDFDBE9E5ED5469A04463782B951552BBB2F,
	RegexParser_IsQuantifier_m7FFA04954A7E4C39D443D790483F2126A5119E25,
	RegexParser_IsTrueQuantifier_m22CCE851B85E0760270178DF1184746040E68AEF,
	RegexParser_IsSpace_m4E37D473B564502A80E5C968E630AA2D4A56231A,
	RegexParser_AddConcatenate_mDDD0350FE254D75D6707668332D0F3088A5572AF,
	RegexParser_PushGroup_m2D76CB852430A3B3F7454DDC3322B2A5E4CE398F,
	RegexParser_PopGroup_mEC525DC83E5BF2F8DA03129AE3DF06834EB76552,
	RegexParser_EmptyStack_m756AC5BB66D0F2077EC7DD655A3D57681200F5CA,
	RegexParser_StartGroup_mBF861FCFB0FB9ED26744CAE2297537DAB6DF37C1,
	RegexParser_AddAlternate_m77BCF63DD4E1AB89B70F72821CAE4B67936CD847,
	RegexParser_AddConcatenate_m77A3D9F6B1484C7B656BDF3CC5659248F9DEA1EA,
	RegexParser_AddConcatenate_m3B10D68AE09CC6A2F06AC65E49B918D11D5375FF,
	RegexParser_Unit_m6C984A797C4A92AB0A9985E5A8207DB9CA9AE87F,
	RegexParser_AddUnitOne_m991DCA85D3432B8F7F74D18125A69FFE25108F47,
	RegexParser_AddUnitNotone_m4F79DE175B95FDB88323D7FE9DC3132E24F8F0C0,
	RegexParser_AddUnitSet_mA262F57A7FAB27996D8115F66BC84A5C58317D7F,
	RegexParser_AddUnitNode_mE8DC7CD039C933AE881097E041BA620AA325FDE8,
	RegexParser_AddUnitType_mEBDFA2325ABDA3FDA74184DBFB706824F6540553,
	RegexParser_AddGroup_m8989D6A9CD4B700522D722DEF5FEFC267C4DBFB7,
	RegexParser_PushOptions_m6E501EE3C5D6FE990ED74935A9AC9A6E834FD968,
	RegexParser_PopOptions_mAE4848419A71162B8E563781AC817A8D6ACEB91B,
	RegexParser_EmptyOptionsStack_mC16A4D18503FF296911710732A95062A8279163B,
	RegexParser_PopKeepOptions_m911F83DFA290ED90B06D3D3166553E6205C256C1,
	RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC,
	RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88,
	RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2,
	RegexParser_MoveRightGetChar_m07070EAE762101F291D120790A1D1A58A58886A9,
	RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9,
	RegexParser_MoveRight_m921C1D96B625B4C8AF1D658E514D57CC44E40B61,
	RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5,
	RegexParser_CharAt_mF46179762DDF46FB78E32CCA3058950244CFCB70,
	RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91,
	RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147,
	RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79,
	RegexParser__cctor_m4F6AA7D64102443052B58896EDF95DCC21C2C0C7,
	RegexRunner__ctor_mBC777F351AD6D1CDD5F20C408B936F7D0F36ED69,
	RegexRunner_Scan_m903691F4DFB68C0267F240D61A6F166BB592CE53,
	RegexRunner_StartTimeoutWatch_mA17870A15492787CA1384132267054AB09BE8BE9,
	RegexRunner_CheckTimeout_m20BF0CD8BC16738ED6E7F20AAF5B4EE695E7E120,
	RegexRunner_DoCheckTimeout_mC26B9239FA1CD3DC98F11A82800F61852793CEA5,
	NULL,
	NULL,
	NULL,
	RegexRunner_InitMatch_mCCF94A1E7CCE89275E47BB218C4DD58DF5D5593D,
	RegexRunner_TidyMatch_m0EEEF0CFBB55AFF485B4D9F9FD21834B9B3A01FA,
	RegexRunner_EnsureStorage_mB3DB043396771740A05B2AABC293DAAB1250B024,
	RegexRunner_IsBoundary_mCF4AE83F6FE3CC46C71C4558DBCDEC255BD422B8,
	RegexRunner_IsECMABoundary_m56C692126DF69F0933BBFCBF122F764C6093DA26,
	RegexRunner_DoubleTrack_m15E35365FAF5F438C7BD0BB0C37594F765949F1F,
	RegexRunner_DoubleStack_m89C12DF438D7BE4ADA2A4D1DFA36F274F292E1F4,
	RegexRunner_DoubleCrawl_m7B67CFD3071825C9F01BC0ACE0E27B1C4EC6DED5,
	RegexRunner_Crawl_mBE60CC8F17E6D85E1A87F0A86BC684F32ACE7CA5,
	RegexRunner_Popcrawl_m2C994BE22A9A4DE0D897691A1CEF87189DB43E67,
	RegexRunner_Crawlpos_m4EC84964D3AD3DB49724BFC28CE89FC34478D532,
	RegexRunner_Capture_m3EB42B55A19BD7776156F04CBE9367C6EBA59F9C,
	RegexRunner_TransferCapture_m642CC595E9FA641B913CCBE02E233DBB319A6E8A,
	RegexRunner_Uncapture_m70B0FFB308F48B4673F73311330BFF640F47B7D9,
	RegexRunner_IsMatched_m7E64237D020BFFA74813A8B6455D5F35671A876C,
	RegexRunner_MatchIndex_m150A8B71C07022C485630C71B2A9FA6FD195F88F,
	RegexRunner_MatchLength_m19C9B24F4F6CAC56A391A0AC47A4358C61615BF7,
	NULL,
	RegexTree__ctor_m89DA1335AAB55B0707774E978E6078CE42DB0DA6,
	RegexWriter_Write_mCDBE8B9E7703439F2F27C082808594B1056BEB99,
	RegexWriter__ctor_mD48D43BB96620B1A02C158E50060ECE3502D0E6B,
	RegexWriter_PushInt_mA25838BDC2398866211241766B75312BAD982486,
	RegexWriter_EmptyStack_mC5B19C5B9AAA668CDCFCC6DA44067117C0E4615C,
	RegexWriter_PopInt_mB3424F9BE841DD161D06F2E1062D81C5D662F79C,
	RegexWriter_CurPos_m59DF38756B9D80548194A1DEF05518EE276E2387,
	RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6,
	RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC,
	RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75,
	RegexWriter_Emit_mDED2545E64CE95D941A1232DBA24EB6C81A7DB0C,
	RegexWriter_StringCode_m5D4A227BBAA0674B820D70BEA1A2F7D0B29635FE,
	RegexWriter_MakeException_mA3013AA25D1D0526A10175955B32BE3C5EC94AC0,
	RegexWriter_MapCapnum_m5EA7BA45A1C4D51DC20C281246D3997A3001A0B6,
	RegexWriter_RegexCodeFromRegexTree_m3352CAF05A1B1753D32D768B83BB778B3E2D4568,
	RegexWriter_EmitFragment_m0B35F7C3BDC22B5DE82735F2652C7948AE8494A5,
	BooleanSwitch__ctor_mA9232C7B57B18DBDDFD4F14DA26483509C0FFD53,
	CorrelationManager__ctor_m754646F4A5CF6B48B817773DD380DA8F65479F3C,
	CorrelationManager_get_LogicalOperationStack_m3F24D4584713FD52E9DE3A3933326613FE0138E9,
	CorrelationManager_GetLogicalOperationStack_m809DE1BD10F64CAC955DFD2863F216C821174E4F,
	Switch__ctor_mA295E111B6A7F4B8D2B6AF796926017759669EA7,
	Switch__ctor_mE69262A89E3F19ACB4610B1EBFB35C763BB3EA48,
	Switch__pruneCachedSwitches_mB732689A566AFB2C1DD9693451B9DE80125CBEFC,
	Switch__cctor_m73E1B17596C50266B4FD30170C74991462125626,
	SwitchLevelAttribute__ctor_mB0C0910F9AA6FC3C568CD3DCEF69731CC528B53A,
	SwitchLevelAttribute_set_SwitchLevelType_m4757AB3B3D77487056F17495239C40B56FC2E9AF,
	Trace_get_Listeners_m94CD4A8CF2B794FC31E19DB28CB6B039786555E8,
	Trace_get_AutoFlush_mE04CC3C8ED4D2D795DD453E7D31997DC78C704E7,
	Trace_get_CorrelationManager_m9674391BE39EBFCE2E998B68CC14AFFFD39B1FEF,
	TraceEventCache_get_Callstack_mC4DF14DD35D5F2C2CCF6498DE056BCEC10E66F0B,
	TraceEventCache_get_LogicalOperationStack_mE02AFFC76491D60F15AB65B943302C55D6981EDF,
	TraceEventCache_get_DateTime_m5CF292D699C6CBC0390D711755AAF99B44D11672,
	TraceEventCache_get_ProcessId_m563BADB0229C98B1C0644F0710E7ECFCF79B2612,
	TraceEventCache_get_ThreadId_m4AF2B21122D0E5EDA0E25BE8251C892C60D2CCC9,
	TraceEventCache_get_Timestamp_m9AA488062DC9C7530063CB1F931AE5DF38E9BC38,
	TraceEventCache_InitProcessInfo_m2828EB2BB26A674D2D21D4943379DA4C2C67E5DB,
	TraceEventCache_GetProcessId_m98E9BBE27684B4CF513B8A57274B6F1D9143D832,
	TraceEventCache_GetThreadId_mFAC10BA9A22F1D413EBDF48F2FC575031D0D43FE,
	TraceEventCache__ctor_mEAEAB5B59E7F5FA03BED108C7A5D259CD01DF256,
	NULL,
	TraceFilter_ShouldTrace_mF33C8B50537B22C4B0BA2A5853C67D8C0DA34CF7,
	TraceInternal_get_Listeners_m65CA1B43F66634A2649DF4C38711D1BC4CFDDC09,
	TraceInternal_get_AutoFlush_mA6CD506864A88784E661B0E88E675E82BA5D44A1,
	TraceInternal_get_IndentLevel_mC76F5C9C346BECC375A399FBCB4B336AED411044,
	TraceInternal_get_IndentSize_m32D735E3A34CD6A6667D3488CABA0D9C9883C082,
	TraceInternal_InitializeSettings_m084DDD851AE58B70584519967C4D3067EFF411FF,
	TraceInternal__cctor_m343A97F7E6E97674CC61894F50D9D706D077AF02,
	TraceListener__ctor_m429A376FB5133ADCCB49B49207424A85F2297B92,
	TraceListener_get_IsThreadSafe_m49B40383732B0D1CC00074B720CD01109EBE7CDE,
	TraceListener_Dispose_mE461183D13600E87F700B6E6767DB53C297B1B7A,
	TraceListener_Dispose_mD6A93DC52C1AB6B44D6997F13783B43501371699,
	TraceListener_Flush_m2EDD7E43097D265D2C331C81A2FB5751D443E869,
	TraceListener_set_IndentLevel_mA821C45C411343582B7063C28D660BB12FF69FB4,
	TraceListener_set_IndentSize_m36630B2544F96FD937B80B875F856CD2DE1088FC,
	TraceListener_get_Filter_mD97AE4C0644A28CE0AA52A74AB2438483F7FE160,
	TraceListener_get_NeedIndent_m090A6186F6FDE1E8D7AA33AC4E8C1836CF398467,
	TraceListener_set_NeedIndent_m15427B8A63CE1E9DE6658F1A4D98AAED36E419A6,
	TraceListener_get_TraceOutputOptions_m4E778D9AA69E6F35CBF39CCC427224227666AD88,
	NULL,
	TraceListener_WriteIndent_mC273562BEA4A69DBDDEFAEB1C69FFE44ADC7F2E1,
	NULL,
	TraceListener_TraceEvent_mDDEC7B658D1C489E0E071DA5DF86825E441FF406,
	TraceListener_WriteHeader_m8DF170D8A8ED375C35FE363C97FFE3670985CF59,
	TraceListener_WriteFooter_mD534A927DC5BD26FBB6C7E512283C366EB7D8E0C,
	TraceListener_IsEnabled_mDAA2E3FBA091191651A84D5D775F6D104F79786D,
	TraceListenerCollection__ctor_m1D02D9AB0605345E2BA08A8BD8C460B083014A59,
	TraceListenerCollection_get_Count_m4CB41846AEA2E6562E67ACC53942C6CBB4685C3A,
	TraceListenerCollection_Add_mA6F288F337079BCB6B6D05751DD6B09F333F2120,
	TraceListenerCollection_Clear_m12D87AC6C95A71C1DA47F10D38E4C696F5852882,
	TraceListenerCollection_GetEnumerator_mF0F3FA549EE0924C512F71EF54F0BDD3973F7450,
	TraceListenerCollection_InitializeListener_mA2CDC444FABAFC5D94678D1D1E154749FFA0A7CC,
	TraceListenerCollection_RemoveAt_m46D6EB743D1B2560CA514E7A8F1FFB1DCBA529DE,
	TraceListenerCollection_System_Collections_IList_get_Item_m2E85FA44C110F37C0E2E688E7CC0A4204B60D3A8,
	TraceListenerCollection_System_Collections_IList_set_Item_mF122EEE7CD13EC454DA19713858A607658DBA833,
	TraceListenerCollection_System_Collections_IList_get_IsReadOnly_m950F96E180B5D9EEBD3EEAA6D7A9977628056E11,
	TraceListenerCollection_System_Collections_IList_get_IsFixedSize_m0CB8144E8986CB77B2B74827D2F6C2A33C0AD633,
	TraceListenerCollection_System_Collections_IList_Add_mC8E19ED6956BB0BA2D5B43A26CE80DC16459D4B7,
	TraceListenerCollection_System_Collections_IList_Contains_mE9DD13A1F3BE40983E949C50559DC445C384CE62,
	TraceListenerCollection_System_Collections_IList_IndexOf_m01A6724571F608193ADCF4DEA29EB29A0CA67B50,
	TraceListenerCollection_System_Collections_IList_Insert_m7D616D7BD82DCD3793910FF4A1440EC4A301DE6C,
	TraceListenerCollection_System_Collections_IList_Remove_mAD2C8873D42366D938885D4819D8BEBD2FAD6CEA,
	TraceListenerCollection_System_Collections_ICollection_get_SyncRoot_m1BDA227922987065A1F9645F772B5D9EE3F42245,
	TraceListenerCollection_System_Collections_ICollection_CopyTo_mA96CE292953A3495982FE54BC34AC80E70F44E60,
	AsyncStreamReader_Close_m0E2C4AE11462C4E48FA868098E96C3383F760FF7,
	AsyncStreamReader_Dispose_mCE17ACF06D4F7EBDB9275ADC2C6F8AF09BDE2402,
	AsyncStreamReader_CancelOperation_mFB9524C17B1668A1B804DFACB9475F4FD7849982,
	Process__ctor_m6A606F7D939C8186E6DFD910A65FE6AEFE0D725C,
	Process_get_Associated_m937DBB0D3D22199FDAE59C73CB94291D41E903F5,
	Process_get_HasExited_m579B038BCCBC4C468970D4CB171173FAB4FFA7C6,
	Process_get_Id_m7401D58B8B638025FFD4574E33057A8F1B4B4E54,
	Process_get_SynchronizingObject_mBDAE5545C753268148A7C6FC28DEADDC964769B7,
	Process_ReleaseProcessHandle_m3A7BE4BCA49D9A5C1174975C11B78E4D6F8901BD,
	Process_Dispose_mF933D46A45CED6769611FA84D148AA7D44505ABC,
	Process_Close_m1319814A5C51B6B53330B294CD961D7221630CAB,
	Process_EnsureState_mAF2E5BE1A4336E9710E74508D3A9B16C7049B8F1,
	Process_GetCurrentProcess_m66CCB1FC5A373B1F70A7A52C7E6973910D84A82E,
	Process_OnExited_m16FF7289D7B34FE7F2EF6E2FDB8730C4E79052CB,
	Process_GetProcessHandle_m779733CC7F7164522150D645C936457CD8482370,
	Process_GetProcessHandle_mA1CF28D2E052D42DFDF95456FF74DF6D5F9DEFAB,
	Process_Refresh_mE0363D6E2713A0002941C693EF50BD1B0593198B,
	Process_StopWatchingForExit_mBAD0DCA6C4ED339EDF09413F34C965E9A757CA54,
	Process_ToString_m5D55F0EEA76377972D53D3757A4132CCCC0A5F87,
	Process_ProcessName_internal_m5270BDDC858083DA5E6D6082696B85443FA48E1A,
	Process_ProcessName_internal_m3DCEF6ADF221D6653A565BC530AD275BA5DA10DA,
	Process_get_ProcessName_mC66C70C57531D1DA91A51FCBA2CA41086B739C63,
	Process_RaiseOnExited_mAE4A537F5FA32E4F6F283B0D665D41A6CBEFB420,
	ProcessWaitHandle__ctor_mB6F85E300A73FD16261E29E69F1ACBF17E0F44EB,
	DefaultTraceListener__cctor_mDE152F0FE083A33746E4EC8A0F0437C0C71EFFEF,
	DefaultTraceListener_GetPrefix_mE0B3AF4F25EF9D99AD974C74372D91445B620C06,
	DefaultTraceListener__ctor_mC2E10D35F6E55FB86DAB67F2AD770ECB871B5708,
	DefaultTraceListener_get_LogFileName_m2DEF6CAE064A36F79543673CDB59656333C24C88,
	DefaultTraceListener_WriteWindowsDebugString_mD0EDECEF430D0B9EC7BF53B8890E1838F90C138C,
	DefaultTraceListener_WriteDebugString_mD3BEBCC10CF1357ABD2D37032A7AE54050B3BE0E,
	DefaultTraceListener_WriteMonoTrace_m94915ED3790147BBBB25D5B6CE3F8197B4A46EB5,
	DefaultTraceListener_WritePrefix_m5FB6FE5C1A069AB53AA66C4A74355B4B4C5F250C,
	DefaultTraceListener_WriteImpl_mC01E69D4496F833D2F9019AAD02F84C751FA67BB,
	DefaultTraceListener_WriteLogFile_m1B03BFECAD957FB2CEF7B9D4A4A8A0D7B1E25E8D,
	DefaultTraceListener_Write_m2C77CF6C1459080523FE7213B8854A9B7FFDCEF9,
	DefaultTraceListener_WriteLine_m457B4152407B96D84AF638EF07A79550652FB049,
	MonitoringDescriptionAttribute__ctor_m41C05A99A8DFCA8AB181CC0E06F0B89D183C5CD2,
	MonitoringDescriptionAttribute_get_Description_mD28A2C666D1B4100914C186C9F8C84EC8B2E59CE,
	Stopwatch_GetTimestamp_mD6D582A3E30369F05C829A5650BE2AE511EC807F,
	Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A,
	Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178,
	Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF,
	Stopwatch_get_ElapsedTicks_m3F4040FBF8C7CCDC69E0E04824019DEBB25AA410,
	Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915,
	Stopwatch__cctor_mB40A9951DF8D540C2432D56CBC9643E62C40039E,
	ArrayConverter_ConvertTo_mC144B3093D2037D3BB5B109D15725ABCC4E985D9,
	ArrayConverter_GetProperties_mC4FE7B6803C8B34BD45ED4DB67B0D3692AF60F55,
	ArrayConverter_GetPropertiesSupported_m00411C896EB1E0B5155BB701D72A7F690C86C6F8,
	ArrayConverter__ctor_mAA6B57C16F167FF104B8E23402DE87ACA5E13A2B,
	ArrayPropertyDescriptor__ctor_mC12E0FB619504B32AC30C714F3E51B0C3BA813AB,
	ArraySubsetEnumerator__ctor_m5B723DBD13E9D2CF299DF5AF2EC781F4F3284FA5,
	ArraySubsetEnumerator_MoveNext_m7D6935FB0F09F3FD12A31109F078E36F0F3DBEF5,
	ArraySubsetEnumerator_Reset_mAE834D101CA22709C7A642ADE1D3C574B5AD8971,
	ArraySubsetEnumerator_get_Current_mD765EE84A67782F89CB3111D5E221D4D0D24E152,
	AttributeCollection__ctor_m6987DEDDE616B905793F96BC20866FDEC937B313,
	AttributeCollection_get_Attributes_m698416274F06ACDAA3A55972D029340253DAD0F6,
	AttributeCollection_get_Count_mBD37E9F785A4BD5426A67D42F0FA01FC0E2BEA02,
	AttributeCollection_get_Item_m6FC48C10C5A4DB20C323E37DAB95C5D4D1B41CB8,
	AttributeCollection_GetDefaultAttribute_m5E54BA907CD4D79B6FA6D54527E005FBE7A08AB7,
	AttributeCollection_GetEnumerator_m1464C016A16216F1F87A46940CF97B742AA032C6,
	AttributeCollection_System_Collections_ICollection_get_Count_mFBE2F16F7901E3F85F0C4B37032E83E99BDD2300,
	AttributeCollection_System_Collections_ICollection_get_SyncRoot_mE4F31AFB7E65BD84B5D64120F0C68F72753CD409,
	AttributeCollection_CopyTo_m29A1B7F330A44A3ABD7402CF9863089B917AA7F6,
	AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m5C57499D1B27935C97A88E9B44D571CAA87D93A4,
	AttributeCollection__cctor_mCFAD6C1E6356E3CA0CDDA680BDB66D72B0161DF8,
	BooleanConverter_CanConvertFrom_mD1A1ADBAB30E4ED54C20554B62F6E4C38369E6CE,
	BooleanConverter_ConvertFrom_m828B810B45C660FD12088B64754C92984D043092,
	BooleanConverter_GetStandardValues_m748173E319A659C8D26EF251DE71C75C83ED2E0C,
	BooleanConverter_GetStandardValuesExclusive_m0C6DCBFBE8CB8099BD7B6CED00D30BCAF375E2BD,
	BooleanConverter_GetStandardValuesSupported_mDEE5DB63C7EE136CF18FED6BE1DCB90749603D91,
	BooleanConverter__ctor_m50990A1CB60D3557199985EF164FF1E8AFCADC87,
	BrowsableAttribute__ctor_m1828B5114921E3FF83082211F2FBE82517559035,
	BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0,
	BrowsableAttribute_Equals_m8EF756EC88F170513772F14FC08BDAD1EC2B863D,
	BrowsableAttribute_GetHashCode_m40CEC719AE0A79F4339009D2E473342E59BAEDD1,
	BrowsableAttribute_IsDefaultAttribute_mC50D3EDE6ED3F85B4110292A8B541084A0F0D9CE,
	BrowsableAttribute__cctor_mAA4C6BF30D72D9DB9B0BE59F46140D4E284E15B2,
	ByteConverter_get_TargetType_m81EFBF9435A27B143816FF919B8229E72B66815D,
	ByteConverter_FromString_m9A856D9C0B8BD313C9EC7275AAECE53C0BC26159,
	ByteConverter_FromString_m9E2C8B3547011ED49AB13EB05197ADEDD37A6D00,
	ByteConverter_ToString_m6AEDBEAD9116A7D271669CF4432DAE220E060D1C,
	CollectionConverter_ConvertTo_m79E20F624C9391C76B8081E74BF16EB4C04535E7,
	CollectionConverter_GetProperties_m5E61C7ABF345599E670E2FD270A35190DA1DBF20,
	CollectionConverter_GetPropertiesSupported_m2068FA7A17AA42142E42EBF63151013E0934C728,
	CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147,
	Component_Finalize_m124F6FA2207E76C9DF18740E653C49D483A6E5C6,
	Component_get_CanRaiseEvents_m23993A519269D33F515ADADAB081C6ADF1551AF4,
	Component_get_CanRaiseEventsInternal_mAF68FD325FA909AEA171953DF83CB1051A9EA3CC,
	Component_get_Site_mAB0D574C04230287AFDEB9E691F885A49E18A80C,
	Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2,
	Component_Dispose_mD106692D0A494758CFFA2C9ACC0D7F94DD389192,
	Component_GetService_mBAA7A515C81E800F2EEF6B796A5C4AA7C08B0A57,
	Component_get_DesignMode_m1F9F6A7CF2856B86B6571430C7F403A6393B90F0,
	Component_ToString_m6B31E5C41739F547FD9F10B6439E8C3F1E15EBC3,
	Component__ctor_mDA70A27899B8D66203C57A3E8678A11E033B4DF6,
	Component__cctor_mCF89D907F40647C43A02DC0DB64838463CD6413F,
	CustomTypeDescriptor__ctor_m188C6E2B7CA6781250922E66FAAF8CD660D3B7A8,
	CustomTypeDescriptor_GetAttributes_m3EF387AB8F57EFCED1B03248DCC60BDB5A6FFC1B,
	CustomTypeDescriptor_GetConverter_mE40B1085719E3D144A78130B843C6E0A1C143245,
	DecimalConverter_get_AllowHex_m2B657E4B11F10E8F6F3E27F8F24EBD407E68386D,
	DecimalConverter_get_TargetType_m713B317E87EFCE4C62D9252D5C995FCEF1DAEF47,
	DecimalConverter_CanConvertTo_m2C1D96863DB726FCB8566B7B78899A0DD5D85CC4,
	DecimalConverter_ConvertTo_m0F245DFB5E97D39B818A6D3A87C6FAE07F57F6BC,
	DecimalConverter_FromString_m65A0F7D7BFD4A568C416732121878DDA2CDB2423,
	DecimalConverter_FromString_m4F6FAD944464E3B239B445BE45950CF15E423BFC,
	DecimalConverter_ToString_mA2278E45267D367F8FED73BDE4293021E493499F,
	DecimalConverter__ctor_mC1E815EF17DE8DBD91FB472C83A4F38514704B46,
	DefaultEventAttribute__ctor_m7FE746F300D84188A24F4CF38A330EA255E5EE46,
	DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3,
	DefaultEventAttribute_Equals_m1B7CE5677AFA75A3AD6223345C99D5EA796622B2,
	DefaultEventAttribute_GetHashCode_mD3A5713780914BA883AF0AB0AD88E5427D910184,
	DefaultEventAttribute__cctor_mA41FF921D8558681FC129751DBFB8BF09444AF23,
	DefaultPropertyAttribute__ctor_m43FD7A91A431F72713FFA7829DE9BD24A321FD3A,
	DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890,
	DefaultPropertyAttribute_Equals_mCD709C4B3F90DDDBDB45AE2969732EA3775CF26E,
	DefaultPropertyAttribute_GetHashCode_m401BC4A948F7890DDD718B884C6CE06296578BA2,
	DefaultPropertyAttribute__cctor_m3C3B5DFB791BCB66EBC6B2EA032CD1D76422B247,
	DefaultValueAttribute__ctor_m34A58D59C771D6EB91D55AE4F97413CD711B8FB5,
	DefaultValueAttribute__ctor_mC4A9C09859A2DFDDDADB72E3CC91DF3C874A45BB,
	DefaultValueAttribute__ctor_mB891AD4FEA83679EDCB858D2C4AE6E0ABFC6DF08,
	DefaultValueAttribute_get_Value_mE5E6819598048D2585D6DB475918E60ACE802470,
	DefaultValueAttribute_Equals_m61297DB3C3A7E76FC868A653371853B14BC42FC1,
	DefaultValueAttribute_GetHashCode_m74095EF1526DBFB27CF56AFA21690C77A5289A33,
	DelegatingTypeDescriptionProvider__ctor_mF4BAC468855383A4FA4CBFA329DF02F35805ADC5,
	DelegatingTypeDescriptionProvider_get_Provider_m39F8D32C2826EC53330210A55058A76B06136E74,
	DelegatingTypeDescriptionProvider_GetCache_m8C822270552717420F5E6D7B96C48C751816370C,
	DelegatingTypeDescriptionProvider_GetExtendedTypeDescriptor_m7A546AA16D70578B63542DB3DDAB0F54DD742FBA,
	DelegatingTypeDescriptionProvider_GetReflectionType_m130F511F42060A53340620EB0667237EB0F94024,
	DelegatingTypeDescriptionProvider_GetTypeDescriptor_m3DEEF7B7F56B72063CCCF3EAEC383FC98029A8C5,
	DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F,
	DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97,
	DescriptionAttribute_get_Description_m153F27F0911FC88F9DD8856BCA449AF5BE46F100,
	DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975,
	DescriptionAttribute_Equals_m1CD8A994656358F30F29950E0F51F6FDFCA5306A,
	DescriptionAttribute_GetHashCode_m611CD3279B54EE7678ED42409F142DF4303A3357,
	DescriptionAttribute_IsDefaultAttribute_m3220AA4FC586815653BEC04C4438F695CA5722F3,
	DescriptionAttribute__cctor_m2F75B253CB3918F4C6AE255EF2BFF2B6B58DD4CA,
	DesignerAttribute__ctor_m5DC0000BC5E5265E3FF5C4DA7FE34224CE0EA411,
	DesignerAttribute__ctor_m227FE6994A9820565F4531766C12B4BEB9DBC099,
	DesignerAttribute_get_TypeId_mC417B3D2B73F8BE6B8807DE81349ADD788217FB6,
	DesignerAttribute_Equals_mA1B09C88CC2DB3D87E0F089566B230D15778FFF1,
	DesignerAttribute_GetHashCode_mAAB438F07A090A8D8A6EB9E16E58A530BBAED5C5,
	DesignerCategoryAttribute__ctor_mC6EAF0212217A1CEE757459ADDB8D48D3B61A4EB,
	DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583,
	DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77,
	DesignerCategoryAttribute_get_TypeId_mAC435BAF331B4C5367A86821753F71F93A83B61B,
	DesignerCategoryAttribute_Equals_m1AC49F2D111D21ED13E8BA1F2E40C1F3B859260C,
	DesignerCategoryAttribute_GetHashCode_mAAF7FBB9086B1B80FB129D77C2B2E195235A54FA,
	DesignerCategoryAttribute_IsDefaultAttribute_m94BBB8DCBCEC69970F6AB190081414FB9E8181FE,
	DesignerCategoryAttribute__cctor_m6861675CBE73069D1134966C4F5FA5EB6EB9A155,
	DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1,
	DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E,
	DesignerSerializationVisibilityAttribute_Equals_m0BE73F494AEFD4118E82420382640874637AD94F,
	DesignerSerializationVisibilityAttribute_GetHashCode_m33E067E26D97A5A40DD224E33230351C6169579F,
	DesignerSerializationVisibilityAttribute_IsDefaultAttribute_m3D21AAD0CE78647B3FD95005569A922FF07CF492,
	DesignerSerializationVisibilityAttribute__cctor_mCE2A25B9EF061E135FC81FC0BA85502C90B8E141,
	DoubleConverter_get_AllowHex_m7B24D1C1979E1B4B0F32D455B7BADE06AB50DBBB,
	DoubleConverter_get_TargetType_m32CBA966154111137DA7AE087217F3A7BAFECA88,
	DoubleConverter_FromString_m205541D548D67CE0C9493E7CC532133BD5B27DC0,
	DoubleConverter_FromString_m7E7B0719E5299B5DEF5806531A51807A6860050C,
	DoubleConverter_ToString_m9BDB00A75E71F1001A1F555AD9E786C32CF668C3,
	DoubleConverter__ctor_m3CA5201BA68AB510BB2112A6755FCFEAB6DE53BA,
	EditorBrowsableAttribute__ctor_mE6105AD9666A4DF03DB2590C687EAC6B12D908CE,
	EditorBrowsableAttribute_Equals_m2DFA6ADDE69D95657A8257840C01FCAF74A6B02F,
	EditorBrowsableAttribute_GetHashCode_m1AE50FA45B338D71189AA3C249DB56406DEC798C,
	EnumConverter__ctor_m3E3C7D81C8092A5591BAA556288B2A3E22DCA99B,
	EnumConverter_CanConvertFrom_m08BA3C1DC3D84B157F087AE1E407A974E3A85D11,
	EnumConverter_CanConvertTo_mF6140EA2D6D701B21DC1EEFAAA2C62DF8CAB690A,
	EnumConverter_get_Comparer_mBB79A346E8150D9554B6FBCD0EF1B981A7696DEC,
	EnumConverter_ConvertFrom_mD1D0496C621971B0610C92ABC562B26BEA40EC61,
	EnumConverter_ConvertTo_m95581FDC64EFF404D3646BA0BB09A316C58126D1,
	EnumConverter_GetStandardValues_mAF14DECB7670119DFE61D9955A5667BC43A1F023,
	EnumConverter_GetStandardValuesExclusive_mFFEE5BB5AEA41073002C03D1CB163E3F42619317,
	EnumConverter_GetStandardValuesSupported_m049732C08BD2A4300C75A9FB12BE6082C2DAA5EA,
	EnumConverter_IsValid_mF38C2D56D21042513C025A195EBF00C9626CB105,
	EventDescriptorCollection__ctor_m5B672594D0220F89AD3DFE0FBCDB34FED5B56CF3,
	EventDescriptorCollection__ctor_m6FEF5B613838F164D7F9FC939EA915FE7B5CF118,
	EventDescriptorCollection_get_Count_mCBBE573DF8EC096E14170A5039E90107943E5A87,
	EventDescriptorCollection_get_Item_mA010043B2DFD4EE474361E4485B7727354BB00ED,
	EventDescriptorCollection_Add_mAA14F6928C91D2A6B81E69723C35E7F43FBA62CC,
	EventDescriptorCollection_Clear_m34F6F48BAA557FBB783F24C33EB2E26002A57C56,
	EventDescriptorCollection_Contains_m50DB06B4BB92F9F108E41B0B39C71C687A426F12,
	EventDescriptorCollection_System_Collections_ICollection_CopyTo_mFAE7230CA92EB811EA7AC85B9EF758477D9CB58D,
	EventDescriptorCollection_EnsureEventsOwned_m84EEB041AFCAC7DC00D846999338F998A3B873B4,
	EventDescriptorCollection_EnsureSize_m9A0437DD4221566FFE953D7D8A9B15CEC82D8F1B,
	EventDescriptorCollection_IndexOf_mFB443D00688BEE960D0AB1EFCF41FD41863D105D,
	EventDescriptorCollection_Insert_mC472AA88B6CC60161C15A8B464D4D1A827C45CA7,
	EventDescriptorCollection_Remove_mC7EDCADC4A6630ABA8C38C7F1CE424C622A73A67,
	EventDescriptorCollection_RemoveAt_m1D8C3C214CDF147C85410AB0F956EA1732261900,
	EventDescriptorCollection_GetEnumerator_mBBA565367CD4D16306527D637EA37D2BA6949478,
	EventDescriptorCollection_InternalSort_mFDAC78BDC8DF8D728C05BF58B24C6B3AAE83E1C9,
	EventDescriptorCollection_InternalSort_mC173B2DDBF4F976EC4B3E9A2AC03FFD0D3F115AD,
	EventDescriptorCollection_System_Collections_ICollection_get_Count_mF9D4EB7237921F1FDF76F78307CB4C5AE29C5D74,
	EventDescriptorCollection_System_Collections_ICollection_get_SyncRoot_m929985FDBE786C0523515318A463F1DB1F0EBAA5,
	EventDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_mC73C30221041A865D2AA69E9E57D5D50A89E756E,
	EventDescriptorCollection_System_Collections_IList_get_Item_m816D7A606BEA8FDB4B8F959E0727A591139AB75E,
	EventDescriptorCollection_System_Collections_IList_set_Item_mEEC2A36C2AD376E350334887290721ECF319F17F,
	EventDescriptorCollection_System_Collections_IList_Add_mC80A1930B52051837C3B553FED53E0A3624609D2,
	EventDescriptorCollection_System_Collections_IList_Clear_m5F4F6DC457DC4AC15BF1ECDEB05C9AC37A8EDFAA,
	EventDescriptorCollection_System_Collections_IList_Contains_m7CCEEC883D1D814BAA11C20A2AF4B2ECB25CB670,
	EventDescriptorCollection_System_Collections_IList_IndexOf_mF92645F7291545162437FAC95787100B4844B4E4,
	EventDescriptorCollection_System_Collections_IList_Insert_mC6AD4196A4F520BB4C0B5866D3D6307A9639A58E,
	EventDescriptorCollection_System_Collections_IList_Remove_m04E2ACE9E3B90350007626A227EA9626F133589C,
	EventDescriptorCollection_System_Collections_IList_RemoveAt_m67FB853573FD34FEB23F0763434FBBB1FF8D3389,
	EventDescriptorCollection_System_Collections_IList_get_IsReadOnly_m14ED5EDE6AAD26BC174F00C4F48A16C0874B6160,
	EventDescriptorCollection_System_Collections_IList_get_IsFixedSize_mE80CCD9C034D17CB7E7780BF1FFF1FC92123EA62,
	EventDescriptorCollection__cctor_mEB5345968B743898C4EE2AFED371C8C3A7816C80,
	EventHandlerList_get_Item_m9AD24EA65E3832B81146EC24604BABE4FC3CFCC7,
	EventHandlerList_Find_m5E0CAB161102D1551CF2E636C8BC7B71C959A5C8,
	ExtenderProvidedPropertyAttribute_get_Provider_mF6A5C961D41558DDF43293934D6C5CD80BEF584F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Int16Converter_get_TargetType_mB268E3FEA2B5BDEBBC628D21A07686856FC451C8,
	Int16Converter_FromString_mACA7B00848D2EC76B985408DE0D92D84F462D14C,
	Int16Converter_FromString_m57535287425AA32CBB51833859D5224F030EC2F3,
	Int16Converter_ToString_mB9DD75EE872A4040BFFC794C4400FBC857A75CCF,
	Int16Converter__ctor_m3803A7772B21F49200FC142C193A40DC286C9DFF,
	Int32Converter_get_TargetType_m837B83368B96CE1CDFCF450F7DA3629ECC86DC1A,
	Int32Converter_FromString_m3917F97D4401800516F6F44363CD154F9645AC72,
	Int32Converter_FromString_m54931A645C6C1B4DB770894D5A23F24A03E9B340,
	Int32Converter_ToString_m8B5D811FCF0FBFADCAE25E354FD27FE6256AA36D,
	Int32Converter__ctor_m88220DA12F6ED6FE4D1232B73C20DECE9EFC63FF,
	Int64Converter_get_TargetType_m8279327D6F373BEE6E4BF0439215D6F5DF6B0097,
	Int64Converter_FromString_m4F1E8450F4A60B29297D4AA3D8FE196B09D98102,
	Int64Converter_FromString_m324A7ABADC1B991B6AAB4B600C0A676B289BDF72,
	Int64Converter_ToString_mC4F1CE4731349A078460E190F587DB3276B54B3E,
	Int64Converter__ctor_m3C124DB065F27F6BEAB7ABAF4B3D13E6A9F3E94C,
	ListChangedEventArgs__ctor_mB48C0E1EBC7ECB9C9A1CEFBF1787D1C542FBDCAD,
	ListChangedEventArgs__ctor_m51CD8C20F924174FDAE0CED36B57E8A53AFBBDA5,
	ListChangedEventHandler__ctor_mB05D66C71319CF8F8D4BA970C1BC0247662540AA,
	ListChangedEventHandler_Invoke_mA0F0B8AB273C63F017018390414C334FD602934E,
	MemberDescriptor__ctor_mDCA5ED4D5D9CB14D6D1D81EDB76EA80DB79B8AF4,
	MemberDescriptor_get_AttributeArray_m1DD0C32D56001CD6E9C7EF18883E56B2EED4A70E,
	MemberDescriptor_get_Attributes_m14940553435AC37ACEF473D12D244F2DFBF6AB1A,
	MemberDescriptor_get_Name_mA0D12966D84092E03F4DC16A085176299AC73291,
	MemberDescriptor_get_NameHashCode_m415B96A35EB826A5A00E0F0EBBDD94980BD5E5F2,
	MemberDescriptor_CheckAttributesValid_m7B81E6D3512BD0A17CD0AF042912BA2C1E83552F,
	MemberDescriptor_CreateAttributeCollection_mB5974AA548F245BC255AB08689E68953BEB24E35,
	MemberDescriptor_Equals_m375ECBF78B86952EC60CDD90301D8C2EF911A620,
	MemberDescriptor_FillAttributes_mD79B898348F5E1F6C98F62F0D4CE719C5547C56C,
	MemberDescriptor_FilterAttributesIfNeeded_mB060A4FB6DE46D17F76E54B43A0772EC623EFDC7,
	MemberDescriptor_GetHashCode_m18BBAA42F4FF641C84B5E45802F1FDC290F86860,
	PropertyChangedEventArgs__ctor_mE3C901440BE057E5F17062BA316019C0B53A39B5,
	PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82,
	PropertyChangedEventHandler_Invoke_m040B3056C279FDDC4EC678519D5D415771905298,
	PropertyDescriptor__ctor_m20223572362A331B6F0D436BC19AFE2EE87558B8,
	NULL,
	PropertyDescriptor_Equals_m69C3B1D9E4AF806536B7545DAB5FE72883A512F6,
	PropertyDescriptor_FillAttributes_m089944713C5E19B880AC940B07C609BFC3D273D1,
	PropertyDescriptor_GetHashCode_m8470877D9BFF977617586AC7E2B900D01B3B4E3F,
	PropertyDescriptorCollection__ctor_m3D1AC0D2B3187A895AE8B64AC891251860D8C361,
	PropertyDescriptorCollection__ctor_mAD196DBB6D71AA12A41715798F3DFACFDA170BAE,
	PropertyDescriptorCollection__ctor_m3452043C947348EB364E043013AB2DB4165B72D7,
	PropertyDescriptorCollection_get_Count_m9121E7236AF94FE7AD4BB3C48ADBBB2A8ACF3508,
	PropertyDescriptorCollection_get_Item_m5BD52F4CCBEF1D1D9B33887BB373181AD11A4C25,
	PropertyDescriptorCollection_get_Item_mD34F172015A4AAC759099193BBBCDB1489D51E09,
	PropertyDescriptorCollection_Add_mC398A8C807A50565628FA7377622CB29BA08E8A0,
	PropertyDescriptorCollection_Clear_mB8C7EDDBC34045AB39A85F7CA8C2A48FE5E84154,
	PropertyDescriptorCollection_Contains_m61BE63B4CBEBE522952340A5E1AD4EC81561A534,
	PropertyDescriptorCollection_CopyTo_m96A7340B76D01123FFC2968406157491DA5F2F51,
	PropertyDescriptorCollection_EnsurePropsOwned_m95EB38CC4CD3A669B5890569BE6EA68DDC0691D1,
	PropertyDescriptorCollection_EnsureSize_mA9CC05191669F9F3899F5A7D42B8DF24C51CC6A2,
	PropertyDescriptorCollection_Find_mCBD6FF2B467342E2385A83851AFEA0D79765D941,
	PropertyDescriptorCollection_IndexOf_mD936E02B8B1AACBF21EB129B5D7F3C8CBC07BE15,
	PropertyDescriptorCollection_Insert_m5294EDBAD3EED9E88B72F8C337F65EE5AB2960EA,
	PropertyDescriptorCollection_Remove_m93B40D4D8FD13CA21ACAF39012043595BB6ED03B,
	PropertyDescriptorCollection_RemoveAt_m0A24CA5AB989131D0F6691B289DD9092790E9E07,
	PropertyDescriptorCollection_Sort_m75E8E60ABA88330A9CE34B6DDE5E6DCFD10C6867,
	PropertyDescriptorCollection_InternalSort_m976B7A3E0A38A56F3E6C282199722DFC37EE92C9,
	PropertyDescriptorCollection_InternalSort_m715EF0848576185E9957756222B20A93320A3108,
	PropertyDescriptorCollection_GetEnumerator_m895320E1DA7A7E88D5392EA88C7415FCCE9F9A69,
	PropertyDescriptorCollection_System_Collections_ICollection_get_Count_mD0FF809D823EB373D8A6E8DB49619ED4141702A2,
	PropertyDescriptorCollection_System_Collections_ICollection_get_SyncRoot_m375B281E77CC48014E87622A8F7E5FF2BB6B23AF,
	PropertyDescriptorCollection_System_Collections_IDictionary_Add_m408464897F2A4002666796184236356079B9476E,
	PropertyDescriptorCollection_System_Collections_IDictionary_Clear_mED5AF2CE6AF9B314A457C95568F8B4CE2D1764A9,
	PropertyDescriptorCollection_System_Collections_IDictionary_Contains_m0E06B08842DB4FA109B5AB61EBEFB731E3EA94AA,
	PropertyDescriptorCollection_System_Collections_IDictionary_GetEnumerator_mF6EAE817278709EF0201AB2E677B887CA7520A51,
	PropertyDescriptorCollection_System_Collections_IDictionary_get_IsReadOnly_m4D86C19095340D37276F02EF6D88E7BD63C2D53E,
	PropertyDescriptorCollection_System_Collections_IDictionary_get_Item_mC6EFD0AFD470D71014230D69B656107657929330,
	PropertyDescriptorCollection_System_Collections_IDictionary_set_Item_mF70D7EA54C026CF6DF6082671C7BB5FA4FA8C4A1,
	PropertyDescriptorCollection_System_Collections_IDictionary_Remove_m4346AEB1FD89FAD5A8684EF35BD8BDC329BE6FF7,
	PropertyDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_mCA1C26C5D8253A2654911C476DB3E2E4C7E1DED0,
	PropertyDescriptorCollection_System_Collections_IList_Add_mA83681FD649F472C18C4222547909AB5C0B2636D,
	PropertyDescriptorCollection_System_Collections_IList_Clear_m45872C5426EECF7A39B524076FF749A27FFFD720,
	PropertyDescriptorCollection_System_Collections_IList_Contains_mF4A5AD4B8FB2DE87C3F46804A45A9E5FE061F0A8,
	PropertyDescriptorCollection_System_Collections_IList_IndexOf_mDDE0710A46D8C7F0C812BBB749058633E2B538A0,
	PropertyDescriptorCollection_System_Collections_IList_Insert_mECCC2CBDA9731E920BDA0D1C5E1B3446D1051D7C,
	PropertyDescriptorCollection_System_Collections_IList_get_IsReadOnly_mD92E29DD5AF442E8F758EE9C364AA67D8C692429,
	PropertyDescriptorCollection_System_Collections_IList_get_IsFixedSize_m384E8605F0612E87E1A78F863E28AE7E0D0D6B8A,
	PropertyDescriptorCollection_System_Collections_IList_Remove_m6B3B43F181BF42AE15D0EC97F83E16157119767A,
	PropertyDescriptorCollection_System_Collections_IList_RemoveAt_mF52F79BDB81434BECEFF023F99EFDDEE21E3D382,
	PropertyDescriptorCollection_System_Collections_IList_get_Item_m330B3FFF9A800353E1463DBA60359A5846637632,
	PropertyDescriptorCollection_System_Collections_IList_set_Item_m1C9BF875A752FEAC57320E429DF95D0A11BDD5B8,
	PropertyDescriptorCollection__cctor_m9FF868A1DA3307692B17BEE0248BE146682D8DA7,
	PropertyDescriptorEnumerator__ctor_mEF40577980844F48F837016FC78D6D6C4B656C40,
	PropertyDescriptorEnumerator_get_Current_mD139182036930AB6DD0F33E0C311C5D280E8169F,
	PropertyDescriptorEnumerator_get_Entry_m83A1F1F4EC45FCDAB6444FDAE98158CAEA6E17C0,
	PropertyDescriptorEnumerator_get_Key_m9AC03BAD80D2C982D93FCF6E7FA77694CDA80583,
	PropertyDescriptorEnumerator_get_Value_m5EC049B1D1B61491D697056DD2A5018B3F83DAB2,
	PropertyDescriptorEnumerator_MoveNext_m1558DACC789497E2E8BEC2C914F68449B51F35E5,
	PropertyDescriptorEnumerator_Reset_mF7C0D145E906CE6FCB18646933E580C14A0AE1DE,
	ReferenceConverter__cctor_mEA870CF9ECC5CD70B6DA856384013701EE3D62AD,
	ReflectTypeDescriptionProvider__ctor_mD2C527AEF85A636D3E4507604E84FAB79A98DB62,
	ReflectTypeDescriptionProvider_get_IntrinsicTypeConverters_mB6EA838FD9A593C93526EB031D1B20F8B00BB503,
	ReflectTypeDescriptionProvider_CreateInstance_mB7F08825FD9C639BA3F390ABB43F7856E972FF45,
	ReflectTypeDescriptionProvider_GetAttributes_mEB47CEC6757E936C1969EED650C92C501909265D,
	ReflectTypeDescriptionProvider_GetCache_mFC604F35A7D5D4A6A8A9E363D42406B3E7E2F420,
	ReflectTypeDescriptionProvider_GetConverter_mD847E744202DEA5D7208D1F1AE25CFBDC37A75B9,
	ReflectTypeDescriptionProvider_GetExtendedAttributes_m2C8411D8AF61F164E3728DD6976EA7D6C025A375,
	ReflectTypeDescriptionProvider_GetExtendedConverter_m7227126A73E4DC11779EC3DEEA2EA6D9DC9D424C,
	ReflectTypeDescriptionProvider_GetExtendedTypeDescriptor_m88CC219F64FAE3C886681713403765A20B87F849,
	ReflectTypeDescriptionProvider_GetReflectionType_m42CCC59A3631DE84FA1BA53F4D0266F5CC7DA92B,
	ReflectTypeDescriptionProvider_GetTypeData_mAB0CA0760FE347023B0CB43F64B800C0E4CF2064,
	ReflectTypeDescriptionProvider_GetTypeDescriptor_m0F427A84067C17B3214611351841DCDDC2723D68,
	ReflectTypeDescriptionProvider_IsPopulated_m84F86F476D4C3552D9319BE958418D78CE50C1A8,
	ReflectTypeDescriptionProvider_ReflectGetAttributes_m2468318E4F19E884A4A0D535FBF0CE6406624954,
	ReflectTypeDescriptionProvider_Refresh_m2E5B6CEEA9ED33154509B1DE82E5BF4E5814CAF0,
	ReflectTypeDescriptionProvider_SearchIntrinsicTable_m355181904C0F74CC1003E8D9C393271D468CC103,
	ReflectTypeDescriptionProvider__cctor_m7F48DC584D9D7017DDCF9AC5F86CDF8193097C7F,
	ReflectedTypeData__ctor_m229206DEEAEC214C249B48F72505C12A2C10F233,
	ReflectedTypeData_get_IsPopulated_m207FD7DEB577D25B681C31AE2F2A86D64895C76E,
	ReflectedTypeData_GetAttributes_m9DA86D05CED373651F0087DC37710615B8ECDE96,
	ReflectedTypeData_GetConverter_mF312E1D0E7D445E6B283AFEC99A9ACB06B103070,
	ReflectedTypeData_GetTypeFromName_mBCA1346B9711CA1AD377C5C1BCF4589332435DF3,
	ReflectedTypeData_Refresh_m5A18415C807E341603C1A069AA7A3EB76258CAAD,
	RefreshEventArgs__ctor_mA88DB8D3EBE2EDC16126E5DA09495F31F6E43CC9,
	RefreshEventHandler__ctor_m2A318A5FC4A7829BCC18BE0F9A652DCD1C8C192F,
	RefreshEventHandler_Invoke_m64C4651451C458F51B3DB45E9BF2D20E0B1DBCF7,
	SByteConverter_get_TargetType_m872E6791DE87FFA1BC829C6D753B39A96B38D3A3,
	SByteConverter_FromString_mC4AA5397CCD129E9ED49AEF93625D99937D5DD19,
	SByteConverter_FromString_mEC12BDD3F05207DE44D550CC137AAC3213947DDE,
	SByteConverter_ToString_mC2999A1D251C25D6E926E7C0B72C485EB96A0F64,
	SingleConverter_get_AllowHex_m49756E0A9F6A76035FC8ED207F161A4C28C7B0DF,
	SingleConverter_get_TargetType_mC060F5026570A7907B8B1D9EA0402752331C6BD0,
	SingleConverter_FromString_mAB3584379A90F18A33A61D1913F74D590A17DB30,
	SingleConverter_FromString_m27810AC814274F6507B5D2B3E3D6886B153661DC,
	SingleConverter_ToString_m02237BA935CD713251AB84BA7B0E77283E65427E,
	SingleConverter__ctor_m463B63EB8D945D2D43E5B8099D8F0EC24AEBDA7A,
	StringConverter_CanConvertFrom_mCE12DA7BD7ABA631AA3C00EF415C6C650636D00D,
	StringConverter_ConvertFrom_mDC2BBDD289C8D8259AF915CB23765888BBFAB9AC,
	StringConverter__ctor_m074D8686ED6ABC0E64C20D1EFD4406F215E7187A,
	TimeSpanConverter_CanConvertFrom_mD6725B6738FA9EC354BD235B49DBEF0A522F1110,
	TimeSpanConverter_CanConvertTo_mA1CF08D25D65F197EAA28F3FD3C4218A27FECCA0,
	TimeSpanConverter_ConvertFrom_mF00171D4039FEA734A0FC5ACDB81BB0395A3AFF2,
	TimeSpanConverter_ConvertTo_m30C65F425D5F7D46475EC262213EB57255929A6F,
	TimeSpanConverter__ctor_m7319DCEEDA2578B340AD4FEEE010AE5CEFAC9BD5,
	TypeConverter_get_UseCompatibleTypeConversion_mC6FAEA504FE4DAA7723C2B31F7E7C80E237110A1,
	TypeConverter_CanConvertFrom_mE41048372E94CADCD46A0E450385F4E13011D19B,
	TypeConverter_CanConvertFrom_m5E04D8BFD5D73042127767BD65B6434DAAEC2E53,
	TypeConverter_CanConvertTo_m05803F15F053E4DA3CF290D52FC379BB9D8C396A,
	TypeConverter_CanConvertTo_m959B290C863DDFBDD575AF3236B0A17E02E44013,
	TypeConverter_ConvertFrom_m74D536778D865EA22414730575143153FD749EDD,
	TypeConverter_ConvertFrom_mDE2D27BF8934184429496B39ED63BD3702868774,
	TypeConverter_ConvertFromInvariantString_m81DA50DC43E5868C83A5D283FFD227B919C9D0A5,
	TypeConverter_ConvertFromInvariantString_m990BDB1C582D2E303DAA1DF2B123260C6A55A31C,
	TypeConverter_ConvertFromString_mE302BA2C46E1B0D2C310A5E5B32AA71EAA73F3AD,
	TypeConverter_ConvertFromString_m6B1F932DB2AE6F4C06B84360B51790FF06C6870B,
	TypeConverter_ConvertFromString_m84FD8657B6D8327BE563E5A649A1D89A80BF2A32,
	TypeConverter_ConvertTo_m0171DC87F8C3920E781691F5F8F1145A6DAF9CE8,
	TypeConverter_ConvertTo_m5D4785A320B7ED351B677E28B77171F70E389B96,
	TypeConverter_ConvertToInvariantString_m1E0494D32C84A9F062F9762C8979E223C74D803C,
	TypeConverter_ConvertToInvariantString_mF902AFB0FE32B8E7014DE226455D3FC79030FF92,
	TypeConverter_ConvertToString_m124B43934E0022CA836E7258ABAF8F9FA8911093,
	TypeConverter_ConvertToString_mBE2DD3AF57FBB948F861DBD1DEAE33B18A33BF28,
	TypeConverter_ConvertToString_m85A19DC8D0117332C304EBEE2911D66F8028E245,
	TypeConverter_CreateInstance_m3431A3634D1048D919FF4B1DE80605A2BC8EA7C2,
	TypeConverter_CreateInstance_mCF1FB466625510C41AF4C31DBF0D6B0D17AD8F34,
	TypeConverter_GetConvertFromException_m4CD1BB8AACD489FC7094283F199FC6DB6409F7AE,
	TypeConverter_GetConvertToException_m2F0A3FF8E38030AEABCB146D9A65FD27C3F4FE52,
	TypeConverter_GetCreateInstanceSupported_mFFBD842063695B04C1D1F918715576E58210B9EA,
	TypeConverter_GetCreateInstanceSupported_m6F211317A2C58B002A523A637B40EC6E878D031B,
	TypeConverter_GetProperties_m469ECD3A977FA29494A2D9E6F6EE957EA921E107,
	TypeConverter_GetProperties_m59D3B36D9259D09DC67C2DA59245BCEBDFA4D6F2,
	TypeConverter_GetProperties_mBD67295683221C70AB3253653C06C39F640F4F44,
	TypeConverter_GetPropertiesSupported_m67A5238F90828ECD5ABFFEA50DF3F10DE2324A3D,
	TypeConverter_GetPropertiesSupported_mDE66D29A3EED2AC764A8B4F3C91917E2F9732763,
	TypeConverter_GetStandardValues_m2D0F59931104F725470D67A2DC6167B1980BE390,
	TypeConverter_GetStandardValues_m9F77FD4C8216D3F06928B418993659F3A0FEF5B6,
	TypeConverter_GetStandardValuesExclusive_m41CA2CC09F031BC8A14339DC376FE50D31AE9812,
	TypeConverter_GetStandardValuesExclusive_mCA336C7CE58B28DF0B46D5B52E3D0D177718FF42,
	TypeConverter_GetStandardValuesSupported_mDE36B9244050270D1DC2F6F840C10DA945CFAA23,
	TypeConverter_GetStandardValuesSupported_m5DFA377B1091BB08E64654FBEE8613EEDE731718,
	TypeConverter_IsValid_m54570B0309A0F2735FE3FA162D5F669B8BF434C8,
	TypeConverter_IsValid_m991D78815B29EDE7EF8B1CD0114A5E6B84F7328C,
	TypeConverter_SortProperties_m814BFD1763DEB6AD4D3E6B6042777358523AB3B6,
	TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2,
	TypeConverter__cctor_mD92DF23423021ACDCD3A96F7F09F1FFD64E61407,
	SimplePropertyDescriptor__ctor_m6DF452C766FA5F610C684119950D96C7105A2B26,
	SimplePropertyDescriptor_get_PropertyType_m613F51DD8C6ECFE9C107312A24AAE28F375650A1,
	StandardValuesCollection__ctor_m9049046DA81FD7B6FE279E063A43DC9B1D3B26B0,
	StandardValuesCollection_get_Count_mC127EA7E146C2FD58D5740935B45CACCD13D4637,
	StandardValuesCollection_CopyTo_mC06C9542D25F3E2D5A1DFDE690C920E8CFF94E10,
	StandardValuesCollection_GetEnumerator_m0484C08651E32F669A0624D29E44C6CDEB550F6C,
	StandardValuesCollection_System_Collections_ICollection_get_Count_m98A89DC263C152B5E1A5B5A6B795D963CBADCD4D,
	StandardValuesCollection_System_Collections_ICollection_get_SyncRoot_mFFAF4C68B76F26F6816CEAB7D8D86656B1D1AC51,
	StandardValuesCollection_System_Collections_ICollection_CopyTo_mF996F3746F028C7EB58F7096E7B7B7FAB911A896,
	StandardValuesCollection_System_Collections_IEnumerable_GetEnumerator_m66B4D529F0193F42A3858A1B638372B8A6687672,
	TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9,
	TypeConverterAttribute__ctor_m0E1A55E1BD368F0AABCAF766BBCE1D275777A52A,
	TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45,
	TypeConverterAttribute_Equals_mA3BF2C8CFA0AE8B5D0F52E066B1141AA53B4E015,
	TypeConverterAttribute_GetHashCode_m23ACA2A297447E17150BF490188919676FBD8A01,
	TypeConverterAttribute__cctor_mB9A8C9E5E62F8A8D81E250D0B53D359860D7C04A,
	TypeDescriptionProvider__ctor_m575B3B96D9C9A3B7C0D34A14D9E5FAA63EEE004C,
	TypeDescriptionProvider_GetCache_mCA1674BD37E630D1E11A5DA72FC5145CB9AC86D6,
	TypeDescriptionProvider_GetExtendedTypeDescriptor_m1F9F48DA6AEEDFB76902503053B90C935ADE3DAF,
	TypeDescriptionProvider_GetReflectionType_m595CDB1DADC484AB12377301C2D93AD8DE2A61C8,
	TypeDescriptionProvider_GetReflectionType_m370874914F8C84A0B85985491FDBAAC993C3851C,
	TypeDescriptionProvider_GetTypeDescriptor_mFE828ABD6B88857D8D0F88B6E64036526EB72D5C,
	TypeDescriptionProvider_GetTypeDescriptor_m98120E5BD98B7418563145C0AFAC8D3F5806E124,
	TypeDescriptionProvider_GetTypeDescriptor_m399A40592DC141E36131643D323CC9481EA5AD8E,
	EmptyCustomTypeDescriptor__ctor_m6AF4F3BAA9BA0E6137B0D2237E0F9A222CD47B89,
	TypeDescriptionProviderAttribute__ctor_m4826164C182E4A25C37E134BC55F5FFD933C90DD,
	TypeDescriptionProviderAttribute__ctor_m9368516A6C837282D73449E1EC58C4095CBBB238,
	TypeDescriptionProviderAttribute_get_TypeName_m7E06882E9348A8D4987BB62EA1493B2BD23147E6,
	TypeDescriptor_get_ComObjectType_m2907265F76AC34660A37B2A888A15C7D865805F6,
	TypeDescriptor_get_InterfaceType_m468BAAC18190A6D8E4369B3139FB38ECE1B4C5BB,
	TypeDescriptor_get_MetadataVersion_m6E33CD6DCADDEA862C9D9266B664C21DE70D449A,
	TypeDescriptor_AddProvider_mCE291812F3ECB4C76537D451403951E926F7EBF4,
	TypeDescriptor_CheckDefaultProvider_m1467B92A2B042B2E7F6332210808BB6AA42BABB1,
	TypeDescriptor_GetAttributes_m1AFA9ADFF8141511A369E9DFBE76DD5C072F6C07,
	TypeDescriptor_GetAttributes_m3B71F9E3508FAA57E7C0FC745C67B11D93E7F298,
	TypeDescriptor_GetAttributes_mA09581C152D106FBCE4F8B182E2912D9C9371636,
	TypeDescriptor_GetCache_m45D02FA802DCA0F152B0C980AE939A5776115034,
	TypeDescriptor_GetConverter_mBF37D89915F76D19765E81387D62B0B407432EC6,
	TypeDescriptor_GetDescriptor_m4017D517BA6B0C5CE3C9E23EF9C09A57DACC2CF9,
	TypeDescriptor_GetDescriptor_m2AC7BFA432A94255424AE4B8CD09306500C83361,
	TypeDescriptor_GetExtendedDescriptor_m6EE3155A58E0123521B9B4829097A73CAA4ECF1F,
	TypeDescriptor_GetExtenderCollisionSuffix_m136D10F14691E93A0611E8DF12F77C9DA17920BA,
	TypeDescriptor_GetNodeForBaseType_m85BCD83E89EE286F365A1553239C985BEB1D785C,
	TypeDescriptor_GetProviderRecursive_m371FD85FC01238874F7387FA430260D57646EA3F,
	TypeDescriptor_GetReflectionType_m2E40168C9752B069A3E430478C46D54463DA6707,
	TypeDescriptor_NodeFor_m99219DF297037E09BCCFD4492FFEDDD7C7D229A1,
	TypeDescriptor_NodeFor_mE9C1F8845A707769A5A95E338C610FA244DA283C,
	TypeDescriptor_NodeFor_m7A26D5E0284193E428AF54739EB5304813B6BFA2,
	TypeDescriptor_NodeFor_m63711C279C0075534A777A1D6B57D031487C3444,
	TypeDescriptor_PipelineFilter_m3593339441AA43824117FAB01873B98C876A87C5,
	TypeDescriptor_PipelineInitialize_m0D39E6DAD9E95884ED917DBBC5A508F4CA5A794D,
	TypeDescriptor_PipelineMerge_m4CBA66507DD778B6FD13A033515180EB9709618D,
	TypeDescriptor_RaiseRefresh_m026E52DA15538070CED25BBCBB696318032A6A8C,
	TypeDescriptor_Refresh_m8F344E720B395FC5493977659FACECE567A6A223,
	TypeDescriptor_SortDescriptorArray_mF088401B40E9E2739EC9F16B98F05D60A9B89A47,
	TypeDescriptor__cctor_m3EDDF7A3EA099841E95028726F74677419380E0D,
	FilterCacheItem__ctor_mE9F7CD307B3F6228F55EFE04B8D84B4B57A51893,
	FilterCacheItem_IsValid_mD1D0960AEFACC6645E5DEC95CA4F173E9260EC72,
	MemberDescriptorComparer_Compare_m33438352E9BA8C1BF6B594E524DC1BF8BC5EFFE1,
	MemberDescriptorComparer__ctor_mDCB73C6EC35AE31BE43CBF4C88053920603B4431,
	MemberDescriptorComparer__cctor_m31A7C495358AAA5B5E72F47BDC54DDC970E3A11C,
	MergedTypeDescriptor__ctor_m846C2DB00AE4DB20FAB890B60E95CB56EE9FE629,
	MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mF8DA84AB54E4B4429E27667D557634E4872BA672,
	MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m0EEB21D1590AAECD9DB3404802C175099B200F63,
	TypeDescriptionNode__ctor_mD6C85C9088064C16A401309FAFDC62252A5D5526,
	TypeDescriptionNode_GetCache_m2612D24980BD19B8BF3F192C0255451AC3C6C363,
	TypeDescriptionNode_GetExtendedTypeDescriptor_m9093310A740B288F02AE27622E90C0F1FE10560F,
	TypeDescriptionNode_GetReflectionType_m54393E311DD22AEF766FC73C95C7059CCD09FBF5,
	TypeDescriptionNode_GetTypeDescriptor_mE86956B84E55A15AE4FDD7CAE44BC53515752E7A,
	DefaultExtendedTypeDescriptor__ctor_m23A3BC29A6EF7571E339B9EBA5059F6490177C3C,
	DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87,
	DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F,
	DefaultTypeDescriptor__ctor_m8181176F10EBEA8A1DE3703C9C355ABB114A78D6,
	DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0,
	DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283,
	UInt16Converter_get_TargetType_m196BDCAABD5DD77F3F2C85740AEE8EFF58604195,
	UInt16Converter_FromString_m338B258C44AA834EDDCA6DBE80EA9D2BA7FC326D,
	UInt16Converter_FromString_m7612D173E0B2FEC9C37AB4975645F780B655F0F8,
	UInt16Converter_ToString_m2375B3B8E3CBFAD4DC88F36C263E6BD7A92CA30F,
	UInt32Converter_get_TargetType_m3AF0C3EC58B09D60B59FD7EC65C353B6737F6428,
	UInt32Converter_FromString_m36770B21D5262223400C0CA20ACA145BCECC84D6,
	UInt32Converter_FromString_m6C56842A0BF1F48F591D99F8F7D0E43BB17D33C5,
	UInt32Converter_ToString_mA63E2D3743B6AC3102193389A659058343F2D0B1,
	UInt64Converter_get_TargetType_m5056A71EAC6515E5E7A3EE29D8A8312A1CA70591,
	UInt64Converter_FromString_m7DE07D884429FCB9E5B175713BC600B263C0FAFC,
	UInt64Converter_FromString_m7695536CBA19FBF9D917D2414DAC4D840B9DF5BC,
	UInt64Converter_ToString_m4F8F4054A4F8E12CF28BE2836B39131A050F9EC7,
	Win32Exception__ctor_m0B20F25EC4A56A122FF766429AF40AF6292E11B1,
	Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281,
	Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4,
	Win32Exception__ctor_m1B3DF3F51BBF050C18F933B36027A8A4902668C4,
	Win32Exception_get_NativeErrorCode_m33C1D176D9178C36DA32F8FEC251B923EE53CE5E,
	Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2,
	Win32Exception_GetErrorMessage_mE857D9093D6D366D960BD8A8FCCF22DF6FB92728,
	Win32Exception_InitializeErrorMessages_mB93C4301854293466419FCD88967869E6306D8D0,
	Win32Exception_InitializeErrorMessages1_mB1B1C797EA28C0AF46DE292C5837FB0AB25B661F,
	Win32Exception__cctor_m79AA5A61519256167F9A16813C9DC20A82121DC4,
	BaseNumberConverter_get_AllowHex_m2A6143CE655C657EDFE8A7DC3897EEA0EEB3A4BD,
	NULL,
	NULL,
	NULL,
	BaseNumberConverter_FromStringError_m7A2C9BCEEAE1856C08FE4083A0EB41E316E0CBA8,
	NULL,
	BaseNumberConverter_CanConvertFrom_mA4351F586FC63F67CC1E0013CD68BCC2F89FB916,
	BaseNumberConverter_ConvertFrom_mAC29686169A55736CD527CB44D3E8DB0D697C7DB,
	BaseNumberConverter_ConvertTo_m46174D69B2F224A17A25C88B162C0270DE801CF2,
	BaseNumberConverter_CanConvertTo_m6108C34CF9DF475BF4074181348848BCE6C53F76,
	BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F,
	WeakHashtable__ctor_mBFFE17D4547F681A27EBE60D277625C9F9D0510F,
	WeakHashtable_Clear_m306746F8BC4535C2327FFDF167F23CA06077A6EE,
	WeakHashtable_Remove_mC091A16F4775270A1FC840FE4E82917E4F010A03,
	WeakHashtable__cctor_mDC0172C1DE43E226990881404CE73D1B64046A16,
	WeakKeyComparer_System_Collections_IEqualityComparer_Equals_m2DE66C4A7CF44E5A99DA241D8271C285ABBE56F8,
	WeakKeyComparer_System_Collections_IEqualityComparer_GetHashCode_m7E00D4A81998A46FFD9BE51679C6169DF0CCBF63,
	WeakKeyComparer__ctor_m1DB79747A0192C8CB5B45E74743CA7CA7EC09E52,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	InstanceDescriptor__ctor_m4A88597D681C8A8A9551AB318F8CBB47D49BEC57,
	InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F,
	InstanceDescriptor_Invoke_mACDF3C04B3998B38C4A79FCFC66F4760EEEEB2FE,
	RootDesignerSerializerAttribute__ctor_m52C401C2E19FF1C4E9A8F140811D5AA762C60602,
	RootDesignerSerializerAttribute_get_TypeId_m3177E104F2130582DB56C4321979B6952B7E0098,
	AuthenticationException__ctor_m7A29E86FE3299D40A63064FF6DB61D0E1A70C1F6,
	AuthenticationException__ctor_m6EDDEE3840629AC06E70CDF7878F955FE1ED538A,
	AuthenticationException__ctor_m091E6A6612916774EDF1C0F7544B70A5FA97A542,
	Oid__ctor_m4AF81B9D51BED48AE505251E0874EC654BA07B72,
	Oid__ctor_mB20A3E977C9BE9B4E4C0D8EE3858F34FF16959F4,
	Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D,
	Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59,
	Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3,
	Oid_set_Value_m122282994E6EE138CE4284B052EF8BE2086CA72F,
	Oid_get_FriendlyName_m1B7B5D80B6B533A33DAB2B28DCD0B53927D1BD17,
	OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98,
	OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5,
	OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A,
	OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11,
	OidCollection_System_Collections_IEnumerable_GetEnumerator_m4624AA2C7F0693698228803D9B59EFE6AAD6AFE4,
	OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC,
	OidCollection_get_SyncRoot_mD310358F3BF4454604AD96C734BA6EC180CE7A85,
	OidEnumerator__ctor_m2168FEE96614FB7460C84762ED3728A5413F42E6,
	OidEnumerator_System_Collections_IEnumerator_get_Current_m0B627B9F510EF4F283F40EBE17164B9231BB7735,
	OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD,
	OidEnumerator_Reset_m24F1F25812A7BFE9B02B312BA9E670C930622F27,
	CAPI_CryptFindOIDInfoNameFromKey_mAB6D2D48C59807B12794CEFF94A8AF645FFECFCF,
	CAPI_CryptFindOIDInfoKeyFromName_mE290F44CA294BBE541CCE62DE201B3C6B7E47295,
	AsnEncodedData__ctor_m90028EC56A5E36272EAA4A9279AE23358D46F547,
	AsnEncodedData__ctor_m3E8C1D1E0CE464176742B847DC99BF8EAABF15E6,
	AsnEncodedData_set_Oid_m877771219F651EA3FF834952300180274531C9C7,
	AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF,
	AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B,
	AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2,
	AsnEncodedData_ToString_m669772943B78D9242BC5F176A4BD857326F95021,
	AsnEncodedData_Default_m883444CBD5238793D1B94A6DE273FF2F9C47EA70,
	AsnEncodedData_BasicConstraintsExtension_m74BFC192666755E9D8A088880789AB6EA84F1FCC,
	AsnEncodedData_EnhancedKeyUsageExtension_m3C95D5D2D8F81BEA5E33B264767C8A5E5575D7CA,
	AsnEncodedData_KeyUsageExtension_m9A9C72CF2A831A1849A55336FC8D6DEE097E28D3,
	AsnEncodedData_SubjectKeyIdentifierExtension_m3CEDDCED26AD5621407DAA401F385269348BB789,
	AsnEncodedData_SubjectAltName_mDE2F39E1A43C1E13D89319F221517EE54B1A6A14,
	AsnEncodedData_NetscapeCertType_m55E43EBDA7882304E8FE5F3DC134A2719F519373,
	X509Utils_FindOidInfo_m1DC532CE2F7A9D2477D4CE172AE91E117A5E1C17,
	X509Utils_FindOidInfoWithFallback_mE3E1BCA35CEA1AE8759E35F69B4AFAF1E81E786C,
	PublicKey__ctor_m7C692A77567DF67DE4025615F322BE3B41750108,
	PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213,
	PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0,
	PublicKey_get_Key_mC0A4379DAA42B565878EE09310C43A4CCB45F273,
	PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A,
	PublicKey_GetUnsignedBigInteger_mDC1A423F4649E751E2F44C534F52F1103F1E8CA2,
	PublicKey_DecodeDSA_m32E09E73807395C6F5B0DD37E72874DD1FD1215A,
	PublicKey_DecodeRSA_m462116935D07EA1121C50801E6CCB6B21F0C5DC1,
	PublicKey__cctor_mBA35606057B7AD6687CD52BFED47441593DC5004,
	X509BasicConstraintsExtension__ctor_m672BE9B41107A8C30454BF4CAC120D70512BA89A,
	X509BasicConstraintsExtension__ctor_m76C88E8D4C7CCEC7B2C3D56CC58A56352F7729E4,
	X509BasicConstraintsExtension__ctor_m02334D8CAA280B339CA41E2019CF1F02C8B2E7DE,
	X509BasicConstraintsExtension_get_CertificateAuthority_mB4ECEF43A245E97DA80C6323BE339BE2DF99FF5C,
	X509BasicConstraintsExtension_get_HasPathLengthConstraint_m8F7C371EFF99BD110663DB106BEE889955255BC7,
	X509BasicConstraintsExtension_get_PathLengthConstraint_m4D3F016E42C243887D07DD955518A818DC14BBC5,
	X509BasicConstraintsExtension_CopyFrom_mCC603D99CEC828BDF86FDEB3C4650CF4D3753B8E,
	X509BasicConstraintsExtension_Decode_m7C50097B6238FEF4DAD6A9A09A449DB0CAFFEBEB,
	X509BasicConstraintsExtension_Encode_mD7FA31A70B025F67062C3844E4FEB09B14A4DE2B,
	X509BasicConstraintsExtension_ToString_mBFC61BA07CD2BB8EACCC19A5AE72EA81C11D02E4,
	X509Certificate2_get_Impl_m21C56437F9DD096FA112C2DF07F04EB2E381015F,
	X509Certificate2__ctor_m84519718D6C34074E7037786ADAE51290460C2B1,
	X509Certificate2__ctor_m34CFFC999D3A152729A5C59DBE80AB709547DA19,
	X509Certificate2__ctor_mB1BC3DC26B71A5D5D3753B04DCA16AA49627EC15,
	X509Certificate2_get_NotAfter_m925CA3901B7856D0692C6DED4F6428A40A726787,
	X509Certificate2_get_NotBefore_m656CC9913A0E6F6F0C06185F3B63F3A2EDCEB801,
	X509Certificate2_get_PrivateKey_mB2D1370AFF6F005B4A18A2223363C353B8D24A4A,
	X509Certificate2_get_PublicKey_mF1813BEE1EE04C593FBAA44590E2AEBC23A72304,
	X509Certificate2_get_SerialNumber_m12F610EEBE485A29FD49A06E8A33BB690476309B,
	X509Certificate2_get_SignatureAlgorithm_mF3FE8751A82E00E38E315EA893575D125F4F7354,
	X509Certificate2_get_Thumbprint_m0A33F62238AF002C1B93A0F93A361B890E61DE8C,
	X509Certificate2_get_Version_m6A4FB2125DA64437D184A64E731F2B58738F0B09,
	X509Certificate2_Import_m4804ED2003CE17C7C9317B8B389A64406D3DE337,
	X509Certificate2_Reset_mE779D76DC57C54B674D7588861324F02DD784C3E,
	X509Certificate2_ToString_mAC732FED5427D5551E2CC9B06C145128E7F6563B,
	X509Certificate2_ToString_mA115124642674F646AF34E6B8E2FB54870026342,
	X509Certificate2_AppendBuffer_m4BB50C8A9A87B823A7A09B82D76F5659FD551826,
	X509Certificate2__cctor_m4C57713FDB4B5D1D736C511327A160D6C3558DC2,
	X509Certificate2Collection__cctor_mC3757CA5D10515491E20F8CEBAEE82745C49F7FF,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	X509Certificate2Impl__ctor_mE6FF68AD589010E57C86555935DB601680AC1839,
	X509Certificate2ImplMono_get_IsValid_mA2D572B4E2382A93FEB9F88940269684D433439B,
	X509Certificate2ImplMono__ctor_m3F6BBB4381EB9A720E11577B9F663DC10B3B93A7,
	X509Certificate2ImplMono__ctor_m622D5FDEB76F561EA4AE9C8F4597D8E6AE1C6C28,
	X509Certificate2ImplMono_Clone_mE74EE518CD4FAD43F670E3B9140350A0C9766385,
	X509Certificate2ImplMono_GetIssuerName_mE9EB27EEABD37F1BAAC1C6967C032328745BCA6D,
	X509Certificate2ImplMono_GetSubjectName_mC6FE7F5CCA8114C2438C21C3BF2C0CB997DA2FA5,
	X509Certificate2ImplMono_GetRawCertData_mF4AB5CCF83D23AFE455D75CC7545423221565CC0,
	X509Certificate2ImplMono_GetCertHash_m98BEFDA6E3594E29167784C73F2B5FE1AB6B33A2,
	X509Certificate2ImplMono_GetValidFrom_mACF13EDC89D74B8043923C624C4F8F03CECE0D35,
	X509Certificate2ImplMono_GetValidUntil_m6743FC208F113FE93F749F0E1D9A5D993B44B88E,
	X509Certificate2ImplMono_Equals_m2AAE4D6702A22247DB54ADB744D2E42BCB367F7B,
	X509Certificate2ImplMono_GetSerialNumber_mAE671881208B0F96C482D5D6EA7D38FEB4A158E9,
	X509Certificate2ImplMono__ctor_m80FEEC497DB0F224B581C0806F42A446103575A7,
	X509Certificate2ImplMono_get_PrivateKey_m2B92DBE7562BBE32D2DC2F5ADC6E96FCD2497F60,
	X509Certificate2ImplMono_get_PublicKey_mA323F8CDC40E9CBFDD1DA8D182CB687241726DCC,
	X509Certificate2ImplMono_get_SignatureAlgorithm_m69AB28A2895A47AA11A445F378A266F39ADC07E7,
	X509Certificate2ImplMono_get_Version_m24C9E28B486518225FAB9642E940B451491BCCFE,
	X509Certificate2ImplMono_ImportPkcs12_mC29B89A6EDBB108185C4A91028F6EB496ACB2C98,
	X509Certificate2ImplMono_Import_m30A76FE845CBD359AEB5547605606473A1915317,
	X509Certificate2ImplMono_Reset_mAAB9D01175702741457A6CA3E47B0F6CAF74B571,
	X509Certificate2ImplMono_ToString_m2562D7699331A39B90E766EFF1B49F37C6AC54E0,
	X509Certificate2ImplMono_ToString_mB2B4F9BFD12A01805F1410E30A7BCBAA07FA750D,
	X509Certificate2ImplMono_AppendBuffer_m75732D24F00E59BD699AF16F84471E597D6B225F,
	X509Certificate2ImplMono_get_IntermediateCertificates_m304680821DC498B386CF82B8B82DD1248DE52C85,
	X509Certificate2ImplMono__cctor_mAA23F03A760725B059D7DE6FB55EFDA78FFFD328,
	X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB,
	X509CertificateCollection__ctor_mE486AD558BE6F0D8FD89AB88DE922DFA684C4AA7,
	X509CertificateCollection_get_Item_m9EC79D4B62FB412278F92F3641969385252F6572,
	X509CertificateCollection_AddRange_m45914B11721824E8BE7FC2B2FC4ADD28F2C45EDB,
	X509CertificateCollection_GetEnumerator_mBD26239EE292204789D87CA73DBA5C898C2F4F14,
	X509CertificateCollection_GetHashCode_m3F1BB9203AB722A6A9CF574390B0244F47485111,
	X509CertificateEnumerator__ctor_m7FEB0CE4B71CB9CE860AAF29554279392249D237,
	X509CertificateEnumerator_get_Current_mF256C5D7194A99B5C567F6E62806C153DA8864F1,
	X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mBBB3E8D212FD598C9C90F880D31B8227852F5075,
	X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m297DB4F7F1CB60E4B3E0BB2BBF1B80279E5E6936,
	X509CertificateEnumerator_System_Collections_IEnumerator_Reset_mC0D277DD2410455AE4EBCC14C4258F5F5F8677CC,
	X509CertificateEnumerator_MoveNext_m2DCBF7B544E0E410B90DF3FD96B473B11A37E8DA,
	X509CertificateImplCollection__ctor_m9A1E10EE2FC833E8F8C938A91AD907BC437452E2,
	X509CertificateImplCollection__ctor_mC7C4FAB75F44B53B8FE8D9CA3443F1411CD0BA11,
	X509CertificateImplCollection_get_Count_mB81B621804D7FB640FDD4177610CEEDF0484378D,
	X509CertificateImplCollection_get_Item_mA250EDFA1ACBE344A52C5CD818A6578CC07763A1,
	X509CertificateImplCollection_Add_mDF2DF7D94CEB84BCCC7292831C838FCDB1322B8C,
	X509CertificateImplCollection_Clone_m2AC54E741E6AB673D07464C05D27A3FF9F4112B0,
	X509CertificateImplCollection_Dispose_m84BFDFFCD3B9DEC80EAFEBBFD156F1E246DBA617,
	X509CertificateImplCollection_Dispose_m77FC31F821A4066580E5F99685EB915466F034AC,
	X509CertificateImplCollection_Finalize_mE46191767109F329A19BBD0CC4BC1AA6E2C28A95,
	X509Chain_get_Impl_m4B712BC99067069BCE090957082F5FE17EE237A6,
	X509Chain__ctor_m6F2404400D7192FDA4CCB37DC67F18F12616000B,
	X509Chain_get_ChainElements_m656A4A5EEA69BB8C4F5995DEF7C88AD9EB961AED,
	X509Chain_Dispose_mC10F7CE7DAF0799F13C798184330C046222E305D,
	X509Chain_Dispose_m24B2B8C5A29F06A8A1F8564EB0B39820616B3930,
	X509Chain_Finalize_m76B5ABE85F3D5596788618FFD03C4831DB0EDB39,
	X509ChainElement__ctor_m7088FBE9A69384945CA1A40CD973E1846FBD720F,
	X509ChainElement_get_Certificate_m6AF210BCAD2D94C19DFEF475BDAA84E5FF4AF105,
	X509ChainElementCollection__ctor_mAEF26718ED02C8480A7041E3C6B66500950E013D,
	X509ChainElementCollection_get_Count_m5448D972C3009FA67B3F4E13061B6012D561B78B,
	X509ChainElementCollection_get_Item_mC2A5AAFBAEF74FB085685620066058ACDC71D69A,
	X509ChainElementCollection_get_SyncRoot_m435D18A280E3D7609FB490021AC2E1436BE61568,
	X509ChainElementCollection_System_Collections_ICollection_CopyTo_m4909BF1B409D795DDD3D8D2206FA17B88AEA5B29,
	X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m25F89A23A06D302469D28DDA337A0B0C5C463269,
	X509ChainElementCollection_Add_mA032CE8B536713B0E070C9A211B084706D04F6C8,
	X509ChainElementCollection_Clear_mF0C2AE76F73C525E29E808615576C7EE11409659,
	X509ChainElementEnumerator__ctor_m552B42A7693729672B7EF7F95B4211F6BD69AE6D,
	X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mCE2DFBF81D34976171E7A936A04F87C0A625B025,
	X509ChainElementEnumerator_MoveNext_mA8C7DDBB648F9B1F15FA3E169D4361374BE2B995,
	X509ChainElementEnumerator_Reset_m4E0A51B45009F95A6E9B64C15F87CC9E48444A40,
	NULL,
	X509ChainImpl_ThrowIfContextInvalid_m85AF480D1B87D8DA3D780040385CBB88D9B173CD,
	NULL,
	NULL,
	X509ChainImpl_Dispose_mB7A6D60B308E90F0173FA8160F7FF0A00709A25A,
	X509ChainImpl_Dispose_m9F8B96FFCB317F7F8C8E1ACA82061EA7404B732D,
	X509ChainImpl_Finalize_mB70B742567D0E59AE522AA9F80800B308D87BC6F,
	X509ChainImpl__ctor_m16F671EB135FB6E7E3CF6C42715D7106E6FAAF18,
	X509ChainPolicy__ctor_m069F83BFFF3E79ED4CEBE8CF553CC65576F8D3D9,
	X509ChainPolicy_Reset_mEE02175020B69CE1732C0E89A2AE60F0BA5B1417,
	X509ChainStatus__ctor_m5AD96E11604F8DB96673677AC2FFF68EBA550859,
	X509ChainStatus_GetInformation_m2EE262A68356D15E2C691E84DA10B2E8E3EFED26,
	X509EnhancedKeyUsageExtension__ctor_mBDA55EB3C6594D4F6A06102B4EAF633F86C3E092,
	X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF,
	X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C,
	X509EnhancedKeyUsageExtension_ToString_m9576793CE590716A3BB5AAC1632F946DF75605DE,
	X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC,
	X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35,
	X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF,
	X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9,
	X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D,
	X509ExtensionCollection__cctor_m302D04DAABB7985BF831D50E7956ECFC3B2D199F,
	X509Helper2_Initialize_mC9F1EE34B040EE15FC5CA7C8B1AED2532EAB1791,
	X509Helper2_ThrowIfContextInvalid_m9EC7EA2D68EC7E5DA363EDFABEA0EC7B352AAD1E,
	X509Helper2_Import_m00CCBC7214497017DD65D4EC7CECF35FBF24EA4E,
	X509Helper2_IsValid_m2D40E03D265A1B1D53B6B8C726E833358AA4187D,
	X509Helper2_ThrowIfContextInvalid_m12213152E825627422EBDC2D88B524AE528B70B1,
	X509Helper2_GetInvalidChainContextException_m44B5C4113D72A0DA0EE7E1D4C7048FF631CA7D46,
	MyNativeHelper__ctor_m2D2D0000DFFA264E33F06780A2E8E34A47B29646,
	X509KeyUsageExtension__ctor_mE0EE68497EDEDD78213EEDC931D68DD35DF6340C,
	X509KeyUsageExtension__ctor_m1DE9CD768712A07E5803496501CCFDA81CFB2689,
	X509KeyUsageExtension__ctor_m2FAA526721435935D0B10E0DB916AF56CFD84751,
	X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F,
	X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733,
	X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45,
	X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC,
	X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542,
	X509KeyUsageExtension_ToString_m270131139984275D7571120A2984F0F5E77E79DC,
	X509SubjectKeyIdentifierExtension__ctor_mFC2A19B1301ABBA5F6C5CE407ABC4F4CA1EB49B1,
	X509SubjectKeyIdentifierExtension__ctor_m421293DCB67F3A918098962166B8166FD9657D08,
	X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1,
	X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94,
	X509SubjectKeyIdentifierExtension__ctor_m3DD2C4E1505A6E625499FBD833BFC076D28D83EB,
	X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56,
	X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA,
	X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A,
	X509SubjectKeyIdentifierExtension_FromHexChar_m0547F9E771F6BE506DEA650D696F7794F91B59A3,
	X509SubjectKeyIdentifierExtension_FromHexChars_m7143D074BE9451C082422BA3FF118C17D873E5A1,
	X509SubjectKeyIdentifierExtension_FromHex_m7A7DD49DB74BC4020A28007CDD5765765EC9DDB3,
	X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30,
	X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3,
	X509SubjectKeyIdentifierExtension_ToString_m9AE51334149DE6200E554F9C30E2DC5570D36707,
	GZipStream__ctor_m25053634B041374B528EB0F01612B072A9AF2E05,
	GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF,
	GZipStream_get_CanRead_mFF4A941C8BD1D9C3A249A084C4335EFF8FAD47BB,
	GZipStream_get_CanWrite_m0A3EC64CE819F978DE34A8477FAAA82889AE7248,
	GZipStream_get_CanSeek_m530B997FC6D2144F7B73E708903E6E9F39E304DD,
	GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583,
	GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420,
	GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957,
	GZipStream_Flush_m8D38670B3BE0472E83AA60F783A8EF3E1C1F01A0,
	GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66,
	GZipStream_ReadByte_m486ACD72754C08B02CF1B90A71A744EE92F4D42C,
	GZipStream_BeginRead_mDD211249BF8242D28889645A05453C3D89C6B0F1,
	GZipStream_EndRead_m8245FEE8D2B21A169DD1A40A67B5D398DD6005D2,
	GZipStream_Read_m41EC5D087FD227D05C8435E8704C9F0F6A7E2F9D,
	GZipStream_BeginWrite_mB80B01F99925CF4A6B201E77B54E7656A40474B8,
	GZipStream_EndWrite_m7FC15F1CD67B5C6977FEB16E630545AD6E020C91,
	GZipStream_Write_mCA30092CA9BEFD7425587337A5C4451866E1EB34,
	GZipStream_Dispose_mD369BCB8951329CEE518D159BB1D16BBC0C709E3,
	GZipStream_ReadAsync_mACECFB99609D4696156F98AE738B2038E6663471,
	GZipStream_WriteAsync_m2CB67E3DB87DFC01588B604C8E2D60EE1AE27EF7,
	GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264,
	GZipStream_ThrowStreamClosedException_m7B905CA279182188E2191C564DC9415234005D5F,
	DeflateStream__ctor_m344C1EF8B83E612C4FC662F0152DF1D2A5636829,
	DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C,
	DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36,
	DeflateStream_Dispose_m85096A7176C94248E02CE7E9DA78338C45B2F746,
	DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C,
	DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3,
	DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845,
	DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A,
	DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C,
	DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235,
	DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA,
	DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B,
	DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A,
	DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16,
	DeflateStream_get_CanRead_mDDA3C3CEE73CFCD62DE14F5DE9F27C7A5615976E,
	DeflateStream_get_CanSeek_m93DEADA4FB38CBBAB266F8B7DBAFE508AEC222E4,
	DeflateStream_get_CanWrite_m95EB501342F11B287A529DE15089097EDF7C215F,
	DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C,
	DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376,
	DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885,
	ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396,
	ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8,
	ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF,
	ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7,
	WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A,
	WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1,
	WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C,
	WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C,
	DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E,
	DeflateStreamNative_Create_m628D0A7F7EE62339C0D867FBF4319093C82018A7,
	DeflateStreamNative_Finalize_mE02A29EE58E329CFC439284070FF87A31B18C701,
	DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E,
	DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F,
	DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F,
	DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18,
	DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704,
	DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1,
	DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486,
	DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD,
	DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47,
	DeflateStreamNative_CreateZStream_m5075DD90424301C1C82A2142AA530FDC6F345006,
	DeflateStreamNative_CloseZStream_mEA426722FFB221614DC4AFEC80BBB4382B375187,
	DeflateStreamNative_Flush_mAC7D59B136EB2C8B1512123F21B91976CDE33D5F,
	DeflateStreamNative_ReadZStream_mC4E36C2FDE3E7850B154FE6A09825D7B055E1519,
	DeflateStreamNative_WriteZStream_m95704830E739FD66C207ED91323852F7E0FCC35B,
	UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6,
	UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22,
	SafeDeflateStreamHandle_get_IsInvalid_m8220E0B23A6DE1C8171ADDD78B30FBC346F1D1D1,
	SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41,
	SafeDeflateStreamHandle_ReleaseHandle_m8A0A695A4A1C2F46C8BFBE3BD1526BCDC6066704,
	HybridDictionary__ctor_mB37A8E34017C48042B2D8F1F63F1482B52C972D4,
	HybridDictionary__ctor_m359E931D8BF826C9811B90DE827FCBB6F091DD49,
	HybridDictionary_get_Item_mA9158C51D1CE31B2BCA73CC6C4D3CF7DCFB1E995,
	HybridDictionary_set_Item_m3B12A142B168A668B0521071019F5555502093A7,
	HybridDictionary_get_List_m01148828EB93A0E7F19E4F9E9AF1F39435741664,
	HybridDictionary_ChangeOver_m74FA10D457B3035BED9F48997A7C299EEDDE123A,
	HybridDictionary_get_Count_mE18AA6AFBC8E594B7B4CFCA250C430330DE620E0,
	HybridDictionary_get_IsReadOnly_m9F223D17A7B26321BE04FDEFCE224C30A42FCAA4,
	HybridDictionary_get_SyncRoot_m2EC29250FC7BFD21F1180C97520B46E7983B9064,
	HybridDictionary_Add_mD532F79E9743491E6CD7629C6851843C169C24B5,
	HybridDictionary_Clear_m90886ABE2794176C2E740382CD8F754C562264DB,
	HybridDictionary_Contains_m3FF65744E03A67B72D19ADE8E683A7A39D6691DF,
	HybridDictionary_CopyTo_m70DE7D1E24C1C831A0D2BB0D853CE9EBF17542A4,
	HybridDictionary_GetEnumerator_m07E7906D1CFAFEA232ED9CF650C86A04D6647C41,
	HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m63B34C99B0C86764500F8D9A80C99894DEFDAF22,
	HybridDictionary_Remove_mDE0E3B6E570D802CA691A67AD177E0833DC5969B,
	ListDictionary__ctor_mA366C2CB61D4CFA7D0AA70DBA969A15609DED7E4,
	ListDictionary__ctor_mA9076AE0A6D4DBE6C89259A43DC29F68665718D7,
	ListDictionary_get_Item_m2154CE5A38D2720580B224851368C447380BB492,
	ListDictionary_set_Item_mAF97E362799455BBD3E40B83C0690EE7FFAF3B55,
	ListDictionary_get_Count_m5302B1402A62BDBD54881D1E2732160D2C117B28,
	ListDictionary_get_IsReadOnly_m3680E35D8385466C55C32CDC9BF44EB85BF13528,
	ListDictionary_get_SyncRoot_mB57A6103DFFB6AC447C437B7D68A50E427307862,
	ListDictionary_Add_mAE5E6AC0D70BB0B419396CBEC579EECAC7A3287D,
	ListDictionary_Clear_mC27E599BF70AAE506805C4B7F7626681AAFBF21E,
	ListDictionary_Contains_mDF81EC7C30B6E639FE237DD74E4BF14EDE35EEB9,
	ListDictionary_CopyTo_m48680DB9B3BE3865F4AC8BDEFB15278C5D3C59E6,
	ListDictionary_GetEnumerator_m29283F484DEBA7F1E3F3FEB2318A7F904BC9C472,
	ListDictionary_System_Collections_IEnumerable_GetEnumerator_m869DCBB37377D87978F0CE324473736F05274FFA,
	ListDictionary_Remove_m4D30B670303D6B2B2FCF270332A9FCB83E250615,
	NodeEnumerator__ctor_m5789602EADB23A1C70CF6E50814E2BD3C9607A82,
	NodeEnumerator_get_Current_mB94FB39141E548003ADC8EDDF7B7F09DB3EDD5E7,
	NodeEnumerator_get_Entry_mBBDB5B3E11DB47CCA5492E71BF7E31E3B44CB9C9,
	NodeEnumerator_get_Key_m1AD78734C58253FE332F4B32986DA06B49152F64,
	NodeEnumerator_get_Value_m232AE4728508F126C18C4A857130F9352CFAF98B,
	NodeEnumerator_MoveNext_mDF9EAA69E0FA49EC7800444D746A5F9B356EF8CB,
	NodeEnumerator_Reset_m85AE4B4752761AD7401451241BE2BE534FE81F16,
	DictionaryNode__ctor_m91B2E095E93FD55F8F8B8BF87DC0F1777B47749B,
	NameObjectCollectionBase__ctor_m6E0DCD48B817A59D0156390A09CD50BE07BF145D,
	NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61,
	NameObjectCollectionBase__ctor_m6B980F9EB155B69FB4C50AD38C2C0C104FE2F261,
	NameObjectCollectionBase__ctor_m113E50DAB246F05DB6302516E683D458250672DB,
	NameObjectCollectionBase__ctor_m7E8E8B56138D44BECF32865A11DAF942AE2BA4DA,
	NameObjectCollectionBase_GetObjectData_m0675A0B0EC79E1DAD6E307764C899EC5E552B32A,
	NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6,
	NameObjectCollectionBase_Reset_m107877B3D64D818F9D4E0936DA9627C4D94DF6DC,
	NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3,
	NameObjectCollectionBase_FindEntry_m1BC4B6ACCE244B544B216D16DB53A769E670876F,
	NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A,
	NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E,
	NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0,
	NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154,
	NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3,
	NameObjectCollectionBase_BaseGet_mE892E8066502D48BEA2E9760D2BE31FB40B8DEAA,
	NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6,
	NameObjectCollectionBase_GetEnumerator_mDEEC7FF01AEF8FB0739964513BAF10C4C3F254BC,
	NameObjectCollectionBase_get_Count_m766C6702F64CD224AB123566BAACB2A81FCBF5F0,
	NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01,
	NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_mAC6E9FEF3C7C442481772E568C4FBF552B908624,
	NameObjectCollectionBase__cctor_m4D457522AA1259C7AB96A98558FC6B0C38CEEAED,
	NameObjectEntry__ctor_m36EA15EE18936FA78B2E4E29C63311E03221F513,
	NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801,
	NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540,
	NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5,
	NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096,
	CompatibleComparer__ctor_m9F601617145FDFCA25983415C4427C47E5C170A7,
	CompatibleComparer_Equals_m09CF7F036688C2E00C8BF5618C0528BA8D8C40D5,
	CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF,
	CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9,
	CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4,
	CompatibleComparer_get_DefaultComparer_m9CC25AF4BD1553D2B2C51FDE9AC8110BABB5C5D5,
	CompatibleComparer_get_DefaultHashCodeProvider_m292C48BD6A5A7065925BAF2BFDEBF7217516DC50,
	NameValueCollection__ctor_mCA29E5386DACDF19F6F51BC395324F0A8EE05604,
	NameValueCollection__ctor_m1545E08D22D8E6C1FCDDAE43741AA43D52F4A21E,
	NameValueCollection__ctor_mF894B0B49D20CE92F0CE3BBF8ED67F48E61CDB6A,
	NameValueCollection__ctor_mAC66C8064A4AAB73914143C4CDF3BF28543BAEC3,
	NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B,
	NameValueCollection_GetAsOneString_m6B44F208B557CE92924A116A67838CB4C259B844,
	NameValueCollection_GetAsStringArray_m6799C5A95954105A8849EDE540988D1352D19E64,
	NameValueCollection_Add_m68C266151774CD1FC057C9349BAE09BDB15A26A7,
	NameValueCollection_Get_m786B25D45B38D7051C696104946F3F0A2DF78106,
	NameValueCollection_GetValues_mC69C8E6E5E62365A35C3A2C99E5DD0C33625362E,
	NameValueCollection_Set_mF0EA26F74B1E1D2F9A1A87D1093BEC31C51BCB8A,
	NameValueCollection_Remove_m2146E6474DDFBE19E35E57F777C4FE2625247D56,
	NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F,
	NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0,
	NameValueCollection_Get_m2C55CAA38BF0F6677AE8F44C22C289A5B59B4B20,
	NameValueCollection_GetKey_m80CFEB6D61F9C3B9D03D7B25457D8B122C15170F,
	OrderedDictionary__ctor_mBEC4CCF86E1A22330C31E1C069B2F21695445A10,
	OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600,
	OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66,
	OrderedDictionary__ctor_m442555F1C427B3EF7DC305AE414FD5EBD90A4861,
	OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A,
	OrderedDictionary_get_IsReadOnly_m8D512A98345A30BC8BB45818A36FCC20DCE3569A,
	OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756,
	OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80,
	OrderedDictionary_System_Collections_ICollection_get_SyncRoot_m67C653BEB9C1E451229203FAE5B6453681E7FBDB,
	OrderedDictionary_get_Item_m5755C415F2E5CAC5A0AE3EFBB5A8D84915B37ED8,
	OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E,
	OrderedDictionary_get_Values_m14CFA04FF0A8DC8B41386192B029EC604AF551BA,
	OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3,
	OrderedDictionary_Clear_mCED01246B19A457FAD097372DD7EFA0840D94E07,
	OrderedDictionary_Contains_m63AFE431564000B20908A732633780B192F7F95E,
	OrderedDictionary_CopyTo_m96E73EF7B84BA4D1ABA184134465F41DFFE73C2A,
	OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837,
	OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7,
	OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3,
	OrderedDictionary_GetEnumerator_mECA50DD161EDC87F84CD75764643826BFF14C16F,
	OrderedDictionary_System_Collections_IEnumerable_GetEnumerator_m4AC8186C465CF478A39CC2FADBDBA75AA9DA5084,
	OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C,
	OrderedDictionary_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m600671E042DB3E5BD39D5439D3C88010EEA1E95A,
	OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775,
	OrderedDictionaryEnumerator_get_Current_m1513DF120F398083CA52B7B330D7FF9D5FD6BC69,
	OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074,
	OrderedDictionaryEnumerator_get_Key_mAE1632D8B4767AC6A321CDDCECFA3B943CFEB202,
	OrderedDictionaryEnumerator_get_Value_m3D9DB591978A7EA9C640AD820A301AD176665AB9,
	OrderedDictionaryEnumerator_MoveNext_m25E708E43E6B36CEAB84121CB0831590F40985BF,
	OrderedDictionaryEnumerator_Reset_m6878E0A1524911AEBEEC87C578C75584DAFD9022,
	OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64,
	OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF,
	OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_Count_m7E6084DFB4648AD05337326CC87BC5AAAC2B310B,
	OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m970D75F7E81A1BB6FA21D797A7D0A068D749E511,
	OrderedDictionaryKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_m915EACF605AF9EBDC96A2BDB466682095A03154D,
	StringCollection_get_Item_m4C46EE5894C7A604638AE2ABF4530C201B1FB88E,
	StringCollection_set_Item_mA1AFC86270CD52B6F5017555AD22CF7710D6B425,
	StringCollection_get_Count_mC6D18D20EEE559A67C72BD37ECA9C0FB93283F3F,
	StringCollection_System_Collections_IList_get_IsReadOnly_m4558520882327B88C80FE911E956E0F082872DED,
	StringCollection_System_Collections_IList_get_IsFixedSize_m821D69C64C5E4DE6841D4CC95FFC330E63F4D672,
	StringCollection_Add_m03BBFAA1D11499DA68474A73F5DB55460F0D6DAF,
	StringCollection_Clear_m2B917BE0CCA6344B1FD65474C53CE512F0476435,
	StringCollection_Contains_mB9DCBDDFD850E68D6080D2D7657F399BA6002B10,
	StringCollection_CopyTo_mCD7A68178A8F87AC0628B2E92CE466A27512CB05,
	StringCollection_IndexOf_m85C4CA19319F830D14472258D9A3DFD31F0F6BDF,
	StringCollection_Insert_mB3044A3F3B5C3B364DCEED9058895D978A4410CE,
	StringCollection_Remove_mC6996622434EE5F503A70F425F0DE6E8D60399DC,
	StringCollection_RemoveAt_m4D0E6E6AA354A0AFFB76AEB56B4CFF24717BB53A,
	StringCollection_get_SyncRoot_mC1F8C1DA3C5ED059D89BD483FB1A4A0A31053F86,
	StringCollection_System_Collections_IList_get_Item_m749070FBB55E7C9C0C21FE4C1013D154D4635BB2,
	StringCollection_System_Collections_IList_set_Item_m176A74C64AA22AFEA5808E4C81AA3FB46B0F9F5E,
	StringCollection_System_Collections_IList_Add_m4A71788F0E3068533B66D918B4F29762980052B5,
	StringCollection_System_Collections_IList_Contains_mEB0510524C7FD5886FFF9A0F710CFC04BACAFEF7,
	StringCollection_System_Collections_IList_IndexOf_mFF76DA01812E585BDD7B25ED4453C22BE0FE9A25,
	StringCollection_System_Collections_IList_Insert_m3B0EB6DA5B02CCA0AB270A329B83152592E6D8B1,
	StringCollection_System_Collections_IList_Remove_m042058DA970F09FC6A0465F09F3082FB2B71BA45,
	StringCollection_System_Collections_ICollection_CopyTo_m32503816BE4347138894130BD0AD6488643D6AB9,
	StringCollection_System_Collections_IEnumerable_GetEnumerator_mF4227CFA7634BA8BFF9F7D25079538A77BD060E1,
	StringCollection__ctor_m3EF93D74FEC69C5A0CD7A502539B2CEDD8D02954,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	HttpStatusDescription_Get_m0F7BBE743A1DBBBD1D908FDAEF99702F9DA51315,
	HttpStatusDescription_Get_m48B3B454E7AA082DF9709151F5D0A36C45C5B9BD,
	Authorization__ctor_m2B6F7C3A1C77B4B4532B4964BF214BF957694268,
	Authorization__ctor_m7EC4EAC7186BC2664B45DDCDA917BA6C8315CBDC,
	Authorization_get_Message_m84C00416C183E8A3B06E37052923C90F486F529A,
	Authorization_get_Complete_m43C3AC5D83009442D51B959623D46AD1ABA2AEB8,
	CredentialCache_get_DefaultCredentials_mFD45861A5151E546B6DF04F6D527E82214EA4143,
	SystemNetworkCredential__ctor_m6C0643A3B325903C6E20EEC9940A6646F4AE77B6,
	SystemNetworkCredential__cctor_mC2950C5826DFEFF2A593B0E00769DCAF75257AF3,
	EndPoint_get_AddressFamily_m44AC2CD5C6868280BEBABF4090D3AFCA2E254537,
	EndPoint_Serialize_mB045A92E21967EF34B1D5A32EF4E645CC1871BA3,
	EndPoint_Create_m09DA8D1A544D556AD0A1A08E3B0CBE9052615983,
	EndPoint__ctor_m4CD393A3D801B696473199A2D2F7EC80E8036F5D,
	GlobalProxySelection_get_Select_mD560206A5CF48874ADDED964043FA86CBC21CDA4,
	GlobalProxySelection_GetEmptyWebProxy_m80E672AAD736D5282C34878A6C6320E6036DE964,
	HttpVersion__cctor_m237BC8431A75E09C3610837B9FECBDD305CF2622,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B,
	IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5,
	IPAddress__ctor_m16761A05E56D81D4519A8E0FEBB7910E17A1FB7C,
	IPAddress__ctor_m17B194C969B6ECEE1917CB93B493B8F26F2B800E,
	IPAddress_TryParse_mB8DC9EE090ED3BE8F8C9D419759AA9FF4A498D3B,
	IPAddress_Parse_mD7BEF4D6060D8BE776F559C5F81F195A9917CF1C,
	IPAddress_InternalParse_mF3ACF0C303F6F986D92A2066A8228353FA0EA900,
	IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9,
	IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21,
	IPAddress_get_ScopeId_m464E5C5597F29B05135EDCA6DDB1667EFA70EEF8,
	IPAddress_ToString_m91FE727877BEAA0115F497387E2E9CB0B45C3895,
	IPAddress_IsLoopback_m673C9C63D59BF356AB7964CEE148EE1F3E01CC19,
	IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7,
	IPAddress_Equals_m5EA56A0CBC4F66012C11628D8CC75E03E5A8C462,
	IPAddress_GetHashCode_m243850627E81961E58E3A7A0A39A1F365C47A4BA,
	IPAddress_MapToIPv6_m3D243981B6A8235516A4D8A68FC555B59675DE33,
	IPAddress__cctor_mB1459880D331879EB11466988E78D88EBA0F6735,
	IPEndPoint_get_AddressFamily_m9941B51AEDFC4A65B614DCFFBD6A11644DBA5851,
	IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A,
	IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C,
	IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429,
	IPEndPoint_ToString_mC285E84E3FB9A15B223DD4401DDFC1E4171E766A,
	IPEndPoint_Serialize_m4495698C21946D39519728ADC8D4FB9860B52DD5,
	IPEndPoint_Create_m3F397111A683D18A38FC7275D55BB94B0FC7350D,
	IPEndPoint_Equals_m480BC01DF0A7D8DA996A030546DCECBE2B5D6AF7,
	IPEndPoint_GetHashCode_m888B6D706296BF20224488C4909807D26655E4F3,
	IPEndPoint__cctor_mF8F48FE436F60E44A928B1967AA49F472E8D1D05,
	IPHostEntry_get_HostName_m04050E3890C11BC5CB02BF48FBDD8AB4938FC390,
	IPHostEntry_set_HostName_m4218E75B9A5D143AF361FEC708ED40CD3829920A,
	IPHostEntry_set_Aliases_mCAB3DC9E9B474EA49C1A80E8010FF4932316B266,
	IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71,
	IPHostEntry_set_AddressList_mFC955717B52B0D1DC71059FC7B2ED6659E4729D8,
	IPHostEntry__ctor_mF2D2692AFFD3ED81CAF30F4CD42B7B0843952398,
	NULL,
	InternalException__ctor_m20A09E66E185FB1449C71227304AF40936C8011A,
	NclUtilities_IsAddressLocal_mA952662DF0A2D8BF1AFF9E74B1FF46DBCA90812F,
	NclUtilities_GetLocalHost_m7C77756A35C2F3CC268016902FA61CF88C5AD56F,
	NclUtilities_get_LocalAddresses_mC5E3B1D849F83965C3F09ECF963B3CB252A8F22F,
	NclUtilities_get_LocalAddressesLock_mDF3BAF033A2D11D70D5703B65302AB09525F7880,
	ValidationHelper_MakeStringNull_mFC25A67C52461BFCE2F30DB71823434BE37895C0,
	ValidationHelper_IsBlankString_mEE97DDAD061D54175C26B9E51E891C4F346E33B6,
	ValidationHelper_ValidateTcpPort_m9042E85AFB8EA2756E2940065C116104C008CCB2,
	ValidationHelper__cctor_m24C6635AA32CE592CED801B39532BB4B7445AFC1,
	ExceptionHelper_get_MethodNotImplementedException_mF8678EE4622F1BBEEC6CDD54293E4D1B40A6D251,
	ExceptionHelper_get_PropertyNotImplementedException_m5029CA867B083BAEE8D3D4577B1F571FEDDDE590,
	ExceptionHelper_get_PropertyNotSupportedException_m5CC325461533A050D3EF68316653B789963A0DA2,
	ExceptionHelper_get_RequestAbortedException_m3DF6599ECE269D18BE8B09099E6D8A9E6692B309,
	WebRequestPrefixElement_get_Creator_mA4054182FA19EA0B452693C7F747122DC0A4A9ED,
	WebRequestPrefixElement_set_Creator_mD7ECF1CF1BD68AC660ED2E3EE27582CF3903CCCE,
	WebRequestPrefixElement__ctor_mA9BEF8159EE6A6C7092797F6E7BE68FDE06E3C4B,
	HttpContinueDelegate__ctor_mF88BDF13545D1FCB1962650C0A2B5C891BA83DF5,
	HttpContinueDelegate_Invoke_m911A3C37BB31B610864B0381AA08241D41B2CB7D,
	NetworkCredential__ctor_mE50C6F50A386C1116DDEC3F21BD7A2894BDC902C,
	NetworkCredential__ctor_m6AACF996F73DA7CE81D33CD301DF98362E7D3EB2,
	NetworkCredential_get_UserName_mEBB5D5B4928F1868DD79A104CF2BAFCFAC88AFA1,
	NetworkCredential_set_UserName_m1C8F2119945861B5B7A512896A57F5E2C5537B2F,
	NetworkCredential_get_Password_m7F0F54ED0E4A41F66513296C4E3063D70AF6036C,
	NetworkCredential_set_Password_mF0B964234CE60FF322135B014FFD8C28FEF5428B,
	NetworkCredential_get_Domain_mFFC454BD64B52DC2FFA09971876B56A2B337DE17,
	NetworkCredential_set_Domain_mF7A8246CA8329E6A86A7B2B5FA8C972371F5AABA,
	NetworkCredential_InternalGetUserName_m3C611F91EF4D0D363D0F727ED93B5BB71057BAA9,
	NetworkCredential_InternalGetPassword_mC81DF1C74B2EC52EB60CFAC26B7D39D04EA0919C,
	NetworkCredential_InternalGetDomain_m23031ACE871266F13428419D081B8F0B76388D82,
	NetworkCredential_GetCredential_mA14F76598AB02327F11A1A09ABB896510F20C64F,
	ProtocolViolationException__ctor_m0999A59A95131FA8BB4D6685FBF4BC0B74E01E34,
	ProtocolViolationException__ctor_m2C2665583590BF7DB9B53A7AF126FEFDDE364BA5,
	ProtocolViolationException__ctor_mD9B5606196795D66E9A101AE92EE2A8D9B9A7440,
	ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_mA112E599073DE2CF2AC7F84E6CD354BFEBFA3170,
	ProtocolViolationException_GetObjectData_mF3C17B3E564B658959AF1A026E232D8E2D2CCEB9,
	SocketAddress_get_Family_mF66C07BE26931A763DF421310667F1C7EE82EA20,
	SocketAddress_get_Size_mBBA7758844EE6209A287989E0DBAE534C9A21A11,
	SocketAddress_get_Item_mFF97A6A1AF0D8AB36C662282C477B5DBAFD10FBD,
	SocketAddress__ctor_mD56F67A8077F542F2DA0ABAF693EE192F5910ECB,
	SocketAddress__ctor_mE024ADACE4B62D1FF2969E8D59E3D6A4B567DC30,
	SocketAddress__ctor_m33DA845BE27401842BFABDF79738F8EFA60B12B6,
	SocketAddress_GetIPAddress_m9F349596DE4F881222A989059162AF5880FBAA0D,
	SocketAddress_GetIPEndPoint_m1B1532600216A9545A7CAC1EA49F23CBAC5C8C17,
	SocketAddress_Equals_m68D7D3DC11E1070E43492BA30FD9AE5AEA51C49D,
	SocketAddress_GetHashCode_mA5B524859742D73CF5870F6984360E15F09FA719,
	SocketAddress_ToString_m1C4AEB870E76472C9E3800224F2400A66DF8E46A,
	WebException__ctor_m1F229FB262E89CA90779094218A3066F532EB8CB,
	WebException__ctor_mFBC3890EC80132004827F36950EEB651595BF277,
	WebException__ctor_m8075F9F7345CECCBDB276E0B67DE820A9F7D03E9,
	WebException__ctor_m6C829021B5388956F84830FC249915324C1453A1,
	WebException__ctor_m7022740DDAF9DE008CB8B2B66CC04AE2C5C45174,
	WebException__ctor_m937A4670EAF10FD9EFA1E0AEAAE27515293339FD,
	WebException__ctor_mA1609CA415DDD5C7C4AF37E9CD2CE77330C43384,
	WebException__ctor_m7A5D68872BF6CA52F8992EBFD74AB6BCB07EB77C,
	WebException__ctor_mF29A3D816C156692A8C353A9C824CA2F5C60BBFD,
	WebException__ctor_m6D36D5DBE171207E973C5BDFC9A57BE2A1E5DA7C,
	WebException_System_Runtime_Serialization_ISerializable_GetObjectData_mAEABC5E4A1BAE8AD395EFC404CCEAA00345AD628,
	WebException_GetObjectData_mF735C851AF332C94DDDAB38C0C24AA1871DC2901,
	WebException_get_Status_m9B08D3B07C3D75A6783EADB1215EB54E2D3B9822,
	WebExceptionMapping_GetWebStatusString_mC6F3D28D6DCDD3E8674CBDA5CA684DF603DBCF69,
	WebExceptionMapping__cctor_m56C96AB4B5D49C51756576BE119AC1096CDD6C4C,
	WebHeaderCollection_NormalizeCommonHeaders_mE1D83B9D009EB876D33D1EB93CDC65F4F97B5B77,
	WebHeaderCollection_get_InnerCollection_m544FF08AD232BC5BDD8C5109DF6CD21C5ECAE2D0,
	WebHeaderCollection_AllowMultiValues_mDE5975EA8A29DCB2347D5B3FCFD97473E12CDC16,
	WebHeaderCollection_get_AllowHttpRequestHeader_m3ED9F9796BC1B56D21105BAE17D4CABA83713889,
	WebHeaderCollection_Remove_m93990EF3A5F1D4F6D67232583029BB26483C7F67,
	WebHeaderCollection_AddInternal_m0EE002E2F815150CA5C43EC865F6D193FD4B7777,
	WebHeaderCollection_ChangeInternal_m170009EA1B341E9E69FD5A7DECF0AD2EE601C2EB,
	WebHeaderCollection_RemoveInternal_mC5B544F96C64E2087FE388E375DBE4A185E53AF0,
	WebHeaderCollection_CheckBadChars_m1F7BCD4BF0DC01AF8C1378AD02862D9900B67D71,
	WebHeaderCollection_ContainsNonAsciiChars_mAE8D797265C12FBCAC784B15D734914273ED7AFD,
	WebHeaderCollection_ThrowOnRestrictedHeader_mFBE0E21167D9EB5485BD3DC18B505FEC9BF6CF51,
	WebHeaderCollection_Add_m3E612375F241E3383BA9EC01972C5A5FCD9384CF,
	WebHeaderCollection_Add_m9A3740A95FB8359CB0B56367D2E19E8C3CD77EDC,
	WebHeaderCollection_Set_mD28BC00E4A0787295183E92F630DAAF9AD435D47,
	WebHeaderCollection_SetInternal_m3E861ED032C85112F8FD4B715C6505508BD78679,
	WebHeaderCollection_Remove_mD3D0E549867A561B0E71C7B4DC9B532208C60A6E,
	WebHeaderCollection_GetValues_mB75176E99C15DAE45AC897402491AA38C9D4FD33,
	WebHeaderCollection_ToString_m60D2996FFE881E3D8AAF700E761ECA34B0A24D86,
	WebHeaderCollection_GetAsString_m7E801872DAF279F8228F57FF2EA5336CD29F2E4F,
	WebHeaderCollection__ctor_m9C77B3E5FD0A3637283AE2B7084F5ED5D8CD7369,
	WebHeaderCollection__ctor_mE6EBDC6DA6CA46B83FD87FA51A93BACCA7FCDB27,
	WebHeaderCollection__ctor_m7FAAE403639DC42E7FFED6006B1D10BF5A1B4B5F,
	WebHeaderCollection_OnDeserialization_mDF73EE0F5BBF3AEE9C37273B79738A47530BECA4,
	WebHeaderCollection_GetObjectData_mA9D238943F3E6D4DF3A1156A0EA6729F5CA6F911,
	WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_mCB9569FEA54BEF369CF3BE5F56F36072D01D712D,
	WebHeaderCollection_Get_m7EB2DFD01DAC1EA2CC4CA7290459BF47B06CABED,
	WebHeaderCollection_GetEnumerator_m8A77AE9A2EFFD0F12E60A1DDF51BBBF2C9F5904B,
	WebHeaderCollection_get_Count_mFD0A0FD946CC97663996F70E67BF64851F3A4B26,
	WebHeaderCollection_Get_m99BCFF243942F451A075C334C2B67767B2332348,
	WebHeaderCollection_GetKey_m568730550CD89F6A9C02478A059923E3BEE324BD,
	WebHeaderCollection__cctor_m065B6EEB9A340079FA0815B12CF08010D7A5FD81,
	CaseInsensitiveAscii_GetHashCode_m6196C976C5E2C2BF948F9775AF827D80AA0707B2,
	CaseInsensitiveAscii_Compare_mDA30468D238E946A8CA36C5D0CBD9C92EBB67B0B,
	CaseInsensitiveAscii_FastGetHashCode_m8185162F020C571335BCFB444577F786E6BB1E06,
	CaseInsensitiveAscii_Equals_m2F02CC88964600A235BA5B084B83ADA6CEE2EE5F,
	CaseInsensitiveAscii__ctor_mD964E182EFE7238322DE8F7A2CA169657B6C4F4A,
	CaseInsensitiveAscii__cctor_m769922E617CDF4088DCC27EDD5C2F0042D2318A3,
	WebRequest_get_InternalSyncObject_mCCA701B3B01048CC2F26150D9E84D25CD194DFCF,
	WebRequest_Create_m9DD92CB71F55DA62C44CDCB1797D1B4241E753DC,
	WebRequest_Create_m18D598C169B53797E9B26A710442CAF2D786B04A,
	WebRequest_Create_mD11C7BB286D0C12A92911F717AC8D2CAF9027611,
	WebRequest_get_PrefixList_m233C839E7F75B2777B26A693A2DAD1AACC7B915D,
	WebRequest_PopulatePrefixList_m6E56B2280C7828A4FFFF0154681C3CD8B1B61E8B,
	WebRequest__ctor_m8A7037980E4A7E78EEF420F0C38A36C10DE3D642,
	WebRequest__ctor_mFCD491607BF422AED49CB0368CFE19F2E37BE98A,
	WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m84834AA790D887F6742649C7D4001AD00089102B,
	WebRequest_GetObjectData_m1809AB7BE2251220AB0F64110CFD815EF882D3E7,
	WebRequest_set_CachePolicy_mBDD930800DB2EFD353D0090BBEC03D8DE098C90A,
	WebRequest_InternalSetCachePolicy_m48EE455302BEA5A1F75E18E5D7DCF5CA8A18F076,
	WebRequest_get_Method_mFAE2E9E052F7031B81B2C5F05FBAF0AB1167A444,
	WebRequest_set_Method_mC0B76EDF551FA04D66ABF5F52D0725787EECD31C,
	WebRequest_get_RequestUri_m91BE50BB8D64C8FD5D9B31A0F707EB066A64097A,
	WebRequest_get_Headers_m26A0D1239097F7AA805B4A8D2CF6FA5B1DC56932,
	WebRequest_get_ContentLength_m1BF638AB4F757E2FAB7F765B63FD743BF0FCBF6B,
	WebRequest_get_Credentials_m47790A75D2014E80AB4F83A91BEBFED52785F500,
	WebRequest_set_Credentials_mBD3AD4311A053F6FD323344BE1A0F1B17868428B,
	WebRequest_get_UseDefaultCredentials_m81F5CC1019777DFC87DDE33FEA663CCED0F3C0F9,
	WebRequest_get_Proxy_m251BB31AEFFC7CFF8B760FE3AEAF2910743C092D,
	WebRequest_set_Proxy_mFDB69D2A0469AD21FC1A918EEB5515272D45F796,
	WebRequest_get_Timeout_mB2F6910163AF508879886ABE5C9824ABA6D1D81C,
	WebRequest_GetResponse_mF6F9D792949BD9CDA3AC8DC9635C6D31913D519B,
	WebRequest_BeginGetResponse_mBED5D8A0E2BDB198696F3117A2355564F6AA0299,
	WebRequest_EndGetResponse_mBE7182580E7B9B64E560EDC8C7A2A68F385C4833,
	WebRequest_GetResponseAsync_m43EB360A2947698EDE4671A9811FA0F6C52A23EC,
	WebRequest_SafeCaptureIdenity_m75DF76AA29C004E643C39626ADD8A24D4C5EEDD9,
	WebRequest_Abort_mC22268D6B6812F405039FB6F34208E726EF62A56,
	WebRequest_get_CacheProtocol_m2936E9CABE538D40E6A88C1DC3B78CE9336A711B,
	WebRequest_set_CacheProtocol_m708E1FF1630F00DF87309F698E837EA6E55428C4,
	WebRequest_get_InternalDefaultWebProxy_m5FE1DF46DCB29A82C5AD3017F0D1BAD2A787A75C,
	WebRequest_get_DefaultWebProxy_m47BDCE9F61AF9563C4C88C0B8ED39242059EAE9F,
	WebRequest__cctor_mB67087F945455F2B1502CB55721CBF2ADB0A10F4,
	WebRequest_U3CGetResponseAsyncU3Eb__79_0_m635D73DB9E3CEEEF92D50FC5AA0A5D0CCEA73E69,
	DesignerWebRequestCreate_Create_m759C6A157B3F3F6531844B2E2FA8018C1442AD28,
	DesignerWebRequestCreate__ctor_mBFB58FED978B03A3C53AE292C3855EDED4222C88,
	WebProxyWrapperOpaque_GetProxy_m7400F7FCA17B6C667D776F18F13485717DF55C88,
	WebProxyWrapperOpaque_IsBypassed_m98033B565DCE66CE6234C8C45A89FB3FC55F4999,
	WebProxyWrapperOpaque_get_Credentials_m10A2D029CDF952EE2DC86D6FF4D35F4E3498A837,
	WebProxyWrapper_get_WebProxy_mA0997593F2FAE2C7778FADC0D00EC04FEE7B5453,
	U3CU3Ec__DisplayClass79_0__ctor_m98DEB00C10B19311D74B7AA965FD379F91FA94B1,
	U3CU3Ec__DisplayClass79_0_U3CGetResponseAsyncU3Eb__1_mD03363C04D913541A4A1E21614CE2D60C92E2AA0,
	WebResponse__ctor_mC11AFFC628F1E49E53431A3129ADC7CEA012306B,
	WebResponse__ctor_m845789E13F69DA82F94377A29D46186F2A43ADD1,
	WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m7251108700FDB16B091C135DC5E76053623F4FE6,
	WebResponse_GetObjectData_mDE55FE69900B3F6311ED36EC53D1F775E2A634CB,
	WebResponse_Close_mDB1366AAB8237FC3D25C47B45FC7FA18055D7ADD,
	WebResponse_Dispose_mB68E6769F296DE95FF4BAF9A80AA9309EBB4AB4E,
	WebResponse_Dispose_mAACC90307104A5FBE9D417E8E40569C2501D5568,
	WebResponse_GetResponseStream_m90039E34DC39DA2764E4A465C47D7C8CFD553F88,
	WebResponse_get_ResponseUri_mCCB7A9F1A892AA99BA86A6913ADDB511C26D403C,
	WebResponse_get_Headers_mEC440184E979C51FD1111A6F1A65D956C20DBFED,
	BufferOffsetSize__ctor_mF73D1F45CFD84AD9AB753B1F923A762F00806BE5,
	BufferOffsetSize__ctor_m2C19FA733634E3D23AD53D85EA0B94E876CF6861,
	HeaderParser__ctor_m3E4BFAA908282AFA1EB023C1B84A03C222A68AAD,
	HeaderParser_Invoke_mCAC8132BC020AD64B0130E50BD0379A312245C8E,
	HeaderInfo__ctor_mB82B9D1D7C19C78B649E9107B0DB316A96120CB8,
	HeaderInfoTable_ParseSingleValue_m217B3A467422A5B17876254E9984F2C30E178F9A,
	HeaderInfoTable_ParseMultiValue_mCACE161A48EB4BC9DD4519BF3EC02CC83DD6C85C,
	HeaderInfoTable__cctor_mD8B50AECD3CECAAC7E93610FAE44324679088EDC,
	HeaderInfoTable_get_Item_mE388F21B37BFA30336BB82A1585C744E69A20021,
	HeaderInfoTable__ctor_mED0A17850B2F6AA3A3E6BFACF257E8640A7F3F50,
	NULL,
	LazyAsyncResult_get_CurrentThreadContext_mC86876C2BE5FFCFB3CCD0B34ACAD7272E72725FD,
	LazyAsyncResult__ctor_m62BAF64A732506AD7544741700A0333B22CADE2F,
	LazyAsyncResult_get_AsyncObject_m599FB00838F916DBE45F359D64D26717EA2DF231,
	LazyAsyncResult_get_AsyncState_mA3C12FBA0D5D421B9E670017D1A6236CE54152D4,
	LazyAsyncResult_get_AsyncWaitHandle_m1F208E301E0C68A5F50E6E20A5ECFACB303489BF,
	LazyAsyncResult_LazilyCreateEvent_mC82FEA0526DA66D9F1A9B03BE1858D1C181E252F,
	LazyAsyncResult_get_CompletedSynchronously_m94758548683594ABECCE44E74B8A6FAE5F44D688,
	LazyAsyncResult_get_IsCompleted_mE0A803876FB2D312361FCA5F631535B09F6C3125,
	LazyAsyncResult_get_InternalPeekCompleted_m4E25420F3F5315AEA52DB59D671C65A3103EF2DE,
	LazyAsyncResult_ProtectedInvokeCallback_mAB31EFC1A9671BA58BB38F59F381EAFE9C564410,
	LazyAsyncResult_InvokeCallback_m4A1E1A15818F5ED6E6DBAEB48104A06529A11C9A,
	LazyAsyncResult_Complete_m6B165AD8AEBAB7129514C42C4A3277114E0683BC,
	LazyAsyncResult_WorkerThreadComplete_m50589CB1937E4BA7FF703482ECC24706F0E1A1BF,
	LazyAsyncResult_Cleanup_mDB648575075A8BDAE413E4FB90C35A880A238B02,
	LazyAsyncResult_InternalWaitForCompletion_mE52E38E8478ACA2C9344716035CCC46E5CA32A59,
	LazyAsyncResult_WaitForCompletion_mA2CEEA13EF894CFD3997117924FE18FF3D782649,
	ThreadContext__ctor_mBFFE2269F22D15B6570BD909390F40F213E9DBF1,
	NetRes_GetWebStatusString_m35A90AB3B319FDDFAC2A2C4AA534504806B8555B,
	NetRes_GetWebStatusString_mE66B48DF30D7AD1CBBA22137E2DD0736065236C1,
	TimerThread__cctor_mC25B3C34109193014AFAA8AE22DEB5A82AE730E4,
	TimerThread_CreateQueue_mEE7746808FCC711657A10D38DAC9FC01B93B68D8,
	TimerThread_StopTimerThread_m1E3A2BE926509E8E445BA5C00BA5B83C8283EDCE,
	TimerThread_OnDomainUnload_m789618CB693C29737319DBD4437199D0346FAF60,
	Queue__ctor_mD131B17E1C13BF9B3E8EBF5A909ACB274930B0A0,
	Timer__ctor_m74E9AEA5FB4F7DDDD8D9089D6F9C9EF7A3A96F3E,
	NULL,
	Timer_Dispose_m266A7BD332741D89F4AA204ECEA9BD4784AFC79E,
	Callback__ctor_mE36A85A258851A46EE477BBE1E87B5751C3CC9A9,
	Callback_Invoke_mE5F4E02D25CB58B34E93A55CC21418F00B55C1BE,
	TimerQueue__ctor_mCB1C60FF084C13E97E4FC8C4E56F6264649285D9,
	InfiniteTimerQueue__ctor_mC47879DB811308BFE6D5D4613791A81CCA215501,
	TimerNode__ctor_m259A5ECB2BA964982D8CB975EE945899CB14EA6A,
	TimerNode_get_Next_mB0E6D37D592DC92CBED33A26B0362F00959578D5,
	TimerNode_set_Next_m77F9833E3DA4B66D565A10F0409C15B6B7677AB0,
	TimerNode_get_Prev_m358430B0F3DD4E039E38962A04118F937E6F5E4D,
	TimerNode_set_Prev_m3A7D7FD5A4B654793FB48D0BAF7D8E0638BB1E47,
	TimerNode_Cancel_m6CAF1FDE8F05519F86383C25195AC922D5056489,
	EmptyWebProxy__ctor_m39EC8273552ED71301CD28CAFAFDDBAA5713179B,
	EmptyWebProxy_GetProxy_m239EA2A5CEB841819958417A73D90F33C5FC93BB,
	EmptyWebProxy_IsBypassed_mD5BE8E62895F1D280DD64FDC128086EEE14AD759,
	EmptyWebProxy_get_Credentials_m471224C14C2A6C30CE38A13FDDC3755177A4D8DD,
	Cookie__ctor_m3140A4DBF15D0D649321FEBD9D53EF22F39E4905,
	Cookie_get_Comment_m51FBB45D81565655A5241B5DDD813BC3EC42B592,
	Cookie_set_Comment_m9DD420CD69AEF47A1D333E6F9DD80B3414EB1336,
	Cookie_set_CommentUri_mFC039B7C597CD8B07340BE1EC80645CA822365EB,
	Cookie_set_HttpOnly_mBD64593F68CA7D9EC5D04AFE5F4F973B1D4AE541,
	Cookie_set_Discard_m9E0EF24EBC58C5A3000E508D5FC7867484BE77C0,
	Cookie_get_Domain_m4965D8397859F47975FD7E3C31E259B4979AF69A,
	Cookie_set_Domain_m43C02F2CA6265AA63E8262F4A326E4238F1C4125,
	Cookie_get__Domain_m8957AD2A8BF7C19270B62A6BF2C88E1E11347750,
	Cookie_get_Expired_m61AE9BC48CF91C4831984BAD0ABA77357FF40215,
	Cookie_set_Expires_m4B58B8276A8D57BD0B37F05484A4292B96258D1D,
	Cookie_get_Name_m8DE46D0C6ABF6E6B2D7B82E9A0AFCA04189FD6C1,
	Cookie_InternalSetName_m97FFD3EEC5CD4232F2C95A8328F977EAD456E27A,
	Cookie_get_Path_m805DD94569337D3ADA27B977CE95D672C344E448,
	Cookie_set_Path_m2EC9F932D33A328A522976DDC2423AC1B62F3D5E,
	Cookie_get__Path_mD7C431ED16B7443C45A872E061E389E16768CBE0,
	Cookie_get_Plain_m177DD473B1A9B7CD6E80E91862BFA3F9ED142453,
	Cookie_IsDomainEqualToHost_m3CE9C1502DEB31D44100BA130C5A277CF8548681,
	Cookie_VerifySetDefaults_m5E440E1D11681168E64C83CA3ADB81B80603246C,
	Cookie_DomainCharsTest_mE423C477EE07BA0676C5571B03FD4153030B2EE9,
	Cookie_set_Port_mBF4BE6DCE6A229EE32A361BD8571CCB213AACB1B,
	Cookie_get_PortList_m6CD4AE81E64F96345FA5F7DFA5A08B3D26585272,
	Cookie_get__Port_mAFC419B810D0D3BA8AA96A4934AD074E9603558D,
	Cookie_get_Secure_mC66DA9E446CDBF94707FC0BB3986368C5BE3FC40,
	Cookie_set_Secure_mCC65037E43CF517C5636B395936B938E1762B467,
	Cookie_get_Value_m2FA4FCF7BE3B02C07D7AF1942C135FF3CE2654F8,
	Cookie_set_Value_m5532B3DAB33D22EF13BBD7A73D4C9B5C2F78BC4C,
	Cookie_get_Variant_m12BD01DEE266FDACF399BF3ADA69A827319B1511,
	Cookie_get_DomainKey_mFA3136D76EB6D9860FFB594DE41DE00179A9C9C1,
	Cookie_get_Version_m504ECB98B28863D90067A67125E9636888232C5B,
	Cookie_set_Version_m0610EA591E212AAD844B4742FC4204E3D0099AE9,
	Cookie_get__Version_m270926E18A41C5CA0E3C2251BEFF3EA14152FA54,
	Cookie_GetComparer_mFA19780A633FC62C6C1B11DED35FC7712546D396,
	Cookie_Equals_mC107205C12870AB31E46A7DA9419D7A10F0F349F,
	Cookie_GetHashCode_m3105678D015466147809357A7E838789ACF08400,
	Cookie_ToString_m006CFACD30904A14E95E554C61B8E51BFE710ABC,
	Cookie__cctor_m22FE8B9F624B4E9EC5A6AB1BB1C1E1A116D89011,
	CookieTokenizer__ctor_mF40370160D2FE65FECE405F705D1F292E796D758,
	CookieTokenizer_get_EndOfCookie_mA5163BEED4C3D9D997862B52A9640C1F23B5EAD1,
	CookieTokenizer_set_EndOfCookie_m07FC3A37954F1242B801EF06CCF3B113C68DC298,
	CookieTokenizer_get_Eof_m865305270272FE2C093E54DCC4015B09389EFC2E,
	CookieTokenizer_get_Name_m6F1C07A7A3F440A5413E3D0A3A08714ED195F245,
	CookieTokenizer_set_Name_mF4B810DDEB615A691C25172760D12DE403D8403F,
	CookieTokenizer_get_Quoted_m939D5156810D29E2FCA61562BAE9A6002D482D73,
	CookieTokenizer_set_Quoted_m85FFBCD24780380569B37E171E6EE608A2260169,
	CookieTokenizer_get_Token_m870EB882CDF64A420DA1690E1AE663CF96EB9E98,
	CookieTokenizer_set_Token_m0AEFFBF2611EFB704C2288B04B3346A42240D351,
	CookieTokenizer_get_Value_mF53B7672616BF4742FB0F6068737C2FAD1A01039,
	CookieTokenizer_set_Value_m020CC3D259799D42236BDCFAF9A8F3813EBA7D04,
	CookieTokenizer_Extract_mC125173301149DD9CF1C465FB76745D8B03F22BD,
	CookieTokenizer_FindNext_m59EBA948C86DE59C7855DE17867A2586F87DAEDA,
	CookieTokenizer_Next_m4FFE73A0BB0E8D211774127D912E71B31839AC19,
	CookieTokenizer_Reset_m0847912A8521B353383CF36ECC8E910A87AA90C2,
	CookieTokenizer_TokenFromName_m1088952A7CC481EC49DE9E7699E98766A6E33F63,
	CookieTokenizer__cctor_m9276A2CC4E4B24989FB7AF019C1FDD51953DA065,
	RecognizedAttribute__ctor_m57B8152BE5C905023F282B5B31A2EDC4A582990A,
	RecognizedAttribute_get_Token_mB866B1151FF6270E37D33EB30220FC2D7AB1BDEB,
	RecognizedAttribute_IsEqualTo_m9DAB082F220BB64EBD6825DF9D3A578A99308E0F,
	CookieParser__ctor_mCC2243C476AC3D7501F95E1313229A1F8DF3B85D,
	CookieParser_Get_mBFC52AE109B308C7EC0A780F864A99A0127B35FA,
	CookieParser_CheckQuoted_m27BD4DA2D4E5EB47F4320778921B598C45C650B0,
	Comparer_System_Collections_IComparer_Compare_mFA642F29069F3F342E2856B50EF80B295FDCA8D6,
	Comparer__ctor_mEF67BBC47130D32EC011BCE7C838625DF32885F1,
	CookieCollection__ctor_mBB680E674CC568601670CC1BC998FF92C73E24A6,
	CookieCollection_get_Item_m68CC6AC48A23053BDF8351C347C96B896E358111,
	CookieCollection_Add_mA4ABC9A787016B5E6F3AC7B995BFE9DF025F9AEB,
	CookieCollection_Add_mFF9A879B83B84C060328C98921C90EBFE78A4F81,
	CookieCollection_get_Count_m1D34E6D268DF9BDE18D7C8B3458E511F370C44A0,
	CookieCollection_get_SyncRoot_m443908D7AF1954F484B39D1A13ED3279D1B8C00C,
	CookieCollection_CopyTo_mF009D844981C8174751F96A6916BC0F1664A9205,
	CookieCollection_TimeStamp_mAD6DFF22124CCE3EFA87188CFCC334125E86561A,
	CookieCollection_get_IsOtherVersionSeen_m671AA0AB32F2CE8CCFCA1D5E9975C86EF86A3B3C,
	CookieCollection_InternalAdd_mF1BF5B50950935BDBD8D7C8F90282DAC937C68A9,
	CookieCollection_IndexOf_m3B060681C5B1CC2BB468832ED6CBD6D97D905626,
	CookieCollection_RemoveAt_mB59F81B489A1380746C38C42FCB485C874A91D6E,
	CookieCollection_GetEnumerator_mDE48B747F67C2292E2997FD977A88B37893F79C0,
	CookieCollectionEnumerator__ctor_mC016736D0525F9411D3AF9E5FD93338E26E5AC0F,
	CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current_m130ABE61C4B3474C01DA1F80043A0702D598CC02,
	CookieCollectionEnumerator_System_Collections_IEnumerator_MoveNext_m62C242220555CC0A0E1621F040C11A1AC824FDBA,
	CookieCollectionEnumerator_System_Collections_IEnumerator_Reset_mB24F3F140B1E9CE281C9ECB89BB4161B47746BF2,
	HeaderVariantInfo__ctor_mA0EBB5018465610E64AC1C50B92C94B831721A85,
	HeaderVariantInfo_get_Name_m7F37F7252CA8DB9E929D9F5AFB0A4284B094AD42,
	HeaderVariantInfo_get_Variant_mD5B9F8CC046969C22B093E491C917C714D9181D1,
	CookieContainer__ctor_mDFB99605E29E20FC8F2379AB3F4F56FA9B67834F,
	CookieContainer_AddRemoveDomain_mE97997731AAFECA5BBC9C30D3A0D3EC829201BFC,
	CookieContainer_Add_m8C74E813CE210BEF85C2C6F608908AFFF333B5F6,
	CookieContainer_AgeCookies_mA09C7D26890FE1D96668EEF357F7004E126C73AA,
	CookieContainer_ExpireCollection_m6743A1761960B6F514FFEB6FB73E22E4129C6C3C,
	CookieContainer_IsLocalDomain_m9CE5F87CE80369430472496E02D7650944FAE7FB,
	CookieContainer_CookieCutter_mAD4338632F2604DEE6710883A6AF2C59897A10BA,
	CookieContainer_InternalGetCookies_mC3ABE646BBE4E26032001CC84D3B01B9E8EFB09D,
	CookieContainer_BuildCookieCollectionFromDomainMatches_m9094634C41AC3EB66AE2EDD96A267D02AFF97F3C,
	CookieContainer_MergeUpdateCollections_mBB7E649333123FDBB89F427CC6D151600060140C,
	CookieContainer_GetCookieHeader_m38B9D270352A467A83C4E4B6E1FD14F00106517A,
	CookieContainer_GetCookieHeader_m8C5DD95239D2D4513D25CDE52EF72FA7B350012A,
	CookieContainer__cctor_mBB3E08595D370CD1B27419990650DDA0FA98EF32,
	PathList__ctor_mE0DA71C528E33FE19BF275CB46CC42B0E7F70511,
	PathList_get_Count_mEA8DB1AA312D311B2CF6821BC4C8BC0B5ABDAAA7,
	PathList_GetCookiesCount_m4A311984AFC98AE15CB7581A445A90C796C4977B,
	PathList_get_Values_m0A80782C84B57C445076B6EEEC3D1BFB6BBDB67E,
	PathList_get_Item_mB529DE417A2A6FE25BD6EDB67391C6E70AB77C3D,
	PathList_set_Item_m3BCAAE9EAEE30AEBF39E4C69283259F94BBA3661,
	PathList_GetEnumerator_mDD83CA63ED6506403CC63C95B73C93104484171C,
	PathList_get_SyncRoot_m6903042A345F56C5D2184AE49F0443D2012A7CCA,
	PathListComparer_System_Collections_IComparer_Compare_m51FF85A38FDA9D131FB6EFC999560C8FD25ED336,
	PathListComparer__ctor_m4905B0AA67ADC50CC792AF932CCF405531C75240,
	PathListComparer__cctor_m47E69B632265CCB37A528B41F9AD5E93C76AF232,
	CookieException__ctor_mB5A77C1F9648ECC0984F5F9DDCC05687C2E9CDED,
	CookieException__ctor_m0E120836351D3B4DFA0E6542D805CB96A941EEB1,
	CookieException__ctor_m8B674A5CEE204C67B8CEEF88783A3A8598A537B4,
	CookieException__ctor_m7E1E07FED04485652CBED5F27126F196CB9BC380,
	CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_mB8B637774354CC45258851E226837486ACBDF52D,
	CookieException_GetObjectData_mA90440563768260788500235B906AF63A798CDA3,
	FileWebRequest__ctor_m32AA08E0CE88EE4B4328D724C347D7D3F2B3E700,
	FileWebRequest__ctor_m7AF7635D835AAEA13DE9B5F7BF53869032B6E51F,
	FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m73E50CCB8DA4A87382EE2B23DBA184184C238C67,
	FileWebRequest_GetObjectData_mB0C155782CDEA4ED9B05D66308F6223AB0C4E389,
	FileWebRequest_get_Aborted_mDCF5639158777EE8240560751536AF4CFF1FB3BE,
	FileWebRequest_get_ContentLength_mB16DDD3E7D2004FE16EC56A419F42146F8522436,
	FileWebRequest_get_Credentials_m15811E36CF44607B465463B7B5D304FA041D345E,
	FileWebRequest_set_Credentials_m96C5BA6098F2A3A68B316B322590155D6D28666D,
	FileWebRequest_get_Headers_mA3423794B56B845B6E6529CF51F3F8E7B6EE258B,
	FileWebRequest_get_Method_m8E953132A5F2EBAAAB77EF736122DC98D34A6CF4,
	FileWebRequest_set_Method_m73F004DA6365ADB70FD3B1F23311B071421F3324,
	FileWebRequest_get_Proxy_m3F86F95EC0CEBCBDC13A3527DAF7C13E3B4D2D11,
	FileWebRequest_set_Proxy_m496B133881523B919110F76A7CB02062388D2691,
	FileWebRequest_get_Timeout_mCB71B1C9B994821CBB9D13E0BFE48E2339956144,
	FileWebRequest_get_RequestUri_mED65BA2ED487CB6B9B59E6FCA427F2B8210D8382,
	FileWebRequest_BeginGetResponse_m08F29EBE802FE03432A5CB57FDFCA3C5A77CC9FF,
	FileWebRequest_EndGetResponse_m2A6CE91546D40B688C7326A175CEDE7501949973,
	FileWebRequest_GetResponse_mC0E52C8B9885217929AC660B62A073CD2C63D481,
	FileWebRequest_GetRequestStreamCallback_m62CCC32A81F8350AC6975EEEB79B2D61CC428C8C,
	FileWebRequest_GetResponseCallback_m21A70D5427620CCA22552BC8263CEF014B3AF414,
	FileWebRequest_UnblockReader_mC1E7C9618A64BC7785D882EB222D92A95244F8B3,
	FileWebRequest_get_UseDefaultCredentials_m3A68945BADD01035A36BE0D6C46248B0C68EE5BA,
	FileWebRequest_Abort_m5749D46C3CA5C4CBD0F8222A1F3308C46C6F77CB,
	FileWebRequest__cctor_m1034782E644D45E398ED29E1ADE0AA1454DFF5F9,
	FileWebRequestCreator__ctor_mDF264D86311EA60A56DA2B1FCE048E48F0BF6CAB,
	FileWebRequestCreator_Create_mB47FFBF665D3B3D20F250AE2396A3C5654637939,
	FileWebStream__ctor_m0F3CC822C4DEE7C71B3FA3FFDCF5B25EAEB2CEAE,
	FileWebStream__ctor_m9E118415C0F3AD53809A5836C1BD6DFC9913C60B,
	FileWebStream_Dispose_m1155DD4853E8E2ADF2EB7E0A940289F18E4F8EF8,
	FileWebStream_System_Net_ICloseEx_CloseEx_m68BBF0B85ACACDFB200E96968A6E31E8FCA757C4,
	FileWebStream_Read_mD35B2485DB5F8929EF92A5727FF64A28BF2A5DB0,
	FileWebStream_Write_m216E33F6ABF32F817381DEF9DB3B133BC0587468,
	FileWebStream_BeginRead_mAAB039B0A955363303488218A4CBB9845CAEB4CF,
	FileWebStream_EndRead_m5AEA2D6B64A3CA7E005D9F0929C9D829766F6538,
	FileWebStream_BeginWrite_m686EDD328F0ECED1C8C51E819A61E3BD7A44F5B1,
	FileWebStream_EndWrite_m5162ABF5383D0F4A52DF6996687868DE6AF9E486,
	FileWebStream_CheckError_m7C73A2B18D870AB5869B1F38F325C32E83305F6B,
	FileWebResponse__ctor_mDCECF4C7D821F8FCBA18B5FA8DF2AD303A029C30,
	FileWebResponse__ctor_m63E4E435D6A83A6DFCE4FB6560F97FD09C50D973,
	FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m92E0F46AC675AA9E4EEB159D1B465E085CB4CEC7,
	FileWebResponse_GetObjectData_m8C157E17C06D23AE9B5E8B00FFDDB3F94209667A,
	FileWebResponse_get_Headers_m6ABB72A61FD21CD73DB65DD1197076DF0C1B6A89,
	FileWebResponse_get_ResponseUri_mAF08E8518D7536DEB992379B60086DB435F66D46,
	FileWebResponse_CheckDisposed_mEC4160F0E1B497A73227AB5E06ABFA3FA2E45119,
	FileWebResponse_Close_m03BA89FC13B905EC65468C4AFB8FC44A1AFF3F83,
	FileWebResponse_System_Net_ICloseEx_CloseEx_m9909306B65ECA8038FB0A1DE1D0E72DEC4EB3D39,
	FileWebResponse_GetResponseStream_m3221F1B8ADA3CEB5CD010D5EF41ED44E3A9A32BC,
	NULL,
	NULL,
	NULL,
	WebProxy__ctor_m513721AC5813F35B2879182BF7558A2966DDBC34,
	WebProxy__ctor_m56D1C9B767710B435DFDCC58891651D915E9E96E,
	WebProxy_get_Credentials_m76BB7DE06FD84E20406661BF0D98959DC73B28D9,
	WebProxy_get_UseDefaultCredentials_mA938B24C5D5406B88C515CC7450B91FBF3BBA28E,
	WebProxy_set_UseDefaultCredentials_mF60535F31708D6DF7CECC2926EF1634C1333C002,
	WebProxy_GetProxy_mB7D36975267535555BCB1BF449098DB35D01BC8E,
	WebProxy_UpdateRegExList_m7B2EE98DAADC48CBDFA6ED2D491B4E4F00857F48,
	WebProxy_IsMatchInBypassList_m4D28B54328E1AFB40D9BE518536EE192CE423F50,
	WebProxy_IsLocal_mA55F6EF93DD6449B262157E0795507C82356F154,
	WebProxy_IsLocalInProxyHash_m20B75565C09C609A0A9C000640B562C1D067A99A,
	WebProxy_IsBypassed_m4919E244B263600121FECB9F693AECBDBA30AE38,
	WebProxy_IsBypassedManual_m89E6F6F73446B4663DEB837B77ED542A9D5A220B,
	WebProxy__ctor_mCD69F94F99FAE8B45E7983EDDD7C8C8FB82F03B6,
	WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m80D2CE0C8665B8D1E6CBCAD584496A87934DE312,
	WebProxy_GetObjectData_mB8AB2DF20CBEF664997055463E7C4639E43BF52B,
	WebProxy_get_ScriptEngine_m0B6FE570183127FAD115C72CBC6BFFF5020004DF,
	WebProxy_CreateDefaultProxy_mF54A2CCE4E97B5A463DD71DCEF0E7A2A9C1265F3,
	WebProxy__ctor_m0D1F873D2441832F41295266069C0887BBD43641,
	WebProxy_UnsafeUpdateFromRegistry_m450A4700AA84B7A0C467365724AB9926F6881167,
	WebProxy_GetProxyAuto_m72DBD46E29CD88F40BC0B5D375BB8D30018029BC,
	WebProxy_IsBypassedAuto_mF4D52FD050AC1CA1672AE503BD23B68794CFD60E,
	WebProxy_AreAllBypassed_mD0ED2AEA81FAB6B141A13433406C53A9C8F10F59,
	WebProxy_ProxyUri_mAC61DB0E0378F9FE1ED4CFB5ABB61331312FB85B,
	AutoWebProxyScriptEngine_GetProxies_m39AEDFB157EFDBE7CE80A569565EAFEA874AE381,
	AutoWebProxyScriptEngine_GetProxies_m0EC7B4AB41D5BDC4DCBDF2CAB12EAF6CAFFD56D1,
	HttpApi__cctor_m25500D20CEF836B5A6CDA8617F258E5E1B36E292,
	HTTP_REQUEST_HEADER_ID_ToString_mA04F9029112EC556EDFEA391089A880B12C0CCD1,
	HTTP_REQUEST_HEADER_ID__cctor_m7667A781C0701D5BC7191EA0C5D9BC34705C1C51,
	SecureStringHelper_CreateString_m713072716339E2EE83265145F2F9FEEA105428C5,
	SecureStringHelper_CreateSecureString_mEB7FEF36DD2FD2DE189C394068B70EA57F56C6D9,
	ServerCertValidationCallback__ctor_mF3AC814542EED45987465791FE7846DE2A8B5603,
	ServerCertValidationCallback_Callback_mF04B81117BD337FC77BDB94B8EAA8B8B99A4D72C,
	ServerCertValidationCallback_Invoke_mDDC4DA8F50134EF50257E51B53BE36732550C7E6,
	CallbackContext__ctor_mF5D13B557A13193C357723E572E78E52F108AEB7,
	AuthenticationManager_EnsureModules_mBC5D1F04AC64C8BDE47ECD71540869384D5BE2FF,
	AuthenticationManager_Authenticate_m7A3395F4476A5EB3B63113925740318AE2FD0772,
	AuthenticationManager_DoAuthenticate_mF144BD702315E9EA9229EE6E5A64D80EED2464F2,
	AuthenticationManager_PreAuthenticate_mC833636F5B4F1628E562BF5D2EC0AF32C9B739E0,
	AuthenticationManager__cctor_m7C35169A2E8805181AF003C69A04ED50F8FBC3D2,
	BasicClient_Authenticate_mEDF29E1AA7FF454BD66A7666A50184A0BA6C2B76,
	BasicClient_GetBytes_mE2C83F9E3D486DCED7C0C12AD0BA2474ADBEBF58,
	BasicClient_InternalAuthenticate_m2EF794B63CA17580CFC5C491044C7EB89A5DFBCC,
	BasicClient_PreAuthenticate_m7092556C7F17020CF7771E907CA1C1D4A2FF3F38,
	BasicClient_get_AuthenticationType_m7DD0FAFA34F73D71F5787E28A95ED4DC0754379A,
	BasicClient__ctor_mA1E74A0E4BC0FA70AF8679D1496E29A8D7934949,
	BindIPEndPoint__ctor_mF27083AF738308137AB340ADA66696DEAD4FE3C4,
	BindIPEndPoint_Invoke_mDA96740B189FB74B6A3425E8A8A0112678D171A3,
	DigestHeaderParser__ctor_m89162972D1A691B65C14B5402683FB3C2FB4CE7E,
	DigestHeaderParser_get_Realm_mA92099ECCCB683BA4490769F9E0DD80E925DE989,
	DigestHeaderParser_get_Opaque_mA5DEB9241930B6E980B97255460FDDFADE75459B,
	DigestHeaderParser_get_Nonce_mAC661197509F3A8F50FD2056BE6DA476F54FFA18,
	DigestHeaderParser_get_Algorithm_mFB926080495CB2ABD8298568D7DBF8245DDED90F,
	DigestHeaderParser_get_QOP_m5796E6AFE8914BAD188B77C7F80D01BD4567C443,
	DigestHeaderParser_Parse_mF5F114E586CB7BEA50BD14AA20438DA7CA1D19CD,
	DigestHeaderParser_SkipWhitespace_m83A2E761FBB1290AFC5CD53130CFA60D0D5B67E2,
	DigestHeaderParser_GetKey_m03193506B7977BE72195ADFE3ADB5FE5C0B205D8,
	DigestHeaderParser_GetKeywordAndValue_mB0FCB83A78B360CBA9CEE1A0E64A6D8099A5A235,
	DigestHeaderParser__cctor_mA2DC2061CF8179977827EA19CF2B753FE2904CE5,
	DigestSession__cctor_mA876EA67B0596D7097D1F951AEE5535A34891046,
	DigestSession__ctor_mBC472E7D777C2734C1BB6A1CB8A6A3CC05A1A100,
	DigestSession_get_Algorithm_mB31B9ED4EBCAC2093680C9F17BBB52B39F298D5B,
	DigestSession_get_Realm_m91E2F1AA08F29D0B6A0D01892C5FDE31DA48FF88,
	DigestSession_get_Nonce_m8FDB05DDBF322A52A33A47C1B68117ACA6E196FF,
	DigestSession_get_Opaque_m3D8A178D0D39B7997956D18FCBCB1D648437A8B3,
	DigestSession_get_QOP_mB2876A36998E6B62399BAD9E7CD3C52EE2F9FBB1,
	DigestSession_get_CNonce_m1EB2C04F305C4D6EB9C6A9C6FDCB0C7448072BD4,
	DigestSession_Parse_m9F496F9394081988C708D66D7D4A20AB013D0044,
	DigestSession_HashToHexString_m361FB17D751CF79D6653EA3B33133269C5551483,
	DigestSession_HA1_mF32650BB006D375D5AB3F441E308CD3BA5BAC01E,
	DigestSession_HA2_m6E6CC00104804C9FE68FEFF0BE4B241AD7BCBF1E,
	DigestSession_Response_m5C59CBB9D15FE06153945D5A977791CD65E32F31,
	DigestSession_Authenticate_m820DC43ACC7FBA2D3CF80998301C130826B29844,
	DigestSession_get_LastUse_m1C892CE95B0E4C48CF2862FF19EB253F69FDBF35,
	DigestClient_get_Cache_m1ED967FA785B68D8E0E7A673965FB4AEAF7199A1,
	DigestClient_CheckExpired_mA93FEFF9CC4EE37D447BB2C5C9A9FC039F492FF0,
	DigestClient_Authenticate_m0F43DCC4896D346D6AC5CF0B1835A3048028A76F,
	DigestClient_PreAuthenticate_m662ECE67D74E24DFD4DA00891379156A0603981B,
	DigestClient_get_AuthenticationType_m3088368B9DC55E69D09F2413C16180138018BC42,
	DigestClient__ctor_mEF363337211025F9FF45487F42B75794759A801B,
	DigestClient__cctor_mCD15E0F5AD318C7B6C913B035A0C08B14AC34C46,
	Dns_GetHostByName_internal_m2538DE340BD4D2D3B6A80057E6A528B89A3D4F21,
	Dns_GetHostByAddr_internal_m6DBC90F0916C6AF585F088270CF46958AD6D8F26,
	Dns_GetHostName_internal_m0146430415EF65E6B051BA4297C59C577E6AEA8C,
	Dns_Error_11001_m23687C2F5E4CB975F023D3775A1E7DC5B61DB83C,
	Dns_hostent_to_IPHostEntry_mC5D77A6DE5F97D1A47AD86CAD4F69FF780A12159,
	Dns_GetHostByAddressFromString_mE3A65EDABDD9DBBA0879B21F4A545BA7613683A8,
	Dns_GetHostEntry_m01156278E5CDAE38B7E1B2EC617F505A4B836D02,
	Dns_GetHostEntry_m09C47D2D4329E24D56DCA5BDA6D4F28FEC45EC87,
	Dns_GetHostByName_m554E787DE7A847C2730E1BE8F74C56E9594C3D3F,
	Dns_GetHostName_mF728787FF8A38620054B934FD08E021460A7C14D,
	FtpAsyncResult__ctor_m4E85B95A228569C6AC0ED5195884770F1C0C2FC6,
	FtpAsyncResult_get_AsyncState_m8BD267B85A2A145321420582AB4C8D49323FC18B,
	FtpAsyncResult_get_AsyncWaitHandle_m78F44D9204B1EC74E82D9144918A64737255187B,
	FtpAsyncResult_get_CompletedSynchronously_m906804774D418DCFCE4379A908196662EC6FB4A3,
	FtpAsyncResult_get_IsCompleted_m5FF995186933F3BA66105C4F6E0E96AD08473C12,
	FtpAsyncResult_get_GotException_m93C05C830E3F59871DB6F8C6E36C81EAD122C7AA,
	FtpAsyncResult_get_Exception_m457173F8A721C385E888AE5E9A5F463CA559138E,
	FtpAsyncResult_get_Response_m5D1A596DFA255FB22FEEA9DB0B12AD0C578CF372,
	FtpAsyncResult_set_Stream_m24E44F3AE35589D7D478D12FE7864DCA6FB21718,
	FtpAsyncResult_WaitUntilComplete_m06A75502900D0BFA47399C0D33074FFCED9315A8,
	FtpAsyncResult_SetCompleted_m3CC4806B14D76D46E8637DB0EEBA950AA01E61AC,
	FtpAsyncResult_SetCompleted_mE407445A24BBB44A4AD1B08F176B9F856A1703A6,
	FtpAsyncResult_SetCompleted_mDE601AEDEB48DB8FB64E4A0919487B999337A7DA,
	FtpAsyncResult_DoCallback_mD3F4E5CD082ED7A26D78F533B6B8551588484741,
	FtpDataStream__ctor_m0D04EE8797AF05DEC33F199DC03A6E3BCFEAC40A,
	FtpDataStream_get_CanRead_mB136FDA74BD17ECC05F810CEC8DA8452725F88BC,
	FtpDataStream_get_CanWrite_mAD89E9F515C503810E61BB8F044CF512DDD9E0EE,
	FtpDataStream_get_CanSeek_m16CFE4B9386DA93BD72857FD3DDAC124B68BEEAA,
	FtpDataStream_get_Length_m41102D2823EC5DA138301485C9A96DA8BC507614,
	FtpDataStream_get_Position_m61B62F61A716965679CC54C94B1C16E4694CD957,
	FtpDataStream_set_Position_m079639CACCF2F27743CA7213A0DB8A64759D04B0,
	FtpDataStream_Close_m2994645818E1892A088FBDCA8FE2029698CA5EFE,
	FtpDataStream_Flush_m68DD6058C64DF629BD9E77C15821CE07E4CB8157,
	FtpDataStream_Seek_m14D6F555BAE0811E39C12619CED96986472CABC7,
	FtpDataStream_ReadInternal_m37AB01359804474D7AB8E9EA68B44C0348980B3E,
	FtpDataStream_BeginRead_m5164D1F47EBDF439C369ECF12776AFF3A721FAAA,
	FtpDataStream_EndRead_m0C22E9C40BBBCBFA9ACA9D672059F8E3A852339C,
	FtpDataStream_Read_m80A22ED0497EEACE48277E18ED0E9B4190542D44,
	FtpDataStream_WriteInternal_m75C61600719DFA6970DC97AB5510FC3B66E2317F,
	FtpDataStream_BeginWrite_m5C92FBF9A19E02023A289311E0BBD2647F4D64FF,
	FtpDataStream_EndWrite_mC462BE976E9BBDD4EDD8CF8DE0EC5E9224973CC9,
	FtpDataStream_Write_m5B917E5BAB484222765206736846B9816A835183,
	FtpDataStream_Finalize_mF2CCF562A760DD1E19A01F26C8F0FE9A659AC051,
	FtpDataStream_System_IDisposable_Dispose_mCB31301C6E8B5BD5993CAD65FD8B429EAE817F9A,
	FtpDataStream_Dispose_m40A248B7B3B4AA751449298E068A48711AF2437A,
	FtpDataStream_CheckDisposed_m4C268B1A3D4971528BE4CB7A7D13998FCD36506E,
	WriteDelegate__ctor_mE3ACD413735537F95E1FFBFE55828874421EED3E,
	WriteDelegate_Invoke_m606B74F2B74505874614E65BB41D146DB6679095,
	WriteDelegate_BeginInvoke_mBE5883BEDBEC5E6B1578ADFCE8D977C3A547575B,
	WriteDelegate_EndInvoke_m0D6B2C8201F837EE8AC6C38EFCC8E4D646BB361A,
	ReadDelegate__ctor_m801629AC172220BA2426EBC9FBABD9B646545E56,
	ReadDelegate_Invoke_m7D90C040C37AB216FD5BEAEEDDC42615A2289090,
	ReadDelegate_BeginInvoke_m4553D0969D0F03811F79BE9F6A9E303B2758A730,
	ReadDelegate_EndInvoke_mC8A99411E7F410288E998A01744E40FC4A57E728,
	FtpRequestCreator_Create_m82E124A7B920BEA5FAB9CF5DDA14B24DDD8D7FE4,
	FtpRequestCreator__ctor_m3DB914BE12BDA428301625BE3E772AC0405B535A,
	FtpStatus__ctor_m331E4573150926CDA6FAB237EA5653F15F0E01D7,
	FtpStatus_get_StatusCode_m240BED357998C87889C93C28AD3D975080A260FE,
	FtpStatus_get_StatusDescription_m9FCF79AFD4944ECD43F260BA33782756C7903499,
	FtpWebRequest__ctor_mE322968A58EF47DADD907F88EAA7FB4E00543B77,
	FtpWebRequest_GetMustImplement_mFF269B9D5592EC1DE3BAA8F42FFE1E8FA368EC75,
	FtpWebRequest_get_ContentLength_mAF7452EC5E6497F2E093A56BE157B27EF30AA052,
	FtpWebRequest_get_Credentials_mD7E41D3F3E9D53C87C8FBC639554C134E834B5DA,
	FtpWebRequest_set_Credentials_m6BD777D7820D5BBA97E49B2A480420AF2DD79B9A,
	FtpWebRequest_get_EnableSsl_mE30506F987A04EB9771FD530066BC18A9F2A7ED8,
	FtpWebRequest_get_Headers_mAA9F97EA5BF0115BD58AEC6E4E9C610643C5F031,
	FtpWebRequest_get_Method_m76600B77DC79C16B5ED7E4E8A8D8998B82FBD506,
	FtpWebRequest_set_Method_mC770F8F66E7CEE6C513DDE38D97D50CC7E5C0560,
	FtpWebRequest_get_Proxy_m58F2BDAB196B855C65E59D432B5C0760C0E0AF21,
	FtpWebRequest_set_Proxy_mA142CDA01AA7953FF40A1448B98BFF8845D973BF,
	FtpWebRequest_get_ReadWriteTimeout_mB6F0DF85418ED4107E9AA448C46B289C3C36CECF,
	FtpWebRequest_get_RequestUri_mE435FBA45447DC0D5826C9128DCD99474CE12D0D,
	FtpWebRequest_get_ServicePoint_m18C759570EC5DD4D44264BEF53356637B1142F7B,
	FtpWebRequest_get_UseDefaultCredentials_mAD856EDBDCF69FB4ABDE74722A1D446C59000A86,
	FtpWebRequest_get_Timeout_m58C5D209E4958C3F49DEA797966FBE802BE33010,
	FtpWebRequest_get_DataType_mF6681117F91646E791FB2556DB26962D85651F1C,
	FtpWebRequest_get_State_mBBE80E64A8F04964B76528B84EED588824890600,
	FtpWebRequest_set_State_m0814DE4544E0DE0FA446C3C49A5D61C5EF5E229A,
	FtpWebRequest_Abort_m692F58C2CAE79DF9BE85C883804FBDF8ED3ADF8E,
	FtpWebRequest_BeginGetResponse_mEB30D254D530BA29140C679AA1BDE6F8D472DEBF,
	FtpWebRequest_EndGetResponse_mB67129902D8A7767D96CCECB5A1B5B25F8C1EBB8,
	FtpWebRequest_GetResponse_m2E40BD4F0CCC5D9B8B6D5C20509CE9AC5EE2FFFA,
	FtpWebRequest_GetServicePoint_m369915FEB96529F5E1DBEFE832A091D9F3B53D4B,
	FtpWebRequest_ResolveHost_m4BFAAC8F188CBCC0E2D49CCB8D0BC756B8395C62,
	FtpWebRequest_ProcessRequest_mC6F332082E298184271C966BFDBA5537ADE9A2BF,
	FtpWebRequest_SetType_mFDAE78155ECB584AA68D41DCAEB5AFD83CF8636A,
	FtpWebRequest_GetRemoteFolderPath_m57A1BF695209BE691A1656E1F02E4CA4A64F7EF5,
	FtpWebRequest_CWDAndSetFileName_m6CEF2693EFCCC700E53430DEADB552ED3E2E774B,
	FtpWebRequest_ProcessMethod_mE613340024C44C2EAEFE71062378325F1F6295B8,
	FtpWebRequest_CloseControlConnection_m3C5233FA9F4473EF597A8653D8E7A93AEC4C0E5C,
	FtpWebRequest_CloseDataConnection_m28B54AE1E2A5B618E8E77DB83EFE0E6EFF9F3315,
	FtpWebRequest_CloseConnection_mAEBBB47BB26F8C8BF7BA465B5EE4E20F96FDDD78,
	FtpWebRequest_ProcessSimpleMethod_mBC422DFE925B1B2CACA07DAEC91F499C2C121FE0,
	FtpWebRequest_UploadData_m9567D9C96FF847FF532FD122E7B4A84FC068B0F7,
	FtpWebRequest_DownloadData_mCB871EECA82AE93A6F5E1248A261AF494771D2CC,
	FtpWebRequest_CheckRequestStarted_m5AC3FB45CDDC221231FD710B981073C813315B2C,
	FtpWebRequest_OpenControlConnection_m082B9F4ADB13B5611801B36D755D1374B2002988,
	FtpWebRequest_GetInitialPath_mC099032D91D4FA69F025C41710ADD386658561C4,
	FtpWebRequest_SetupPassiveConnection_m714596923B571CBA8D744061218217F35A620542,
	FtpWebRequest_GetPortV4_mE66B65FD64DF6E79DC3416D648210CF05BAAB18A,
	FtpWebRequest_GetPortV6_m88D13799C19B9BC3C8F798083EBCB4AD079912C6,
	FtpWebRequest_FormatAddress_m94930DDEFF314661E2735325302A94EA336AD089,
	FtpWebRequest_FormatAddressV6_mD43D5B10E865916D76B8EFD3DFD408FFC83D7ECA,
	FtpWebRequest_CreateExceptionFromResponse_m1AC4CCD5E55962947E6AF924B743502867715A8E,
	FtpWebRequest_SetTransferCompleted_m6DD85C30BC3A5D4A623C31F2AF9DFCA332E8E3D8,
	FtpWebRequest_OperationCompleted_m00D08F9A9861B41906117523627D85C4A1DE8AC0,
	FtpWebRequest_SetCompleteWithError_m6BD21B72584F0E2D12CC797ECF5D26ADAC61C4BD,
	FtpWebRequest_InitDataConnection_m3FFBCF8092CC74B1C8DFD0B35E7EB9AF750C003B,
	FtpWebRequest_OpenDataConnection_m627DEBC2C46A1150F86CB7B134E279C7BFBD5287,
	FtpWebRequest_Authenticate_m2B8E0577D69D8C0C24BB5D4CB62C6357ACA1D0C6,
	FtpWebRequest_SendCommand_mCD940557567706A2143CF32B9CE7EF7AB19B0D4A,
	FtpWebRequest_SendCommand_m8F108E3A43FA1757873AC7E089B5ED659135F768,
	FtpWebRequest_ServiceNotAvailable_m3F2F9791C285D0ABE146BF356096E1B52942D904,
	FtpWebRequest_GetResponseStatus_m12A45B91B01ABA28DCC05ED006ACF8955F9A0EBE,
	FtpWebRequest_InitiateSecureConnection_mB0DD9BA8E2E36CE7E1E9EF49418F06A829805135,
	FtpWebRequest_ChangeToSSLSocket_m0B886C31234A1866D3D746AC830ED9405BE4131A,
	FtpWebRequest_InFinalState_m7980C29355CB780471F3DBB6A43B962D35D681E3,
	FtpWebRequest_InProgress_m23A44C6F2ECC5D5A480C3934A48616360FF68CF8,
	FtpWebRequest_CheckIfAborted_mF18A64E7C0A8BD08F157D7B71926C1562AA66557,
	FtpWebRequest_CheckFinalState_m4FFEEEB78A1D6AA2337A400828FA62EE15617D68,
	FtpWebRequest__cctor_m828B5A5267951FE5E80B4AE153163FCBA4BF026D,
	FtpWebResponse__ctor_mA9C28022A58CAF689B3FB04458E3D6E86ACCBEB4,
	FtpWebResponse__ctor_m3BD8D0E1DE29F4E8C7AB3CBCC0FF4F794752C3FB,
	FtpWebResponse__ctor_mA0C7B694338D843A89A13494F7E959A17DFED7B0,
	FtpWebResponse_get_Headers_m0EC3B53A0804C6442101F3187F141C4ED1EA6D0F,
	FtpWebResponse_get_ResponseUri_m6B5B02E5CF3F53F21100824DA95850AE1AF6A3B3,
	FtpWebResponse_set_LastModified_m6007A54B820FE638A2A3ED8FEDE244FE98B21445,
	FtpWebResponse_set_BannerMessage_m0A94D165356AB5DF576D276ACB7E53D4AD866672,
	FtpWebResponse_set_WelcomeMessage_m2050A8CE4C88FCC004BF72D4753BE32D73A35347,
	FtpWebResponse_set_StatusCode_m89F9F5254D0253B8FB9F67E9109EF15265508E7C,
	FtpWebResponse_Close_m25B6EDDB1321F60623EB7ADA95D0A5A44DAE025B,
	FtpWebResponse_GetResponseStream_m9D103F0115A561706EAD524F43F6CD7296C0231E,
	FtpWebResponse_set_Stream_m8619106017163CF5D45353CE26762D8FB7614FC2,
	FtpWebResponse_UpdateStatus_mE7BEDCE12311FFE4262E68A663823E7C35A9F07A,
	FtpWebResponse_CheckDisposed_m872003FFB3429E7742E1BE4924497C7B42AF2DC5,
	FtpWebResponse_IsFinal_m2CE7E21FBD4A377B069BFFCFB8C57EE1E16BC9E0,
	HttpRequestCreator__ctor_mA6D07F56561A4C93100584384CCDED5171C45F50,
	HttpRequestCreator_Create_m25D9085B7B59931A1A4DBA18DE828D8FA376A139,
	HttpWebRequest__cctor_m5B96D0A29F3F6BA4C78CC0DE32C81A78A75767EF,
	HttpWebRequest__ctor_m37C92DEFA8C4C0282FE5B11E065D65C25CF8B91F,
	HttpWebRequest__ctor_m94F348B8E4338E5D0404A8425F5F43B339B322BE,
	HttpWebRequest_ResetAuthorization_mC7AA3C31078EA81423351F8DAC62F68E9F15060E,
	HttpWebRequest_get_Address_mC0579CE0CED2FDCBF69FAF3232706F7994EAC20D,
	HttpWebRequest_set_Address_mF1FB65319326DEC98CD2974645708BD5EB4C286C,
	HttpWebRequest_get_AllowWriteStreamBuffering_m1DAB805DEEB2F8EFD85121F1B28646697EF3862A,
	HttpWebRequest_get_AutomaticDecompression_mF4F41C35BE09F1457645769FA0183BE0446C5503,
	HttpWebRequest_get_InternalAllowBuffering_m47A76FBFB1A14D8772FB025A8B7ADA399983D9B2,
	HttpWebRequest_get_MethodWithBuffer_m00882296A2A9AE6BBD49F6922782EE8D6C94444D,
	HttpWebRequest_get_TlsProvider_m6F166810BBCC188276F5E0515133808186E68911,
	HttpWebRequest_get_TlsSettings_mE4E8C9107E0930061977FA03EE87DECE51C503D9,
	HttpWebRequest_get_ClientCertificates_mD9F70A07C623462FC910E764511471D542AB102F,
	HttpWebRequest_get_ContentLength_mDC0C3ABBD7CE8D8D6700312576ABF4550512F1CC,
	HttpWebRequest_set_InternalContentLength_m63B44B8FECB63B37955E43D18BAD0A02322C846F,
	HttpWebRequest_get_ThrowOnError_m67A6F4D03676F55D5A0FB51C5F4CDCC97AB9EAE1,
	HttpWebRequest_set_ThrowOnError_mB232259B74EC15F9E119944A41934D673A7DE4E7,
	HttpWebRequest_get_Credentials_m7F0C956E3B027E40BD988A8929FC67A87A614950,
	HttpWebRequest_set_Credentials_mD0DDC0FE9AB1FBA3F133664E19D11372696D4FAF,
	HttpWebRequest_get_Headers_m2FC7464A722CC94EC59DA55E7ECC459489933AC6,
	HttpWebRequest_get_Host_mE23F8F15207CEF1E64CF212EEA7643185207923C,
	HttpWebRequest_get_KeepAlive_m9D4647C1AAA18E341680BEF0CFF8EFE9B2196055,
	HttpWebRequest_get_ReadWriteTimeout_m205CB5B4385D50CAD93FBD9CA73AFCCD4DE24C2C,
	HttpWebRequest_get_Method_m53724C2BBE6691C96CCDDFF6746C2760D0F97621,
	HttpWebRequest_set_Method_m481863546C0CBBA0336CB6269544DAD7A1A672CC,
	HttpWebRequest_get_ProtocolVersion_m549796C52E9DB1EB8E74EF92E422C7BC427CBA39,
	HttpWebRequest_get_Proxy_mFFD8590DADC6CFC81B90EDD5ED93AF3402EA518E,
	HttpWebRequest_set_Proxy_mA6BC20894ADEA5E308CA89BFD8300B6A6B7ADDCC,
	HttpWebRequest_get_RequestUri_mE3E21CB2D024E94F32EB77715CED6F6B4D9B0889,
	HttpWebRequest_get_SendChunked_m75F75FCEE3F2973A4D391A83935A2E0FA5E586FC,
	HttpWebRequest_get_ServicePoint_m170B921D095437FC5B7FE5920F327F1AABF532D6,
	HttpWebRequest_get_ServicePointNoLock_m302BC1F3A189D46E652B79981E8D29095E5D5C61,
	HttpWebRequest_get_Timeout_m598D870198C70FFA7F73385629E915A935413B2E,
	HttpWebRequest_get_TransferEncoding_mA49328310D1BC2799022DA2E65B85FFDD8302F7C,
	HttpWebRequest_get_UseDefaultCredentials_m6CD88BA33D7D837FA5D41F53D074F53DC94C76CD,
	HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m57505F8056F2DC380C49EF95971438CCD8C3F307,
	HttpWebRequest_get_ExpectContinue_m65FAF05A8DBCF3D72A6A1F3044CB4FCD00B118A6,
	HttpWebRequest_set_ExpectContinue_m63F438B00F3D621D52077E8D4595A88BEE7904BE,
	HttpWebRequest_get_AuthUri_mA9CDA63656394B69E2EE031330CC77C3BB570052,
	HttpWebRequest_get_ProxyQuery_m40AC053B4EBE5E2A5257D92B7FD353D19104E53F,
	HttpWebRequest_get_ServerCertValidationCallback_m8822E8093BBEE23482561CCB65D6AF3B7B1B464E,
	HttpWebRequest_GetServicePoint_m936C89220DFB9BE810A223E84E36E6D933510DB7,
	HttpWebRequest_SendRequest_m9CFD21B34BCCA09123225ED98ED24DF1984B3130,
	NULL,
	NULL,
	HttpWebRequest_MyGetResponseAsync_m78CC847A96C7F759F6AE3A9CC1E203DC6BCCFB70,
	HttpWebRequest_GetResponseFromData_mD04B5CA08B449F9C962012CAB3611C4948E8875D,
	HttpWebRequest_FlattenException_mF0D9565F401231C7F7C6A973F829CCB37E34C3EA,
	HttpWebRequest_GetWebException_mB699B6186A7651571D7DFE937DCF59EB74427377,
	HttpWebRequest_CreateRequestAbortedException_m41FEA3FF8090E01D94158036B9F7FD367D7146DE,
	HttpWebRequest_BeginGetResponse_m6FA3A32A7BCF6B488CD863F5472B38E5F06EB79D,
	HttpWebRequest_EndGetResponse_m240591D6112B3B1709E99659811F773B837F0F79,
	HttpWebRequest_GetResponse_m2CF2E0658F4E65A66F6ABD02E976B7FFB5EAF73D,
	HttpWebRequest_set_FinishedReading_m440CD437FD61FD266FD2132AC1476680550DE88E,
	HttpWebRequest_get_Aborted_m038DC4286A2AA32A06EB31C052CDB857B7ADA31E,
	HttpWebRequest_Abort_m12EF7197E8CD7183C44EB3A9EE57EDB69EBF7FC1,
	HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_mDB54A2BCCE38E278C44D3A136F6988CEEA92F5FE,
	HttpWebRequest_GetObjectData_m6C3C1BB107DB72006CDF96892EF910400CFA9266,
	HttpWebRequest_CheckRequestStarted_m3AA735AF2A7257EF984729EA0E938368F83FCE41,
	HttpWebRequest_DoContinueDelegate_mE011EC2040FC3C1CCB2C4A5857D4B380EA53C9A0,
	HttpWebRequest_RewriteRedirectToGet_mFEAFF0F6D013F3D5F8FADFEB393C08ACB3AF4BB8,
	HttpWebRequest_Redirect_m1B29FDD7A5E85A9B79C87E1A1AF64C428E11F2BD,
	HttpWebRequest_GetHeaders_m445286DB0D71DC60C6D758ED0F1CAF32163501FA,
	HttpWebRequest_DoPreAuthenticate_m68D0A70C954476778222049FBDA8FBD3FE8AFA98,
	HttpWebRequest_GetRequestHeaders_m3E883236EB532FCA98675E243EC583434ECF7661,
	HttpWebRequest_HandleNtlmAuth_m33D4EB84E92290ADD0AD9EBE369F5E5A7259CCE3,
	HttpWebRequest_CheckAuthorization_m9D4930C90DD3E7B6B5ACC3EEFAF794FF12F519B4,
	HttpWebRequest_GetRewriteHandler_m8025064C747A834952F2B11F4E1B94D5855FE498,
	HttpWebRequest_CheckFinalStatus_mD069A9D0FF6C6DA943B3D3BF9B19806956EA0FF6,
	HttpWebRequest_U3CGetRewriteHandlerU3Eb__263_0_mA8F141A7EF4407A60B65C7F1DED64F9AF8F6B0DA,
	HttpWebRequest__ctor_m1AF72A90B1265EE52584D72B1B225DCC95E62722,
	AuthorizationState_get_IsCompleted_m60FA1039CD41A7AD50984DADEA562F82E60470AB,
	AuthorizationState_get_NtlmAuthState_m93CF64385E0E77039CF782E319EED9EC96ED063C,
	AuthorizationState_get_IsNtlmAuthenticated_m901CE42BD2DB28DD9D6605500D8E4D360309DA8A,
	AuthorizationState__ctor_m6DDA04B33B8A520B93FBDF8AC4BBA3B7CCC03CBE,
	AuthorizationState_CheckAuthorization_mD23E50FD196D22054A710B9200FC6510D5098EA5,
	AuthorizationState_Reset_mE7C4981CBBB1630D605A83D09D74D7C56AE0B9B9,
	AuthorizationState_ToString_m6426C6029B83D041B9F1B9871A4541F70A2EFC00,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CMyGetResponseAsyncU3Ed__236_MoveNext_mFBD2D479D77244D04F25FB873DBC765EB9CBF79C,
	U3CMyGetResponseAsyncU3Ed__236_SetStateMachine_mAFA7F97DD138F2C8984F7BDA6EA2FB2E5F6D021F,
	U3CGetResponseFromDataU3Ed__237_MoveNext_mAEE81AAA2DC7E3FB0B2E7631C6EC526E38C2AE0A,
	U3CGetResponseFromDataU3Ed__237_SetStateMachine_m8B33A8FE618AA966D8ABD2149C19C4E6DD568F8A,
	U3CU3CGetRewriteHandlerU3Eb__263_0U3Ed_MoveNext_m31240B9D21116E276C0ECED04A4E62161F0EE147,
	U3CU3CGetRewriteHandlerU3Eb__263_0U3Ed_SetStateMachine_mE374C4F526074CD29C9C6EB7F2B6419861F80077,
	HttpWebResponse__ctor_m16E803C4AA1579083FF43CED5ABEEB4BAF6CF15E,
	HttpWebResponse__ctor_mFBB2D6E983BB1443E80D8D600E04D092B59F078F,
	HttpWebResponse__ctor_m7AD80C3EBF0E8B5AE39E70039B8DD38768D6EBF3,
	HttpWebResponse_get_Headers_mB3888AD82B4F3565A473C62EB89C725B1DCB5A4D,
	HttpWebResponse_get_ResponseUri_m685CEFFDB32B2D352DED9FA8CB4E3B5513AA71CB,
	HttpWebResponse_get_StatusCode_mE53A864C0F6C64902E9E0414111C4843D0BF3D02,
	HttpWebResponse_get_StatusDescription_m3C28B4A3A77EAF3AC9ACB30CA5870E3BDE284330,
	HttpWebResponse_GetResponseStream_m62CB2C514EC40749A8E3CF0A2D29D1CB136CFACA,
	HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m5C290981E0AA728B2D9E4DB14122789EA8F157E7,
	HttpWebResponse_GetObjectData_mB6558A01B7A601BDAB1A2C345937B5DDFC2EC3E8,
	HttpWebResponse_Close_m335C79B7B3B30A0D7171C48741F46D628E10E23C,
	HttpWebResponse_System_IDisposable_Dispose_m9D2B039C1D8B4015D6E43455A151EA39E142C703,
	HttpWebResponse_Dispose_m0FF01C40481F4C0BBAB0FC3CE132BAAF6103AD55,
	HttpWebResponse_CheckDisposed_mA093612C4AB921FEACAF615EC05A586E90BAAEF4,
	HttpWebResponse_FillCookies_m98797F0765051578D6D76731359555CD25E5DB3B,
	HttpWebResponse__ctor_m6F0B7400E052741717E540E682479B23788F7714,
	IPv6AddressFormatter__ctor_m724F22E5D122B2F5FCD830B4B8D5995A69169663,
	IPv6AddressFormatter_SwapUShort_mD8495BB2ECDCDEA49DA0F4C4E82511494CFF43B7,
	IPv6AddressFormatter_AsIPv4Int_m595ECC7763D02462B0FF1327A629F5BEF53D9CD7,
	IPv6AddressFormatter_IsIPv4Compatible_m0E070C1C8D153AF6B8CB76231CF01F091EDD06E3,
	IPv6AddressFormatter_IsIPv4Mapped_m17D6698E8EF2F468DCC0D3828EDB92C2083CE0DF,
	IPv6AddressFormatter_ToString_m4758E87FE39266AB9A24AF592D8D3B3B703C7735,
	MonoChunkStream__ctor_mDCC2D6D4EF6C36404655FCC1A2FFD3362CDF5206,
	MonoChunkStream__ctor_mCC2B9F0BC8A2BCAFD5C012FDA2A8DB7BD00CF70E,
	MonoChunkStream_ResetBuffer_m096F58F6E8FA887B651C4124105455392C680F1B,
	MonoChunkStream_WriteAndReadBack_mAE8A5A7FB348952B005B409DE4A88C745BA8625B,
	MonoChunkStream_Read_m8FCB52AFA194A53AF181B7CF1F3889CC455AD134,
	MonoChunkStream_ReadFromChunks_mD7FC45820FE1083D3D1F27E0E3F09FBF66989B54,
	MonoChunkStream_Write_m94778E903E092C7364123E7B9B5C49A4998FF157,
	MonoChunkStream_InternalWrite_m52BBC6C1B7A2D8F451A99E0532CB059609783BB9,
	MonoChunkStream_get_WantMore_m25DF1BFCAD7BA3FE426BA8BC2396685743F4D87B,
	MonoChunkStream_get_DataAvailable_m08D62EA4EA8451D4DDBE9E8CFD8B00951B9DCCEC,
	MonoChunkStream_get_ChunkLeft_m79B084EBCE037A0320814129BB41AE0FB1367D37,
	MonoChunkStream_ReadBody_m86B3CC978ACAD5573923E8AB4B4A34F958F2233B,
	MonoChunkStream_GetChunkSize_mC0DBEAA906BFB23AFF2AFFEAD237B75CA5C13270,
	MonoChunkStream_RemoveChunkExtension_mE17D1215C046B285A923A34BCA4C449F2F88882F,
	MonoChunkStream_ReadCRLF_m38921B70E4B83DA9A32C922BC566F8C6BFA3507C,
	MonoChunkStream_ReadTrailer_mA190877FA8AD218DEF2A6301ADD30395EFC0B657,
	MonoChunkStream_ThrowProtocolViolation_m669527275859A66266ABBC930FD42F03A265716F,
	Chunk__ctor_mF202CB02BA64F497A48650F3FA077FD5DCC07655,
	Chunk_Read_m8E7D3484239FA34941B9ACFE6E7A01FF8B298B0F,
	NtlmClient__ctor_m15C02BC0F1AF986CA239D4FDD70F3F7259AC3E0D,
	NtlmClient_Authenticate_m31D3B3D7B8B49703C6E481D4BD52191D6C736864,
	NtlmClient_PreAuthenticate_mDB65713088A839B4520E0B42E72242C6D73DB453,
	NtlmClient_get_AuthenticationType_m14936001CFF19B0901D566983730807EEFC02CA1,
	ServicePoint__ctor_mCB9C3306C21E33715C63BB6DA2A5E14F062F5B4A,
	ServicePoint_get_Scheduler_m8D88559C1664084C10D97FEDE33CCF227798F374,
	ServicePoint_get_Address_m015784C41DB6A35AAF028D645EFAFF67A03F148D,
	ServicePoint_get_ConnectionLimit_m0CC608F18FE94755E430FADADD650D853FF22AA4,
	ServicePoint_get_ProtocolVersion_mF8178863DE2AB400CD72BE253D17E0619DFA4224,
	ServicePoint_set_Expect100Continue_mDDB9FC522313DDC57B1B348B711CF888516AA4CD,
	ServicePoint_get_UseNagleAlgorithm_m381A071F1426513296B517C39D29F26C81E42572,
	ServicePoint_set_UseNagleAlgorithm_mC025F081ED6C7014665EB20388747D12476D03C3,
	ServicePoint_get_SendContinue_m7DCF3A3D65BEB2543979D8892941E4B3BAE175D3,
	ServicePoint_set_SendContinue_m5480B6A8C6478BA620030302C861A842DF9F6AD3,
	ServicePoint_SetTcpKeepAlive_m225D363A70F7971133192A44745C8D284DE19084,
	ServicePoint_KeepAliveSetup_mDC710830A237760D228FECDF53E7CA9FA683B8CB,
	ServicePoint_PutBytes_m8AE9C9FFF67808769A76CCCD2CB5582329751667,
	ServicePoint_get_UsesProxy_m518ED2EF0BDC87C490AB426BC455CD11296DED30,
	ServicePoint_set_UsesProxy_m48157456CF1FF842A098916FE6F485CCA2FB9B62,
	ServicePoint_get_UseConnect_m114AAE62269A6D6A4C1E2687C00A3DAEF89BFE20,
	ServicePoint_set_UseConnect_mD34B72F3B4F0532EB58DAB315A58143E5882A81F,
	ServicePoint_get_HasTimedOut_m03A85D9E4DBA7955DED1DDD71657AA0FC239CCC1,
	ServicePoint_get_HostEntry_mE028095CE8AEB4B93F382356BFB2CDE00F1D850C,
	ServicePoint_SetVersion_mC457CF4440C824FDBC565D67D060D92B3C1A2A89,
	ServicePoint_SendRequest_mB271F49FB5B3DB5DA556253585CC150A51E7C9CA,
	ServicePoint_UpdateServerCertificate_mA5119A83F8A76B1098E4C0B7BEACED9F04288D10,
	ServicePoint_UpdateClientCertificate_m1C24F73E61F345E535D184110A3625B2EAF8C6AD,
	ServicePoint_CallEndPointDelegate_m4AA30128ACB46BECF1D16A2AE84BB0A26FD4EDBE,
	ServicePointManager__cctor_m8067E1B281672361100384C9FD668FB793EEE44A,
	ServicePointManager_GetLegacyCertificatePolicy_mBD5DCFD553FEEE50F78A70BAB63F95ACF21A25FC,
	ServicePointManager_get_CheckCertificateRevocationList_mC0CDB007A91C59573B664FAB178B756F78561534,
	ServicePointManager_get_DnsRefreshTimeout_m055EA4A9A2A57D3A43DAC32D2228144865E02430,
	ServicePointManager_get_SecurityProtocol_m30A1F0981535D5FCD93219E4759C13136FE1DACB,
	ServicePointManager_get_ServerCertValidationCallback_m9436D7CB2C84F88A2F878C700D5B3B34B85B911D,
	ServicePointManager_FindServicePoint_m8B83339FF47FF2FDB7671C114BD56B71743ED2F4,
	SPKey__ctor_m30BE1C73F21DEB53327E47A0EFDC05D39726E2FB,
	SPKey_get_UsesProxy_mD847C0A3FA96B142882A340E221D4C4AE6BE3E76,
	SPKey_GetHashCode_mEF88EF3AB042F1A3B7BE41171F53155177ED0B4F,
	SPKey_Equals_mDFDEB4BBCC2EE4F43F4F36CBA81A35DCFE1CA114,
	ServicePointScheduler_get_ServicePoint_m846DBB399E3CAF876D0AD23483D93D7F26A62F91,
	ServicePointScheduler_get_MaxIdleTime_m21249A6395FFC3A9227AD0918D8DB5056EC44E53,
	ServicePointScheduler_get_ConnectionLimit_mF395BF30D71999C79F2C454D1BE7E730A8522BA6,
	ServicePointScheduler__ctor_m31580DC08F3E2491616C5067921AD44899E58004,
	ServicePointScheduler_Run_mE03FE3F967A5517DE94B6D585C0A200A971ACBD4,
	ServicePointScheduler_StartScheduler_mAE6B11E28FC8D4F01D0536BCAE8604FD594D0D27,
	ServicePointScheduler_Cleanup_mDD1F681510B15A1F4E6FBAEEF9A89631C564BA58,
	ServicePointScheduler_RunSchedulerIteration_m2117263966C4AE978C0E8B775632FD7DDD0FE2AB,
	ServicePointScheduler_OperationCompleted_m5E723C9B5DF2238A5A58A1834CDF97E2169BE7EA,
	ServicePointScheduler_CloseIdleConnection_mCC2356BF17FCBD9027E14AB8B2FE22CD2DAC689E,
	ServicePointScheduler_SchedulerIteration_m31123036C09CCE9ED9EBC56F1C96E7F39000B1D8,
	ServicePointScheduler_RemoveOperation_m463750D1CB7A1C6AF8C03C0DA884052EA232D781,
	ServicePointScheduler_RemoveIdleConnection_mFAC34695888DE0B3C35A2D4181AE3050861431BA,
	ServicePointScheduler_SendRequest_m6915605C55AC898BF656A67E50AE2F848C6B1E33,
	ServicePointScheduler_GetConnectionGroup_m66B4204E51C9943A1AF26EC8AC9F68A15EFEEE56,
	ServicePointScheduler_OnConnectionCreated_m46A2D1AF41524B1B1AC74E5921D2908D9A7A1D4A,
	ServicePointScheduler_OnConnectionClosed_m403D809F1E2F0CEBF65D98191648149A018678C7,
	ConnectionGroup_get_Scheduler_m772B4A995312A0EBD1568471CDF17F520CB3F39C,
	ConnectionGroup__ctor_m374EEC30B4DB339157E1FEFE8D9908F1602B5103,
	ConnectionGroup_IsEmpty_m49E444CB48C362DC3E0829F0DDF9C22EB90E3190,
	ConnectionGroup_RemoveConnection_m4E4DFFE07C6E0005F796957B2BA4D5F4D3D6241B,
	ConnectionGroup_Cleanup_m60D92E1B982C50094D7E9FE55C9B847016E79A1A,
	ConnectionGroup_EnqueueOperation_m8983F33FE2FA7D64032535682A1D31CE680BB8E6,
	ConnectionGroup_GetNextOperation_mF20C309F1E74118AFA48F7D177CCDF0927005E4B,
	ConnectionGroup_FindIdleConnection_mBDC3AA72FD05E858F1C345C7FB6C1B143C1AEAF8,
	ConnectionGroup_CreateOrReuseConnection_mE7153E7911E2165B717181367C4111A7639C7B98,
	AsyncManualResetEvent_WaitAsync_m1EFF97EB9E343AE6CE5842B6D1E72A46AB236BDF,
	AsyncManualResetEvent_Set_m3D541CCC4B5CB8393A63D23B9E5F104C85258549,
	AsyncManualResetEvent_Reset_mF5E53CF13FD2EBC3563AF67D316307671B58854F,
	AsyncManualResetEvent__ctor_mC5C973C7ACD4C923325E8B98C3E4DF293C08C757,
	U3CWaitAsyncU3Ed__3_MoveNext_m70BD3156E3C9225DC6FA0051F6F1CFA5C51DC82D,
	U3CWaitAsyncU3Ed__3_SetStateMachine_m3C70A70D68A142473023CE4E99F132863B0B90F2,
	U3CU3Ec__cctor_mF229783494E9F1BE9EB2E4C7D11B94F0AE5FD9C5,
	U3CU3Ec__ctor_m42F5C86E7E31C11A87C17A9FBE7A56B703102A01,
	U3CU3Ec_U3CSetU3Eb__4_0_m7ABBA00DFE7F256F3DD9640FB9A9D68CF5988498,
	U3CStartSchedulerU3Ed__32_MoveNext_mA205AFA620495AA4DFF9C4C0F8BEE0D6A5E7F24B,
	U3CStartSchedulerU3Ed__32_SetStateMachine_mB15C867BE900F84093D5B0C44A2307129F47A4A4,
	WebCompletionSource__ctor_m595FCD0310B0C281ED73DB9F36F9C6FC4507F854,
	WebCompletionSource_TrySetCompleted_m07D00A6E11FA20E08868D2D42D03A55B791E4C89,
	WebCompletionSource_TrySetCanceled_mC2F909347FBD89AE6EFAEA9BF7C9459F69CE9294,
	WebCompletionSource_TrySetException_mBE47B14713AD933391D5C0610CCFB93DB4F1CB42,
	WebCompletionSource_get_IsCompleted_m11970173495B3A157284F06D0FA36F0B86F59CAC,
	WebCompletionSource_ThrowOnError_m9B7E7976E2223C48F992EB5FF6DAD8AE68F0D6CD,
	WebCompletionSource_WaitForCompletion_m37D6F38C911CFAC1045F93A20FD71C52044CD51C,
	Result_get_State_m75D0BFE57D9913EA452CB02AEED40A2C819B6AFC,
	Result_get_Error_mD51240A11BA346DC1DCEE37EA765F7133D764448,
	Result__ctor_m03B9081B8B36569A6D3AA4C37932F5C54B061515,
	U3CWaitForCompletionU3Ed__8_MoveNext_m86A34E1FB02C2D0736D72DFF4FB1D6B05E6775BB,
	U3CWaitForCompletionU3Ed__8_SetStateMachine_mFFB894666023227C9CF56BD8D7AB8D557BF0AF81,
	WebConnection_get_ServicePoint_m4C098A63D94F997688FD4BB5FC568B551CD38645,
	WebConnection__ctor_m32F4B741B160C0724A9B40EE632F3B08D97E9F53,
	WebConnection_CanReuse_m67D480B205585300E85B9F06670BC8F612DD9FCC,
	WebConnection_CheckReusable_m2A8053F16639B650007329BE6ABBA3043224B69E,
	WebConnection_Connect_m5CAD1298E6A1A1E630A008A9A8A198024AA0DBB4,
	WebConnection_CreateStream_m6F1060C833BB1F22C65D0776BEFDD8633AA37CA1,
	WebConnection_InitConnection_m32CEA4DBECE53D6AFC8B0FC2682088112E1A5DA9,
	WebConnection_GetException_m2FBA30456EF75E6FA16A2173AE06AD48095AA5EE,
	WebConnection_ReadLine_m6784631C079E707ACEF53175119FE3AC0DEE730F,
	WebConnection_CanReuseConnection_mF22CE45D40A6AC67849E8509FB3A4D540DAA0322,
	WebConnection_PrepareSharingNtlm_mA5DCD6D29D73A48C9B3BAC40FEEDD26622ABE3B8,
	WebConnection_Reset_mAE0ED7B4E2139686F19310C905B9C065209E7747,
	WebConnection_Close_mB451C06EF8412B688EE8DCBD0B70951B0415D791,
	WebConnection_CloseSocket_m435216C8E7C8EC2B0F7DBFE95A2A4A9D3E7D7B74,
	WebConnection_get_Closed_m694BBD50DC7A2DBAF4310DC3D6CD9B8C484689F4,
	WebConnection_get_IdleSince_mF993001C85933378CC91E97D3F42CD022A49DBCF,
	WebConnection_StartOperation_m2A6DA9F90E247259A9C87404551CCE9A0CA48945,
	WebConnection_Continue_m819B02E671427E9AE55682A79A91DFA4497BA409,
	WebConnection_Dispose_mAA356D7546A523F3FAC8EEC34502DA3EDFD797F2,
	WebConnection_Dispose_m619217D576EFF59E4939308F24595E8F498175F4,
	WebConnection_ResetNtlm_mBD715060318622998A51E76EEF7C4106C18779A3,
	WebConnection_get_NtlmAuthenticated_m7FA737CC04322CCB263FFE93F146FE813F55DB7F,
	WebConnection_set_NtlmAuthenticated_mA30B27A4B2E723C8709C3105F16D62174C559294,
	WebConnection_get_NtlmCredential_mD50351AC608003E09FC7B9A9FDCE975D9D8CFD04,
	WebConnection_set_NtlmCredential_mE981429BEEE9CBBF313915A622447AB3E20E15AF,
	WebConnection_get_UnsafeAuthenticatedConnectionSharing_m9C88624FC7CE2BABF57955A2AD519164CC43D2AD,
	WebConnection_set_UnsafeAuthenticatedConnectionSharing_mFFF3DD269EDE64EE43D52980902C1F5D597AB86D,
	U3CConnectU3Ed__16_MoveNext_mA0B90B92C30BB0285B7B55977D90D52881745535,
	U3CConnectU3Ed__16_SetStateMachine_m22694F920ED2EB556AF7CA8CE687A9DDB5353084,
	U3CCreateStreamU3Ed__18_MoveNext_mB242737C480B2DDB8D6071451FAF6E7828B80ECD,
	U3CCreateStreamU3Ed__18_SetStateMachine_m42351407A9838DDBDC53E29F727A2AAD84D322C9,
	U3CInitConnectionU3Ed__19_MoveNext_m4208190EF7B0009B922D95619E8CDB5882393573,
	U3CInitConnectionU3Ed__19_SetStateMachine_m3D94D0DB6431FD261C02E722F749FA086FE4FC33,
	WebConnectionStream__ctor_mC7B6D7183B609F41FAD8A95719AF880AA69AF096,
	WebConnectionStream_get_Request_m5D249821B6B456CD00D767DD196C6C03F8E524BE,
	WebConnectionStream_get_Connection_m3D2B38E915D22E92361A3C1EA4BE33A47FB21A6C,
	WebConnectionStream_get_Operation_m4AA77F1982DF079835A899F34F8314C83461E191,
	WebConnectionStream_get_ServicePoint_mE67D2E1EFC856E4691FDD414CB09B470FF2E96A1,
	WebConnectionStream_get_InnerStream_mFE00D228FB01ABCB4748B1B9EF93941347B4D918,
	WebConnectionStream_get_ReadTimeout_m63528BC1ADFFA5F3BFF76ECC59CD211B163B89CF,
	WebConnectionStream_set_ReadTimeout_m5008E79B50AF06560E8062E5B264DC5FF9E6BFC6,
	WebConnectionStream_get_WriteTimeout_m5A29F733B70566085E56079134A55688569D0F7E,
	WebConnectionStream_GetException_m3313D7A38D03506D4AAF516218BB642E86BA0A6B,
	WebConnectionStream_Read_m8B8BD44CDBBCFD25C5B26F281A4820CCC46EC23A,
	WebConnectionStream_BeginRead_mA96D5CB87AC997DFC97ADC582526DA20F7DBEEF2,
	WebConnectionStream_EndRead_mF68A783972A40C75F2179EB9C0DACED9BC331181,
	WebConnectionStream_BeginWrite_m160C07263EE5D91F2796D7D89ADD297380E4ED1C,
	WebConnectionStream_EndWrite_mDE469D2BF2F2F0CA564B320CBB045AC8111FCEC1,
	WebConnectionStream_Write_mF0B41699BE67CD1E548CCCB2906F8B251C4B226F,
	WebConnectionStream_Flush_mAC7DDC2420A44452D14150623AAC32F9AAAA437F,
	WebConnectionStream_InternalClose_m966182378317AA13391CD47EF3704BBDC6DE75EA,
	NULL,
	WebConnectionStream_Close_mB27E3D9691342DF2D025984BB9439E99A49493B9,
	WebConnectionStream_Seek_m1A8BC571CF13B6CC58AB4A0AD53CF05A22332D30,
	WebConnectionStream_get_CanSeek_m04A46F31C326B54CFE97FB856B9EB8F319C1D1CD,
	WebConnectionStream_get_Position_m2E762B56BDFB771A5D1C3E7E93534C545F4576E8,
	WebConnectionStream_set_Position_m24B0723560698F0359E92FC899CE7692EEDD830B,
	WebConnectionTunnel_get_Request_mD906DAE227BDF9ED70D915216807396D11990365,
	WebConnectionTunnel_get_ConnectUri_m3D8E1B2D155F2BAA9EE65D7CFDA84356C855150E,
	WebConnectionTunnel__ctor_mAF2B67AD3C1D7F21B445C3CA6B04A13A6736B8B1,
	WebConnectionTunnel_get_Success_m9FF3A167A38BD5159D454B8C99FE04E737F1FF36,
	WebConnectionTunnel_set_Success_m1634E1BED63E792D345807BA8CCE4567B51A93E4,
	WebConnectionTunnel_get_CloseConnection_m3A1DC8F8B3FA5EA8CE9A68831649D629735AEA78,
	WebConnectionTunnel_set_CloseConnection_mDDF0692EC6F20EF25A91B8DAE131E925A02739F9,
	WebConnectionTunnel_get_StatusCode_m4AF5F0894868E995C6BA26D66507C8B6EC957A49,
	WebConnectionTunnel_set_StatusCode_m392A21B7D338D4866D48A2636532A9CCED1F723D,
	WebConnectionTunnel_set_StatusDescription_mE77B2AF630A7B2A8B5412D8BBFCAF15DA0F3638B,
	WebConnectionTunnel_get_Challenge_mBF5B353466186BB75BBECC3B045ED5E7BEF635A5,
	WebConnectionTunnel_set_Challenge_m05873D8D218E47A45E24326F9E21CF97E3CB4CE9,
	WebConnectionTunnel_get_Headers_m1FB2FB7624FE7739B75BA93C6F80E2DA9DA36C41,
	WebConnectionTunnel_set_Headers_m9081605AFF3E455A252E132C1741D1138371D80F,
	WebConnectionTunnel_get_ProxyVersion_mA7A0D36376F979005C541F790299617371647B59,
	WebConnectionTunnel_set_ProxyVersion_m98AF972297438D0B6787F046E3977F8C29828AFD,
	WebConnectionTunnel_get_Data_m31F4E1F83D5E2AB65A5F7128A9AD64870DEE58BA,
	WebConnectionTunnel_set_Data_mF7094E254E090ED83D750B964A386AF4283E50AD,
	WebConnectionTunnel_Initialize_m79BA6644344B2C6D8B48EFAED9641CB369861852,
	WebConnectionTunnel_ReadHeaders_mD9B5B8D1DD76A6CABFBA312DF0BAA433D9F3A2DE,
	WebConnectionTunnel_FlushContents_m90AF991DB26D5A89D87585E05F7A8AB5F53880B4,
	U3CInitializeU3Ed__42_MoveNext_m4E82E3BAC6AD66ACEF6A50B10D2AEA2695188FDA,
	U3CInitializeU3Ed__42_SetStateMachine_m3DD116C544191BC17E335CE0D18C37EE6C35CA67,
	U3CReadHeadersU3Ed__43_MoveNext_mEE6975063FFC03A4D0B05304C117BC806C945FEC,
	U3CReadHeadersU3Ed__43_SetStateMachine_m4D09694F06F8E84E2FF5FBD90906333AC3E62CB1,
	WebOperation_get_Request_mE63B277CB5DDAC32FC97D18F8EDDF2893931926A,
	WebOperation_get_Connection_m0F6A9F7E900AAB18334E77E5322967EF7CFF954B,
	WebOperation_set_Connection_m5439BC6DECA3FF12B69F359D8350826ACB81EFDC,
	WebOperation_get_ServicePoint_mAF2A0E3681196651A6DEDAF678D10E6BB8E76123,
	WebOperation_set_ServicePoint_m86014427BEBB1FE040BEB0BFA1327563A21DB043,
	WebOperation_get_WriteBuffer_m3D6CF961FF93DCE220A288C2C4CAAEAD8300A1BA,
	WebOperation_get_IsNtlmChallenge_m53FFCE03BD50D526832BB33FD0C9157A5BE76F12,
	WebOperation__ctor_mB1EF58FA22FB617795F258E9EAFDB42D7155A8F9,
	WebOperation_get_Aborted_m13F76B284A1764A868FA9B79BBC79BA1239E6379,
	WebOperation_get_Closed_mD726F9FD6C5BB172597C9887E391C258E5E1C3CF,
	WebOperation_Abort_m5EFC513866CBF182B16BC67AC7194CDA08F53655,
	WebOperation_Close_mE0267FA8946A72CDCC6971A2BD66E47296212CBD,
	WebOperation_SetCanceled_mF675DB306852202B101E808CFA3E9181531B881D,
	WebOperation_SetError_m6C688E1E2F66CD03B67112D7085FE66E749B6349,
	WebOperation_SetDisposed_m59C0C97A6507ACE681C3234A9043252CEADC1468,
	WebOperation_ThrowIfDisposed_mA25DBD38306EC4A54FD1CB814640E43609D542A4,
	WebOperation_ThrowIfDisposed_m2C8B9A4C53FEC510F9DAE1288D25830DDE52CEC0,
	WebOperation_ThrowIfClosedOrDisposed_m86AFE5300A22F2363900EA844F0631C7E7CF4E70,
	WebOperation_ThrowIfClosedOrDisposed_m8C2C3FAEC1176C5ACCE2683A9B0437C34B6BE775,
	WebOperation_ThrowDisposed_mD6DDCA1D037CF78AEE3E339B4FF7329C4EA79778,
	WebOperation_RegisterRequest_m5BEC561C8D1922A5DB7DAC16D423640332908FAD,
	WebOperation_SetPriorityRequest_mD33F750FB12A4A72A2364529EE30A73C89F2CBE9,
	WebOperation_GetRequestStream_m3DBF6E379422198F63C1206FA7E620C683D7224D,
	WebOperation_get_WriteStream_m9C703DD92BCDE4AA5E9AB89C1269516E437FBEEA,
	WebOperation_GetResponseStream_m062725ECCF83FE33E0B49A9F3D324C09928FD86E,
	WebOperation_WaitForCompletion_mF0922E9B6573BBD0D1C1350F7034CBE52AFE2806,
	WebOperation_Run_mAF0FDCBAD9680E702CB3704DA73620F83BFFB48B,
	WebOperation_FinishReading_m84D54A3B0757CAFEF140DCBC3485A7082A8A2A45,
	WebOperation_CompleteRequestWritten_mB56FD943A35ED3D73668E23AEF94190BC39A796B,
	WebOperation_CompleteResponseRead_mEE8D9042C6E9B1B87088785F941C88875C75F4FA,
	WebOperation_U3CRegisterRequestU3Eb__46_0_mA6FDD84FBEC06BE0AA5DD8CA963FDB821C2AB69E,
	U3CWaitForCompletionU3Ed__53_MoveNext_m60F40364903BB53293D6DB6380D95DEF05C30025,
	U3CWaitForCompletionU3Ed__53_SetStateMachine_m2D1B2C8F1AAD9115FA7DC7FB18585CE5186ADED7,
	U3CRunU3Ed__54_MoveNext_mE284183F33E17445D2C1C1AB42DD2F188FDBFC17,
	U3CRunU3Ed__54_SetStateMachine_mF7358A14C9EC6C10281CDDA4761FE1B1C89A9D0F,
	U3CFinishReadingU3Ed__55_MoveNext_m3BA1E8FC40146118D2F626BE486F78F46C6B83A2,
	U3CFinishReadingU3Ed__55_SetStateMachine_mF6B782E86696FFF0546FB0ED0812E669D7960BB4,
	WebRequestStream__ctor_m09FC879FF23F47582270C74E163BBA7FCF6A86E9,
	WebRequestStream_get_KeepAlive_m0DA3C6F92A59A8AD909D656CAF308AF6DF6150F0,
	WebRequestStream_get_Length_m6AF737229D028D3C08D1C81A66D7194DBB972EB5,
	WebRequestStream_get_CanRead_mE9AA44CF4CF1933BF6C506B80FE9978A595A797A,
	WebRequestStream_get_CanWrite_m461EA88FA9F94C4D75AC82907F25EE01EFC429DA,
	WebRequestStream_get_HasWriteBuffer_mB63C93A8938E80BCBDCE89A414AF548835872CF2,
	WebRequestStream_get_WriteBufferLength_mA60FFC816A99DBABB03687ED232848B9956B74E4,
	WebRequestStream_GetWriteBuffer_m237CDECF52B801216D2E4C495C47A90008CEE8DC,
	WebRequestStream_FinishWriting_m61E9B3AE084876D491326E505F3A1AD33D7F3AA6,
	WebRequestStream_WriteAsync_m3B3CDCE6E7EED065B5BB0C14681575F12D3C0EA9,
	WebRequestStream_ProcessWrite_m75A0AD29E2184026CF586AA1374E975EDBCE71D1,
	WebRequestStream_CheckWriteOverflow_m61D38BBEE25138BB04386018781A0265F0076ADE,
	WebRequestStream_Initialize_mBB7C67320C11ED21DD06A3DF11D667BE4B2F6613,
	WebRequestStream_SetHeadersAsync_m85BF0321D732F809D2B0A413F2CCC5FC24203015,
	WebRequestStream_WriteRequestAsync_mF6555E71773BB5CF58AF43830B9FB7B683E7B875,
	WebRequestStream_WriteChunkTrailer_inner_mD2C08DF8C283B6D613ABBFD913F5594198E7409D,
	WebRequestStream_WriteChunkTrailer_m81C42840BA636FF8F4E26B60FEDF49EE388F6D8A,
	WebRequestStream_KillBuffer_m82B1D659C9069740760E88118F94008D6DA38B4A,
	WebRequestStream_ReadAsync_m5737BDA87DA2A46A85A7BCE12279D5F52768E3A4,
	WebRequestStream_Close_internal_m43348C9C7F2F0BC6B93EA91CD6924587C9208175,
	WebRequestStream__cctor_m10D75C2D8BC6234CBFE3C9848BE933613CF5443E,
	U3CFinishWritingU3Ed__30_MoveNext_mEE4AC8EC28527F808A53FD5BB8B6A612C717BA59,
	U3CFinishWritingU3Ed__30_SetStateMachine_m826AA573335332BFA1BE941DE9BD655DF9E7A82B,
	U3CWriteAsyncU3Ed__31_MoveNext_m118EF33A63C9389D87A9F12799C926D40B14D047,
	U3CWriteAsyncU3Ed__31_SetStateMachine_mF5D8834A6D2FDD61C899CF3DEAE017005A33E292,
	U3CProcessWriteU3Ed__32_MoveNext_m909AF6057238B0C301CCD03E59093162668B6855,
	U3CProcessWriteU3Ed__32_SetStateMachine_m8CA38433A90F2E77784FB7C57F78E916932E3EA8,
	U3CInitializeU3Ed__34_MoveNext_mC46A2082BDCEA3D6090CF344BC4F9C0F20AC152D,
	U3CInitializeU3Ed__34_SetStateMachine_m91656B6F2C4CE356B78B5683A345FB0419E9DC50,
	U3CSetHeadersAsyncU3Ed__35_MoveNext_m590745E97FF89EB8743E44A0C588F0721C25F64F,
	U3CSetHeadersAsyncU3Ed__35_SetStateMachine_mC514C7FEA01B5C0FF9BEE0F038D3D5F04B760465,
	U3CWriteRequestAsyncU3Ed__36_MoveNext_mCE917482309E220A35B308EB92267DE4333C0D9F,
	U3CWriteRequestAsyncU3Ed__36_SetStateMachine_mECDCF8826C312E485A7504D8F63F2DB5D7AE21A0,
	U3CWriteChunkTrailer_innerU3Ed__37_MoveNext_mFD300E7950CD77F3EF10F3561F711FA5B4B090C5,
	U3CWriteChunkTrailer_innerU3Ed__37_SetStateMachine_m7C3E6AC7F159D272F887732DB9D5B10A7390878F,
	U3CWriteChunkTrailerU3Ed__38_MoveNext_mA363A5B8053962B7408D2475E026E69EC61EBBAB,
	U3CWriteChunkTrailerU3Ed__38_SetStateMachine_mB505AD1314323C5876A9B77C8A7AB8550B868F49,
	WebResponseStream_get_RequestStream_mECC05433F57625C2A8982DDD50F49B1B7B88E0AE,
	WebResponseStream_get_Headers_mD8D78D21C51F06E0B919113138A523AC480390FE,
	WebResponseStream_set_Headers_m82B75F347F94D2F50F2AA4F224F34995A30E13DD,
	WebResponseStream_get_StatusCode_m44386FC08813FC891C56A9B2B4E337E446147E65,
	WebResponseStream_set_StatusCode_m33DDEF0B2B90C522BADCAD68554764A4A99D0C9A,
	WebResponseStream_get_StatusDescription_mAFCE55D34C81BFA7FFFD4F3D23CCB73CE5898E22,
	WebResponseStream_set_StatusDescription_mD6119140ABFF681276EC42ADD903A4D32A3A845C,
	WebResponseStream_get_Version_m837C4A8CBE3EF4D4687727CC32B896B546D7F040,
	WebResponseStream_set_Version_mC0532D5AC1C9E56EBBAED3B974A9000AABAFFF33,
	WebResponseStream_get_KeepAlive_mC1A1D85FA069E283F957419D2CCD8892B5880A69,
	WebResponseStream_set_KeepAlive_m4BA3D90AC384E29540B6539F9A1322F4741033F7,
	WebResponseStream__ctor_m8D8614AD87C669DC1399E62CE52F7A1E1A26288E,
	WebResponseStream_get_Length_m9B80EEBE68D61D7075948FA0334B73854E66F4F1,
	WebResponseStream_get_CanRead_m0AA9DC0D5BFE24767727DD1A590342BD8BAA291C,
	WebResponseStream_get_CanWrite_m9A7A9C2EAF507A7A7578ECCB0F74ECB0A77FFDFB,
	WebResponseStream_get_ChunkedRead_m48FD9457C5C383E32D660F4D04D5F8C265DD6C19,
	WebResponseStream_set_ChunkedRead_m732CB538B6F9208EDF65212FFBBD2167534C22C8,
	WebResponseStream_get_ChunkStream_m4B6DB8D367E893488C5B660BF1DDADF02547073A,
	WebResponseStream_set_ChunkStream_m16697805F6C64466882707BE4F445013FE036CE7,
	WebResponseStream_ReadAsync_m317685A7D847F9336F91E292554DE06C20941823,
	WebResponseStream_ProcessRead_m9675808DD6D55D6B396F29D605CD8A4FA3896BF7,
	WebResponseStream_InnerReadAsync_m452B408226FE5B066BF8B5866DB53D50B7304CB5,
	WebResponseStream_EnsureReadAsync_mCB1871DDB2AC4DE2FD8BDC1D86AA9C9D28D74435,
	WebResponseStream_CheckAuthHeader_m04E77A3D3239BFA7E706BC239CB01777467A9E88,
	WebResponseStream_IsNtlmAuth_mB111551A9CE18EB3136D546617DD5E2188A5010E,
	WebResponseStream_get_ExpectContent_m512B25E47F44791C64C35D6F9E24A11337B12189,
	WebResponseStream_Initialize_mE18E78224D8451DE74799CD4974BD1C8701F22D2,
	WebResponseStream_ReadAllAsync_m6CECC40606CEA87CDE61B1493C017EE673027811,
	WebResponseStream_WriteAsync_m2C5A3EEFC2514172B516F6710832C1490DF01B6D,
	WebResponseStream_Close_internal_m362FACAB4483B56E21112ECD80EE57EDF786BC88,
	WebResponseStream_GetReadException_m173F0AD9D8787E01923788DB880925854EFF7FF2,
	WebResponseStream_InitReadAsync_m9CD0CB610F1F76DAC12ED7CB95259475797554A7,
	WebResponseStream_GetResponse_mE1882EE6BEF80729842FDEB863E58BD2AF8EFD85,
	U3CU3Ec__DisplayClass48_0__ctor_m56BDB60E8B7E84733519A1AB3FB12A83BAEC0447,
	U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__0_m64629E8313F646BC6128C1BD6FE536BC887E9DE9,
	U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__1_mE3D966B24CDFE85BAB30D283AEE82FC0FADD1473,
	U3CReadAsyncU3Ed__48_MoveNext_mFC68310659E4585F3E0B277689CE8F3545B36A42,
	U3CReadAsyncU3Ed__48_SetStateMachine_mE4C27C131B2CF9A1877103B20A58D7CF18B86A68,
	U3CProcessReadU3Ed__49_MoveNext_mCF1DDA8282F122707865DD7843D8B9333BFA8995,
	U3CProcessReadU3Ed__49_SetStateMachine_m7DCB2CE9CBF4BC51713AF916B260D2A34CB1A804,
	U3CInnerReadAsyncU3Ed__50_MoveNext_m8661E9A672D05A5BB37C6B71ADDB733DD0A3BA0E,
	U3CInnerReadAsyncU3Ed__50_SetStateMachine_m4C4D1E71476FAE6608F789668595696A888BCFF0,
	U3CEnsureReadAsyncU3Ed__51_MoveNext_mBA1912ECF12B36F3B28037F9C81973B9988E211F,
	U3CEnsureReadAsyncU3Ed__51_SetStateMachine_m20AE4061614B8AA8E6AA3EC4C4DFCF82150C6BC8,
	U3CInitializeU3Ed__56_MoveNext_mB6330AF9653EAB35D98177F0E077BC9D12561CC6,
	U3CInitializeU3Ed__56_SetStateMachine_mC34B7BE729B3657CDD84BE6308D2452C6686B589,
	U3CReadAllAsyncU3Ed__57_MoveNext_mBFD8843716DBCF5131C5F214020B9B4C442BB028,
	U3CReadAllAsyncU3Ed__57_SetStateMachine_m3335349A75579BA1BF3A5594B505B269667DDC46,
	U3CInitReadAsyncU3Ed__61_MoveNext_mC2B382B0CBF4566CA8F85CA4DDD89B43A15D0F07,
	U3CInitReadAsyncU3Ed__61_SetStateMachine_mDA4F4F7AC52B912662DAA9683564D58D82AFDAC2,
	SocketException_WSAGetLastError_internal_m32EE4D44376A1A6BC4F32C0726112248AC1AC8F3,
	SocketException__ctor_mDDA59569C2C05AB013AF9670BD6EC070086239AB,
	SocketException__ctor_m0F0444CE9F1E2BF7AF1D0A89DC29FD973AE743AC,
	SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64,
	SocketException__ctor_m5E9DDE94C8009DE11B8CE2EF1611A5CE8A900AC3,
	SocketException__ctor_m830447309D5813D7FDE050DB3A075BDCE787B046,
	SocketException_get_Message_mA34986089059D346C42DB47FB8BD331856BE0492,
	SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6,
	LingerOption__ctor_m0BECD7DEA12AC52917D065B27818677F4DE7CEBC,
	LingerOption_set_Enabled_mEDF2FED046EA58F9C23BEF3BF1184C3A890419DB,
	LingerOption_set_LingerTime_mDC6B06F96C04C5A69E19912EBB37DC5BDE5A6DFB,
	NetworkStream__ctor_m1E6CEBB6583CF44E9FA25A38E84B212C9BC91CD8,
	NetworkStream__ctor_mA44C3DB90F5B64F230CC2176DC7E722F4077A9DE,
	NetworkStream_get_InternalSocket_m58624516F119DC056AC5C53B1E3D412D0394F999,
	NetworkStream_get_CanRead_mE61A13D0F12690A65200D3FD0947A0DC2442643E,
	NetworkStream_get_CanSeek_mAF6CE2068CC8DC3DDD922C6C2C187D286A3F5044,
	NetworkStream_get_CanWrite_mD3EBED79804ED2676F028892B84DC7F8F9FDAA6A,
	NetworkStream_get_ReadTimeout_m9B4ABB17E07B7CB59AAB1A2F26973D0870EC6993,
	NetworkStream_set_ReadTimeout_m1FEDCDB6F079AFA7787F05C145597A2C1BEAF521,
	NetworkStream_get_WriteTimeout_mD598023F9B6DA63B85F55EECCED2A32F21677AB1,
	NetworkStream_get_Length_mA738206EC6CF6C8A07FEC82C3702A5F494569496,
	NetworkStream_get_Position_m6DAEE19231A91693081BE120ABCB5B031DC95E61,
	NetworkStream_set_Position_mACE85A7C1D600E5B6D18CF5FF32D859F4734010D,
	NetworkStream_Seek_mD5CE01FBB731FF52A66451C5F688837AC4ADD906,
	NetworkStream_InitNetworkStream_m0D13876222C80AE5B33F26D06A8FDC538C2CA9C0,
	NetworkStream_Read_mB0EBC9488D9E3291AB4C6412F3AE70E8D6EEDBA7,
	NetworkStream_Write_mFF7B408A0A6322FDEFB54BD0C759C3C6E6268AFE,
	NetworkStream_Dispose_m23F2CD1DBD8BBDCC96B36F93E663F3D5FF20B7F3,
	NetworkStream_Finalize_mE8FF3552F90C61575174F96CB6EF435268BE792A,
	NetworkStream_BeginRead_mCC685D1B566FEC09C2AE76871AB01917D2446144,
	NetworkStream_EndRead_m53CDED13D3A6DD8D42F8533F2336D0EA6C752701,
	NetworkStream_BeginWrite_mE2F47607B52FC7FA99DD00337DB2AA0F5673E7C0,
	NetworkStream_EndWrite_m843683738E14624DEBEF963D2480C8F3DB5EC848,
	NetworkStream_Flush_m8DAEB9385D9E7B5531733900D507531E0B628F9B,
	NetworkStream_SetSocketTimeoutOption_m8D7C33643C44CDC7170ECBE81F59D05B5F369D43,
	Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595,
	Socket_get_SupportsIPv4_mA99B8DC8EC66E4420EBB5E47FDD3B325246C1EB6,
	Socket_get_OSSupportsIPv4_m779A662683A5FBD8D7B4D1E5E940B04C6AFA0120,
	Socket_get_SupportsIPv6_mFE2438C5E347F2F9434AAA3E6255A5A4AA5B71D4,
	Socket_get_OSSupportsIPv6_m45BC8FD78EDFCB853CA509A8DDD23EF42203B6D4,
	Socket_get_Handle_mBF42AC5E9403C23BE532F17EE337BF9F150A0256,
	Socket_get_AddressFamily_m42C390D31345314080EC35356ACFBBFF7E1123E5,
	Socket_get_SocketType_mAFBEF108992F069AF0B8AD26D47EBBEADB8D2661,
	Socket_get_ProtocolType_m364A0E823BF3EA78DAFC1ED3A6B39658FB6A23BB,
	Socket_set_DontFragment_mCF6F7D2735A7FD4E327617826C62ED015001DFF6,
	Socket_get_DualMode_m8B45BA120D7A03DB5EF8C3CF9483C829E19CEFCA,
	Socket_set_DualMode_m08152574129C01AC8941AAB43752C3CD1525C193,
	Socket_get_IsDualMode_m1CB3E1554CD046481E3408B20D887C7EC8470CFA,
	Socket_Send_m3174031DF8ADFDAF158BEB0D8AC5CBB445F8D21C,
	Socket_Send_mF846BE4031BE538814BC497FFDC8BB02AC9F5A33,
	Socket_Receive_m29FED7D6FE4F95DD3B71CE6425AE19A3781FADBE,
	Socket_Receive_mF4189DF1BB210034B41CC593C0FEC2F21D8DFF47,
	Socket_IOControl_mEADB9616747250B4E647DD6BD4CA42D36A95248C,
	Socket_SetIPProtectionLevel_mC243CFB942D4DA0F2A148A0DAD3B5559DB005CDB,
	Socket_BeginSend_m36452399B2D44A215795BFB0F1E06AEFD451E7C3,
	Socket_EndSend_mC636AB62DC23FA2E8BDB612F5CDB203E6CAE4D17,
	Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738,
	Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364,
	Socket_get_InternalSyncObject_m11CB9CA23D0CDFF801C26121CB479BA162D19ACD,
	Socket_get_CleanedUp_m8F6EDAE37C56CBC282D3EAF9D93B5726EEC85988,
	Socket_InitializeSockets_mF69CCC3B14A53FC7CD95F6E87FC726812ADB3AE2,
	Socket_Dispose_mED966D36CA8914F199BCE9497FFC5261AC99C1AC,
	Socket_Finalize_m1350F4F84C06E9DF703C32E47B1579C84A22B742,
	Socket_InternalShutdown_mD0EF08D54151D53369D32CD61C8518454AAAEFE8,
	Socket_SetSocketOption_m4939E9F69DFA288DD47E2CBF18D1762C7E171350,
	Socket__ctor_m91002BA76E3B56D33CDEB6D30EFE923F92822CE4,
	Socket_SocketDefaults_mEEA679EDCFED63435F630A133916BD5F97BF1FFB,
	Socket_Socket_internal_m38C1C722EBA63E2DEE7DF77B02A75ED1CC9E5BCF,
	Socket_get_LocalEndPoint_m3A2B4E60F0096E2DB31F7C28EF3CDE148D256E26,
	Socket_LocalEndPoint_internal_m45692ABAA313C15963E4CCA7EFE6E7FB1692297A,
	Socket_LocalEndPoint_internal_m699B7C7F957FCA100D69E18735C15C4FA0E99CCB,
	Socket_get_Blocking_mE3DB6D71A54F6376624DDA9522C783B914860ED3,
	Socket_set_Blocking_mAE329D3DA788B19FDDC6B773F5B0A1C31FBE9A7B,
	Socket_Blocking_internal_mCD8DDA2B42FCD3694E0DF5977ECDCFB080CA54BA,
	Socket_Blocking_internal_m5BA5FA9ABDF0429D983B2FE91DAD20CA025D466A,
	Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5,
	Socket_set_NoDelay_m1F7ACCEF219BB8745AB17F29CEA618088E0B2405,
	Socket_Poll_m65D8E383FBE5A1D4A115942182620422B6646B98,
	Socket_Poll_internal_mA9D6DA0F9323BE621CD3ACBEBEA80641F55AAA11,
	Socket_Poll_internal_m765C9C063BFFFE7FC9CCB01285FDA50E267B8C54,
	Socket_Accept_m11B031FF408E1899034B993B352178D9D6B37C1A,
	Socket_Accept_mAF83623B54FEA675F0F16C29EACE1F24DE6C02FF,
	Socket_EndAccept_m6A7BE15D82A8C8DCA5AD786CC97E0A12FF354D09,
	Socket_EndAccept_m96B08273E42578EAB0A297A707A1F15956F69FB0,
	Socket_Accept_internal_m993249D44B5193CB8B5CFFDDEDBCE4D4DFBB9D6A,
	Socket_Accept_internal_mD39545A1FDE765CF9F54924D3A3C2549CD72FAFB,
	Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA,
	Socket_Bind_internal_m85DF18886A077D271720DCF0ACDA05AACED2B7C8,
	Socket_Bind_internal_mE0AA19CD4841C1FFE9A4176ACBE6E11BA958F202,
	Socket_Listen_m734803DAC514E64828168AF9212D6A9EC63B32EC,
	Socket_Listen_internal_m2802EDACE64C106C3E87CFE335BE2507486B6DD4,
	Socket_Listen_internal_m3224BE95C5D016939BF9C22FB44ABE2ED2485BE1,
	Socket_Connect_m874A510F986F4D91446B2F53688D0BCFFE0A6BE1,
	Socket_BeginConnect_m5CBFB6B9DC973279CDC9E8935431972464F9E0B4,
	Socket_BeginMConnect_m37A5BAD3A1B8CDE7C71C1CA02679046849C08B09,
	Socket_BeginSConnect_mA7E5FC617A838175878CEE04B922372FEA50C3E1,
	Socket_EndConnect_m10F5B4F43A68F96891DB3AEF493AB160CD8104D6,
	Socket_Connect_internal_mB28CEC91E12F9B621FF2B074CACC575629E33746,
	Socket_Connect_internal_m726179D62CA3CA8039CC1351A8145477E73670D2,
	Socket_Disconnect_mFECF870A7A5604A9AFD79DBB6354F1697A96C422,
	Socket_EndDisconnect_mCD874CA31D96229FBF311AB941DFB1FAE4897BE8,
	Socket_Disconnect_internal_m78AD76E91C83AE6CE27D4FC952FD1D28EA33FE91,
	Socket_Disconnect_internal_m05114A11C947B0D0C02233B65E3D8819DC21DD14,
	Socket_Receive_mF387A0975239872402A6118D3F196B020060021C,
	Socket_Receive_m51DFAB2284E194E286E5B086F874EFDA80A7C687,
	Socket_BeginReceive_m6CE71DB94ED6C33A5B0921F13530283D68979B54,
	Socket_EndReceive_m080D7964C40358B101AA6AF0B55635B3CBC9DFB3,
	Socket_Receive_internal_mD1316BB323E539121369401B592F3B054551E90A,
	Socket_Receive_internal_m50CFB1A7DEFA33735613188E6AA6D9439E80EE37,
	Socket_Receive_internal_mFFD3DE5D5B14A0730765CE470002536254B94789,
	Socket_Receive_internal_mB2C515952128D43441C550DCF5A4AB7D3C2A2654,
	Socket_ReceiveFrom_mFCCD977ED8761DBBF13EC14BEFC4615662CE501C,
	Socket_EndReceiveFrom_mAE3C7B82193AD982F47EE74B8C75CB52E7DB15BA,
	Socket_ReceiveFrom_internal_m5C01BB7E993A7899973D0FC82A6E2D86F8F813AE,
	Socket_ReceiveFrom_internal_m03158D1D16520CBCE294BFAED04B2644F35B425C,
	Socket_Send_mC5F7C598421E94D9098B7A65073193E7E574A1C7,
	Socket_Send_m6414CA18C059F7262E069F92A17A2B31BB83E2F7,
	Socket_BeginSend_m0BBAE4C48B338F9F6EBFD4F0E6FE236FE4BDE64C,
	Socket_BeginSendCallback_m7BAA6F54C7D4AEAF6BC6B2552D23C3464C0F787D,
	Socket_EndSend_m78EE767A837539CAFEA99FA8A2EB0EF24444123E,
	Socket_Send_internal_mAED1C3A20DB7EB11A59927CDD3ABC5579D0C43BB,
	Socket_Send_internal_mD61B4C771A2627CB8C0F34B27E5B66F0BE7752F6,
	Socket_Send_internal_mAEE2FA94300B035241FCE5C276EAA4B956FA89B2,
	Socket_Send_internal_mEDB8816465E73FDF63FA51421A33461F44F38D4D,
	Socket_EndSendTo_mC35D110ED10CFAFEF443A1AEFCDEA438DE0101EC,
	Socket_GetSocketOption_m39C453F9FA4D1EC664C660851CED73271B1162A2,
	Socket_GetSocketOption_obj_internal_m5C6F74BA7CBC5A7AF3FED034A1557A2CD65804EA,
	Socket_GetSocketOption_obj_internal_mBA1E9B89A4AA0CB87DED7CCA6173BA11E1163001,
	Socket_SetSocketOption_m19085C1856DE21260294680B7725610D71D66A58,
	Socket_SetSocketOption_internal_mF5D974153131AD9CA8713FA0F0549DE238C88CD5,
	Socket_SetSocketOption_internal_m2FBC1775F65CF09AF87F1C9396DD794F4BAB0095,
	Socket_IOControl_mFB46E7CECA515C5FCCDCE0377727025E49241080,
	Socket_IOControl_internal_m7A8937A6BC0A93FDA751E57150CB868364AC0E5E,
	Socket_IOControl_internal_mC2565B58A6416BDF359815D27E81C04E83D8DE48,
	Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4,
	Socket_Close_mE6673231EFBF35BBF5228BC5C7A2BA08DAD5237F,
	Socket_Close_internal_mB425FD973E99698A24B5C89FF71DA8E515D8B4D1,
	Socket_Shutdown_internal_mEF0F7AAEE1A7ECB909B871A31ABC8A44D08697EC,
	Socket_Shutdown_internal_m900059941244628BEB848B7DAB4F7B98C4928361,
	Socket_Dispose_mD208C78BC53159B6E12EEAD70784ED7F19B38724,
	Socket_Linger_m24D121E76C38D9E302EF059712EE0C90B5312FBF,
	Socket_ThrowIfDisposedAndClosed_m93567578970C10A4E56C7DF84D7D18A1E5AB8CE5,
	Socket_ThrowIfBufferNull_m80732B6CF5F7BFA314905627BF1B9D28D4E2A41F,
	Socket_ThrowIfBufferOutOfRange_m22646D99174E99B57B816E260C93D959CE4FB143,
	Socket_ThrowIfUdp_m006AEC31161FCD9D704DBC20A4C8896B719ED6FA,
	Socket_ValidateEndIAsyncResult_m3B62AE8C5CB328C37CE3FB3264B5A0299E1DD3A3,
	Socket_QueueIOSelectorJob_m7342EB18C3E806FFE6C87FC356C89E23064A7FB4,
	Socket_RemapIPEndPoint_m8B03D3304FF55B1B423F96A2917F34732B258D73,
	Socket_cancel_blocking_socket_operation_mF7D69972B1CC9D769A3E5BF9946125C5CC661172,
	Socket_get_FamilyHint_m133ABCFB7BF5184CFA0AA12E4BC031D9598CBAC8,
	Socket_IsProtocolSupported_internal_m4C4E9B469DECA875DCDE5AFCA5B522F09C3B44EA,
	Socket_IsProtocolSupported_m063B4A00EC7B0FF7FB37507F33C22BFBD0177F18,
	Socket__cctor_mD7400247DF81848730C006F1CDFE51353C2F3F16,
	U3CU3Ec__cctor_m038CF32946815BC1EC22307A7B49E3CA24C281AF,
	U3CU3Ec__ctor_mBED1A732D3342D1A48A4088765AA6159F66308A3,
	U3CU3Ec_U3CBeginSendU3Eb__242_0_mD3991BEAE3E701CD4DFE0CD88CDA34FA92CBDE34,
	U3CU3Ec_U3C_cctorU3Eb__310_0_m78BAFD002681A3153EFA1D99AD1FA73CE5C6D497,
	U3CU3Ec_U3C_cctorU3Eb__310_1_mB5591AD589C6768F490B0D0B54E57819E5A5AB93,
	U3CU3Ec_U3C_cctorU3Eb__310_2_mA23AC673459AEF9A5266F2E76CDC36B7A0202526,
	U3CU3Ec_U3C_cctorU3Eb__310_3_mE0290571356E428FDD0BD7D6F68F77E29711F1AF,
	U3CU3Ec_U3C_cctorU3Eb__310_4_mB745E591EB617D9E2C4F1A916DAA67074654EFBF,
	U3CU3Ec_U3C_cctorU3Eb__310_5_m05BF8F056ADF873CCDFEBF440674D277FE2F7006,
	U3CU3Ec_U3C_cctorU3Eb__310_6_m08576ECB30BC93839B7EE8A0C47F2C8F57CA123C,
	U3CU3Ec_U3C_cctorU3Eb__310_7_m0561800D9E4E561DFC04D331A71DC75177B1D41B,
	U3CU3Ec_U3C_cctorU3Eb__310_8_m203B412928890D791D5CA33F20136CD6ED41AF7C,
	U3CU3Ec_U3C_cctorU3Eb__310_9_m104DDE3D502D2B41D2D26BDFC51F4B755748EDD9,
	U3CU3Ec_U3C_cctorU3Eb__310_10_m785946EC496FB08E3509F8CFA15E74EBBB106D91,
	U3CU3Ec_U3C_cctorU3Eb__310_11_m1477519094CE46AE2DF260FEBDAD7BD96D9C0404,
	U3CU3Ec_U3C_cctorU3Eb__310_12_m3FEABEC5B22A1A8C52CB613BF6DFA66FF37C0108,
	U3CU3Ec_U3C_cctorU3Eb__310_13_mC3C9626E90525A0BCC01942AA3F8FDB8E1BD9B5F,
	U3CU3Ec_U3C_cctorU3Eb__310_14_m821160348241293FC22B49EECBDC975F7EBD4E6F,
	U3CU3Ec__DisplayClass243_0__ctor_mE46586621BE2BAD2AB2E3E6AC707E33CFD8806B1,
	U3CU3Ec__DisplayClass243_0_U3CBeginSendCallbackU3Eb__0_m4191C24BA6A1E93D58A2A3094EB31AE103DB013E,
	U3CU3Ec__DisplayClass299_0__ctor_m99CFD051D6B2F4A61EB68106EB6F0DCCDC90DE8D,
	U3CU3Ec__DisplayClass299_0_U3CQueueIOSelectorJobU3Eb__0_m8F058B49A64734E9ED20E1B0956CBB8186B9985B,
	SafeSocketHandle__ctor_mA17D19F4D9F5F0D3C29A0C46702E85B9C9D87295,
	SafeSocketHandle_ReleaseHandle_m6861A54261EEC98F3DB4BB27251AA7ED6BD4DCE3,
	SafeSocketHandle_RegisterForBlockingSyscall_mFCDDEAB42C472D9A8E46B76C0BAECEB7D1832A98,
	SafeSocketHandle_UnRegisterForBlockingSyscall_m806E8BB959EDBB3B78061C5628A6F2F6EB6800B4,
	SafeSocketHandle__cctor_m7691BE9F87F473365D4973842102E05614970DE8,
	SocketAsyncEventArgs_get_AcceptSocket_mF12CD5B1067314F3970759A5AE7C94BF1070A4CE,
	SocketAsyncEventArgs_set_AcceptSocket_m1F265F9F17EE63050B267DFE9B5CA0F3E487B93B,
	SocketAsyncEventArgs_set_BytesTransferred_mAB2EB75BE1BB7B97DBEFCAF3DD42E26BC787D625,
	SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2,
	SocketAsyncEventArgs_Dispose_mA5B8D8ADB8521BC9219061C13CB7C07BD02E16DB,
	SocketAsyncEventArgs_Dispose_m6DCE1086200FEDE70AFC93B221810F02334FCEA1,
	SocketAsyncEventArgs_Complete_m1685C41BBB00E16C614832FA2869F94D9A8D7EC9,
	SocketAsyncEventArgs_OnCompleted_mA73590353C7D619F0A57E5D65C7D6CF1EF41AD6C,
	SocketAsyncResult_get_Handle_mBEAD04497226B5110889462C480B2BBF93AAD430,
	SocketAsyncResult__ctor_m3C1FE5E660B13BB4C17D1756B918D9EEC6052F79,
	SocketAsyncResult_get_ErrorCode_m2CFEB18E19F49775804758830C58B1B068CF936C,
	SocketAsyncResult_CheckIfThrowDelayedException_m25275FD1C77F37FB2CFDE46BDC669CF9B31031C9,
	SocketAsyncResult_CompleteDisposed_m41B0FF709D71B1B321871B18BCFAAB3005419BAC,
	SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA,
	SocketAsyncResult_Complete_m218F8233E7ADB1AFFE69406F6337E09726E640D2,
	SocketAsyncResult_Complete_mC5E61EFDC26D56DCFD98A8600B185043FA285B6E,
	SocketAsyncResult_Complete_m6F201277AC561C7A755617A4963735B70D178B12,
	SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513,
	SocketAsyncResult_Complete_mD191B47C619B02AB538B7A00721E689AAFBBD3EA,
	SocketAsyncResult_Complete_m85EF6089B3B9ECB2A9737E9C694BCCFFEAE48CF1,
	U3CU3Ec__cctor_m0F0A7E1C51C668515103160DCC4D3F3ED8B7C5C6,
	U3CU3Ec__ctor_mAC11B6F52B2C5BA43E6B14CF8338841CAA0ABF26,
	U3CU3Ec_U3CCompleteU3Eb__27_0_m267CAA8BCD77C0263EF3DAC0336FC29A937D2C76,
	SocketTaskExtensions_ConnectAsync_m495C65ABCE0EF0CDBD3D8433BCB92D522C06FA9E,
	U3CU3Ec__cctor_m73B05517DA6153C46B0FC67073C5862BAADA9FE6,
	U3CU3Ec__ctor_mEBF8C773AA57A0FF10F424AC2B933D767F816735,
	U3CU3Ec_U3CConnectAsyncU3Eb__2_0_mB89D17757D9875DF67171B2522FB79E7EF8ADC2F,
	U3CU3Ec_U3CConnectAsyncU3Eb__2_1_mDBDA6A36C781708913C7D207FF0C9750C09D8571,
	AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357,
	AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7,
	AuthenticatedStream_Dispose_m031F600EE876A06427FB0713D992FF02B9C3320F,
	NULL,
	RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367,
	RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83,
	LocalCertSelectionCallback__ctor_mA7B36924E69A918A71649CFF95CB361E33317C38,
	LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9,
	SslStream_get_Impl_m8A1529A4D52B0C4046898BC70F090400A4390C18,
	SslStream__ctor_m222C4F58E1CBA2382263444001AA70862B2EC462,
	SslStream_CreateMonoSslStream_mDE89ED397F8F36A81DD9C82298BDED42F4146C16,
	SslStream_get_IsAuthenticated_m5056C714711944DA54B35F6F2A3025A720B49290,
	SslStream_get_CanSeek_mA98FD41EDB70B03DB44F714CE952E128CA9D9B4B,
	SslStream_get_CanRead_m0B2ED5711B4D7C796529F56D7039AD546571FEF2,
	SslStream_get_CanWrite_mCBCABFAC940539066F34E4480E52E07CA06DA7CE,
	SslStream_get_ReadTimeout_m75B9430F39F610082318B1D37925CA4B651F1E12,
	SslStream_set_ReadTimeout_m0043E5CDEDC5690A118A429F79CF54DC071F895F,
	SslStream_get_WriteTimeout_mDC207A2CBAD4D969AC4924A0704242936086D0FF,
	SslStream_get_Length_mD6515D77DBB57912C598761F67C321B6B16E129C,
	SslStream_get_Position_mD2DBB36BA22F4620B635557B5748E0928F28B6A2,
	SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2,
	SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25,
	SslStream_Flush_m61B328FCFEB939DE23740823CE3EB7E8DF3B14A4,
	SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95,
	SslStream_Dispose_m187B76F54E2471469F5B62B8DDB33E11E40EE397,
	SslStream_Read_mEAFC2AA192D9EAF401E2B067395EA08EDC5FB47E,
	SslStream_Write_mCF650FDF725E1AAEDC462A016A38E535F7210F3C,
	SslStream_BeginRead_m716BC242891C530ECB08DA4989AE27EEBAC71C98,
	SslStream_EndRead_m881FE67FB5376508CBB50A96ED65BC672FB3A7A0,
	SslStream_BeginWrite_m66F3B2CDAAE0E1FD662552A8D1ECAC889F2AD2D0,
	SslStream_EndWrite_m78C915054198C80ECEE67CBB07D782E10686BA61,
	IPGlobalProperties_get_PlatformNeedsLibCWorkaround_m60DD6D6B797F1C3C28EF5F2C1168F91C73EF3862,
	IPGlobalProperties_GetIPGlobalProperties_m78B851B32A1D963CC616CCA6DC7116F5EAC15753,
	IPGlobalProperties_InternalGetIPGlobalProperties_m72EC7CD424FA4463DBF973ECB688CE857A01578E,
	NULL,
	IPGlobalProperties__ctor_mD47A72AA48932214CA1D4736A83CE60D87446DB8,
	NetworkInformationException__ctor_m8992B1B77A115833022DD305333E1797720222A3,
	NetworkInformationException__ctor_mA372BF930B6E92FE250F1EE5281926897AF58734,
	CommonUnixIPGlobalProperties_getdomainname_mDED17DB0D08BAAFF5A3A46A08883814FA1E6159E,
	CommonUnixIPGlobalProperties_get_DomainName_mB1A7E8779FEC53B9173DD83534EC1848B61D6CD3,
	CommonUnixIPGlobalProperties__ctor_m4C97E24A699CDFBCA98BB57A8236D5EC0806BF6F,
	UnixIPGlobalProperties__ctor_m7C68E5E75ABCFD9694B55C352EA28CF1F6D091D9,
	UnixNoLibCIPGlobalProperties_get_DomainName_m9E9249E674D90387F9B8D0630B235CF13631A65D,
	UnixNoLibCIPGlobalProperties__ctor_m8D0E2274FDB799A5493898AF4DF589608BA75CA3,
	MibIPGlobalProperties__ctor_mC6E0577D711361950A406A31853C727053E40656,
	MibIPGlobalProperties__cctor_m9209E4C955952375F1EB92444A36933BF23878DF,
	Win32IPGlobalProperties_get_DomainName_m606701D1FC345ED0DEE4776A2EFE5BB69E5AAE45,
	Win32IPGlobalProperties__ctor_m9B513B7EF6994299CD6F5043C32868D9521264EA,
	Win32NetworkInterface_GetNetworkParams_mA2E02CD896547407FEF7BACC80FE5B3ECFD57A32,
	Win32NetworkInterface_get_FixedInfo_m90FC6BF37040C5B5548AB86E4532C16CED57F7A4,
	DefaultProxySectionInternal_GetDefaultProxy_UsingOldMonoCode_mE92DE08E220E7F8B610BF188DCD06BE990F8CFB3,
	DefaultProxySectionInternal_GetSystemWebProxy_m149FAD86815FA437C5D6FEF7ABCA97CD2C3C94D7,
	DefaultProxySectionInternal_get_ClassSyncObject_m6C8A102D494E67F287EA10DEACD3EA151C0D085D,
	DefaultProxySectionInternal_GetSection_mC347FAA709106553F94BA8097F9593383BCA22FC,
	DefaultProxySectionInternal_get_WebProxy_mF4F15C1A7C6088706CA2834D70E8CD52086AFBDA,
	DefaultProxySectionInternal__ctor_m9EDD9E9D9F38DCA0B5260A4F040F27CE1650D430,
	SettingsSectionInternal_get_Section_m2B7B6F6B8C13E9FAD46C76116CCDE663741ECF35,
	SettingsSectionInternal_get_Ipv6Enabled_m4DF56EE72066B70B389C21B2B4A30EAFC05D20F0,
	SettingsSectionInternal__ctor_mF034B00EA94462E6FA1F906C97BD7B59AA00F1C3,
	SettingsSectionInternal__cctor_m8BEE9C7B1B87EC7507FC1D686220BAF2B94087C2,
	RequestCache__cctor_m0207CC97983238EC3130462CE421F3FD8C56AC8D,
	RequestCacheValidator_CreateValidator_mBFF46C1FCE42C817FD8596B221ADC9D880399CAD,
	RequestCacheBinding_get_Cache_m96C4E0E7F9A2616C261B185E2BB28766929D9800,
	RequestCacheBinding_get_Validator_m74A9BB1C0CD37CD6B536782553DBCA4E67C145FC,
	RequestCachePolicy_get_Level_m2D45A6E3059B05DED8BFD8D1EA20AEC907D920D3,
	RequestCacheProtocol__ctor_m4E7F5A158A0507C5E58846CDA06B9847FF0C3D9C,
	U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC09A19935970846B38570D03608F0E5F25E2020C,
	BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54,
	ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3,
	ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802,
	ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95,
	DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D,
	DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418,
	DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77,
	ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70,
	ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A,
	HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717,
	HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA,
	Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1,
	Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322,
	NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC,
	SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242,
	SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F,
	PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F,
	PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B,
	ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36,
	ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58,
	SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2,
	SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3,
	WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821,
	WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B,
	WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E,
	WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6,
	WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E,
	DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3,
	DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB,
	ThrowStub_ThrowNotSupportedException_m0E6C3891D0501FEF5BF1A72B7AA4D6310CE082DD,
};
extern void CFRange__ctor_mE95FD6CECA2FA0AD9454A1334058B5D16B2A4928_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__23_MoveNext_mDE591A3806D9523FC8D2E26ED510CEE7963F8FF2_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__23_SetStateMachine_mA0C8C029457FAAE036C6098FDC66C98574D0BD03_AdjustorThunk (void);
extern void U3CProcessOperationU3Ed__24_MoveNext_mA73F0FD80CE65D2E3E12390E49E3F34CFF47E98B_AdjustorThunk (void);
extern void U3CProcessOperationU3Ed__24_SetStateMachine_mA9912D191EE4A99536A61DEED059DC89B765A823_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__25_MoveNext_mC4567E370C71DA9DA0F704C570308D106D4DDB2C_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__25_SetStateMachine_m15DB2E97371A46CBCCD53DCAE7A4FE6F5FF84DCE_AdjustorThunk (void);
extern void U3CProcessAuthenticationU3Ed__47_MoveNext_m43E7652EA23BFB6926E99D87A635920E8C10B422_AdjustorThunk (void);
extern void U3CProcessAuthenticationU3Ed__47_SetStateMachine_mD020F0C8569DCDC3496AF18CE204E77E7919A6EC_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__58_MoveNext_mE4390271E237A2642BC6C9CC2522A860DB0AC91E_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__58_SetStateMachine_m6D7E173F740C08FCBBA924ADB742B956BC31B92F_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__66_MoveNext_m5DFDC2139602BBC2F86D14BDA64B4A49ECDD90EB_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__66_SetStateMachine_mBA42C0B565B5D3F43D109D2A8CC66EE8CE9BC920_AdjustorThunk (void);
extern void U3CInnerWriteU3Ed__67_MoveNext_mDF6F0FEA0FCAE97EEB2E5A2546446C00674CCEA3_AdjustorThunk (void);
extern void U3CInnerWriteU3Ed__67_SetStateMachine_m7448CF503BCD3FEC38241FB22DBA3AB4B91FF5B1_AdjustorThunk (void);
extern void U3CCreateStreamU3Ed__17_MoveNext_m2C5C58B4824641D56245C496817CBADF69343260_AdjustorThunk (void);
extern void U3CCreateStreamU3Ed__17_SetStateMachine_m1830D99E90C0D7A32F6DA3021ADD38487CADEE71_AdjustorThunk (void);
extern void LowerCaseMapping__ctor_m06D0A21D5D72E39535F82076EF046F98C62D7D5A_AdjustorThunk (void);
extern void DefaultExtendedTypeDescriptor__ctor_m23A3BC29A6EF7571E339B9EBA5059F6490177C3C_AdjustorThunk (void);
extern void DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87_AdjustorThunk (void);
extern void DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F_AdjustorThunk (void);
extern void DefaultTypeDescriptor__ctor_m8181176F10EBEA8A1DE3703C9C355ABB114A78D6_AdjustorThunk (void);
extern void DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0_AdjustorThunk (void);
extern void DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283_AdjustorThunk (void);
extern void X509ChainStatus__ctor_m5AD96E11604F8DB96673677AC2FFF68EBA550859_AdjustorThunk (void);
extern void RecognizedAttribute__ctor_m57B8152BE5C905023F282B5B31A2EDC4A582990A_AdjustorThunk (void);
extern void RecognizedAttribute_get_Token_mB866B1151FF6270E37D33EB30220FC2D7AB1BDEB_AdjustorThunk (void);
extern void RecognizedAttribute_IsEqualTo_m9DAB082F220BB64EBD6825DF9D3A578A99308E0F_AdjustorThunk (void);
extern void HeaderVariantInfo__ctor_mA0EBB5018465610E64AC1C50B92C94B831721A85_AdjustorThunk (void);
extern void HeaderVariantInfo_get_Name_m7F37F7252CA8DB9E929D9F5AFB0A4284B094AD42_AdjustorThunk (void);
extern void HeaderVariantInfo_get_Variant_mD5B9F8CC046969C22B093E491C917C714D9181D1_AdjustorThunk (void);
extern void AuthorizationState_get_IsCompleted_m60FA1039CD41A7AD50984DADEA562F82E60470AB_AdjustorThunk (void);
extern void AuthorizationState_get_NtlmAuthState_m93CF64385E0E77039CF782E319EED9EC96ED063C_AdjustorThunk (void);
extern void AuthorizationState_get_IsNtlmAuthenticated_m901CE42BD2DB28DD9D6605500D8E4D360309DA8A_AdjustorThunk (void);
extern void AuthorizationState__ctor_m6DDA04B33B8A520B93FBDF8AC4BBA3B7CCC03CBE_AdjustorThunk (void);
extern void AuthorizationState_CheckAuthorization_mD23E50FD196D22054A710B9200FC6510D5098EA5_AdjustorThunk (void);
extern void AuthorizationState_Reset_mE7C4981CBBB1630D605A83D09D74D7C56AE0B9B9_AdjustorThunk (void);
extern void AuthorizationState_ToString_m6426C6029B83D041B9F1B9871A4541F70A2EFC00_AdjustorThunk (void);
extern void U3CMyGetResponseAsyncU3Ed__236_MoveNext_mFBD2D479D77244D04F25FB873DBC765EB9CBF79C_AdjustorThunk (void);
extern void U3CMyGetResponseAsyncU3Ed__236_SetStateMachine_mAFA7F97DD138F2C8984F7BDA6EA2FB2E5F6D021F_AdjustorThunk (void);
extern void U3CGetResponseFromDataU3Ed__237_MoveNext_mAEE81AAA2DC7E3FB0B2E7631C6EC526E38C2AE0A_AdjustorThunk (void);
extern void U3CGetResponseFromDataU3Ed__237_SetStateMachine_m8B33A8FE618AA966D8ABD2149C19C4E6DD568F8A_AdjustorThunk (void);
extern void U3CU3CGetRewriteHandlerU3Eb__263_0U3Ed_MoveNext_m31240B9D21116E276C0ECED04A4E62161F0EE147_AdjustorThunk (void);
extern void U3CU3CGetRewriteHandlerU3Eb__263_0U3Ed_SetStateMachine_mE374C4F526074CD29C9C6EB7F2B6419861F80077_AdjustorThunk (void);
extern void IPv6AddressFormatter__ctor_m724F22E5D122B2F5FCD830B4B8D5995A69169663_AdjustorThunk (void);
extern void IPv6AddressFormatter_AsIPv4Int_m595ECC7763D02462B0FF1327A629F5BEF53D9CD7_AdjustorThunk (void);
extern void IPv6AddressFormatter_IsIPv4Compatible_m0E070C1C8D153AF6B8CB76231CF01F091EDD06E3_AdjustorThunk (void);
extern void IPv6AddressFormatter_IsIPv4Mapped_m17D6698E8EF2F468DCC0D3828EDB92C2083CE0DF_AdjustorThunk (void);
extern void IPv6AddressFormatter_ToString_m4758E87FE39266AB9A24AF592D8D3B3B703C7735_AdjustorThunk (void);
extern void U3CWaitAsyncU3Ed__3_MoveNext_m70BD3156E3C9225DC6FA0051F6F1CFA5C51DC82D_AdjustorThunk (void);
extern void U3CWaitAsyncU3Ed__3_SetStateMachine_m3C70A70D68A142473023CE4E99F132863B0B90F2_AdjustorThunk (void);
extern void U3CStartSchedulerU3Ed__32_MoveNext_mA205AFA620495AA4DFF9C4C0F8BEE0D6A5E7F24B_AdjustorThunk (void);
extern void U3CStartSchedulerU3Ed__32_SetStateMachine_mB15C867BE900F84093D5B0C44A2307129F47A4A4_AdjustorThunk (void);
extern void U3CWaitForCompletionU3Ed__8_MoveNext_m86A34E1FB02C2D0736D72DFF4FB1D6B05E6775BB_AdjustorThunk (void);
extern void U3CWaitForCompletionU3Ed__8_SetStateMachine_mFFB894666023227C9CF56BD8D7AB8D557BF0AF81_AdjustorThunk (void);
extern void U3CConnectU3Ed__16_MoveNext_mA0B90B92C30BB0285B7B55977D90D52881745535_AdjustorThunk (void);
extern void U3CConnectU3Ed__16_SetStateMachine_m22694F920ED2EB556AF7CA8CE687A9DDB5353084_AdjustorThunk (void);
extern void U3CCreateStreamU3Ed__18_MoveNext_mB242737C480B2DDB8D6071451FAF6E7828B80ECD_AdjustorThunk (void);
extern void U3CCreateStreamU3Ed__18_SetStateMachine_m42351407A9838DDBDC53E29F727A2AAD84D322C9_AdjustorThunk (void);
extern void U3CInitConnectionU3Ed__19_MoveNext_m4208190EF7B0009B922D95619E8CDB5882393573_AdjustorThunk (void);
extern void U3CInitConnectionU3Ed__19_SetStateMachine_m3D94D0DB6431FD261C02E722F749FA086FE4FC33_AdjustorThunk (void);
extern void U3CInitializeU3Ed__42_MoveNext_m4E82E3BAC6AD66ACEF6A50B10D2AEA2695188FDA_AdjustorThunk (void);
extern void U3CInitializeU3Ed__42_SetStateMachine_m3DD116C544191BC17E335CE0D18C37EE6C35CA67_AdjustorThunk (void);
extern void U3CReadHeadersU3Ed__43_MoveNext_mEE6975063FFC03A4D0B05304C117BC806C945FEC_AdjustorThunk (void);
extern void U3CReadHeadersU3Ed__43_SetStateMachine_m4D09694F06F8E84E2FF5FBD90906333AC3E62CB1_AdjustorThunk (void);
extern void U3CWaitForCompletionU3Ed__53_MoveNext_m60F40364903BB53293D6DB6380D95DEF05C30025_AdjustorThunk (void);
extern void U3CWaitForCompletionU3Ed__53_SetStateMachine_m2D1B2C8F1AAD9115FA7DC7FB18585CE5186ADED7_AdjustorThunk (void);
extern void U3CRunU3Ed__54_MoveNext_mE284183F33E17445D2C1C1AB42DD2F188FDBFC17_AdjustorThunk (void);
extern void U3CRunU3Ed__54_SetStateMachine_mF7358A14C9EC6C10281CDDA4761FE1B1C89A9D0F_AdjustorThunk (void);
extern void U3CFinishReadingU3Ed__55_MoveNext_m3BA1E8FC40146118D2F626BE486F78F46C6B83A2_AdjustorThunk (void);
extern void U3CFinishReadingU3Ed__55_SetStateMachine_mF6B782E86696FFF0546FB0ED0812E669D7960BB4_AdjustorThunk (void);
extern void U3CFinishWritingU3Ed__30_MoveNext_mEE4AC8EC28527F808A53FD5BB8B6A612C717BA59_AdjustorThunk (void);
extern void U3CFinishWritingU3Ed__30_SetStateMachine_m826AA573335332BFA1BE941DE9BD655DF9E7A82B_AdjustorThunk (void);
extern void U3CWriteAsyncU3Ed__31_MoveNext_m118EF33A63C9389D87A9F12799C926D40B14D047_AdjustorThunk (void);
extern void U3CWriteAsyncU3Ed__31_SetStateMachine_mF5D8834A6D2FDD61C899CF3DEAE017005A33E292_AdjustorThunk (void);
extern void U3CProcessWriteU3Ed__32_MoveNext_m909AF6057238B0C301CCD03E59093162668B6855_AdjustorThunk (void);
extern void U3CProcessWriteU3Ed__32_SetStateMachine_m8CA38433A90F2E77784FB7C57F78E916932E3EA8_AdjustorThunk (void);
extern void U3CInitializeU3Ed__34_MoveNext_mC46A2082BDCEA3D6090CF344BC4F9C0F20AC152D_AdjustorThunk (void);
extern void U3CInitializeU3Ed__34_SetStateMachine_m91656B6F2C4CE356B78B5683A345FB0419E9DC50_AdjustorThunk (void);
extern void U3CSetHeadersAsyncU3Ed__35_MoveNext_m590745E97FF89EB8743E44A0C588F0721C25F64F_AdjustorThunk (void);
extern void U3CSetHeadersAsyncU3Ed__35_SetStateMachine_mC514C7FEA01B5C0FF9BEE0F038D3D5F04B760465_AdjustorThunk (void);
extern void U3CWriteRequestAsyncU3Ed__36_MoveNext_mCE917482309E220A35B308EB92267DE4333C0D9F_AdjustorThunk (void);
extern void U3CWriteRequestAsyncU3Ed__36_SetStateMachine_mECDCF8826C312E485A7504D8F63F2DB5D7AE21A0_AdjustorThunk (void);
extern void U3CWriteChunkTrailer_innerU3Ed__37_MoveNext_mFD300E7950CD77F3EF10F3561F711FA5B4B090C5_AdjustorThunk (void);
extern void U3CWriteChunkTrailer_innerU3Ed__37_SetStateMachine_m7C3E6AC7F159D272F887732DB9D5B10A7390878F_AdjustorThunk (void);
extern void U3CWriteChunkTrailerU3Ed__38_MoveNext_mA363A5B8053962B7408D2475E026E69EC61EBBAB_AdjustorThunk (void);
extern void U3CWriteChunkTrailerU3Ed__38_SetStateMachine_mB505AD1314323C5876A9B77C8A7AB8550B868F49_AdjustorThunk (void);
extern void U3CReadAsyncU3Ed__48_MoveNext_mFC68310659E4585F3E0B277689CE8F3545B36A42_AdjustorThunk (void);
extern void U3CReadAsyncU3Ed__48_SetStateMachine_mE4C27C131B2CF9A1877103B20A58D7CF18B86A68_AdjustorThunk (void);
extern void U3CProcessReadU3Ed__49_MoveNext_mCF1DDA8282F122707865DD7843D8B9333BFA8995_AdjustorThunk (void);
extern void U3CProcessReadU3Ed__49_SetStateMachine_m7DCB2CE9CBF4BC51713AF916B260D2A34CB1A804_AdjustorThunk (void);
extern void U3CInnerReadAsyncU3Ed__50_MoveNext_m8661E9A672D05A5BB37C6B71ADDB733DD0A3BA0E_AdjustorThunk (void);
extern void U3CInnerReadAsyncU3Ed__50_SetStateMachine_m4C4D1E71476FAE6608F789668595696A888BCFF0_AdjustorThunk (void);
extern void U3CEnsureReadAsyncU3Ed__51_MoveNext_mBA1912ECF12B36F3B28037F9C81973B9988E211F_AdjustorThunk (void);
extern void U3CEnsureReadAsyncU3Ed__51_SetStateMachine_m20AE4061614B8AA8E6AA3EC4C4DFCF82150C6BC8_AdjustorThunk (void);
extern void U3CInitializeU3Ed__56_MoveNext_mB6330AF9653EAB35D98177F0E077BC9D12561CC6_AdjustorThunk (void);
extern void U3CInitializeU3Ed__56_SetStateMachine_mC34B7BE729B3657CDD84BE6308D2452C6686B589_AdjustorThunk (void);
extern void U3CReadAllAsyncU3Ed__57_MoveNext_mBFD8843716DBCF5131C5F214020B9B4C442BB028_AdjustorThunk (void);
extern void U3CReadAllAsyncU3Ed__57_SetStateMachine_m3335349A75579BA1BF3A5594B505B269667DDC46_AdjustorThunk (void);
extern void U3CInitReadAsyncU3Ed__61_MoveNext_mC2B382B0CBF4566CA8F85CA4DDD89B43A15D0F07_AdjustorThunk (void);
extern void U3CInitReadAsyncU3Ed__61_SetStateMachine_mDA4F4F7AC52B912662DAA9683564D58D82AFDAC2_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[101] = 
{
	{ 0x0600009B, CFRange__ctor_mE95FD6CECA2FA0AD9454A1334058B5D16B2A4928_AdjustorThunk },
	{ 0x060000FB, U3CStartOperationU3Ed__23_MoveNext_mDE591A3806D9523FC8D2E26ED510CEE7963F8FF2_AdjustorThunk },
	{ 0x060000FC, U3CStartOperationU3Ed__23_SetStateMachine_mA0C8C029457FAAE036C6098FDC66C98574D0BD03_AdjustorThunk },
	{ 0x060000FD, U3CProcessOperationU3Ed__24_MoveNext_mA73F0FD80CE65D2E3E12390E49E3F34CFF47E98B_AdjustorThunk },
	{ 0x060000FE, U3CProcessOperationU3Ed__24_SetStateMachine_mA9912D191EE4A99536A61DEED059DC89B765A823_AdjustorThunk },
	{ 0x060000FF, U3CInnerReadU3Ed__25_MoveNext_mC4567E370C71DA9DA0F704C570308D106D4DDB2C_AdjustorThunk },
	{ 0x06000100, U3CInnerReadU3Ed__25_SetStateMachine_m15DB2E97371A46CBCCD53DCAE7A4FE6F5FF84DCE_AdjustorThunk },
	{ 0x06000145, U3CProcessAuthenticationU3Ed__47_MoveNext_m43E7652EA23BFB6926E99D87A635920E8C10B422_AdjustorThunk },
	{ 0x06000146, U3CProcessAuthenticationU3Ed__47_SetStateMachine_mD020F0C8569DCDC3496AF18CE204E77E7919A6EC_AdjustorThunk },
	{ 0x06000147, U3CStartOperationU3Ed__58_MoveNext_mE4390271E237A2642BC6C9CC2522A860DB0AC91E_AdjustorThunk },
	{ 0x06000148, U3CStartOperationU3Ed__58_SetStateMachine_m6D7E173F740C08FCBBA924ADB742B956BC31B92F_AdjustorThunk },
	{ 0x0600014B, U3CInnerReadU3Ed__66_MoveNext_m5DFDC2139602BBC2F86D14BDA64B4A49ECDD90EB_AdjustorThunk },
	{ 0x0600014C, U3CInnerReadU3Ed__66_SetStateMachine_mBA42C0B565B5D3F43D109D2A8CC66EE8CE9BC920_AdjustorThunk },
	{ 0x0600014D, U3CInnerWriteU3Ed__67_MoveNext_mDF6F0FEA0FCAE97EEB2E5A2546446C00674CCEA3_AdjustorThunk },
	{ 0x0600014E, U3CInnerWriteU3Ed__67_SetStateMachine_m7448CF503BCD3FEC38241FB22DBA3AB4B91FF5B1_AdjustorThunk },
	{ 0x06000171, U3CCreateStreamU3Ed__17_MoveNext_m2C5C58B4824641D56245C496817CBADF69343260_AdjustorThunk },
	{ 0x06000172, U3CCreateStreamU3Ed__17_SetStateMachine_m1830D99E90C0D7A32F6DA3021ADD38487CADEE71_AdjustorThunk },
	{ 0x060002D5, LowerCaseMapping__ctor_m06D0A21D5D72E39535F82076EF046F98C62D7D5A_AdjustorThunk },
	{ 0x060005E6, DefaultExtendedTypeDescriptor__ctor_m23A3BC29A6EF7571E339B9EBA5059F6490177C3C_AdjustorThunk },
	{ 0x060005E7, DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87_AdjustorThunk },
	{ 0x060005E8, DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F_AdjustorThunk },
	{ 0x060005E9, DefaultTypeDescriptor__ctor_m8181176F10EBEA8A1DE3703C9C355ABB114A78D6_AdjustorThunk },
	{ 0x060005EA, DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0_AdjustorThunk },
	{ 0x060005EB, DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283_AdjustorThunk },
	{ 0x060006C0, X509ChainStatus__ctor_m5AD96E11604F8DB96673677AC2FFF68EBA550859_AdjustorThunk },
	{ 0x06000950, RecognizedAttribute__ctor_m57B8152BE5C905023F282B5B31A2EDC4A582990A_AdjustorThunk },
	{ 0x06000951, RecognizedAttribute_get_Token_mB866B1151FF6270E37D33EB30220FC2D7AB1BDEB_AdjustorThunk },
	{ 0x06000952, RecognizedAttribute_IsEqualTo_m9DAB082F220BB64EBD6825DF9D3A578A99308E0F_AdjustorThunk },
	{ 0x06000969, HeaderVariantInfo__ctor_mA0EBB5018465610E64AC1C50B92C94B831721A85_AdjustorThunk },
	{ 0x0600096A, HeaderVariantInfo_get_Name_m7F37F7252CA8DB9E929D9F5AFB0A4284B094AD42_AdjustorThunk },
	{ 0x0600096B, HeaderVariantInfo_get_Variant_mD5B9F8CC046969C22B093E491C917C714D9181D1_AdjustorThunk },
	{ 0x06000ADD, AuthorizationState_get_IsCompleted_m60FA1039CD41A7AD50984DADEA562F82E60470AB_AdjustorThunk },
	{ 0x06000ADE, AuthorizationState_get_NtlmAuthState_m93CF64385E0E77039CF782E319EED9EC96ED063C_AdjustorThunk },
	{ 0x06000ADF, AuthorizationState_get_IsNtlmAuthenticated_m901CE42BD2DB28DD9D6605500D8E4D360309DA8A_AdjustorThunk },
	{ 0x06000AE0, AuthorizationState__ctor_m6DDA04B33B8A520B93FBDF8AC4BBA3B7CCC03CBE_AdjustorThunk },
	{ 0x06000AE1, AuthorizationState_CheckAuthorization_mD23E50FD196D22054A710B9200FC6510D5098EA5_AdjustorThunk },
	{ 0x06000AE2, AuthorizationState_Reset_mE7C4981CBBB1630D605A83D09D74D7C56AE0B9B9_AdjustorThunk },
	{ 0x06000AE3, AuthorizationState_ToString_m6426C6029B83D041B9F1B9871A4541F70A2EFC00_AdjustorThunk },
	{ 0x06000AE9, U3CMyGetResponseAsyncU3Ed__236_MoveNext_mFBD2D479D77244D04F25FB873DBC765EB9CBF79C_AdjustorThunk },
	{ 0x06000AEA, U3CMyGetResponseAsyncU3Ed__236_SetStateMachine_mAFA7F97DD138F2C8984F7BDA6EA2FB2E5F6D021F_AdjustorThunk },
	{ 0x06000AEB, U3CGetResponseFromDataU3Ed__237_MoveNext_mAEE81AAA2DC7E3FB0B2E7631C6EC526E38C2AE0A_AdjustorThunk },
	{ 0x06000AEC, U3CGetResponseFromDataU3Ed__237_SetStateMachine_m8B33A8FE618AA966D8ABD2149C19C4E6DD568F8A_AdjustorThunk },
	{ 0x06000AED, U3CU3CGetRewriteHandlerU3Eb__263_0U3Ed_MoveNext_m31240B9D21116E276C0ECED04A4E62161F0EE147_AdjustorThunk },
	{ 0x06000AEE, U3CU3CGetRewriteHandlerU3Eb__263_0U3Ed_SetStateMachine_mE374C4F526074CD29C9C6EB7F2B6419861F80077_AdjustorThunk },
	{ 0x06000AFF, IPv6AddressFormatter__ctor_m724F22E5D122B2F5FCD830B4B8D5995A69169663_AdjustorThunk },
	{ 0x06000B01, IPv6AddressFormatter_AsIPv4Int_m595ECC7763D02462B0FF1327A629F5BEF53D9CD7_AdjustorThunk },
	{ 0x06000B02, IPv6AddressFormatter_IsIPv4Compatible_m0E070C1C8D153AF6B8CB76231CF01F091EDD06E3_AdjustorThunk },
	{ 0x06000B03, IPv6AddressFormatter_IsIPv4Mapped_m17D6698E8EF2F468DCC0D3828EDB92C2083CE0DF_AdjustorThunk },
	{ 0x06000B04, IPv6AddressFormatter_ToString_m4758E87FE39266AB9A24AF592D8D3B3B703C7735_AdjustorThunk },
	{ 0x06000B5D, U3CWaitAsyncU3Ed__3_MoveNext_m70BD3156E3C9225DC6FA0051F6F1CFA5C51DC82D_AdjustorThunk },
	{ 0x06000B5E, U3CWaitAsyncU3Ed__3_SetStateMachine_m3C70A70D68A142473023CE4E99F132863B0B90F2_AdjustorThunk },
	{ 0x06000B62, U3CStartSchedulerU3Ed__32_MoveNext_mA205AFA620495AA4DFF9C4C0F8BEE0D6A5E7F24B_AdjustorThunk },
	{ 0x06000B63, U3CStartSchedulerU3Ed__32_SetStateMachine_mB15C867BE900F84093D5B0C44A2307129F47A4A4_AdjustorThunk },
	{ 0x06000B6E, U3CWaitForCompletionU3Ed__8_MoveNext_m86A34E1FB02C2D0736D72DFF4FB1D6B05E6775BB_AdjustorThunk },
	{ 0x06000B6F, U3CWaitForCompletionU3Ed__8_SetStateMachine_mFFB894666023227C9CF56BD8D7AB8D557BF0AF81_AdjustorThunk },
	{ 0x06000B8B, U3CConnectU3Ed__16_MoveNext_mA0B90B92C30BB0285B7B55977D90D52881745535_AdjustorThunk },
	{ 0x06000B8C, U3CConnectU3Ed__16_SetStateMachine_m22694F920ED2EB556AF7CA8CE687A9DDB5353084_AdjustorThunk },
	{ 0x06000B8D, U3CCreateStreamU3Ed__18_MoveNext_mB242737C480B2DDB8D6071451FAF6E7828B80ECD_AdjustorThunk },
	{ 0x06000B8E, U3CCreateStreamU3Ed__18_SetStateMachine_m42351407A9838DDBDC53E29F727A2AAD84D322C9_AdjustorThunk },
	{ 0x06000B8F, U3CInitConnectionU3Ed__19_MoveNext_m4208190EF7B0009B922D95619E8CDB5882393573_AdjustorThunk },
	{ 0x06000B90, U3CInitConnectionU3Ed__19_SetStateMachine_m3D94D0DB6431FD261C02E722F749FA086FE4FC33_AdjustorThunk },
	{ 0x06000BBE, U3CInitializeU3Ed__42_MoveNext_m4E82E3BAC6AD66ACEF6A50B10D2AEA2695188FDA_AdjustorThunk },
	{ 0x06000BBF, U3CInitializeU3Ed__42_SetStateMachine_m3DD116C544191BC17E335CE0D18C37EE6C35CA67_AdjustorThunk },
	{ 0x06000BC0, U3CReadHeadersU3Ed__43_MoveNext_mEE6975063FFC03A4D0B05304C117BC806C945FEC_AdjustorThunk },
	{ 0x06000BC1, U3CReadHeadersU3Ed__43_SetStateMachine_m4D09694F06F8E84E2FF5FBD90906333AC3E62CB1_AdjustorThunk },
	{ 0x06000BE1, U3CWaitForCompletionU3Ed__53_MoveNext_m60F40364903BB53293D6DB6380D95DEF05C30025_AdjustorThunk },
	{ 0x06000BE2, U3CWaitForCompletionU3Ed__53_SetStateMachine_m2D1B2C8F1AAD9115FA7DC7FB18585CE5186ADED7_AdjustorThunk },
	{ 0x06000BE3, U3CRunU3Ed__54_MoveNext_mE284183F33E17445D2C1C1AB42DD2F188FDBFC17_AdjustorThunk },
	{ 0x06000BE4, U3CRunU3Ed__54_SetStateMachine_mF7358A14C9EC6C10281CDDA4761FE1B1C89A9D0F_AdjustorThunk },
	{ 0x06000BE5, U3CFinishReadingU3Ed__55_MoveNext_m3BA1E8FC40146118D2F626BE486F78F46C6B83A2_AdjustorThunk },
	{ 0x06000BE6, U3CFinishReadingU3Ed__55_SetStateMachine_mF6B782E86696FFF0546FB0ED0812E669D7960BB4_AdjustorThunk },
	{ 0x06000BFC, U3CFinishWritingU3Ed__30_MoveNext_mEE4AC8EC28527F808A53FD5BB8B6A612C717BA59_AdjustorThunk },
	{ 0x06000BFD, U3CFinishWritingU3Ed__30_SetStateMachine_m826AA573335332BFA1BE941DE9BD655DF9E7A82B_AdjustorThunk },
	{ 0x06000BFE, U3CWriteAsyncU3Ed__31_MoveNext_m118EF33A63C9389D87A9F12799C926D40B14D047_AdjustorThunk },
	{ 0x06000BFF, U3CWriteAsyncU3Ed__31_SetStateMachine_mF5D8834A6D2FDD61C899CF3DEAE017005A33E292_AdjustorThunk },
	{ 0x06000C00, U3CProcessWriteU3Ed__32_MoveNext_m909AF6057238B0C301CCD03E59093162668B6855_AdjustorThunk },
	{ 0x06000C01, U3CProcessWriteU3Ed__32_SetStateMachine_m8CA38433A90F2E77784FB7C57F78E916932E3EA8_AdjustorThunk },
	{ 0x06000C02, U3CInitializeU3Ed__34_MoveNext_mC46A2082BDCEA3D6090CF344BC4F9C0F20AC152D_AdjustorThunk },
	{ 0x06000C03, U3CInitializeU3Ed__34_SetStateMachine_m91656B6F2C4CE356B78B5683A345FB0419E9DC50_AdjustorThunk },
	{ 0x06000C04, U3CSetHeadersAsyncU3Ed__35_MoveNext_m590745E97FF89EB8743E44A0C588F0721C25F64F_AdjustorThunk },
	{ 0x06000C05, U3CSetHeadersAsyncU3Ed__35_SetStateMachine_mC514C7FEA01B5C0FF9BEE0F038D3D5F04B760465_AdjustorThunk },
	{ 0x06000C06, U3CWriteRequestAsyncU3Ed__36_MoveNext_mCE917482309E220A35B308EB92267DE4333C0D9F_AdjustorThunk },
	{ 0x06000C07, U3CWriteRequestAsyncU3Ed__36_SetStateMachine_mECDCF8826C312E485A7504D8F63F2DB5D7AE21A0_AdjustorThunk },
	{ 0x06000C08, U3CWriteChunkTrailer_innerU3Ed__37_MoveNext_mFD300E7950CD77F3EF10F3561F711FA5B4B090C5_AdjustorThunk },
	{ 0x06000C09, U3CWriteChunkTrailer_innerU3Ed__37_SetStateMachine_m7C3E6AC7F159D272F887732DB9D5B10A7390878F_AdjustorThunk },
	{ 0x06000C0A, U3CWriteChunkTrailerU3Ed__38_MoveNext_mA363A5B8053962B7408D2475E026E69EC61EBBAB_AdjustorThunk },
	{ 0x06000C0B, U3CWriteChunkTrailerU3Ed__38_SetStateMachine_mB505AD1314323C5876A9B77C8A7AB8550B868F49_AdjustorThunk },
	{ 0x06000C30, U3CReadAsyncU3Ed__48_MoveNext_mFC68310659E4585F3E0B277689CE8F3545B36A42_AdjustorThunk },
	{ 0x06000C31, U3CReadAsyncU3Ed__48_SetStateMachine_mE4C27C131B2CF9A1877103B20A58D7CF18B86A68_AdjustorThunk },
	{ 0x06000C32, U3CProcessReadU3Ed__49_MoveNext_mCF1DDA8282F122707865DD7843D8B9333BFA8995_AdjustorThunk },
	{ 0x06000C33, U3CProcessReadU3Ed__49_SetStateMachine_m7DCB2CE9CBF4BC51713AF916B260D2A34CB1A804_AdjustorThunk },
	{ 0x06000C34, U3CInnerReadAsyncU3Ed__50_MoveNext_m8661E9A672D05A5BB37C6B71ADDB733DD0A3BA0E_AdjustorThunk },
	{ 0x06000C35, U3CInnerReadAsyncU3Ed__50_SetStateMachine_m4C4D1E71476FAE6608F789668595696A888BCFF0_AdjustorThunk },
	{ 0x06000C36, U3CEnsureReadAsyncU3Ed__51_MoveNext_mBA1912ECF12B36F3B28037F9C81973B9988E211F_AdjustorThunk },
	{ 0x06000C37, U3CEnsureReadAsyncU3Ed__51_SetStateMachine_m20AE4061614B8AA8E6AA3EC4C4DFCF82150C6BC8_AdjustorThunk },
	{ 0x06000C38, U3CInitializeU3Ed__56_MoveNext_mB6330AF9653EAB35D98177F0E077BC9D12561CC6_AdjustorThunk },
	{ 0x06000C39, U3CInitializeU3Ed__56_SetStateMachine_mC34B7BE729B3657CDD84BE6308D2452C6686B589_AdjustorThunk },
	{ 0x06000C3A, U3CReadAllAsyncU3Ed__57_MoveNext_mBFD8843716DBCF5131C5F214020B9B4C442BB028_AdjustorThunk },
	{ 0x06000C3B, U3CReadAllAsyncU3Ed__57_SetStateMachine_m3335349A75579BA1BF3A5594B505B269667DDC46_AdjustorThunk },
	{ 0x06000C3C, U3CInitReadAsyncU3Ed__61_MoveNext_mC2B382B0CBF4566CA8F85CA4DDD89B43A15D0F07_AdjustorThunk },
	{ 0x06000C3D, U3CInitReadAsyncU3Ed__61_SetStateMachine_mDA4F4F7AC52B912662DAA9683564D58D82AFDAC2_AdjustorThunk },
};
static const int32_t s_InvokerIndices[3438] = 
{
	4308,
	4031,
	4724,
	4308,
	2620,
	4133,
	4133,
	4184,
	3913,
	4864,
	4878,
	4869,
	1462,
	289,
	1462,
	435,
	1462,
	435,
	1462,
	499,
	1462,
	20,
	1462,
	612,
	3265,
	1462,
	3319,
	1462,
	1191,
	1462,
	1512,
	1462,
	181,
	1462,
	181,
	1462,
	2551,
	1462,
	437,
	1462,
	1513,
	1462,
	861,
	1462,
	1625,
	1462,
	768,
	1462,
	501,
	1462,
	2551,
	1462,
	104,
	1462,
	62,
	1462,
	183,
	1462,
	182,
	1462,
	769,
	1462,
	505,
	1462,
	505,
	1462,
	505,
	1462,
	501,
	1462,
	880,
	1462,
	880,
	1462,
	880,
	1462,
	435,
	1462,
	435,
	1462,
	1190,
	1462,
	2551,
	1462,
	767,
	96,
	3881,
	3220,
	3191,
	603,
	603,
	3265,
	2646,
	3265,
	3220,
	3265,
	3754,
	638,
	3754,
	638,
	3954,
	995,
	3356,
	38,
	4651,
	4651,
	4651,
	4387,
	4651,
	4651,
	3191,
	3167,
	3220,
	3220,
	3220,
	3220,
	3171,
	667,
	457,
	3664,
	37,
	3265,
	270,
	122,
	1510,
	3220,
	3320,
	3191,
	2603,
	3265,
	2646,
	4273,
	4272,
	4815,
	4272,
	4272,
	1445,
	3265,
	3173,
	2605,
	4674,
	3265,
	4815,
	3265,
	2646,
	3265,
	1445,
	4888,
	4674,
	3171,
	4271,
	1938,
	4063,
	4653,
	1317,
	1445,
	3997,
	4724,
	4674,
	4674,
	3995,
	4723,
	3191,
	4888,
	1445,
	4271,
	1939,
	1939,
	1445,
	3997,
	4724,
	4151,
	4151,
	3960,
	4864,
	4815,
	1445,
	4869,
	1444,
	1444,
	625,
	3265,
	4888,
	2620,
	4653,
	3173,
	3173,
	3191,
	3191,
	3171,
	3171,
	3191,
	4888,
	2620,
	3191,
	3996,
	3755,
	4888,
	3996,
	4297,
	4297,
	4297,
	4297,
	4271,
	4308,
	4308,
	4308,
	4864,
	4869,
	4869,
	4888,
	3265,
	3265,
	1462,
	800,
	3265,
	3191,
	4299,
	4016,
	4016,
	4029,
	1976,
	2226,
	3265,
	800,
	3171,
	3171,
	810,
	3191,
	2603,
	3265,
	2603,
	810,
	3171,
	3191,
	2603,
	2620,
	3191,
	3220,
	3191,
	3171,
	2603,
	1468,
	2603,
	3265,
	1966,
	1966,
	1966,
	1814,
	3191,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	1468,
	1814,
	3191,
	3171,
	2603,
	268,
	3191,
	268,
	1814,
	268,
	1814,
	1462,
	486,
	4308,
	4018,
	265,
	3787,
	3191,
	221,
	461,
	117,
	116,
	270,
	3191,
	3191,
	1485,
	4724,
	4308,
	1976,
	552,
	452,
	3191,
	66,
	122,
	202,
	1830,
	202,
	2620,
	627,
	810,
	443,
	443,
	649,
	367,
	180,
	716,
	220,
	671,
	1035,
	1814,
	1615,
	1615,
	3220,
	2646,
	3265,
	3191,
	1002,
	3220,
	3220,
	3220,
	3172,
	3172,
	2604,
	3171,
	2603,
	3171,
	4888,
	3265,
	3265,
	2620,
	3265,
	2620,
	3265,
	3171,
	3265,
	2620,
	3265,
	2620,
	96,
	3191,
	3191,
	3220,
	3220,
	3191,
	3191,
	3191,
	3265,
	3220,
	3265,
	3191,
	3191,
	603,
	603,
	3265,
	1100,
	1033,
	3265,
	2646,
	3265,
	4869,
	4888,
	4309,
	4888,
	4869,
	4869,
	4888,
	3191,
	3171,
	3220,
	2646,
	1465,
	1030,
	3265,
	2620,
	4308,
	4888,
	4758,
	4724,
	4724,
	3265,
	486,
	3265,
	455,
	3265,
	662,
	662,
	1033,
	3191,
	3265,
	4888,
	4888,
	3265,
	1976,
	3400,
	3399,
	4864,
	4390,
	4395,
	4862,
	4757,
	2605,
	1445,
	3220,
	4888,
	3265,
	2620,
	2620,
	2620,
	3191,
	2226,
	3171,
	2620,
	3191,
	4817,
	4758,
	4724,
	4033,
	3788,
	3581,
	3265,
	917,
	4888,
	4383,
	3811,
	4381,
	3761,
	3220,
	3220,
	3220,
	3220,
	3172,
	3191,
	3220,
	4758,
	3220,
	1099,
	2226,
	3220,
	3265,
	3170,
	2206,
	2206,
	4389,
	4389,
	3191,
	3265,
	2646,
	2620,
	1460,
	1465,
	824,
	3696,
	4721,
	1470,
	1470,
	1470,
	3191,
	3191,
	3191,
	3191,
	3191,
	3171,
	3220,
	3220,
	3220,
	3191,
	3220,
	3191,
	4758,
	4869,
	4888,
	3191,
	3171,
	3191,
	3191,
	3191,
	3220,
	3191,
	3191,
	3220,
	3220,
	3191,
	4754,
	4758,
	4754,
	4650,
	3171,
	3191,
	4398,
	4398,
	2226,
	4724,
	3962,
	3191,
	3171,
	1459,
	2604,
	3265,
	3571,
	3265,
	1023,
	1973,
	1023,
	644,
	1973,
	3265,
	3487,
	4054,
	3950,
	59,
	3,
	21,
	531,
	500,
	287,
	654,
	3465,
	3774,
	4655,
	4030,
	3220,
	4754,
	4754,
	4754,
	4754,
	3999,
	831,
	780,
	2226,
	2226,
	2226,
	4065,
	1023,
	4724,
	444,
	799,
	3790,
	3576,
	1973,
	1023,
	2620,
	4888,
	3265,
	3265,
	3265,
	2620,
	1470,
	1470,
	3353,
	3388,
	3338,
	3337,
	3357,
	4139,
	4235,
	4754,
	4754,
	4754,
	4754,
	4888,
	3191,
	3171,
	3191,
	1452,
	659,
	656,
	4878,
	4888,
	3171,
	2205,
	2205,
	2205,
	1085,
	2603,
	4724,
	4724,
	3220,
	3191,
	1452,
	659,
	656,
	810,
	3778,
	3591,
	3591,
	3563,
	3563,
	4397,
	4357,
	3771,
	3563,
	4379,
	4379,
	3778,
	3966,
	3448,
	3592,
	3748,
	3819,
	3819,
	3776,
	4711,
	4556,
	4750,
	3805,
	4055,
	4055,
	3818,
	3778,
	3804,
	1462,
	2620,
	1465,
	3191,
	3191,
	3191,
	3220,
	2646,
	3220,
	2646,
	3265,
	789,
	3265,
	2620,
	3265,
	4505,
	4653,
	4888,
	4878,
	3265,
	2226,
	1100,
	1100,
	662,
	455,
	3265,
	2620,
	1460,
	546,
	1470,
	1470,
	4825,
	4884,
	3171,
	3250,
	3220,
	3191,
	1973,
	4398,
	3831,
	2226,
	1098,
	1976,
	1032,
	1032,
	3265,
	121,
	4724,
	1976,
	3220,
	3220,
	4888,
	51,
	3191,
	2620,
	3265,
	3265,
	570,
	1098,
	483,
	368,
	3191,
	810,
	3171,
	3191,
	3191,
	3265,
	3191,
	3171,
	1973,
	1460,
	3191,
	1973,
	3265,
	2620,
	3220,
	3191,
	3191,
	3265,
	4888,
	3265,
	584,
	3220,
	2646,
	2602,
	2620,
	2620,
	2620,
	1210,
	570,
	2620,
	2620,
	775,
	1485,
	1485,
	847,
	4641,
	4758,
	4758,
	4758,
	4758,
	4758,
	4758,
	4754,
	4754,
	4382,
	4060,
	3593,
	3593,
	3812,
	4724,
	4724,
	4304,
	3171,
	3191,
	1973,
	3265,
	4035,
	511,
	917,
	3265,
	1210,
	22,
	4755,
	4724,
	4724,
	4655,
	4651,
	3265,
	2603,
	3220,
	3171,
	2620,
	3220,
	3191,
	3191,
	1976,
	3265,
	788,
	2646,
	512,
	833,
	1101,
	1976,
	3220,
	1468,
	3191,
	3220,
	4869,
	4888,
	551,
	3220,
	4888,
	3265,
	3191,
	3171,
	1973,
	1973,
	1973,
	1460,
	3191,
	3265,
	2620,
	3220,
	3191,
	3191,
	3265,
	1465,
	3265,
	3265,
	2603,
	2603,
	2603,
	2603,
	3171,
	3171,
	3171,
	3265,
	2603,
	1317,
	783,
	2603,
	1317,
	3265,
	2603,
	3265,
	2603,
	3171,
	1814,
	2603,
	1317,
	3265,
	2603,
	3171,
	1814,
	3171,
	1814,
	3171,
	3171,
	3171,
	3171,
	3170,
	2226,
	1085,
	3265,
	1699,
	3220,
	3265,
	4869,
	149,
	253,
	783,
	2603,
	2603,
	2205,
	1814,
	1814,
	2603,
	4888,
	3265,
	83,
	253,
	1973,
	3171,
	3191,
	1460,
	3191,
	4888,
	3265,
	2620,
	3220,
	3191,
	3265,
	828,
	3265,
	1470,
	1470,
	3265,
	828,
	1317,
	782,
	784,
	783,
	515,
	3220,
	3191,
	783,
	3191,
	1973,
	3191,
	3191,
	3191,
	3191,
	3191,
	672,
	2620,
	1973,
	3171,
	3171,
	4304,
	2620,
	2620,
	2603,
	3191,
	1979,
	1037,
	3191,
	3265,
	3191,
	3191,
	3191,
	3170,
	3171,
	1699,
	4650,
	3170,
	2205,
	3265,
	3170,
	3191,
	1813,
	4650,
	3265,
	1317,
	1460,
	3265,
	1830,
	2205,
	2226,
	3220,
	3220,
	3220,
	3220,
	3220,
	3220,
	4754,
	4754,
	4754,
	3220,
	4754,
	785,
	3265,
	3265,
	3220,
	2620,
	3265,
	3265,
	844,
	3191,
	2602,
	2602,
	2620,
	2620,
	2603,
	3265,
	3265,
	3265,
	3220,
	3265,
	1976,
	3171,
	2603,
	3170,
	3265,
	2603,
	3265,
	1699,
	3170,
	1699,
	3171,
	4888,
	3265,
	34,
	3265,
	3265,
	3265,
	3265,
	3220,
	3265,
	3265,
	1979,
	3265,
	697,
	697,
	3265,
	3265,
	3265,
	2603,
	3171,
	3171,
	783,
	515,
	3265,
	2205,
	1814,
	1814,
	3191,
	86,
	4724,
	3265,
	2603,
	3220,
	3171,
	3171,
	1317,
	2603,
	1317,
	783,
	1830,
	1976,
	1814,
	1976,
	788,
	1465,
	3265,
	3191,
	3191,
	1465,
	823,
	4888,
	4888,
	2620,
	2620,
	4869,
	4878,
	4869,
	3191,
	3191,
	3142,
	3171,
	3191,
	3172,
	4888,
	4862,
	4862,
	3265,
	36,
	219,
	4869,
	4878,
	4862,
	4862,
	4888,
	4888,
	2620,
	3220,
	3265,
	2646,
	3265,
	2603,
	2603,
	3191,
	3220,
	2646,
	3171,
	2620,
	3265,
	2620,
	254,
	810,
	2620,
	2205,
	3265,
	3171,
	1830,
	3265,
	3191,
	2620,
	2603,
	1973,
	1334,
	3220,
	3220,
	1830,
	2226,
	1830,
	1334,
	2620,
	3191,
	1460,
	3265,
	2646,
	3265,
	566,
	3220,
	3220,
	3171,
	3191,
	2620,
	2646,
	3265,
	2603,
	4869,
	3265,
	1025,
	1973,
	3265,
	3265,
	3191,
	4723,
	4724,
	3191,
	3265,
	2620,
	4888,
	4308,
	3265,
	3191,
	4817,
	2620,
	2620,
	3265,
	2620,
	1465,
	2620,
	2620,
	2620,
	3191,
	4863,
	3265,
	3250,
	3172,
	3172,
	3265,
	4888,
	455,
	662,
	2226,
	3265,
	822,
	1460,
	3220,
	3265,
	3191,
	2620,
	3191,
	3171,
	1976,
	1976,
	3191,
	3171,
	3191,
	1460,
	3191,
	4888,
	1100,
	662,
	1976,
	2226,
	2226,
	3265,
	2646,
	3220,
	2226,
	3171,
	3220,
	4888,
	3191,
	1032,
	1033,
	1033,
	455,
	662,
	2226,
	3265,
	3265,
	3220,
	3220,
	3191,
	3265,
	2646,
	1976,
	3220,
	3191,
	3265,
	4888,
	3265,
	3191,
	3191,
	3220,
	3191,
	1100,
	455,
	1032,
	1033,
	1033,
	3265,
	2620,
	3191,
	2226,
	3171,
	4888,
	2620,
	3191,
	2226,
	3171,
	4888,
	2646,
	2620,
	2620,
	3191,
	2226,
	3171,
	2620,
	3191,
	1976,
	1976,
	1033,
	1033,
	3265,
	2620,
	3191,
	3191,
	2226,
	3171,
	3220,
	4888,
	2620,
	1465,
	3191,
	2226,
	3171,
	3265,
	2620,
	3191,
	3191,
	2226,
	3171,
	3220,
	4888,
	2603,
	3171,
	2226,
	3171,
	3220,
	4888,
	3220,
	3191,
	1032,
	1033,
	1033,
	3265,
	2603,
	2226,
	3171,
	2620,
	1100,
	1100,
	3191,
	662,
	455,
	1976,
	2226,
	2226,
	1100,
	2620,
	1468,
	3171,
	1973,
	1830,
	3265,
	2226,
	1460,
	3265,
	2603,
	1830,
	1334,
	2620,
	2603,
	3191,
	2620,
	2620,
	3171,
	3191,
	3191,
	1973,
	1334,
	1830,
	3265,
	2226,
	1830,
	1334,
	2620,
	2603,
	3220,
	3220,
	4888,
	1976,
	1976,
	3191,
	3191,
	2620,
	3191,
	3191,
	3191,
	3220,
	3191,
	3220,
	1033,
	3191,
	1032,
	1033,
	1033,
	3265,
	3191,
	1032,
	1033,
	1033,
	3265,
	3191,
	1032,
	1033,
	1033,
	3265,
	1317,
	783,
	1462,
	1465,
	1465,
	3191,
	3191,
	3191,
	3171,
	3265,
	3191,
	2226,
	2620,
	3265,
	3171,
	2620,
	1462,
	1465,
	1465,
	3191,
	2226,
	2620,
	3171,
	2620,
	1468,
	542,
	3171,
	1973,
	1976,
	1830,
	3265,
	2226,
	1460,
	3265,
	2603,
	1034,
	1830,
	1334,
	2620,
	2603,
	1976,
	2620,
	2620,
	3191,
	3171,
	3191,
	1465,
	3265,
	2226,
	3191,
	3220,
	1976,
	1465,
	2620,
	3191,
	1830,
	3265,
	2226,
	1830,
	1334,
	3220,
	3220,
	2620,
	2603,
	1973,
	1334,
	4888,
	2620,
	3191,
	3145,
	3191,
	3191,
	3220,
	3265,
	4888,
	3265,
	4869,
	4308,
	1976,
	1976,
	1033,
	1976,
	1976,
	1976,
	1033,
	1034,
	1033,
	2226,
	4724,
	2620,
	4308,
	4888,
	2620,
	3220,
	3191,
	1976,
	1976,
	3265,
	2620,
	1462,
	2620,
	3191,
	1032,
	1033,
	1033,
	3220,
	3191,
	1032,
	1033,
	1033,
	3265,
	1100,
	662,
	3265,
	1100,
	1100,
	662,
	455,
	3265,
	4878,
	2226,
	1100,
	2226,
	1100,
	1976,
	662,
	1976,
	1033,
	1976,
	1033,
	662,
	1033,
	455,
	1976,
	1033,
	1976,
	1033,
	662,
	1976,
	1033,
	1976,
	1033,
	3220,
	2226,
	1976,
	1033,
	662,
	3220,
	2226,
	3191,
	1976,
	3220,
	2226,
	3220,
	2226,
	2226,
	1100,
	1033,
	3265,
	4888,
	556,
	3191,
	2620,
	3171,
	1460,
	3191,
	3171,
	3191,
	1460,
	3191,
	3265,
	2620,
	3191,
	2226,
	3171,
	4888,
	3265,
	1976,
	1976,
	1976,
	1033,
	1976,
	1976,
	1033,
	3265,
	2620,
	2620,
	3191,
	4869,
	4869,
	4862,
	4518,
	4817,
	4724,
	4724,
	4309,
	4724,
	4724,
	4308,
	4309,
	4724,
	4724,
	4724,
	4724,
	4724,
	4724,
	4309,
	4724,
	4309,
	3768,
	4010,
	3569,
	4817,
	4817,
	4817,
	4888,
	1465,
	2226,
	917,
	3265,
	4888,
	1465,
	3191,
	3191,
	2620,
	1976,
	1976,
	1033,
	1033,
	1465,
	3191,
	3191,
	823,
	3191,
	3191,
	3191,
	1032,
	1033,
	1033,
	3191,
	1032,
	1033,
	1033,
	3191,
	1032,
	1033,
	1033,
	3265,
	2603,
	1334,
	1470,
	3171,
	1470,
	4721,
	4888,
	4888,
	4888,
	3220,
	3191,
	1032,
	1033,
	1033,
	1033,
	1100,
	662,
	455,
	1100,
	3265,
	3265,
	3265,
	2620,
	4888,
	1100,
	1830,
	3265,
	3191,
	1976,
	1465,
	1100,
	1100,
	1100,
	1465,
	824,
	3191,
	824,
	3191,
	3265,
	1465,
	1470,
	2620,
	813,
	1465,
	2620,
	3191,
	2620,
	3191,
	3265,
	1830,
	1973,
	3171,
	3191,
	1460,
	3191,
	2620,
	3191,
	3220,
	3265,
	4304,
	4304,
	3265,
	1465,
	2620,
	3191,
	2620,
	2620,
	1979,
	1979,
	1979,
	1979,
	1979,
	1979,
	1979,
	1979,
	4009,
	4009,
	2620,
	3191,
	3191,
	3191,
	3191,
	4724,
	4308,
	4724,
	4888,
	3265,
	1468,
	588,
	3220,
	3220,
	3171,
	2620,
	1830,
	3191,
	1979,
	3191,
	3265,
	2620,
	1470,
	3142,
	3142,
	3191,
	3191,
	3191,
	3191,
	3191,
	3171,
	822,
	3265,
	3191,
	1979,
	4518,
	4888,
	4888,
	3191,
	3191,
	3191,
	3171,
	3191,
	822,
	3265,
	3265,
	3220,
	2620,
	2620,
	3191,
	1979,
	1979,
	3191,
	1979,
	3142,
	3142,
	1095,
	3191,
	3265,
	3191,
	3191,
	3191,
	3171,
	1033,
	822,
	3265,
	3191,
	1979,
	4518,
	3191,
	4888,
	3265,
	2620,
	1973,
	2620,
	3191,
	3171,
	2620,
	3191,
	3191,
	3220,
	3265,
	3220,
	3265,
	2620,
	3171,
	1973,
	1468,
	3191,
	3265,
	2646,
	3265,
	3191,
	2620,
	3191,
	3265,
	2646,
	3265,
	2620,
	3191,
	3265,
	3171,
	1973,
	3191,
	1460,
	3191,
	2620,
	3265,
	2620,
	3191,
	3220,
	3265,
	3220,
	3265,
	3191,
	3265,
	3265,
	2646,
	3265,
	3265,
	3265,
	3265,
	2603,
	4721,
	1468,
	2620,
	1830,
	1979,
	3265,
	3220,
	2646,
	2620,
	1976,
	4888,
	4888,
	4817,
	3785,
	4758,
	4817,
	4869,
	3265,
	3265,
	1468,
	1350,
	3171,
	2620,
	1814,
	1830,
	3191,
	1979,
	3265,
	1468,
	1468,
	1468,
	1468,
	813,
	3191,
	2620,
	4754,
	4380,
	4724,
	1830,
	3191,
	1979,
	1460,
	813,
	3220,
	3220,
	3220,
	3172,
	3172,
	2604,
	3265,
	1002,
	3171,
	202,
	1830,
	627,
	202,
	2620,
	810,
	2646,
	443,
	443,
	3265,
	4888,
	1460,
	543,
	544,
	2646,
	627,
	627,
	810,
	810,
	3265,
	202,
	202,
	1830,
	2620,
	1002,
	3220,
	3220,
	3220,
	3172,
	3172,
	2604,
	1462,
	627,
	202,
	1830,
	1462,
	810,
	202,
	2620,
	3265,
	4026,
	3265,
	2646,
	3265,
	909,
	1443,
	3961,
	909,
	3961,
	909,
	4496,
	3769,
	4653,
	4655,
	3970,
	3970,
	1462,
	622,
	3220,
	3265,
	3220,
	3265,
	2646,
	1976,
	1465,
	3191,
	3265,
	3171,
	3220,
	3191,
	1465,
	3265,
	2226,
	1460,
	3191,
	3191,
	2620,
	3265,
	2620,
	1976,
	1465,
	3171,
	3220,
	3191,
	1465,
	3265,
	2226,
	1460,
	3191,
	3191,
	2620,
	2620,
	3191,
	3145,
	3191,
	3191,
	3220,
	3265,
	3265,
	3265,
	2620,
	1334,
	2620,
	1470,
	1470,
	2620,
	3265,
	2603,
	1976,
	3220,
	1465,
	2620,
	1976,
	1465,
	1973,
	1973,
	3191,
	3171,
	1460,
	3191,
	4888,
	1465,
	2620,
	3220,
	3265,
	3191,
	1465,
	1100,
	1830,
	3191,
	3191,
	4869,
	4869,
	3265,
	1334,
	2620,
	1470,
	3265,
	4724,
	4724,
	1465,
	1976,
	1976,
	1465,
	2620,
	1976,
	1465,
	1973,
	1973,
	3265,
	2603,
	1334,
	1470,
	3171,
	3220,
	3191,
	3191,
	3191,
	1976,
	1465,
	3191,
	1465,
	3265,
	2226,
	1460,
	1830,
	2620,
	2620,
	3191,
	3191,
	1470,
	2620,
	1460,
	3191,
	3145,
	3191,
	3191,
	3220,
	3265,
	1468,
	1460,
	3171,
	3191,
	3191,
	1973,
	1334,
	3171,
	3220,
	3220,
	1830,
	3265,
	2226,
	1460,
	1830,
	1334,
	2620,
	2603,
	3191,
	1973,
	1334,
	1830,
	2226,
	1830,
	1334,
	2620,
	1460,
	3191,
	3265,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4721,
	4721,
	2620,
	1468,
	3191,
	3220,
	4869,
	3265,
	4888,
	3171,
	3191,
	1976,
	3265,
	4869,
	4869,
	4888,
	662,
	1033,
	3191,
	486,
	1033,
	2604,
	1461,
	1460,
	2603,
	4395,
	4724,
	4309,
	3191,
	3171,
	3172,
	3191,
	4758,
	1101,
	2226,
	3171,
	3191,
	4888,
	3171,
	1460,
	3191,
	3171,
	3191,
	3191,
	1976,
	2226,
	3171,
	4888,
	3191,
	2620,
	2620,
	3191,
	2620,
	3265,
	1976,
	3265,
	4758,
	4869,
	4869,
	4869,
	4724,
	4758,
	4755,
	4888,
	4869,
	4869,
	4869,
	4869,
	3191,
	2620,
	1465,
	1462,
	1334,
	1465,
	823,
	3191,
	2620,
	3191,
	2620,
	3191,
	2620,
	3191,
	3191,
	3191,
	1033,
	3265,
	2620,
	1470,
	1470,
	1470,
	3171,
	3171,
	2205,
	1317,
	2620,
	1460,
	3191,
	3191,
	2226,
	3171,
	3191,
	3265,
	2620,
	1465,
	1460,
	539,
	551,
	259,
	255,
	159,
	1470,
	1470,
	1470,
	3171,
	4721,
	4888,
	3265,
	3191,
	4758,
	3220,
	2603,
	1465,
	1465,
	2620,
	4309,
	4758,
	2620,
	1465,
	2620,
	1465,
	1465,
	2620,
	1976,
	3191,
	4036,
	3265,
	2602,
	1470,
	2620,
	1470,
	1470,
	1976,
	3191,
	3171,
	1973,
	1973,
	4888,
	1830,
	917,
	1830,
	1100,
	3265,
	4888,
	4869,
	4309,
	4724,
	4724,
	4869,
	4869,
	3265,
	1470,
	1470,
	1470,
	2620,
	2620,
	3191,
	2620,
	3191,
	3191,
	3172,
	3191,
	2620,
	3220,
	3191,
	2620,
	3171,
	3191,
	1033,
	1976,
	3191,
	3191,
	3265,
	3191,
	2620,
	4869,
	4869,
	4888,
	3191,
	1976,
	3265,
	1976,
	2226,
	3191,
	3191,
	3265,
	3191,
	3265,
	1470,
	1470,
	1470,
	3265,
	3265,
	2646,
	3191,
	3191,
	3191,
	540,
	1468,
	1462,
	1976,
	272,
	4724,
	4724,
	4888,
	1976,
	3265,
	2603,
	4869,
	823,
	3191,
	3191,
	3191,
	2151,
	3220,
	3220,
	3220,
	1462,
	2620,
	2605,
	2620,
	3265,
	3191,
	1979,
	3265,
	4304,
	4721,
	4888,
	4721,
	4888,
	4518,
	2603,
	2603,
	3220,
	3265,
	1462,
	812,
	2603,
	3265,
	3265,
	3191,
	2620,
	3191,
	2620,
	3220,
	3265,
	1976,
	2226,
	3191,
	3265,
	3191,
	2620,
	2620,
	2646,
	2646,
	3191,
	2620,
	3191,
	3220,
	2573,
	3191,
	2226,
	3191,
	2620,
	3191,
	3220,
	4398,
	124,
	4758,
	2620,
	3191,
	3191,
	3220,
	2646,
	3191,
	2620,
	3171,
	3191,
	3171,
	2603,
	3191,
	4869,
	2226,
	3171,
	3191,
	4888,
	2620,
	3220,
	2646,
	3220,
	3191,
	2620,
	3220,
	2646,
	3171,
	2603,
	3191,
	2620,
	3191,
	933,
	933,
	3265,
	1846,
	4888,
	1460,
	3171,
	2226,
	2620,
	3191,
	4724,
	917,
	3265,
	3265,
	1973,
	2620,
	2620,
	3171,
	3191,
	1460,
	1659,
	3220,
	918,
	1830,
	2603,
	3191,
	2620,
	3191,
	3220,
	3265,
	1460,
	3191,
	3171,
	3265,
	1465,
	1468,
	2226,
	1830,
	2226,
	456,
	1976,
	170,
	257,
	1976,
	1029,
	4888,
	3265,
	3171,
	3171,
	3191,
	1976,
	1465,
	3191,
	3191,
	917,
	3265,
	4888,
	3265,
	2620,
	1465,
	1470,
	1470,
	1470,
	2620,
	1470,
	1470,
	1470,
	3220,
	3172,
	3191,
	2620,
	3191,
	3191,
	2620,
	3191,
	2620,
	3171,
	3191,
	1033,
	1976,
	3191,
	4817,
	4817,
	3265,
	3220,
	3265,
	4888,
	3265,
	1976,
	253,
	82,
	2646,
	2603,
	627,
	810,
	202,
	1830,
	202,
	2620,
	3265,
	552,
	1470,
	1470,
	1470,
	3191,
	3191,
	3265,
	3265,
	2603,
	3191,
	1976,
	2226,
	3191,
	3265,
	568,
	3191,
	3220,
	2646,
	1976,
	2646,
	2226,
	2226,
	2226,
	2226,
	2226,
	1470,
	1470,
	1470,
	3191,
	4869,
	2646,
	3265,
	1095,
	1095,
	4399,
	4724,
	1095,
	710,
	4888,
	4721,
	4888,
	4724,
	4724,
	2620,
	2620,
	486,
	555,
	4888,
	4031,
	4031,
	4308,
	4888,
	662,
	4724,
	4308,
	1033,
	3191,
	3265,
	1462,
	661,
	2620,
	3191,
	3191,
	3191,
	3191,
	3191,
	3220,
	3265,
	3191,
	1060,
	4888,
	4888,
	3265,
	3191,
	3191,
	3191,
	3191,
	3191,
	3191,
	2226,
	1976,
	1033,
	1976,
	662,
	1033,
	3142,
	4869,
	4813,
	662,
	1033,
	3191,
	3265,
	4888,
	3595,
	3595,
	4750,
	4817,
	3787,
	4309,
	4724,
	4724,
	4724,
	4869,
	1465,
	3191,
	3191,
	3220,
	3220,
	3220,
	3191,
	3191,
	2620,
	1088,
	846,
	1484,
	1484,
	3265,
	824,
	3220,
	3220,
	3220,
	3172,
	3172,
	2604,
	3265,
	3265,
	1002,
	627,
	202,
	1830,
	627,
	810,
	202,
	2620,
	810,
	3265,
	3265,
	2646,
	3265,
	1462,
	810,
	202,
	2620,
	1462,
	627,
	202,
	1830,
	1976,
	3265,
	1334,
	3171,
	3191,
	2620,
	4869,
	3172,
	3191,
	2620,
	3220,
	3191,
	3191,
	2620,
	3191,
	2620,
	3171,
	3191,
	3191,
	3220,
	3171,
	3191,
	3171,
	2603,
	3265,
	1033,
	1976,
	3191,
	3191,
	3265,
	3265,
	3265,
	1976,
	2620,
	3265,
	3265,
	3265,
	3265,
	3265,
	3265,
	3265,
	3265,
	3265,
	4724,
	1034,
	1830,
	1830,
	1032,
	1032,
	1976,
	3265,
	3265,
	2620,
	3191,
	3265,
	3265,
	1033,
	674,
	4869,
	3191,
	2551,
	2151,
	3220,
	3220,
	3265,
	3265,
	4888,
	557,
	259,
	556,
	3191,
	3191,
	2573,
	2620,
	2620,
	2603,
	3265,
	3191,
	2620,
	2620,
	3265,
	3220,
	3265,
	1976,
	4888,
	2620,
	1470,
	3265,
	3191,
	2620,
	3220,
	3171,
	3220,
	3220,
	3191,
	3191,
	3191,
	3172,
	2604,
	3220,
	2646,
	3191,
	2620,
	3191,
	3191,
	3220,
	3171,
	3191,
	2620,
	3191,
	3191,
	2620,
	3191,
	3220,
	3191,
	3191,
	3171,
	3191,
	3220,
	3220,
	3220,
	2646,
	3191,
	3220,
	3191,
	3191,
	673,
	-1,
	-1,
	1966,
	1030,
	4724,
	1976,
	4869,
	1033,
	1976,
	3191,
	2646,
	3220,
	3265,
	1470,
	1470,
	3265,
	1334,
	3265,
	1087,
	3191,
	3265,
	3191,
	283,
	1098,
	863,
	1622,
	3191,
	3265,
	3220,
	3171,
	3220,
	1468,
	1098,
	3265,
	3191,
	-1,
	-1,
	-1,
	-1,
	-1,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	551,
	556,
	1470,
	3191,
	3191,
	3171,
	3191,
	3191,
	1470,
	1470,
	3265,
	3265,
	2646,
	3265,
	3265,
	3265,
	1461,
	4638,
	3171,
	3220,
	3220,
	3191,
	539,
	2620,
	3265,
	536,
	627,
	627,
	810,
	803,
	3220,
	3220,
	3171,
	624,
	624,
	4724,
	624,
	624,
	4817,
	2620,
	627,
	3265,
	662,
	1033,
	3191,
	810,
	3191,
	3191,
	3171,
	3191,
	2646,
	3220,
	2646,
	3220,
	2646,
	844,
	2620,
	4159,
	3220,
	2646,
	3220,
	2646,
	3220,
	3191,
	2620,
	1465,
	2620,
	2620,
	1100,
	4888,
	4869,
	4878,
	4862,
	4862,
	4869,
	4308,
	824,
	3220,
	3171,
	2226,
	3191,
	3171,
	3171,
	810,
	3265,
	3265,
	3265,
	3265,
	719,
	1465,
	2226,
	2620,
	2620,
	1465,
	1976,
	2620,
	2620,
	3191,
	1465,
	3220,
	2620,
	3265,
	2620,
	3191,
	1976,
	864,
	1973,
	3265,
	3265,
	2646,
	3265,
	2620,
	4888,
	3265,
	2226,
	3265,
	2620,
	3265,
	3220,
	3220,
	2226,
	3220,
	3265,
	1979,
	3171,
	3191,
	1334,
	3265,
	2620,
	3191,
	2620,
	3220,
	3220,
	1030,
	666,
	1030,
	4294,
	3818,
	2226,
	2226,
	3265,
	2646,
	3265,
	3220,
	3142,
	1101,
	2226,
	2646,
	3265,
	3265,
	3220,
	2646,
	3191,
	2620,
	3220,
	2646,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	823,
	3191,
	3191,
	3191,
	3191,
	3191,
	3171,
	2603,
	3171,
	1976,
	627,
	202,
	1830,
	202,
	2620,
	810,
	3265,
	3265,
	2551,
	3265,
	1002,
	3220,
	3172,
	2604,
	3191,
	3191,
	1465,
	3220,
	2646,
	3220,
	2646,
	3171,
	2603,
	2620,
	3191,
	2620,
	3191,
	2620,
	3191,
	2620,
	3191,
	2620,
	1030,
	1030,
	1460,
	3265,
	2620,
	3265,
	2620,
	3191,
	3191,
	2620,
	3191,
	2620,
	3191,
	3220,
	560,
	3220,
	3220,
	3265,
	3265,
	3265,
	2620,
	1614,
	3265,
	2557,
	3265,
	2557,
	2551,
	1465,
	2620,
	3191,
	3191,
	3191,
	1979,
	3265,
	3265,
	1465,
	1484,
	3265,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	556,
	3220,
	3172,
	3220,
	3220,
	3220,
	3171,
	3191,
	1966,
	443,
	443,
	796,
	1966,
	1035,
	1966,
	1966,
	3191,
	3265,
	443,
	2551,
	4888,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	3191,
	3191,
	2620,
	3171,
	2603,
	3191,
	2620,
	3191,
	2620,
	3220,
	2646,
	2620,
	3172,
	3220,
	3220,
	3220,
	2646,
	3191,
	2620,
	443,
	443,
	443,
	443,
	2226,
	3220,
	3220,
	1030,
	1035,
	443,
	2551,
	651,
	1966,
	710,
	3265,
	1966,
	3265,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	3265,
	2620,
	4862,
	3265,
	1334,
	2603,
	2603,
	1470,
	3191,
	3171,
	1483,
	2646,
	2603,
	2620,
	1468,
	3191,
	3220,
	3220,
	3220,
	3171,
	2603,
	3171,
	3172,
	3172,
	2604,
	1002,
	1460,
	627,
	810,
	2646,
	3265,
	202,
	1830,
	202,
	2620,
	3265,
	785,
	783,
	4878,
	4878,
	4878,
	4878,
	3173,
	3171,
	3171,
	3171,
	2646,
	3220,
	2646,
	3220,
	916,
	368,
	368,
	916,
	621,
	2603,
	106,
	1830,
	106,
	1830,
	4869,
	3220,
	4888,
	3265,
	3265,
	2603,
	518,
	517,
	3265,
	436,
	3191,
	4023,
	4013,
	3220,
	2646,
	4172,
	4153,
	3220,
	2646,
	1085,
	3820,
	3816,
	3191,
	2620,
	1976,
	641,
	4019,
	3994,
	2620,
	4166,
	4152,
	2603,
	4158,
	4147,
	2620,
	662,
	4817,
	4817,
	2620,
	3890,
	3877,
	2646,
	2620,
	4172,
	4153,
	187,
	626,
	64,
	914,
	3422,
	3418,
	3422,
	3418,
	100,
	914,
	3386,
	3385,
	187,
	626,
	64,
	4513,
	914,
	3422,
	3418,
	3422,
	3418,
	1830,
	1023,
	3629,
	3621,
	783,
	3410,
	3407,
	619,
	3553,
	3491,
	3265,
	2603,
	4502,
	4158,
	4147,
	2646,
	2605,
	3265,
	2620,
	810,
	3265,
	662,
	817,
	1976,
	4817,
	4862,
	4755,
	4755,
	4888,
	4888,
	3265,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	2620,
	3265,
	2620,
	3265,
	2620,
	1445,
	3220,
	3265,
	3265,
	4888,
	3191,
	2620,
	2603,
	2603,
	2646,
	3265,
	3265,
	2620,
	3173,
	555,
	3171,
	3265,
	3265,
	3265,
	2646,
	2603,
	1468,
	2620,
	2620,
	1460,
	4888,
	3265,
	2620,
	4308,
	4888,
	3265,
	662,
	2620,
	1468,
	3191,
	2646,
	3220,
	1462,
	486,
	1462,
	455,
	3191,
	568,
	3791,
	3220,
	3220,
	3220,
	3220,
	3171,
	2603,
	3171,
	3172,
	3172,
	2604,
	1002,
	3265,
	3265,
	2646,
	627,
	810,
	202,
	1830,
	202,
	2620,
	4878,
	4869,
	4869,
	3191,
	3265,
	3265,
	1470,
	4252,
	3191,
	3265,
	3265,
	3191,
	3265,
	2620,
	4888,
	3191,
	3265,
	4250,
	4889,
	4869,
	4869,
	4869,
	4869,
	3191,
	3265,
	4869,
	3220,
	3265,
	4888,
	4888,
	3191,
	3191,
	3191,
	3171,
	1465,
	4655,
	3265,
	3265,
	3265,
	3191,
	3265,
	3191,
	2620,
	3265,
	3191,
	3265,
	3191,
	3265,
	3191,
	3265,
	3265,
	3191,
	3265,
	3191,
	3265,
	3191,
	3265,
	3191,
	3265,
	3191,
	3265,
	3191,
	3265,
	3265,
	662,
	4888,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[7] = 
{
	{ 0x06000061, 6,  (void**)&UnityTlsContext_WriteCallback_m53DD70115C97432A676F3E437E8FB42F9FC068F5_RuntimeMethod_var, 0 },
	{ 0x06000063, 4,  (void**)&UnityTlsContext_ReadCallback_m15F3A217E44D480CAED06EB5A88503FB6259D7EC_RuntimeMethod_var, 0 },
	{ 0x06000065, 5,  (void**)&UnityTlsContext_VerifyCallback_m75D7C072718405EBBF8A2A9C794C4DDFB2595BD0_RuntimeMethod_var, 0 },
	{ 0x06000067, 3,  (void**)&UnityTlsContext_CertificateCallback_mF5E626BA2545CFFA64428622678E409702C2045A_RuntimeMethod_var, 0 },
	{ 0x06000078, 7,  (void**)&UnityTlsProvider_x509verify_callback_m47823254E133F7304ABFAE5A1F0D218402BC5B45_RuntimeMethod_var, 0 },
	{ 0x06000723, 0,  (void**)&DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704_RuntimeMethod_var, 0 },
	{ 0x06000725, 1,  (void**)&DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[10] = 
{
	{ 0x0200016C, { 0, 24 } },
	{ 0x0200016D, { 24, 3 } },
	{ 0x0200016F, { 27, 8 } },
	{ 0x02000170, { 35, 3 } },
	{ 0x02000172, { 38, 8 } },
	{ 0x02000173, { 46, 3 } },
	{ 0x020001E3, { 54, 3 } },
	{ 0x020001E4, { 57, 13 } },
	{ 0x06000AC1, { 49, 4 } },
	{ 0x06000AC2, { 53, 1 } },
};
extern const uint32_t g_rgctx_LinkedList_1_AddLast_m92E9EBD6A9A39368C44BA4FA908B1C7A20FBB251;
extern const uint32_t g_rgctx_LinkedListNode_1_t9E9525296AF0CCB2ED20655A790C2E4CD8622A56;
extern const uint32_t g_rgctx_LinkedListNode_1__ctor_m20FB5915DCE814C5B5ABFF83B3DB1D13FD2002B2;
extern const uint32_t g_rgctx_LinkedList_1_InternalInsertNodeToEmptyList_m260D83D9B9C9EA04987CB40AE53195CB13DF8DB9;
extern const uint32_t g_rgctx_LinkedList_1_InternalInsertNodeBefore_m05B6CF176F09A50E6D93416C84B856EC3E4BAF89;
extern const uint32_t g_rgctx_LinkedList_1_ValidateNewNode_m5C8011CEF3761C503DA6B158D6D88EED65B22AAE;
extern const uint32_t g_rgctx_LinkedListNode_1_get_Next_mB1A01A4FC5490DBA9D6A301ED56851E198C9B4BE;
extern const uint32_t g_rgctx_LinkedListNode_1_Invalidate_m92AA7C26274AB3F1B2C90AAD36ED50BA53479F31;
extern const uint32_t g_rgctx_LinkedList_1_Find_m05423F53A6D38259BBFB8C5A4DC487E2C2182B00;
extern const uint32_t g_rgctx_LinkedList_1_get_Count_m9716A6902AA14DDA5DD9C943647E5A06A1DBB6E9;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m78B05B517FFE11DE4D4E7F722CC8488A24712D57;
extern const uint32_t g_rgctx_EqualityComparer_1_t392B3893C4126DDA49A6D8C4161C74BC1ECB9674;
extern const uint32_t g_rgctx_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665;
extern const uint32_t g_rgctx_EqualityComparer_1_t392B3893C4126DDA49A6D8C4161C74BC1ECB9674;
extern const uint32_t g_rgctx_EqualityComparer_1_Equals_m6B7ECAC5C3E3877985F42ACB5093D9C5A28CCEBF;
extern const uint32_t g_rgctx_Enumerator_t82440D780591BF278D7D247E299FBB6BA82EFC94;
extern const uint32_t g_rgctx_Enumerator__ctor_mE01A798BE61864D38C425E7B6BE7935FB7850D7D;
extern const uint32_t g_rgctx_LinkedList_1_GetEnumerator_m8083B3D2C3FAE458314291AD1BA07D81465BE251;
extern const uint32_t g_rgctx_LinkedList_1_InternalRemoveNode_mDA777B72523F891BA292ADFA7EEB3ED1C7889689;
extern const uint32_t g_rgctx_LinkedList_1_ValidateNode_m131AE8D054B03E0FBCE81CEED06D9D1EB793E9C5;
extern const uint32_t g_rgctx_TU5BU5D_tB7945C667DD94B711E283C8F803CF9F9F3DF9C5E;
extern const uint32_t g_rgctx_LinkedList_1_CopyTo_m7F21A67D5C258A0B54301C4A6A402621CC82D581;
extern const uint32_t g_rgctx_TU5BU5D_tB7945C667DD94B711E283C8F803CF9F9F3DF9C5E;
extern const uint32_t g_rgctx_TU5BU5D_tB7945C667DD94B711E283C8F803CF9F9F3DF9C5E;
extern const uint32_t g_rgctx_LinkedList_1_t2BE688DBB804B0F90493D85355AF0536C5697D2D;
extern const uint32_t g_rgctx_LinkedList_1_get_Count_m00D92A248A5513B9C324C4F8A7EEAAE4A1AB9A85;
extern const uint32_t g_rgctx_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E;
extern const uint32_t g_rgctx_Array_Empty_TisT_t2282B752CCB38D8BBB058DCFF9E89D09E6A3B176_m8B71E20108BCA3DA16F67D8B27BBE5ACB5126021;
extern const uint32_t g_rgctx_Queue_1_SetCapacity_m941E7D6295DB1A08A8ACBFEE67620DCF9B6B73AA;
extern const uint32_t g_rgctx_Queue_1_MoveNext_mF4A72A27AA5A0B7F073D8AB3DE0F9EC893E998E6;
extern const uint32_t g_rgctx_Enumerator_t4F2713C27D719FCDD95136059FF6D47130465689;
extern const uint32_t g_rgctx_Enumerator__ctor_m1F9F2EB9490E275E02E81D2924EE8C54DAAA60DA;
extern const uint32_t g_rgctx_Queue_1_ThrowForEmptyQueue_m349366E25804BA569C66553365988EB14561AE59;
extern const uint32_t g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_t2282B752CCB38D8BBB058DCFF9E89D09E6A3B176_mDD542F357F365791EB522C85EB4A44BB872386B3;
extern const uint32_t g_rgctx_TU5BU5D_tCF8E8C7AEABD92081E891489E5242EDFC33CC668;
extern const uint32_t g_rgctx_Enumerator_ThrowEnumerationNotStartedOrEnded_m3628A49E6345449511D0D9AE59C092BFA34880C4;
extern const uint32_t g_rgctx_Enumerator_get_Current_mE05FA082CC108854ACDC24720CB4D1FD0EA19BF9;
extern const uint32_t g_rgctx_T_tC8DB97C1172A9A94AE4593B166EBCF70709175A7;
extern const uint32_t g_rgctx_Array_Empty_TisT_tC54B7F3CE293A28828E01B0F086D200648C563C2_m3D8ACE1FBBD899D89DE19FE6C0F5FB6C362871D6;
extern const uint32_t g_rgctx_TU5BU5D_t3A362341A5496EA83A65B6C92A5F9087F343A2D8;
extern const uint32_t g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_tC54B7F3CE293A28828E01B0F086D200648C563C2_m57AD99AE0F32F12B33089B11CA2DD88ABDCD6F3B;
extern const uint32_t g_rgctx_Array_LastIndexOf_TisT_tC54B7F3CE293A28828E01B0F086D200648C563C2_m6A5C02597E2690A34449A0051355E72F935513B3;
extern const uint32_t g_rgctx_Enumerator_tB260A53729FFAD91E78BC9EE999E2E3A2ED33816;
extern const uint32_t g_rgctx_Enumerator__ctor_m05CD065C8199762FEA2D4E7AFC457B8ED8F5F5E9;
extern const uint32_t g_rgctx_Stack_1_ThrowForEmptyStack_m7A1EE0A0C1F5A9836657306A8F2298809B8EE2CE;
extern const uint32_t g_rgctx_Array_Resize_TisT_tC54B7F3CE293A28828E01B0F086D200648C563C2_m37A1FB05BAF26BB3BBD5C5D383AA61052A4EA610;
extern const uint32_t g_rgctx_Enumerator_ThrowEnumerationNotStartedOrEnded_mC74730BA31C118815355F008622BA27E27A3FCF6;
extern const uint32_t g_rgctx_Enumerator_get_Current_m3378136D5A94A3CDF5E1B36B443FDFDF4CB3BED3;
extern const uint32_t g_rgctx_T_t2ED202A52661D22E214F149C805DC8C98312E94E;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_m32A730D709C5CBB21DD0AD37247D5121C24BD656;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_t819FDA0E0FB864FB22B6BB837FFA4306776B2853;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CRunWithTimeoutU3Ed__234_1_t85FBA3B4ED036D746B13ED42385BC812273D280F_m1AF428D76DBBDCE113E5327748042744D7B2941D;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m261B784FB94C7EC76E128BF885AAFE543FB19DC8;
extern const uint32_t g_rgctx_HttpWebRequest_RunWithTimeout_TisT_t8A926811A0AB7F066DAF57C8078E6461613464A1_mF0E959CD9A04AB9B312E5FCD989CCBE63391ACDE;
extern const uint32_t g_rgctx_U3CU3Ec__234_1_tC2F03659315DFD13E97044F09ED79440845473A0;
extern const uint32_t g_rgctx_U3CU3Ec__234_1__ctor_m1D579F1FF02D976B2F90D54566AEA70FBAF3238E;
extern const uint32_t g_rgctx_U3CU3Ec__234_1_tC2F03659315DFD13E97044F09ED79440845473A0;
extern const uint32_t g_rgctx_Func_2_t9D44E10CD06B26052DB5CF49B0FC87E8CCC4656F;
extern const uint32_t g_rgctx_Func_2_Invoke_m55DA26C582B0E54ED8A4E77F949CC6E1B5B764DD;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t9C1BCB2E1DDFD454CDB318063407E34467CDD262_TisU3CRunWithTimeoutU3Ed__234_1_t418A37DEF1E56FD01F709EDC5F71D65BE7CC3678_m10199B38755E0970D8B13E70E8593853B93C5E81;
extern const uint32_t g_rgctx_U3CU3Ec__234_1_t09DDC6D080BC335DA602BA75D754766435F412CB;
extern const uint32_t g_rgctx_U3CU3Ec__234_1_U3CRunWithTimeoutU3Eb__234_0_m0123867832AA80AB406AA6E05D2615D6A0E77238;
extern const uint32_t g_rgctx_Func_2_t8C376D93E03E38647B89F7A344ED4E77C2FE5C92;
extern const uint32_t g_rgctx_Func_2__ctor_m327EDD7D1E1E2CEDA6E073C57864376FD0DBA9AD;
extern const uint32_t g_rgctx_Task_1_t1996E2CB19B82873A6C0DACAB759D3DCB7859989;
extern const uint32_t g_rgctx_Task_1_ContinueWith_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mA3F0AF245724ABBD2003848595C346AA1D0F7617;
extern const uint32_t g_rgctx_Task_1_get_Result_mABE89ACD15D1DC5AE68804986C18238C68AD4480;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_mCB95406337210F5DC3740D5643BF19D8497EBC64;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m20C9AA35087726D5C0F37D424FA51A2FA78F1591;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m9C983C282C40DB28B1384E4513A07BB1C546E969;
static const Il2CppRGCTXDefinition s_rgctxValues[70] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_AddLast_m92E9EBD6A9A39368C44BA4FA908B1C7A20FBB251 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_LinkedListNode_1_t9E9525296AF0CCB2ED20655A790C2E4CD8622A56 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedListNode_1__ctor_m20FB5915DCE814C5B5ABFF83B3DB1D13FD2002B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_InternalInsertNodeToEmptyList_m260D83D9B9C9EA04987CB40AE53195CB13DF8DB9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_InternalInsertNodeBefore_m05B6CF176F09A50E6D93416C84B856EC3E4BAF89 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_ValidateNewNode_m5C8011CEF3761C503DA6B158D6D88EED65B22AAE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedListNode_1_get_Next_mB1A01A4FC5490DBA9D6A301ED56851E198C9B4BE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedListNode_1_Invalidate_m92AA7C26274AB3F1B2C90AAD36ED50BA53479F31 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_Find_m05423F53A6D38259BBFB8C5A4DC487E2C2182B00 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_get_Count_m9716A6902AA14DDA5DD9C943647E5A06A1DBB6E9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m78B05B517FFE11DE4D4E7F722CC8488A24712D57 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t392B3893C4126DDA49A6D8C4161C74BC1ECB9674 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tB8CC012B03969318B6B5424CAE7A44EDE0AA6665 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t392B3893C4126DDA49A6D8C4161C74BC1ECB9674 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_Equals_m6B7ECAC5C3E3877985F42ACB5093D9C5A28CCEBF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t82440D780591BF278D7D247E299FBB6BA82EFC94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator__ctor_mE01A798BE61864D38C425E7B6BE7935FB7850D7D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_GetEnumerator_m8083B3D2C3FAE458314291AD1BA07D81465BE251 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_InternalRemoveNode_mDA777B72523F891BA292ADFA7EEB3ED1C7889689 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_ValidateNode_m131AE8D054B03E0FBCE81CEED06D9D1EB793E9C5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_tB7945C667DD94B711E283C8F803CF9F9F3DF9C5E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_CopyTo_m7F21A67D5C258A0B54301C4A6A402621CC82D581 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TU5BU5D_tB7945C667DD94B711E283C8F803CF9F9F3DF9C5E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_tB7945C667DD94B711E283C8F803CF9F9F3DF9C5E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_LinkedList_1_t2BE688DBB804B0F90493D85355AF0536C5697D2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_get_Count_m00D92A248A5513B9C324C4F8A7EEAAE4A1AB9A85 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Array_Empty_TisT_t2282B752CCB38D8BBB058DCFF9E89D09E6A3B176_m8B71E20108BCA3DA16F67D8B27BBE5ACB5126021 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_SetCapacity_m941E7D6295DB1A08A8ACBFEE67620DCF9B6B73AA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_MoveNext_mF4A72A27AA5A0B7F073D8AB3DE0F9EC893E998E6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t4F2713C27D719FCDD95136059FF6D47130465689 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator__ctor_m1F9F2EB9490E275E02E81D2924EE8C54DAAA60DA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_ThrowForEmptyQueue_m349366E25804BA569C66553365988EB14561AE59 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_t2282B752CCB38D8BBB058DCFF9E89D09E6A3B176_mDD542F357F365791EB522C85EB4A44BB872386B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_tCF8E8C7AEABD92081E891489E5242EDFC33CC668 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_ThrowEnumerationNotStartedOrEnded_m3628A49E6345449511D0D9AE59C092BFA34880C4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_mE05FA082CC108854ACDC24720CB4D1FD0EA19BF9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tC8DB97C1172A9A94AE4593B166EBCF70709175A7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Array_Empty_TisT_tC54B7F3CE293A28828E01B0F086D200648C563C2_m3D8ACE1FBBD899D89DE19FE6C0F5FB6C362871D6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t3A362341A5496EA83A65B6C92A5F9087F343A2D8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_tC54B7F3CE293A28828E01B0F086D200648C563C2_m57AD99AE0F32F12B33089B11CA2DD88ABDCD6F3B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Array_LastIndexOf_TisT_tC54B7F3CE293A28828E01B0F086D200648C563C2_m6A5C02597E2690A34449A0051355E72F935513B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tB260A53729FFAD91E78BC9EE999E2E3A2ED33816 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator__ctor_m05CD065C8199762FEA2D4E7AFC457B8ED8F5F5E9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_ThrowForEmptyStack_m7A1EE0A0C1F5A9836657306A8F2298809B8EE2CE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Array_Resize_TisT_tC54B7F3CE293A28828E01B0F086D200648C563C2_m37A1FB05BAF26BB3BBD5C5D383AA61052A4EA610 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_ThrowEnumerationNotStartedOrEnded_mC74730BA31C118815355F008622BA27E27A3FCF6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m3378136D5A94A3CDF5E1B36B443FDFDF4CB3BED3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2ED202A52661D22E214F149C805DC8C98312E94E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_m32A730D709C5CBB21DD0AD37247D5121C24BD656 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_t819FDA0E0FB864FB22B6BB837FFA4306776B2853 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CRunWithTimeoutU3Ed__234_1_t85FBA3B4ED036D746B13ED42385BC812273D280F_m1AF428D76DBBDCE113E5327748042744D7B2941D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m261B784FB94C7EC76E128BF885AAFE543FB19DC8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HttpWebRequest_RunWithTimeout_TisT_t8A926811A0AB7F066DAF57C8078E6461613464A1_mF0E959CD9A04AB9B312E5FCD989CCBE63391ACDE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__234_1_tC2F03659315DFD13E97044F09ED79440845473A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__234_1__ctor_m1D579F1FF02D976B2F90D54566AEA70FBAF3238E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__234_1_tC2F03659315DFD13E97044F09ED79440845473A0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t9D44E10CD06B26052DB5CF49B0FC87E8CCC4656F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m55DA26C582B0E54ED8A4E77F949CC6E1B5B764DD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t9C1BCB2E1DDFD454CDB318063407E34467CDD262_TisU3CRunWithTimeoutU3Ed__234_1_t418A37DEF1E56FD01F709EDC5F71D65BE7CC3678_m10199B38755E0970D8B13E70E8593853B93C5E81 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__234_1_t09DDC6D080BC335DA602BA75D754766435F412CB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__234_1_U3CRunWithTimeoutU3Eb__234_0_m0123867832AA80AB406AA6E05D2615D6A0E77238 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t8C376D93E03E38647B89F7A344ED4E77C2FE5C92 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_m327EDD7D1E1E2CEDA6E073C57864376FD0DBA9AD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_t1996E2CB19B82873A6C0DACAB759D3DCB7859989 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_ContinueWith_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mA3F0AF245724ABBD2003848595C346AA1D0F7617 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_get_Result_mABE89ACD15D1DC5AE68804986C18238C68AD4480 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_mCB95406337210F5DC3740D5643BF19D8497EBC64 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m20C9AA35087726D5C0F37D424FA51A2FA78F1591 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m9C983C282C40DB28B1384E4513A07BB1C546E969 },
};
extern const CustomAttributesCacheGenerator g_System_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_CodeGenModule;
const Il2CppCodeGenModule g_System_CodeGenModule = 
{
	"System.dll",
	3438,
	s_methodPointers,
	101,
	s_adjustorThunks,
	s_InvokerIndices,
	7,
	s_reversePInvokeIndices,
	10,
	s_rgctxIndices,
	70,
	s_rgctxValues,
	NULL,
	g_System_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
