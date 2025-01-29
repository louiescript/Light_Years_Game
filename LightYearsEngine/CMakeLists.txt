add_library(${LIGHT_YEARS_ENGINE_TARGET_NAME} STATIC

	${CMAKE_CURRENT_SOURCE_DIR}/include/framework/App.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/framework/App.cpp

	${CMAKE_CURRENT_SOURCE_DIR}/include/framework/Core.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/framework/Core.cpp

	${CMAKE_CURRENT_SOURCE_DIR}/include/Entrypoint.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/Entrypoint.cpp
)

target_include_directories(${LIGHT_YEARS_ENGINE_TARGET_NAME} PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)



target_compile_features(${LIGHT_YEARS_ENGINE_TARGET_NAME} PRIVATE cxx_std_23)
target_link_libraries(${LIGHT_YEARS_ENGINE_TARGET_NAME} PUBLIC SFML::Graphics)
target_link_libraries(${LIGHT_YEARS_ENGINE_TARGET_NAME} PUBLIC SFML::Window)
target_link_libraries(${LIGHT_YEARS_ENGINE_TARGET_NAME} PUBLIC SFML::System)
target_link_libraries(${LIGHT_YEARS_ENGINE_TARGET_NAME} PUBLIC SFML::Audio)

#might want to try out SFML::NETWORK in personal project