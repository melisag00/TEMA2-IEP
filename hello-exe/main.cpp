#include <iostream>

//#include "hello.hpp" //pt a folosi libraria trebuie inclusa

#include <Carte/carte.hpp>

int main(){
    
  //apelez functia definita
   /* hello::say_hello();
    hello::say_nume();*/

std::string numeCarte;
std::string numeAutor;
int nrPagini;

//Initializare dimanica - tastatura

std::cout << "Numele cartii: ";
std::cin >> numeCarte;
std::cout << "Numele autorului: ";
std::cin >> numeAutor;
std::cout << "Numarul de pagini: ";
std::cin >> nrPagini;

//constructor implicit
Carte carte1;
//carte1.afisare();

//constructor prin atribuire
Carte carte2(numeCarte,numeAutor,nrPagini);
//carte2.afisare();

//copy constructor
Carte carte3 = carte2;
//carte3.afisare();

//copy assignment operator
Carte carte4;
carte4 = carte3;
//carte4.afisare();

//self-assignment
carte4=carte4;


Carte carte5, carte6, carte7;

//Cartea 4 trb sa fie cat citesc eu de la tastatura
//Iar cartea 5 trebuie sa aiba aceiasi valoare
//Daca NU returnez o referinta la *this, atribuirea nu 
//se realizeaza in mod corect 

(carte5 = carte6)  = carte4;

carte4.afisare_pagini();
carte5.afisare_pagini();
carte6.afisare_pagini();

carte5 = carte6 = carte4;

carte4.afisare_pagini();
carte5.afisare_pagini();
carte6.afisare_pagini();










}