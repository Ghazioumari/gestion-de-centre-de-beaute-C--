#include "hair_cut_homme.h"

hair_cut_homme::hair_cut_homme()
{

}

istream& operator>>(istream& in,hair_cut_homme&h)
{
    hair_cut_service*q=&h;
    in>>*q;
    cout<<"donner la liste des coupes"<<endl;
     string coup;
     char rep;
     do
     {
         cin>>coup;
        h.coupe.push_back(coup);
        cout<<"ajouter des coupes ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
    return in;
}

ostream& operator<<(ostream& out,hair_cut_homme&f)
{
     hair_cut_service*s=&f;
     s->afficheser();
     cout<<"les coupes dispo   :";
    for(int i=0;i<f.coupe.size();i++)
    {
        cout<<f.coupe[i]<<" / ";
    }
    return out;
}


void hair_cut_homme::afficheser()
{
    hair_cut_service::afficheser();
     cout<<"les coupes dispo   :";
    for(int i=0;i<coupe.size();i++)
    {
        cout<<coupe[i]<<" /  ";
    }
    cout<<endl;
}
void hair_cut_homme::ajout_coupeh(string coup)
{
    coupe.push_back(coup);
}
void hair_cut_homme::supp_coupeh(string coup)
{
    int i=0;
    while(bool test=false&&i<=coupe.size())
    {
        if(coupe[i]==coup)
        {
           test=true;
          coupe.erase(coupe.begin()+i);
        }
    }
}

hair_cut_homme::~hair_cut_homme()
{
    //dtor
}
