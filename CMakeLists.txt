# CMakeList.txt: проект CMake для CMakeModul25; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

set(PROJECT_NAME "CMakeModul25")
project (${PROJECT_NAME})
# Добавьте источник в исполняемый файл этого проекта.
# add_executable (CMakeModul25 src/CMakeModul25.cpp
#	include/main_header.h
#	include/header_cpu.h
#	include/header_disk.h
#	include/header_gpu.h
#	include/header_kbd.h
#	include/header_modul25.h
#	include/header_ram.h
#	src/cpu.cpp
#	src/disk.cpp
#	src/gpu.cpp
#	src/kbd.cpp
#	src/mod25ex1.cpp
#	src/mod25ex2.cpp
#	src/ram.cpp
#	src/structPoint.cpp
#	src/split.cpp)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/main/src)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/exercise1/src)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/exercise2/src)

add_subdirectory(main/src)
add_subdirectory(exercise1/src)
add_subdirectory(exercise2/src)


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeModul25 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
target_include_directories(CMakeModul25 PUBLIC ${CMAKE_BINARY_DIR}/main/include)
target_include_directories(CMakeModul25 PUBLIC ${CMAKE_BINARY_DIR}/exercise1/include)
target_include_directories(CMakeModul25 PUBLIC ${CMAKE_BINARY_DIR}/exercise2/include)
