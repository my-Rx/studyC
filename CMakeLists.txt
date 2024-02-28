cmake_minimum_required(VERSION 3.0.0)
project(codeTest VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

file(GLOB PROJ_SRC ".h" "*.c")
add_executable(codeTest ${PROJ_SRC})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
