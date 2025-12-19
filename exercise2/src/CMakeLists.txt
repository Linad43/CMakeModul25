# CMakeList.txt: проект CMake для CMakeModul25; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

set(PROJECT_NAME exercise2)
project (${PROJECT_NAME})
set(MY_INCLUDE ${CMAKE_SOURCE_DIR}/exercise2/include)
# Добавьте источник в исполняемый файл этого проекта.
add_executable (${PROJECT_NAME} mod25ex2.cpp 
	${MY_INCLUDE}/header_cpu.h
	${MY_INCLUDE}/header_disk.h  
	${MY_INCLUDE}/header_ex2.h 
	${MY_INCLUDE}/header_gpu.h 
	${MY_INCLUDE}/header_kbd.h 
	${MY_INCLUDE}/header_ram.h 
	cpu.cpp 
	disk.cpp 
	gpu.cpp 
	kbd.cpp 
	ram.cpp  
	split.cpp
	structPoint.cpp)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/main/include)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/exercise1/include)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/exercise2/include)