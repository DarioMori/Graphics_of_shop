cmake_minimum_required(VERSION 3.23)
project(button_wxWidgets)

set(CMAKE_CXX_STANDARD 14)

find_package(wxWidgets REQUIRED  gl core base OPTIONAL_COMPONENTS net media )
include(${wxWidgets_USE_FILE})
add_executable(button_wxWidgets main.cpp Frame.cpp Frame.h NewFrame.cpp NewFrame.h MyApp.cpp MyApp.h MyFrame.cpp MyFrame.h RegisterFrame.cpp RegisterFrame.h)

# and for each of your dependent executable/library targets:
target_link_libraries(button_wxWidgets ${wxWidgets_LIBRARIES})