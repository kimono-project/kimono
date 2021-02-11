// noding utils and masternode in here
#include <fc/exception/exception.hpp>
#include <fc/thread/thread.hpp>
#include <fc/interprocess/signals.hpp>
#include <fc/log/console_appender.hpp>
#include <fc/log/file_appender.hpp>
#include <fc/log/logger.hpp>
#include <fc/log/logger_config.hpp>

#include <boost/filesystem.hpp>

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/split.hpp>

#include <iostream>
#include <fstream>

#ifdef WIN32
# include <signal.h> 
#else
# include <csignal>
#endif

using namespace kimono;
namespace bpo = boost::program_options;

int main(int argc, char **argv[]) {
  return 0;
}
