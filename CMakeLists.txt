CMAKE_MINIMUM_REQUIRED( VERSION 3.0 )
project( chifoumi )
set( CMAKE_CXX_STANDARD 14 )

set( CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++14 ${CMAKE_CXX_FLAGS} ")

ADD_EXECUTABLE( chifoumi.out 
    src/chifoumi.cpp)

install (TARGETS chifoumi.out DESTINATION bin)