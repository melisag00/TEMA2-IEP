#adaug libraria

add_library(
    say-hello #denumire librarie
    src/say-hello/hello.hpp
    src/say-hello/hello.cpp
    )

    #atentie la introducerea corecta a directoarelor
    target_include_directories(say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
    #nume target PUBLIC say-hello/src