#include "../include/Inc-dll.hpp"
#include "SerializeInternal.hpp"

namespace std {

	static void _serializeBool(ISerialize * nSerialize, bool * nValue, const wchar_t * nName, bool nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeI8(ISerialize * nSerialize, __i8 * nValue, const wchar_t * nName, __i8 nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeU8(ISerialize * nSerialize, __u8 * nValue, const wchar_t * nName, __u8 nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeI16(ISerialize * nSerialize, __i16 * nValue, const wchar_t * nName, __i16 nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeU16(ISerialize * nSerialize, __u16 * nValue, const wchar_t * nName, __u16 nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeI32(ISerialize * nSerialize, __i32 * nValue, const wchar_t * nName, __i32 nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeU32(ISerialize * nSerialize, __u32 * nValue, const wchar_t * nName, __u32 nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeI64(ISerialize * nSerialize, __i64 * nValue, const wchar_t * nName, __i64 nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeU64(ISerialize * nSerialize, __u64 * nValue, const wchar_t * nName, __u64 nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeString(ISerialize * nSerialize, IString * nValue, const wchar_t * nName, const wchar_t * nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeFloat(ISerialize * nSerialize, float * nValue, const wchar_t * nName, float nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeDouble(ISerialize * nSerialize, double * nValue, const wchar_t * nName, double nOptimal)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize((*nValue), nName, nOptimal);
	}

	static void _serializeStream(ISerialize * nSerialize, IStream * nValue, const wchar_t * nName)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		serializeInternal->_serialize(nValue, nName);
	}

	static void _uninitialized(ISerialize * nSerialize)
	{
		SerializeInternal * serializeInternal = reinterpret_cast<SerializeInternal *>(nSerialize->mSerialize);
		checked_delete(serializeInternal);
		serializeInternal = __nptr;
	}

	ISerialize * SerializeInternal::_getSerialize()
	{
		return (&mSerialize);
	}

	SerializeInternal::SerializeInternal()
	{
		mSerialize.mSerialize = reinterpret_cast<void *>(this);
		mSerialize.mSerializeBool = std::_serializeBool;
		mSerialize.mSerializeI8 = std::_serializeI8;
		mSerialize.mSerializeU8 = std::_serializeU8;
		mSerialize.mSerializeI16 = std::_serializeI16;
		mSerialize.mSerializeU16 = std::_serializeU16;
		mSerialize.mSerializeI32 = std::_serializeI32;
		mSerialize.mSerializeU32 = std::_serializeU32;
		mSerialize.mSerializeI64 = std::_serializeI64;
		mSerialize.mSerializeU64 = std::_serializeU64;
		mSerialize.mSerializeString = std::_serializeString;
		mSerialize.mSerializeFloat = std::_serializeFloat;
		mSerialize.mSerializeDouble = std::_serializeDouble;
		mSerialize.mSerializeStream = std::_serializeStream;
		mSerialize.mUninitialized = std::_uninitialized;
	}

	SerializeInternal::~SerializeInternal()
	{
		mSerialize.mSerialize = __nptr;
		mSerialize.mSerializeBool = __nptr;
		mSerialize.mSerializeI8 = __nptr;
		mSerialize.mSerializeU8 = __nptr;
		mSerialize.mSerializeI16 = __nptr;
		mSerialize.mSerializeU16 = __nptr;
		mSerialize.mSerializeI32 = __nptr;
		mSerialize.mSerializeU32 = __nptr;
		mSerialize.mSerializeI64 = __nptr;
		mSerialize.mSerializeU64 = __nptr;
		mSerialize.mSerializeString = __nptr;
		mSerialize.mSerializeFloat = __nptr;
		mSerialize.mSerializeDouble = __nptr;
		mSerialize.mSerializeStream = __nptr;
		mSerialize.mUninitialized = __nptr;
	}

}
