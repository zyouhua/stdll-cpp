#ifndef ISerialize_h__
#define ISerialize_h__

namespace std {

#ifdef _MSC_VER
#pragma pack(push,1)
#endif

struct ISerialize
{
	_serializeBool_t mSerializeBool;
	_serializeI8_t mSerializeI8;
	_serializeU8_t mSerializeU8;
	_serializeI16_t mSerializeI16;
	_serializeU16_t mSerializeU16;
	_serializeI32_t mSerializeI32;
	_serializeU31_t mSerializeU32;
	_serializeI64_t mSerializeI64;
	_serializeU64_t mSerializeU64;
	_serializeString_t mSerializeString;
	_serializeFloat_t mSerializeFloat;
	_serializeDouble_t mSerializeDouble;
	_serializeStream_t mSerializeStream;
	_serializeIO_t mSerializeIO;
	_setSerialize_t mUninitialized;
	void * mSerialize;
}__pack;

#ifdef _MSC_VER
#pragma pack(pop)
#endif

}
#endif // ISerialize_h__
