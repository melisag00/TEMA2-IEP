#ifndef CARTE_H_
#define CARTE_H_

#include <iostream>
#include <string>
using namespace std;

/*namespace hello {
    void say_hello();
    void say_nume();
}  //namespace hello
*/


class Carte
{
    
    public:
    std::string numeCarte;
    std::string autorCarte;
    int nrPagini;
	int nrCarti;

    public:
    Carte();
    Carte(const std:: string& nume, const std:: string& autor, int pagini);
    Carte(const Carte& obj);
    Carte& operator=(const Carte& obj);
    ~Carte();
    void afisare();
    void afisare_pagini();


};


#endif //CARTE_H_