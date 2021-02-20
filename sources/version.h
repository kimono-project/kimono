#ifndef KIMONO_VERSION_H
#define KIMONO_VERSION_H

#include "clientversion.h"
#include <string>

static const int CLIENT_VERSION = 1000000 * CLIENT_VERSION_MAJOR
                                +   10000 * CLIENT_VERSION_MINOR
                                +     100 * CLIENT_VERSION_REVISION
                                +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

/**
 * Network protocol versioning
 */
static const int PROTOCOL_VERSION = 70002;
/**
 * Initial proto_version
 */
static const int INIT_PROTO_VERSION = 209;
/**
 * Disconnect from peers with depreciated version
 */
static const int MIN_PEER_PROTO_VERSION = 70002;
/**
 * NTime version concatenated to the CAddr value
 */
static const int CADDR_TIME_VERSION = 31402;
/**
 * Request blocks out of this range
 */
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;
/**
 * PONG message is enabled to all versions
 */
static const int BIP0031_VERSION = 60000;
/**
 * Definition of the mempool version 
 */
static const int MEMPOOL_GD_VERSION = 60002;

#endif
