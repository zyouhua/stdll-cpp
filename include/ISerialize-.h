#ifndef ISerialize__h__
#define ISerialize__h__

namespace std {

#ifdef __cplusplus
extern "C" {
#endif

	typedef struct ISerialize ISerialize;
	typedef void (*_setSerialize_t)(ISerialize * nSerialize);
	typedef void (*_serializeBool_t)(ISerialize * nSerialize, bool * nValue, const wchar_t * nName, bool nOptimal);
	typedef void (*_serializeI8_t)(ISerialize * nSerialize, __i8 * nValue, const wchar_t * nName, __i8 nOptimal);
	typedef void (*_serializeU8_t)(ISerialize * nSerialize, __u8 * nValue, const wchar_t * nName, __u8 nOptimal);
	typedef void (*_serializeI16_t)(ISerialize * nSerialize, __i16 * nValue, const wchar_t * nName, __i16 nOptimal);
	typedef void (*_serializeU16_t)(ISerialize * nSerialize, __u16 * nValue, const wchar_t * nName, __u16 nOptimal);
	typedef void (*_serializeI32_t)(ISerialize * nSerialize, __i32 * nValue, const wchar_t * nName, __i32 nOptimal);
	typedef void (*_serializeU31_t)(ISerialize * nSerialize, __u32 * nValue, const wchar_t * nName, __u32 nOptimal);
	typedef void (*_serializeI64_t)(ISerialize * nSerialize, __i64 * nValue, const wchar_t * nName, __i64 nOptimal);
	typedef void (*_serializeU64_t)(ISerialize * nSerialize, __u64 * nValue, const wchar_t * nName, __u64 nOptimal);
	typedef void (*_serializeString_t)(ISerialize * nSerialize, IString * nValue, const wchar_t * nName, const wchar_t * nOptimal);
	typedef void (*_serializeFloat_t)(ISerialize * nSerialize, float * nValue, const wchar_t * nName, float nOptimal);
	typedef void (*_serializeDouble_t)(ISerialize * nSerialize, double * nValue, const wchar_t * nName, double nOptimal);
	typedef void (*_serializeStream_t)(ISerialize * nSerialize, IStream * nValue, const wchar_t * nName);
	typedef SerializeIO_ (*_serializeIO_t)(ISerialize * nSerialize);


#ifdef __cplusplus
}
#endif

}
#endif // ISerialize__h__
