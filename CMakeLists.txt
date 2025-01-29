cmake_minimum_required(VERSION 3.30.0)

project(LightYears
	VERSION 1.0.0
	LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)



set(SFML_LIB_NAME SFML)
include(FetchContent)



FetchContent_Declare(
	${SFML_LIB_NAME}
	GIT_REPOSITORY https://github.com/SFML/SFML
	GIT_TAG 3.0.0 #latest SFML, uses modern API
	GIT_SHALLOW FALSE #do not want just a shollow copy of repo, deep copy of everything dependent
)

FetchContent_MakeAvailable(${SFML_LIB_NAME})

#creates a variable to reference later on
set (LIGHT_YEARS_ENGINE_TARGET_NAME LightYearsEngine)
set (LIGHT_YEARS_GAME_TARGET_NAME LightYearsGame)

#this is like an include operation, for better code management
add_subdirectory(LightYearsEngine)
add_subdirectory(LightYearsGame)

