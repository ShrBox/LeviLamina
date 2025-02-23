#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/UnverifiedCertificate.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
class UnverifiedCertificate;
class WebToken;
namespace Json { class Value; }
// clang-format on

class Certificate {
public:
    // member variables
    // NOLINTBEGIN
    ::UnverifiedCertificate          mUnverifiedCertificate;
    ::std::unique_ptr<::Certificate> mParentCertificate;
    bool                             mIsValid;
    bool                             mIsSelfSigned;
    // NOLINTEND

public:
    // prevent constructor by default
    Certificate& operator=(Certificate const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Certificate(::Certificate const& other);

    MCAPI Certificate(
        ::UnverifiedCertificate const&   unverifiedCertificate,
        ::std::unique_ptr<::Certificate> parentCertificate
    );

    MCAPI int64 getExpirationDate() const;

    MCAPI ::Json::Value getExtraData(::std::string const& key, ::Json::Value const& defaultValue) const;

    MCAPI ::std::string getIdentityPublicKey() const;

    MCAPI int64 getNotBeforeDate() const;

    MCFOLD bool isSelfSigned() const;

    MCFOLD bool isValid() const;

    MCFOLD ::std::string toString() const;

    MCAPI bool validate(int64 currentTime, bool isSelfSigned, bool checkExpired);

    MCAPI ~Certificate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::WebToken> createWebToken(
        ::PrivateKeyManager& signer,
        int64                notBeforeDate,
        int64                expirationDate,
        ::std::string const& identityPublicKey,
        bool                 isCertificateAuthority,
        ::Json::Value const* extraData
    );

    MCAPI static ::std::unique_ptr<::Certificate> createWrappedCertificate(
        ::PrivateKeyManager&             signer,
        int64                            notBeforeDate,
        int64                            expirationDate,
        ::std::string const&             identityPublicKey,
        bool                             isCertificateAuthority,
        ::Json::Value const*             extraData,
        ::std::unique_ptr<::Certificate> parentCertificate
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Certificate const& other);

    MCAPI void*
    $ctor(::UnverifiedCertificate const& unverifiedCertificate, ::std::unique_ptr<::Certificate> parentCertificate);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
