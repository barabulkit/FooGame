cmake_minimum_required( VERSION 3.10 )
project(FooGame)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS} include)

IF(WIN32)
add_executable(FooGame WIN32 main.c process_events.c)
target_link_libraries(FooGame ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES} mingw32)
ELSE()
add_executable(FooGame main.c process_events.c)
target_link_libraries(FooGame ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})
ENDIF()
