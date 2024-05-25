#include "Employer.h"

Employer::Employer()
{
    //ctor
}

Employer::~Employer()
{
    //dtor
}
 istream& operator>>(istream& in,Employer& e)
 {
    // personne* q=&e;
     //in>>*q;
     cout<<"donner la  profissoin ";
     in>>e.profissoion;
     cout<<"donner son salaire ";
     in>>e.salaire;
     return in;

 }
 ostream& operator<<(ostream& out, Employer& e)
 {
      personne* q=&e;
     out<<*q;
     out<<"professoion:  "<<e.profissoion<<endl;
     out<<" salaire:  "<<e.salaire;
   return out;
 }
void Employer::aficher()
{
    personne::aficher();
     cout<<"professoion:  "<<profissoion<<endl;
     cout<<" salaire:  "<<salaire<<endl;
}
