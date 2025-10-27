# Crée une cible "interface" pour les macros (pas de compilation nécessaire)
add_library(macros_lib INTERFACE)

# Expose le chemin d'inclusion pour que le projet puisse trouver Macros.hpp
target_include_directories(macros_lib INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

# Optionnel : Installe les headers si tu veux distribuer ta librairie
install(DIRECTORY include/ DESTINATION include)
