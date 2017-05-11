CMAKE_MINIMUM_REQUIRED( VERSION 3.0 )
project( chifoumi )
set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_BUILD_TYPE Debug )

set( CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++14 ${CMAKE_CXX_FLAGS} ")

find_package( PkgConfig REQUIRED )
pkg_check_modules( MYPKG REQUIRED libglog cpputest )
include_directories( ${MYPKG_INCLUDE_DIRS} )

ADD_EXECUTABLE( chifoumi.out src/chifoumi.cpp)

ADD_EXECUTABLE( main_test.out src/main_test.cpp)

target_link_libraries( chifoumi.out ${MYPKG_LIBRARIES} )
target_link_libraries( main_test.out ${MYPKG_LIBRARIES} )

install (TARGETS chifoumi.out DESTINATION bin)