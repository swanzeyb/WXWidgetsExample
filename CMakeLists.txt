cmake_minimum_required(VERSION 3.0.0)
project(WxWidgetsExample VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(wxWidgets
  GIT_REPOSITORY "https://github.com/wxWidgets/wxWidgets.git"
  GIT_TAG "v3.2.1"
)
FetchContent_MakeAvailable(wxWidgets)

include(CTest)
enable_testing()

include_directories(Include)

add_executable(WxWidgetsExample
  Source/App.cpp
  Source/Widgets/Frame.cpp
)
target_link_libraries(WxWidgetsExample PRIVATE wx::core wx::base)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
