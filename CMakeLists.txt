cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(mainproject)

option(ENABLE_UNIT_TESTS "Enable build with set of unit tests" OFF)

set(CMAKE_C_STANDART  c99)
set(CMAKE_C_EXTENSION yes)

if("${CMAKE_C_COMPILER_ID}" MATCHES "GNU")
	add_compile_options(-Wall -O2 -Wextra -fdiagnostics-color=always -Wno-unused-parameter -Wimplicit-function-declaration)
	message(STATUS "GNU compiler detected. Options updated.")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

if(DEBUG_BUILD)
	add_definitions(-DMP_DEBUG=1)
	message(STATUS "...DEBUG ENABLED...")
endif()

include_directories("${CMAKE_SOURCE_DIR}"
					"${CMAKE_SOURCE_DIR}/include"
					)

aux_source_directory("${CMAKE_SOURCE_DIR}/src" SRCLIST)

add_executable("${CMAKE_PROJECT_NAME}" 	"${CMAKE_SOURCE_DIR}/main.c"
									 	"${SRCLIST}"
									 	)
