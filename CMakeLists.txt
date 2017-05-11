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

# build doxygen documentation
find_package(Doxygen)
if(DOXYGEN_FOUND)
    configure_file(Doxyfile.in ${CMAKE_BINARY_DIR}/Doxyfile)
    add_custom_target(doc
        ${DOXYGEN_EXECUTABLE} ${CMAKE_BINARY_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
    install(DIRECTORY ${CMAKE_BINARY_DIR}/doc/html 
        DESTINATION share/doc/${CMAKE_PROJECT_NAME})
endif()