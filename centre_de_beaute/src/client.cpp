#include "client.h"
#include<typeinfo>
#include <iostream>

using namespace std;
#include<string>
#include"personne.h"
client::client()
{
//    personne::personne();


}
istream& operator>>(istream& in,client& c)
{
   cout<<"choisir un rendez_vous"<<endl;
     Rendez_vous r;
    in>>r;

    cout<<"saisir les services desire"<<endl;
    int choix ,choix1;
    char rep;
      service *s;
   //   c.nb_client=0;

    do
    {

        cout<<"coisir le service::hair_cut:1//facial_service:2"<<endl;
        cin>>choix;
        if(choix==2)
        {
            //s=new Facial_service()
            Facial_service* f=new Facial_service();

            in>>*f;
             c.ser.push_back(f);
        }
        else if(choix==1)
        {
            cout<<"homme ::1 ou femme::2"<<endl;
            cin>>choix1;
            if(choix1==1)
             {
                hair_cut_homme*h=new hair_cut_homme();
                in>>*h;
                c.ser.push_back(h);
             }
            else
            {
               hair_cut_femme* w=new hair_cut_femme();
               in>>*w;
                c.ser.push_back(w);
            }
        }
      // c.nb_client++;

        cout<<"rajouter des services ?"<<endl;
        cin>>rep;
    }
     while(rep=='o'||rep=='O');
    return in;
}
ostream& operator<<(ostream& out,client& c)
{
    c.rende_vous.afficher_red();
    for(int i=0;i<c.ser.size();i++)
    {
        cout<<"******"<<"service nemero: "<<i+1<<"******"<<endl;

      if(typeid(*c.ser[i])==typeid(Facial_service))
      out<<static_cast<Facial_service&>(*c.ser[i])<<endl;

       else if(typeid(*c.ser[i])==typeid(hair_cut_homme))
       out<<static_cast<hair_cut_homme&>(*c.ser[i])<<endl;

       else if(typeid(*c.ser[i])==typeid(hair_cut_femme))
     out<<static_cast<hair_cut_femme&>(*c.ser[i])<<endl;
    }

    return out;
}
void  client::calcule_facture()
{
facture=0;
  for(int i=0;i<ser.size();i++)
  {
      facture+=ser[i]->getprix();
  }
}
void client::ajout_services(service& s)
{
    service*q;
    if(typeid(s)==typeid(Facial_service))
        q=new Facial_service (static_cast<const Facial_service&>(s));

    else if(typeid(s)==typeid(hair_cut_femme))
        q=new hair_cut_femme (static_cast<const hair_cut_femme&>(s));

    else if(typeid(s)==typeid(hair_cut_homme))
        q=new hair_cut_homme (static_cast<const hair_cut_homme&>(s));

        ser.push_back(q);
}


client::~client()
{
    //dtor
}
