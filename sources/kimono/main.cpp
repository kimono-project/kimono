#include <iostream>

#ifdef _MSC_VER
#include "winsvc.hpp"
#include <signal.h>
#include <strsafe.h>
#include <shlobj.h>
#else
#include <csignal>
#include <sys/stat.h>
#endif
