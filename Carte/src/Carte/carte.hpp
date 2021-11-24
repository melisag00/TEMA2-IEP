#ifndef CARTE_H_
#define CARTE_H_

#include <iostream>
#include <string>
using namespace std;


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


class PriorityC : public Carte {

    public:
    int pret;

    public:
    PriorityC(const std:: string& nume, const std:: string& autor, int pagini, int pret);
    PriorityC(const PriorityC& obj);
    
};

#endif //CARTE_H_