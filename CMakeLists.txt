cmake_minimum_required(VERSION 2.8.9)

project(MyFoo)

set(BUILD_SHARED_LIBS TRUE)
set(CMAKE_INCLUDE_CURRENT_DIR TRUE)

set(CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_SOURCE_DIR}/CMake
  ${CMAKE_MODULE_PATH}
  )

include(CMakeParseArguments)
include(vtkMacroKitPythonWrap)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

set(KIT_NAME MyFooLib)
set(KIT_SRCS vtkMyFoo.cpp)

add_library(${KIT_NAME} ${KIT_SRCS})
target_link_libraries(${KIT_NAME} ${VTK_LIBRARIES})

vtkMacroKitPythonWrap(
  KIT_NAME ${KIT_NAME}
  KIT_SRCS ${KIT_SRCS}
  KIT_INSTALL_BIN_DIR bin
  KIT_INSTALL_LIB_DIR lib
  KIT_PYTHON_LIBRARIES ${KIT_NAME}
  )

add_executable(MyFoo main.cpp)
target_link_libraries(MyFoo ${KIT_NAME})



