#pragma once

#ifdef _MSC_VER
#pragma pack(push,1)
#endif

struct IString
{
	_setStringValue_t mSetValue;
	_setString_t mUninitialized;
	void * mString;
}__pack;

#ifdef _MSC_VER
#pragma pack(pop)
#endif
