#pragma once

// clang-format off

#pragma warning(disable : 4099) // for MOJANG : type name first seen using 'class' now seen using 'struct'
#pragma warning(disable : 4201) // for MOJANG : nonstandard extension used : nameless struct/union
#pragma warning(disable : 4373) // for MOJANG : override virtual function with different const/volatile params

#include "ll/api/base/Macro.h"

#define MCAPI  LL_SHARED_IMPORT
#define MCTAPI template<> MCAPI

#include <algorithm>          // STL general algorithms
#include <array>              // STL array container
#include <bitset>             // STL bitset container
#include <cctype>             // Character handling functions
#include <cerrno>             // C Error codes
#include <chrono>             // C++11 Time library
#include <clocale>            // C localization library
#include <cmath>              // Common mathematics functions
#include <complex>            // Complex number type
#include <condition_variable> // condition variable
#include <cstdio>             // C Standard Input/Output library
#include <cstdlib>            // C Standard General Utilities Library
#include <cstring>            // C string handling
#include <ctime>              // C Time library
#include <cwchar>             // Wide character type
#include <cwctype>            // Wide character classification
#include <deque>              // STL double ended queue container
#include <exception>          // Exception handling classes
#include <filesystem>         // STL file system
#include <forward_list>       // STL forward list container
#include <fstream>            // File stream classes
#include <functional>         // STL Function objects
#include <iomanip>            // Input/Output manipulators
#include <ios>                // Base input/output stream classes
#include <iosfwd>             // Input/Output forward declarations
#include <iostream>           // Standard Input/Output stream objects
#include <istream>            // Basic input stream classes
#include <limits>             // Numeric limits
#include <list>               // STL linear list container
#include <map>                // STL map container
#include <memory>             // STL unique_ptr, shared_ptr, weak_ptr
#include <mutex>              // STL mutual exclusion primitives
#include <numbers>            // numbers standard header
#include <optional>           // STL optional type
#include <ostream>            // Basic output stream classes
#include <queue>              // STL queue and priority_queue container
#include <random>             // C++11 Random numbers
#include <set>                // STL set and multiset container
#include <shared_mutex>       // STL shared mutual exclusion primitives
#include <sstream>            // String stream classes
#include <stack>              // STL stack container
#include <stdexcept>          // Standard exception objects
#include <streambuf>          // Stream buffer classes
#include <string>             // String class
#include <string_view>        // STL string_view type
#include <unordered_map>      // STL unordered map container
#include <unordered_set>      // STL unordered set container
#include <utility>            // STL utility components
#include <variant>            // STL variant type
#include <vector>             // STL dynamic array container
#include <future>        // STL future

#include "entt/entt.hpp" // Entity Component System Library
#include "entt/fwd.hpp"  // Entity Component Forward Declarations
#include "glm/glm.hpp"   // OpenGL Mathematics Library
#include "gsl/gsl"       // Guideline Support Library

// LevelDB C++ Library
#include "leveldb/c.h"
#include "leveldb/cache.h"
#include "leveldb/comparator.h"
#include "leveldb/db.h"
#include "leveldb/dumpfile.h"
#include "leveldb/env.h"
#include "leveldb/filter_policy.h"
#include "leveldb/iterator.h"
#include "leveldb/options.h"
#include "leveldb/slice.h"
#include "leveldb/status.h"
#include "leveldb/table.h"
#include "leveldb/table_builder.h"
#include "leveldb/write_batch.h"

// RapidJSON C++ Library
#include "rapidjson/document.h"
#include "rapidjson/encodings.h"
#include "rapidjson/error/en.h"
#include "rapidjson/filereadstream.h"
#include "rapidjson/filewritestream.h"
#include "rapidjson/pointer.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/rapidjson.h"
#include "rapidjson/reader.h"
#include "rapidjson/schema.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/writer.h"

// type_safe C++ Library
#include "type_safe/strong_typedef.hpp"

// expected_lite C++ Library
#include "nonstd/expected.hpp"

#include "ll/api/base/Alias.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/memory/Memory.h"

struct HWND__;
struct _TP_CALLBACK_INSTANCE;
struct _TP_WAIT;
struct _TP_WORK;
struct _TP_TIMER;
typedef long HRESULT;
enum _WINHTTP_WEB_SOCKET_BUFFER_TYPE;
struct in6_addr;
struct in_addr;
struct sockaddr;
struct addrinfo;
struct _IP_ADAPTER_PREFIX_XP;
struct sockaddr_storage;
struct sockaddr_in;
struct sockaddr_in6;

#include "mc/deps/core/utility/optional_ref.h" // replace optional<reference_wrapper<>>
#include "mc/math/vector/Vecs.h"               // for vector types

template <typename T0, typename T1>
class AutomaticID;
class Dimension;
using DimensionType = AutomaticID<Dimension, int>;

struct RecipeNetIdTag;
struct CreativeItemNetIdTag;
struct ContainerRuntimeIdTag;
struct ItemStackNetIdTag;
struct ItemStackRequestIdTag;
struct ItemStackLegacyRequestIdTag;

template <typename T0, typename T1 = uint, int T2 = 0>
class TypedClientNetId;
template <typename T0, typename T1 = uint, int T2 = 0>
class TypedServerNetId;
template <typename T0, typename T1 = uint, int T2 = 0>
class TypedRuntimeId;

using RecipeNetId              = TypedServerNetId<RecipeNetIdTag>;
using CreativeItemNetId        = TypedServerNetId<CreativeItemNetIdTag>;
using ContainerRuntimeId       = TypedRuntimeId<ContainerRuntimeIdTag>;
using ItemStackNetId           = TypedServerNetId<ItemStackNetIdTag, int>;
using ItemStackRequestId       = TypedClientNetId<ItemStackRequestIdTag, int>;
using ItemStackLegacyRequestId = TypedClientNetId<ItemStackLegacyRequestIdTag, int>;

template<int>
class ParityImprovedNoiseImpl;

template<typename T>
class buffer_span_mut {
public:
    T* mBegin;
    T* mEnd;
    class iterator {
    public:
        T* mPtr;
    };
};

namespace Bedrock {
template <typename T, typename Err = std::error_code>
class Result;
template <typename T>
class NonOwnerPointer;
template <typename T>
using NotNullNonOwnerPtr = gsl::not_null<NonOwnerPointer<T>>;

template <typename T, typename... Args>
class ImplBase {
public:
    virtual ~ImplBase() = default;
};

template <typename T, typename U, typename A, typename M>
class AccessUpdateEditor;
namespace Detail {
template <typename T, typename U = void>
struct AccessUpdateEditorAccessor;
}

namespace Threading {
template <typename T, typename Alloc = std::allocator<T>>
class ThreadLocalObject;
}
}

namespace Core {
template <typename T0, typename T1>
class CallbackListeners {
public:
    class Listener {};
};
}

namespace Social {
enum class SignInResult;
}

namespace NetherNet::Utils {
template <typename T>
class ThreadSafe {
public:
    class View {};
};
}

namespace brstd {
template <typename T, typename U = T>
class function_ref;
}

namespace rtc {
template<class T, size_t N = size_t(-4711ll)>
class ArrayView;
}

template <typename T0>
class http_stl_allocator;
using http_string  = std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>;
using http_wstring = std::basic_string<wchar_t, std::char_traits<wchar_t>, class http_stl_allocator<wchar_t>>;

namespace asio::ssl {
class verify_context;
}

// clang-format on
