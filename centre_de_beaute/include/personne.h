#ifndef PERSONNE_H
#define PERSONNE_H

#include <iostream>

using namespace std;
#include<string>

class personne
{
    protected:
    string nom;
    string prenom;
    string telephone;

     public:
        personne();
        virtual ~personne();
        friend istream& operator>>(istream& , personne&);
        friend ostream& operator<<(ostream& , personne&);
         virtual void aficher();
};

#endif // PERSONNE_H
