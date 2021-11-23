add_executable(TEMA2-IEP main.cpp)

#specificarea link-urilor corect
#link ui libraria "say-hello" in executabilul "TEMA2-IEP"
target_link_libraries(TEMA2-IEP PRIVATE say-hello)