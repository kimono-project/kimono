#include <string>
#include "version.h"

const std::string CLIENT_NAME("client");
/**
 * Defining the client version
 */
#define CLIENT_VERSION_SUFFIX   "-beta"
/**
 * Include build.h if requested
 */
#ifdef HAVE_BUILD_INFO
#include "build.h"
#endif

const std::string CLIENT_BUILD(BUILD_DESC CLIENT_VERSION_SUFFIX);
const std::string CLIENT_DATE(BUILD_DATE);
