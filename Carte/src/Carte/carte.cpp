#include "carte.hpp"

#include <iostream>


Carte::Carte(const std:: string& nume, const std:: string& autor, int pagini){

   numeCarte = nume;
   autorCarte = autor;    // these are all assignments,
   nrPagini = pagini;     // not initializations
 }

//A better way to write the constructor is to use the member initialization list instead of assignments:
 
  Carte::Carte()
  	:numeCarte("Legea atractiei"),
  	autorCarte("Esther si Jerry Hicks"),   // these are now all initializations
    nrPagini(287)
    {}

void Carte::afisare() {
			cout << "Cartea cu numele " << numeCarte << " este scrisa de " << autorCarte <<" si are " << nrPagini << " de pagini."<<"\n";
		}

void Carte::afisare_pagini() {
			cout << "Cartea are " << nrPagini << " de pagini."<<"\n";
		}


//ITEM5  If you don’t declare them yourself, compilers will declare their own versions of a copy constructor, a copy assignment operator, and a destructor.
  
//COPY CONSTRUCTOR

Carte::Carte(const Carte& obj){
		numeCarte = obj.numeCarte;
		autorCarte = obj.autorCarte;
		nrPagini = obj.nrPagini;
	}

 //COPY ASSIGNMENT OPERATOR
      Carte& 
      Carte::operator=(const Carte& obj){
           if(this == &obj) 
           
              { cout << "Self-assignment\n";
               return *this;    }              // ITEM 11 identity test: if a self-assignment,
                                               // do nothing                             
    numeCarte = obj.numeCarte;
		autorCarte = obj.autorCarte;
		nrPagini = obj.nrPagini;

        // ITEM 10 Have assignment operators return a reference to *this
        return *this;
		 }

   //DECONSTRUCTOR
   Carte ::~Carte(){}


   //ITEM12 Copy all parts of an object

   
     PriorityC::PriorityC(const std:: string& nume, const std:: string& autor, int pagini, int pret) : Carte(nume, autor, pagini) {

     pret = pret;

     }


     PriorityC::PriorityC(const PriorityC& obj) //copy constr
     : Carte(obj),                              // invoke base class copy ctor
     pret(obj.pret)
    {}


























/*void hello::say_hello()
{
    std::cout<<"MADAM\n";
}

void hello::say_nume()
{
    std::cout<<"CRYYY\n";
}
*/