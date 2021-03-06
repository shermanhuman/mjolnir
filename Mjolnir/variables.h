#ifndef Mjolnir_variables_h
#define Mjolnir_variables_h


static NSString* MJReleaseNotesURL       = @"https://github.com/sdegutis/mjolnir#changes";
static NSString* MJDownloadPage          = @"https://github.com/sdegutis/mjolnir/releases/latest";
static NSString* MJUpdatesURL            = @"https://raw.githubusercontent.com/sdegutis/mjolnir/master/LATESTVERSION";

static NSString* MJPublicKey = @""
"-----BEGIN PUBLIC KEY-----\n"
"MIIBtzCCASsGByqGSM44BAEwggEeAoGBAKI1LKQiFEWu6woOAzKPeVrvMoUFLv43\n"
"I2PYizYCAUkzdh8Rgos0qSwg6+qaStVB3SYHxXlwtyiuJwm9CZtiPJzXUFDESvha\n"
"hJckBRxL93zrUIW1gCIeXrvX89ZNzn9pgj6c72z+rkfV/SFYYXWNm375t6gZwoTy\n"
"rlZVNnUewetvAhUAhUtGFpd0rJmqhaMEuPRDDUQGlhkCgYBEm3G1/p058vDw8rKW\n"
"u0UKHN6syEATqditlyqcH0F28pxwVTXIt44o9nrygDdSgcZne2GQC6PJU1tSDliH\n"
"77nJGCvfJ6Uyj69ieAY3q7Enshk5M3rBub+Nq5Ec0YtpuDVUB6ytXnwpld/bbOQ3\n"
"WlMqy6lTidH72azA1+UVcSOLXQOBhQACgYEAmV6CvXE5N1gScnbD+5E4VM4JFyF8\n"
"xjA+0xzpoW2ctFKvgQxMswlmvvZvU7oTm/KHrJkK8arlWi3kV2qfNk1Ry7GKE9fW\n"
"jebNdfI+fWntQjd1bCIlACFGrH5ioucI0Hdzxarx/7Ie10UPveSRf8ifO9JU1bSH\n"
"cohzwU5/305uivg=\n"
"-----END PUBLIC KEY-----\n";

#define MJCheckForUpdatesKey         @"MJCheckForUpdatesKey"
#define MJShowDockIconKey            @"MJShowDockIconKey"
#define MJShowMenuIconKey            @"MJShowMenuIconKey"
#define MJKeepConsoleOnTopKey        @"MJKeepConsoleOnTopKey"
#define MJHasRunAlreadyKey           @"MJHasRunAlreadyKey"
#define MJCheckForUpdatesIntervalKey @"MJCheckForUpdatesIntervalKey"

static NSString* MJConfigFile = @"~/.mjolnir/init.lua";

#endif
