#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class PlayFabStatus : int {
    Success                                      = 0,
    Fail                                         = 1,
    DuplicateEmail                               = 2,
    DuplicateUsername                            = 3,
    InvalidEmail                                 = 4,
    InvalidUsername                              = 5,
    InvalidPassword                              = 6,
    AccountAlreadyLinkedToAPlayFabAccount        = 7,
    InvalidEmailOrPassword                       = 8,
    PlayFabAccountAlreadyLinkedToThisAccountType = 9,
    ProfileVersionMismatch                       = 10,
    AccountNotLinked                             = 11,
    CustomIdNotLinked                            = 12,
    APIClientRequestRateLimitExceeded            = 13,
    APIConcurrentRequestLimitExceeded            = 14,
    ConcurrentEditError                          = 15,
    DataUpdateRateExceeded                       = 16,
    DownstreamServiceUnavailable                 = 17,
    OverLimit                                    = 18,
    ServiceUnavailable                           = 19,
    ConnectionTimeout                            = 20,
    ConnectionRefused                            = 21,
    SocketError                                  = 22,
    SignedRequestNotAllowed                      = 23,
    GettingXboxLiveAuthTokenFailed               = 24,
    GettingTitleKeyFailed                        = 25,
    GettingPSNAuthTokenFailed                    = 26,
    GettingNintendoAuthTokenFailed               = 27,
    DoNotRetry                                   = 1000,
    AccountBanned                                = 1000,
    AccountDeleted                               = 1001,
    AccountNotFound                              = 1002,
    APIRequestsDisableForTitle                   = 1003,
    InvalidContentType                           = 1004,
    InvalidParams                                = 1005,
    InvalidRequest                               = 1006,
    InvalidTitleId                               = 1007,
    NotAuthenticated                             = 1008,
    NotAuthorized                                = 1009,
    NotAuthorizedByTitle                         = 1010,
    ProfileDoesNotExist                          = 1011,
    TitleDeleted                                 = 1012,
    PlayerSecretAlreadyConfigured                = 1013,
    EmptyPlayFabIdentityId                       = 1014,
    NotSignedInPsnIdentity                       = 1016,
    NotSupportAnonymousAuth                      = 1017,
    InvalidAPIEndpoint                           = 1021,
    AlreadyLinkedPSN                             = 1022,
    AlreadyLinkedMSA                             = 1023,
    SignInAttemptedWhenIdentityNull              = 1024,
    LinkAttemptedWhenIdentityNull                = 1025,
    InvalidXUIDOrRestrictedAccount               = 1026,
    NotSignedInNintendoIdentity                  = 1027,
    NotSignedInXblIdentity                       = 1028,
    UnknownError                                 = 2000,
};

}
