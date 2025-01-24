add_executable(${LIGHT_YEARS_GAME_TARGET_NAME} 
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/include/framework/App.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/framework/App.cpp
)

target_include_directories(${LIGHT_YEARS_GAME_TARGET_NAME} PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)



target_compile_features(${LIGHT_YEARS_GAME_TARGET_NAME} PRIVATE cxx_std_23)
target_link_libraries(${LIGHT_YEARS_GAME_TARGET_NAME} PUBLIC SFML::Graphics)
target_link_libraries(${LIGHT_YEARS_GAME_TARGET_NAME} PUBLIC SFML::Window)
target_link_libraries(${LIGHT_YEARS_GAME_TARGET_NAME} PUBLIC SFML::System)
target_link_libraries(${LIGHT_YEARS_GAME_TARGET_NAME} PUBLIC SFML::Audio)

#might want to try out SFML::NETWORK in personal project