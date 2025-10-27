# Core/Node/CMakeLists.txt

add_library(node_lib STATIC
    src/Board.cpp
    src/Character.cpp
)

target_include_directories(node_lib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)
