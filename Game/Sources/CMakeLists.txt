IF(WIN32)
add_executable(FooGame WIN32 renderer.c)
ELSE()
add_executable(FooGame renderer.c)
ENDIF()
target_link_libraries(FooGame ${SDL2_LIBRARIES})
#target_include_dirs
