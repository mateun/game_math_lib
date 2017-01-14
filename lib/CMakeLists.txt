file(GLOB sources src/*.cpp)
include_directories(include)

add_definitions("-DGAME_MATH_EXPORTS")

add_library(fb_game_math SHARED ${sources})
		
add_custom_command(TARGET fb_game_math POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
	"${PROJECT_SOURCE_DIR}/build/lib/$<CONFIGURATION>/fb_game_math.dll" 
    "${PROJECT_SOURCE_DIR}/build/tests/$<CONFIGURATION>")