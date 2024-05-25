#include "personne.h"

personne::personne()
{
    cout<<"donner le nom: ";
    cin>>nom;
    cout<<"donner le prenom: ";
     cin>>prenom;
      cout<<"donner le num de telphone: ";
     cin>>telephone;
}

personne::~personne()
{
    //dtor
}

void personne::aficher()
{
     cout<<"  nom prenom :  "<<nom<<" "<<prenom<<endl;

      cout<<" telphone:  "<<telephone<<endl;

}
istream& operator>>(istream& in, personne& p)
{
    cout<<"donner le nom: ";
    in>>p.nom;
    cout<<"donner le prenom: ";
     in>>p.prenom;
      cout<<"donner le num de telphone: ";
     in>>p.telephone;
return in;
}
ostream& operator<<(ostream& out , personne&p)
{
    out<<"  nom prenom :  "<<p.nom<<" "<<p.prenom<<endl;

      out<<" telphone:  "<<p.telephone<<endl;
}

