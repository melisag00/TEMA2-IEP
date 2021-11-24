#adaug libraria

add_library(
    denumire-librarie #denumire librarie
    src/Carte/carte.hpp
    src/Carte/Carte.cpp
    )

    #atentie la introducerea corecta a directoarelor
    target_include_directories(denumire-librarie PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
    #nume target PUBLIC say-hello/src