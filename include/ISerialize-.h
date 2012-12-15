#ifndef ISerialize__h__
#define ISerialize__h__

#ifdef __cplusplus
extern "C" {
#endif

	typedef struct ISerialize ISerialize;
	typedef void (*_setSerialize_t)(ISerialize * nSerialize);
	typedef void (*_serializeBool_t)(ISerialize * nSerialize, bool * nValue, const wchar_t * nName, bool nOptimal = false);

#ifdef __cplusplus
}
#endif
#endif // ISerialize__h__
