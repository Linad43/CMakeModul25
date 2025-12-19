# CMakeList.txt: проект CMake для CMakeModul25; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

set(PROJECT_NAME CMakeModul25)
project (${PROJECT_NAME})
set(MY_INCLUDE ${CMAKE_SOURCE_DIR}/main/include)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (${PROJECT_NAME} CMakeModul25.cpp 
	${MY_INCLUDE}/main_header.h)


# TODO: Добавьте тесты и целевые объекты, если это необходимо.
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/main/include)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/exercise1/include)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/exercise2/include)