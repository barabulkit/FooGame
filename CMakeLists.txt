cmake_minimum_required( VERSION 3.10 )
project(FooGame)

add_subdirectory(SDL2)

set(SDL2_INCLUDE_DIRS SDL2/include;include)
set(SDL2_LIBRARIES SDL2main;SDL2)
link_directories(SDL2/build)


include_directories(${SDL2_INCLUDE_DIRS})

add_subdirectory(Game)

#IF(WIN32)
#add_executable(FooGame WIN32 main.c process_events.c)
#ELSE()
#add_executable(FooGame main.c process_events.c)
#ENDIF()
#target_link_libraries(FooGame ${SDL2_LIBRARIES})
