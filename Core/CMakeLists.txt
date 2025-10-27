# Core/CMakeLists.txt
# Ajoute les sous-dossiers (ce qui crée node_lib)
add_subdirectory(Node)
target_link_libraries(node_lib PRIVATE macros_lib)