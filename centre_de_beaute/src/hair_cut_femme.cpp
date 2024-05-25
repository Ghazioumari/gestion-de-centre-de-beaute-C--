#include "hair_cut_femme.h"

hair_cut_femme::hair_cut_femme()
{
    //ctor
}
istream& operator>>(istream& in ,hair_cut_femme&f)
{
    hair_cut_service*q=&f;
    in>>*q;
     cout<<"donner la liste des meches "<<endl;
     string meche;
     char rep;
     do
     {
         cin>>meche;
        f.CM.push_back(meche);
        cout<<"ajouter des meches ? si oui saisi o"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;
}

void hair_cut_femme::afficheser()
{
     hair_cut_service::afficheser();
     cout<<"les meches dispo   :";
    for(int i=0;i<CM.size();i++)
    {
        cout<<CM[i]<<" /  ";
    }
    cout<<endl;
}
ostream& operator<<(ostream& out,hair_cut_femme&f)
{
     hair_cut_service*h=&f;
     h->afficheser();
     cout<<"les meches dispo   :";
    for(int i=0;i<f.CM.size();i++)
    {
        cout<<f.CM[i]<<" /  ";
    }
    cout<<endl;
}
void hair_cut_femme::ajout_couleur(string coul)
{
    CM.push_back(coul);
}
void hair_cut_femme::supp_couleur(string coul)
{
    int i=0;
    while(bool test=false&&i<=CM.size())
    {
        if(CM[i]==coul)
        {
           test=true;
         CM.erase(CM.begin()+i);
        }
    }
}
void hair_cut_femme::operator+(string f)
{
    CM.push_back(f);
}


void hair_cut_femme::operator-(string coul)
{
    int i=0;
    while(bool test=false&&i<=CM.size())
    {
        if(CM[i]==coul)
        {
           test=true;
         CM.erase(CM.begin()+i);
        }
    }
}


hair_cut_femme::~hair_cut_femme()
{
    //dtor
}
