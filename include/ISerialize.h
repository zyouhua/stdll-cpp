#ifndef ISerialize_h__
#define ISerialize_h__

#ifdef _MSC_VER
#pragma pack(push,1)
#endif

struct ISerialize
{
	_serializeBool_t mSerializeBool;
	_setSerialize_t mUninitialized;
	void * mSerialize;
}__pack;

#ifdef _MSC_VER
#pragma pack(pop)
#endif
#endif // ISerialize_h__
