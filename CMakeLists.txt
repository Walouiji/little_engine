cmake_minimum_required(VERSION 3.15)
project(little_engine)

add_subdirectory(Core)
add_subdirectory(Utils/Macros)

# Crée une cible globale pour Core (UNIQUEMENT ici)
add_library(core_lib INTERFACE)
target_link_libraries(core_lib INTERFACE
    macros_lib
    node_lib  # node_lib est définie dans Core/Node/CMakeLists.txt
)
