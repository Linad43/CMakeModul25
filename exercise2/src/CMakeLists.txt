# CMakeList.txt: проект CMake для CMakeModul25; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("exercise2")
set(MY_INCLUDE ${CMAKE_SOURCE_DIR}/exercise2/include)
# Добавьте источник в исполняемый файл этого проекта.
add_executable (exercise2 mod25ex2.cpp 
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

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET exercise2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

target_include_directories(exercise2 PUBLIC ${CMAKE_SOURCE_DIR}/main/include)
target_include_directories(exercise2 PUBLIC ${CMAKE_SOURCE_DIR}/exercise1/include)
target_include_directories(exercise2 PUBLIC ${CMAKE_SOURCE_DIR}/exercise2/include)