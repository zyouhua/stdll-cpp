#pragma once

#ifdef __cplusplus
extern "C" {
#endif

	typedef struct IString IString;
	typedef void (*_setString_t)(IString * nString);
	typedef void (*_setStringValue_t)(IString * nString, const wchar_t * nValue);

#ifdef __cplusplus
}
#endif
