#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/platform/OSError.h"

// auto generated inclusion list
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class OSError; }
// clang-format on

namespace Core {

class Result : public ::Bedrock::Result<void, ::Bedrock::OSError> {
public:
    // prevent constructor by default
    Result& operator=(Result const&);
    Result(Result const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Result(::Core::Result&&);

    MCAPI explicit Result(::Bedrock::ErrorInfo<::std::error_code>&& error);

    MCAPI explicit Result(bool success);

    MCFOLD void architecturalProblem() const;

    MCFOLD bool catastrophic() const;

    MCFOLD bool failed() const;

    MCAPI ::std::string message() const;

    MCFOLD explicit operator bool() const;

    MCAPI ::Core::Result& operator=(::Core::Result&&);

    MCFOLD bool peekFailed() const;

    MCFOLD bool peekSucceeded() const;

    MCFOLD bool succeeded() const;

    MCFOLD bool throwFailed() const;

    MCAPI ~Result();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result either(::Core::Result&& r1, ::Core::Result&& r2);

    MCAPI static ::std::string format(char const*, ...);

    MCAPI static ::Core::Result makeFailure();

    MCAPI static ::Core::Result makeFailureNotImplemented();

    MCAPI static ::Core::Result makeFailureWithString(::std::string message);

    MCAPI static ::Core::Result makeFailureWithStringLiteral(char const* message);

    MCAPI static ::Core::Result makeSuccess();

    MCAPI static ::Core::Result merge(::Core::Result&& r1, ::Core::Result&& r2);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Result&&);

    MCAPI void* $ctor(::Bedrock::ErrorInfo<::std::error_code>&& error);

    MCAPI void* $ctor(bool success);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Core
