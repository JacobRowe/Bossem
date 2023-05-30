#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField>
struct List_1_t0845A5AAFB6B816C6E2719A0588604CE3A080FDC;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Compression.ZipArchive
struct ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41;
// System.IO.Compression.ZipArchiveEntry
struct ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral168DFB0223A253D8C177CD2D6A0DBA1B0ECEFB96;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C const RuntimeMethod* ZipFileExtensions_ExtractToFile_m2F93A06EC42F278D4730A19F853132ABE35BB923_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5C9D30A33D5BCEBCEE3B70E895505EE5A827FE73 
{
};
struct Il2CppArrayBounds;

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// System.IO.Compression.ZipFileExtensions
struct ZipFileExtensions_t06E75DEE7D8E222C1E0E563C2393652E251FD218  : public RuntimeObject
{
};

// System.Nullable`1<System.IO.Compression.CompressionLevel>
struct Nullable_1_tAC8899D7718BEF36A8590184EFBCA842A1BC9AB1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
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

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
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
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.IO.Compression.ZipArchiveEntry
struct ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4  : public RuntimeObject
{
	// System.IO.Compression.ZipArchive System.IO.Compression.ZipArchiveEntry::_archive
	ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ____archive_0;
	// System.Boolean System.IO.Compression.ZipArchiveEntry::_originallyInArchive
	bool ____originallyInArchive_1;
	// System.Int32 System.IO.Compression.ZipArchiveEntry::_diskNumberStart
	int32_t ____diskNumberStart_2;
	// System.IO.Compression.ZipVersionMadeByPlatform System.IO.Compression.ZipArchiveEntry::_versionMadeByPlatform
	uint8_t ____versionMadeByPlatform_3;
	// System.IO.Compression.ZipVersionNeededValues System.IO.Compression.ZipArchiveEntry::_versionMadeBySpecification
	uint16_t ____versionMadeBySpecification_4;
	// System.IO.Compression.ZipVersionNeededValues System.IO.Compression.ZipArchiveEntry::_versionToExtract
	uint16_t ____versionToExtract_5;
	// System.IO.Compression.ZipArchiveEntry/BitFlagValues System.IO.Compression.ZipArchiveEntry::_generalPurposeBitFlag
	uint16_t ____generalPurposeBitFlag_6;
	// System.IO.Compression.ZipArchiveEntry/CompressionMethodValues System.IO.Compression.ZipArchiveEntry::_storedCompressionMethod
	uint16_t ____storedCompressionMethod_7;
	// System.DateTimeOffset System.IO.Compression.ZipArchiveEntry::_lastModified
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ____lastModified_8;
	// System.Int64 System.IO.Compression.ZipArchiveEntry::_compressedSize
	int64_t ____compressedSize_9;
	// System.Int64 System.IO.Compression.ZipArchiveEntry::_uncompressedSize
	int64_t ____uncompressedSize_10;
	// System.Int64 System.IO.Compression.ZipArchiveEntry::_offsetOfLocalHeader
	int64_t ____offsetOfLocalHeader_11;
	// System.Nullable`1<System.Int64> System.IO.Compression.ZipArchiveEntry::_storedOffsetOfCompressedData
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____storedOffsetOfCompressedData_12;
	// System.UInt32 System.IO.Compression.ZipArchiveEntry::_crc32
	uint32_t ____crc32_13;
	// System.Byte[][] System.IO.Compression.ZipArchiveEntry::_compressedBytes
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____compressedBytes_14;
	// System.IO.MemoryStream System.IO.Compression.ZipArchiveEntry::_storedUncompressedData
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____storedUncompressedData_15;
	// System.Boolean System.IO.Compression.ZipArchiveEntry::_currentlyOpenForWrite
	bool ____currentlyOpenForWrite_16;
	// System.Boolean System.IO.Compression.ZipArchiveEntry::_everOpenedForWrite
	bool ____everOpenedForWrite_17;
	// System.IO.Stream System.IO.Compression.ZipArchiveEntry::_outstandingWriteStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____outstandingWriteStream_18;
	// System.UInt32 System.IO.Compression.ZipArchiveEntry::_externalFileAttr
	uint32_t ____externalFileAttr_19;
	// System.String System.IO.Compression.ZipArchiveEntry::_storedEntryName
	String_t* ____storedEntryName_20;
	// System.Byte[] System.IO.Compression.ZipArchiveEntry::_storedEntryNameBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____storedEntryNameBytes_21;
	// System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField> System.IO.Compression.ZipArchiveEntry::_cdUnknownExtraFields
	List_1_t0845A5AAFB6B816C6E2719A0588604CE3A080FDC* ____cdUnknownExtraFields_22;
	// System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField> System.IO.Compression.ZipArchiveEntry::_lhUnknownExtraFields
	List_1_t0845A5AAFB6B816C6E2719A0588604CE3A080FDC* ____lhUnknownExtraFields_23;
	// System.Byte[] System.IO.Compression.ZipArchiveEntry::_fileComment
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____fileComment_24;
	// System.Nullable`1<System.IO.Compression.CompressionLevel> System.IO.Compression.ZipArchiveEntry::_compressionLevel
	Nullable_1_tAC8899D7718BEF36A8590184EFBCA842A1BC9AB1 ____compressionLevel_25;
};

struct ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4_StaticFields
{
	// System.Boolean System.IO.Compression.ZipArchiveEntry::s_allowLargeZipArchiveEntriesInUpdateMode
	bool ___s_allowLargeZipArchiveEntriesInUpdateMode_26;
	// System.IO.Compression.ZipVersionMadeByPlatform System.IO.Compression.ZipArchiveEntry::CurrentZipPlatform
	uint8_t ___CurrentZipPlatform_27;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.IO.Compression.ZipFileExtensions::ExtractToFile(System.IO.Compression.ZipArchiveEntry,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFileExtensions_ExtractToFile_m2F93A06EC42F278D4730A19F853132ABE35BB923 (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* ___source0, String_t* ___destinationFileName1, bool ___overwrite2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mB51E4FD96A6B396795C835EFD7B0F0018A3A5029 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, int32_t ___bufferSize4, bool ___useAsync5, const RuntimeMethod* method) ;
// System.IO.Stream System.IO.Compression.ZipArchiveEntry::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipArchiveEntry_Open_m1D0EFB9AD33BA96AAF0C624EADA3E58CD6CC67FF (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination0, const RuntimeMethod* method) ;
// System.DateTimeOffset System.IO.Compression.ZipArchiveEntry::get_LastWriteTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ZipArchiveEntry_get_LastWriteTime_m98EB193BEB589BE1739A89C6104830F11573AFE9_inline (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTimeOffset::get_DateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.Void System.IO.File::SetLastWriteTime(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_SetLastWriteTime_m444C27684387AD8DC03E739B9CCAA4927C75FDBC (String_t* ___path0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastWriteTime1, const RuntimeMethod* method) ;
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
// System.Void System.IO.Compression.ZipFileExtensions::ExtractToFile(System.IO.Compression.ZipArchiveEntry,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFileExtensions_ExtractToFile_mB4C41E6DF65A65B1AE19EA76E80517C1E8D8BA75 (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* ___source0, String_t* ___destinationFileName1, const RuntimeMethod* method) 
{
	{
		ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* L_0 = ___source0;
		String_t* L_1 = ___destinationFileName1;
		ZipFileExtensions_ExtractToFile_m2F93A06EC42F278D4730A19F853132ABE35BB923(L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.ZipFileExtensions::ExtractToFile(System.IO.Compression.ZipArchiveEntry,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFileExtensions_ExtractToFile_m2F93A06EC42F278D4730A19F853132ABE35BB923 (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* ___source0, String_t* ___destinationFileName1, bool ___overwrite2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_2 = NULL;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B7_0 = 0;
	{
		ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_ExtractToFile_m2F93A06EC42F278D4730A19F853132ABE35BB923_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___destinationFileName1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral168DFB0223A253D8C177CD2D6A0DBA1B0ECEFB96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_ExtractToFile_m2F93A06EC42F278D4730A19F853132ABE35BB923_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_4 = ___overwrite2;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		G_B7_0 = 1;
		goto IL_0023;
	}

IL_0022:
	{
		G_B7_0 = 2;
	}

IL_0023:
	{
		V_0 = G_B7_0;
		String_t* L_5 = ___destinationFileName1;
		int32_t L_6 = V_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		FileStream__ctor_mB51E4FD96A6B396795C835EFD7B0F0018A3A5029(L_7, L_5, L_6, 2, 0, ((int32_t)4096), (bool)0, NULL);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_1;
					if (!L_8)
					{
						goto IL_0057;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = V_1;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0057:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* L_10 = ___source0;
				NullCheck(L_10);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11;
				L_11 = ZipArchiveEntry_Open_m1D0EFB9AD33BA96AAF0C624EADA3E58CD6CC67FF(L_10, NULL);
				V_2 = L_11;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0044_1:
					{// begin finally (depth: 2)
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = V_2;
							if (!L_12)
							{
								goto IL_004d_1;
							}
						}
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = V_2;
							NullCheck(L_13);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
						}

IL_004d_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = V_2;
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = V_1;
					NullCheck(L_14);
					Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999(L_14, L_15, NULL);
					goto IL_0058;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		String_t* L_16 = ___destinationFileName1;
		ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* L_17 = ___source0;
		NullCheck(L_17);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_18;
		L_18 = ZipArchiveEntry_get_LastWriteTime_m98EB193BEB589BE1739A89C6104830F11573AFE9_inline(L_17, NULL);
		V_3 = L_18;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19;
		L_19 = DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324((&V_3), NULL);
		File_SetLastWriteTime_m444C27684387AD8DC03E739B9CCAA4927C75FDBC(L_16, L_19, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ZipArchiveEntry_get_LastWriteTime_m98EB193BEB589BE1739A89C6104830F11573AFE9_inline (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* __this, const RuntimeMethod* method) 
{
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = __this->____lastModified_8;
		return L_0;
	}
}
