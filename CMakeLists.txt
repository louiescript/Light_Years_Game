cmake_minimum_required(VERSION 3.30.0)

project(LightYears
	VERSION 1.0.0
	LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#creates a variable to reference later on
set (LIGHT_YEARS_GAME_NAME LightYearsGame)

#this is like an include operation, for better code management
add_subdirectory(LightYears)