set(build_shared_libs OFF)
if("${BUILD_LIBRARY_TYPE}" STREQUAL "Shared")
  set(build_shared_libs ON)
endif()
message("BUILD_SHARED_LIBS = ${build_shared_libs}")
hunter_config(freetype 
VERSION "2.9.1-p1"
CMAKE_ARGS
BUILD_SHARED_LIBS=${build_shared_libs})