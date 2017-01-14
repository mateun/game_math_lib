file(GLOB sources src/*.cpp)

include_directories(include $ENV{GTEST_INCLUDE_DIR} ../lib/include)


add_executable(testapp ${sources})

target_link_libraries(testapp debug $ENV{GTEST_LIB_ROOT}/Debug/gtest.lib)
target_link_libraries(testapp optimized $ENV{GTEST_LIB_ROOT}/Release/gtest.lib)
target_link_libraries(testapp fb_game_math)
