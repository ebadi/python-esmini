cmake_minimum_required(VERSION 3.1)
project (pyesmini)

include(ExternalProject)
include(FetchContent)

############## esmini ##############
if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/esmini")
    FetchContent_Declare(
      esmini
      GIT_REPOSITORY https://github.com/esmini/esmini.git
      GIT_TAG        master
    )
    FetchContent_GetProperties(esmini)
    if(NOT esmini_POPULATED)
      FetchContent_Populate(esmini)
    endif()
    message(STATUS "esmini-python: esmini downloaded")
    add_subdirectory(${esmini_SOURCE_DIR})
else()
    add_subdirectory(esmini)
endif()


message(STATUS "SCENARIOENGINE_INCLUDE_DIRS: ${SCENARIOENGINE_INCLUDE_DIRS}")
message(STATUS "ROADMANAGER_INCLUDE_DIR: ${ROADMANAGER_INCLUDE_DIR}")
message(STATUS "VIEWER_BASE_INCLUDE_DIR: ${VIEWER_BASE_INCLUDE_DIR}")
message(STATUS "PLAYER_BASE_INCLUDE_DIR: ${PLAYER_BASE_INCLUDE_DIR}")
message(STATUS "CONTROLLERS_INCLUDE_DIR: ${CONTROLLERS_INCLUDE_DIR}")
message(STATUS "OSG_INCLUDE_DIR: ${OSG_INCLUDE_DIR}")
message(STATUS "SUMO_INCLUDE_DIR: ${SUMO_INCLUDE_DIR}")
message(STATUS "COMMON_MINI_INCLUDE_DIR: ${COMMON_MINI_INCLUDE_DIR}")
message(STATUS "OSI_INCLUDE_DIR: ${OSI_INCLUDE_DIR}")

message(STATUS "TIME_LIB: ${TIME_LIB}")
message(STATUS "SOCK_LIB: ${SOCK_LIB}")
message(STATUS "OSG_LIBRARIES_PATH: ${OSG_LIBRARIES_PATH}")
message(STATUS "OSI_LIBRARIES_PATH: ${OSI_LIBRARIES_PATH}")
message(STATUS "SUMO_LIBRARIES_PATH: ${SUMO_LIBRARIES_PATH}")
message(STATUS "GTEST_LIBRARIES_PATH: ${GTEST_LIBRARIES_PATH}")
message(STATUS "OSG_LIBRARIES: ${OSG_LIBRARIES}")
message(STATUS "OSI_LIBRARIES: ${OSI_LIBRARIES}")
message(STATUS "SUMO_LIBRARIES: ${SUMO_LIBRARIES}")
message(STATUS "GTEST_LIBRARIES: ${GTEST_LIBRARIES}")
message(STATUS "SCENARIOENGINE_DLL_INCLUDE_DIR: ${SCENARIOENGINE_DLL_INCLUDE_DIR}")
message(STATUS "ROADMANAGER_DLL_INCLUDE_DIR: ${ROADMANAGER_DLL_INCLUDE_DIR}")
message(STATUS "OSI_BASE_DIR: ${OSI_BASE_DIR}")
message(STATUS "PUGIXML_INCLUDE_DIR: ${PUGIXML_INCLUDE_DIR}")

message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")


############## pybind11 ##############
FetchContent_Declare(
  pybind11
  GIT_REPOSITORY https://github.com/pybind/pybind11.git
  GIT_TAG        70a58c577eaf067748c2ec31bfd0b0a614cffba6
)
FetchContent_GetProperties(pybind11)
if(NOT pybind11_POPULATED)
  FetchContent_Populate(pybind11)
  add_subdirectory(${pybind11_SOURCE_DIR})
  message(STATUS "esmini-python: pybind11")
endif()



set(CMAKE_BUILD_TYPE "Release") # https://github.com/microsoft/vcpkg/issues/20237?amp=1




link_directories(${OSG_LIBRARIES_PATH} ${OSI_LIBRARIES_PATH} ${SUMO_LIBRARIES_PATH} ${GTEST_LIBRARIES_PATH} )


include(CheckCXXCompilerFlag)

  # Check for standard to use
  check_cxx_compiler_flag(-std=c++14 HAVE_FLAG_STD_CXX14)
  if(HAVE_FLAG_STD_CXX14)
      SET(CXX_STD_FLAG "-std=c++14")
  else()
     check_cxx_compiler_flag(-std=c++1y HAVE_FLAG_STD_CXX1Y)
     if(HAVE_FLAG_STD_CXX1Y)
       SET(CXX_STD_FLAG "-std=c++1y")
     else()
       message ("Need compiler support for c++14 \(or 1y as the beta was called\)")
     endif()
  endif()

  set (CMAKE_C_FLAGS "-std=c11 ${CMAKE_C_FLAGS}")

  if(CMAKE_BUILD_TYPE STREQUAL "Release")
    SET(CMAKE_CXX_FLAGS "${CXX_STD_FLAG} -pthread -fPIC -Wl,-strip-all")
  elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
    SET(CMAKE_CXX_FLAGS "${CXX_STD_FLAG} -march=native -O0 -pthread -fPIC")
  else()
    SET(CMAKE_CXX_FLAGS "${CXX_STD_FLAG} -pthread -fPIC -Wl,-strip-all")
  endif()




project(pyesmini)

set(CMAKE_BUILD_TYPE "Release") # https://github.com/microsoft/vcpkg/issues/20237?amp=1


pybind11_add_module(pyplayerbase "${CMAKE_CURRENT_SOURCE_DIR}/src/playerbase/pyplayerbase.cpp")
include_directories(
  ${SCENARIOENGINE_INCLUDE_DIRS}
  ${ROADMANAGER_INCLUDE_DIR}
  ${VIEWER_BASE_INCLUDE_DIR}
  ${PLAYER_BASE_INCLUDE_DIR}
  ${CONTROLLERS_INCLUDE_DIR}
  ${OSG_INCLUDE_DIR}
  ${SUMO_INCLUDE_DIR}
  ${COMMON_MINI_INCLUDE_DIR}
  ${OSI_INCLUDE_DIR}
)
# EXAMPLE_VERSION_INFO is defined by setup.py and passed into the C++ code as a
# define (VERSION_INFO) here.
target_link_libraries(pyplayerbase PRIVATE
    ViewerBase ${OSG_LIBRARIES}
    ${SUMO_LIBRARIES}
    ${OSI_LIBRARIES}
    PlayerBase
    ScenarioEngine
    Controllers
    RoadManager
    CommonMini
    ${viewer_libs}
    ${osi_libs}
    ${sumo_libs}
    ${TIME_LIB}
    ${SOCK_LIB}
)
target_compile_definitions(pyplayerbase PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})





pybind11_add_module(pyroadmanager MODULE "${CMAKE_CURRENT_SOURCE_DIR}/src/roadmanager/pyroadmanager.cpp" ${SCENARIOENGINE_DLL_INCLUDE_DIR}/esminiLib.hpp ${ROADMANAGER_INCLUDE_DIR}/odrSpiral.cpp ${COMMON_MINI_INCLUDE_DIR}/CommonMini.cpp ${COMMON_MINI_INCLUDE_DIR}/buildnr.cpp ${COMMON_MINI_INCLUDE_DIR}/version.cpp ${PUGIXML_INCLUDE_DIR}/pugixml.cpp )
include_directories(${PLAYER_BASE_INCLUDE_DIR} ${SCENARIOENGINE_INCLUDE_DIRS}  ${SCENARIOENGINE_DLL_INCLUDE_DIR}/ ${OSI_INCLUDE_DIR} ${OSG_INCLUDE_DIR} ${COMMON_MINI_INCLUDE_DIR} ${ROADMANAGER_INCLUDE_DIR} ${CONTROLLERS_INCLUDE_DIR} ${VIEWER_BASE_INCLUDE_DIR} ${PUGIXML_INCLUDE_DIR})
target_link_libraries(pyroadmanager PRIVATE
    ViewerBase ${OSG_LIBRARIES}
    ${SUMO_LIBRARIES}
    ${OSI_LIBRARIES}
    PlayerBase
    ScenarioEngine
    Controllers
    RoadManager
    CommonMini
    ${viewer_libs}
    ${osi_libs}
    ${sumo_libs}
    ${TIME_LIB}
    ${SOCK_LIB}
    )
target_compile_definitions(pyroadmanager PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})




pybind11_add_module(pyscenarioengine "${CMAKE_CURRENT_SOURCE_DIR}/src/scenarioengine/pyscenarioengine.cpp"
${SCENARIO_SRCS}
${ROADMANAGER_INCLUDE_DIR}/RoadManager.cpp
${ROADMANAGER_INCLUDE_DIR}/odrSpiral.cpp
${COMMON_MINI_INCLUDE_DIR}/CommonMini.cpp
${COMMON_MINI_INCLUDE_DIR}/buildnr.cpp
${COMMON_MINI_INCLUDE_DIR}/version.cpp
${PUGIXML_INCLUDE_DIR}/pugixml.cpp
)
target_link_libraries(pyscenarioengine PRIVATE
    ViewerBase ${OSG_LIBRARIES}
    ${SUMO_LIBRARIES}
    ${OSI_LIBRARIES}
    PlayerBase
    ScenarioEngine
    Controllers
    RoadManager
    CommonMini
    ${viewer_libs}
    ${osi_libs}
    ${sumo_libs}
    ${TIME_LIB}
    ${SOCK_LIB}
${SOCK_LIB} ${TIME_LIB}   ${SUMO_LIBRARIES}   ${OSG_LIBRARIES} ViewerBase PlayerBase Controllers CommonMini RoadManager ScenarioEngine)
target_compile_definitions(pyscenarioengine PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})





#####################
file(GLOB VIEWER_SRCS 	"Modules/ViewerBase/*.cpp" )

pybind11_add_module(pyviewerbase MODULE "${CMAKE_CURRENT_SOURCE_DIR}/src/viewerbase/pyviewerbase.cpp"
${ROADMANAGER_INCLUDE_DIR}/RoadManager.cpp
${ROADMANAGER_INCLUDE_DIR}/odrSpiral.cpp
${COMMON_MINI_INCLUDE_DIR}/buildnr.cpp
${COMMON_MINI_INCLUDE_DIR}/version.cpp
${PUGIXML_INCLUDE_DIR}/pugixml.cpp
)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)
add_definitions(-DOSG_LIBRARY_STATIC ) # -D_SCENARIO_VIEWER


target_link_libraries(pyviewerbase PRIVATE
    ViewerBase ${OSG_LIBRARIES}
    ${SUMO_LIBRARIES}
    ${OSI_LIBRARIES}
    PlayerBase
    ScenarioEngine
    Controllers
    RoadManager
    CommonMini
    ${viewer_libs}
    ${osi_libs}
    ${sumo_libs}
    ${TIME_LIB}
    ${SOCK_LIB}
    )
target_compile_definitions(pyviewerbase PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})




pybind11_add_module(pyesminilib MODULE "${CMAKE_CURRENT_SOURCE_DIR}/src/esminilib/pyesminilib.cpp" )
target_link_libraries(pyesminilib PRIVATE
    ViewerBase ${OSG_LIBRARIES}
    ${SUMO_LIBRARIES}
    ${OSI_LIBRARIES}
    PlayerBase
    ScenarioEngine
    Controllers
    RoadManager
    CommonMini
    ${viewer_libs}
    ${osi_libs}
    ${sumo_libs}
    ${TIME_LIB}
    ${SOCK_LIB}
     esminiRMLib esminiLib
    )
target_compile_definitions(pyesminilib PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})



pybind11_add_module(pyesminirmlib MODULE "${CMAKE_CURRENT_SOURCE_DIR}/src/esminirmlib/pyesminirmlib.cpp"   ${SCENARIOENGINE_DLL_INCLUDE_DIR}/esminiLib.hpp   ${ROADMANAGER_DLL_INCLUDE_DIR}/esminiRMLib.hpp )
include_directories(${PLAYER_BASE_INCLUDE_DIR} ${SCENARIOENGINE_INCLUDE_DIRS}  ${SCENARIOENGINE_DLL_INCLUDE_DIR}/   ${ROADMANAGER_DLL_INCLUDE_DIR}/ ${OSI_INCLUDE_DIR} ${OSG_INCLUDE_DIR} ${COMMON_MINI_INCLUDE_DIR} ${ROADMANAGER_INCLUDE_DIR} ${CONTROLLERS_INCLUDE_DIR} ${VIEWER_BASE_INCLUDE_DIR})
target_link_libraries(pyesminirmlib PRIVATE
    ViewerBase ${OSG_LIBRARIES}
    ${SUMO_LIBRARIES}
    ${OSI_LIBRARIES}
    PlayerBase
    ScenarioEngine
    Controllers
    RoadManager
    CommonMini
    ${viewer_libs}
    ${osi_libs}
    ${sumo_libs}
    ${TIME_LIB}
    ${SOCK_LIB}
     esminiRMLib esminiLib
    )
target_compile_definitions(pyesminirmlib PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})