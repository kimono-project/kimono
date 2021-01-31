add_executable( kimono main.cpp )
if( WIN32 )
   target_sources( kimono PRIVATE winsvc.cpp winsvc.hpp )
endif()

install( TARGETS kimono
   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
