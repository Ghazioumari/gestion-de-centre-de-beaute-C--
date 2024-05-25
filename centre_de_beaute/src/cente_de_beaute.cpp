#include "cente_de_beaute .h"

#include<vector>
cente_de_beaute ::cente_de_beaute ()
{
    cout<<"donner le nom du  centre  "<<endl;
    cin>>nom_centre;
    cout<<"donner l'aderesse "<<endl;
    cin>>adresse;
      cout<<"donner le telephone "<<endl;
    cin>>num_tel;

}

istream& operator>>(istream& in,cente_de_beaute& c)
{
    cout<<"donner le nom du  centre  "<<endl;
    in>>c.nom_centre;
    cout<<"donner l'aderesse "<<endl;
    in>>c.adresse;
      cout<<"donner le telephone "<<endl;
    in>>c.num_tel;
    int choix;
    char rep;
    personne*p;
    do
    {
        cout<<"vouler vous saisi// 1:Employer //2 :client"<<endl;
        if(choix==1)
        {
          // Employer* q=new  Employer(static_cast<Employer>(*p));
          Employer*q=new Employer();

            in>>*q;
            c. tab.push_back(q);

        }
        else if(choix==2)
        {
           // client* q=new  client(static_cast<client>(*p));
           client*q=new client();
            in>>*q;
            c. tab.push_back(q);
        }

        cout<<"rajouter des personnes ?"<<endl;
        cin>>rep;
    }
   while(rep=='o'||rep=='O');


    return in;
}


ostream& operator<<(ostream& out,cente_de_beaute& c)
{
    out<<" le nom du  centre:  "<<c.nom_centre<<endl;
    out<<"l'aderesse:   "<<c.adresse<<endl;
    out<<"donner lenum  telephone:  "<<c.num_tel<<endl;
   for(int i=0;i<3/*tab.size()*/;i++)
    {
        if(typeid(*c.tab[i])==typeid(client))
        out<<static_cast<client&>(*c. tab[i])<<endl;
        else
        out<<static_cast<Employer&>(*c. tab[i])<<endl;
    }

}

void cente_de_beaute::ajout_personne(personne& p)
{
    personne*q;
     if(typeid(p)==typeid(client))
        q=new client (static_cast<const client&>(p));
     else if(typeid(p)==typeid(Employer))
           q=new Employer (static_cast<const Employer&>(p));
     tab.push_back(q);
}
void cente_de_beaute::calcul_recette()
{
    recette=0;
    client*q;
    Employer*p;
    for(int i=0;i< tab.size();i++)
    {
     if(typeid( *tab[i])==typeid(client))
     {
          q=new client(static_cast<const client&>(*tab[i]));
        recette+= q->getfacture();
     }

     else if(typeid( *tab[i])==typeid(Employer))
     {
          p=new Employer(static_cast<const Employer&>(*tab[i]));
          recette+= p->getsalaire();
     }

    }
}
cente_de_beaute ::~cente_de_beaute ()
{
for(int i=0;i< tab.size();i++)
    delete  tab[i];
     tab.clear();
}
