#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfiguration;
// clang-format on

class ScriptPackConfigurationManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::Core::PathBuffer<::std::string>> const>       mConfigDirectory;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ScriptPackConfiguration>> mPackConfigurations;
    ::ll::TypedStorage<8, 224, ::ScriptPackConfiguration>                                     mDefaultPackConfiguration;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackConfigurationManager& operator=(ScriptPackConfigurationManager const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPackConfigurationManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPackConfigurationManager(::ScriptPackConfigurationManager&&);

    MCAPI ScriptPackConfigurationManager(::ScriptPackConfigurationManager const&);

    MCAPI explicit ScriptPackConfigurationManager(::std::optional<::Core::PathBuffer<::std::string>> configDirectory);

    MCFOLD ::std::optional<::Core::PathBuffer<::std::string>> const& getConfigPath() const;

    MCAPI ::ScriptPackConfiguration const& getPackConfiguration(::std::string const& packIdentifier) const;

    MCAPI void loadPackConfigs();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& sDefaultConfigurationName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptPackConfigurationManager&&);

    MCAPI void* $ctor(::ScriptPackConfigurationManager const&);

    MCAPI void* $ctor(::std::optional<::Core::PathBuffer<::std::string>> configDirectory);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
