project(obuchaika)

add_executable(${PROJECT_NAME} 
	main.cpp
	menu_items.cpp
	menu_functions.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)