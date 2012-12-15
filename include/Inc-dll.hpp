#pragma once

typedef char __i8;
typedef unsigned char __u8;

typedef short __i16;
typedef unsigned short __u16;

typedef long __i32;
typedef unsigned long __u32;

typedef __int64 __i64;
typedef unsigned __int64 __u64;

#define __nptr 0

#ifdef _MSC_VER
#define __pack
#else
#define __pack __attribute__((packed))
#endif

#ifdef EXPORT
#define __funapi __declspec(dllexport)
#else
#define __funapi __declspec(dllimport)
#endif

#include <boost/lexical_cast.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/signals.hpp>
#include <boost/function.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/noncopyable.hpp>
#include <boost/regex.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/filesystem.hpp>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include "__singleton.hpp"
#include "_default.hpp"
#include "_convert.hpp"
#include "__signal-.hpp"
#include "__signal.hpp"
#include "IString.hpp"

using namespace std;
using namespace boost;
