#include "hair_cut_service.h"
#include<string>
hair_cut_service::hair_cut_service()
{
//    service::service();
    //cout<<"donner l'age "<<endl;
   // cin>>age;
}
istream& operator>>(istream& in,hair_cut_service&h)
{
    service*s=&h;
    in>>*s;
          cout<<"donner l'age "<<endl;
    cin>>h.age;
     cout<<" remplir le tableau des machines "<<endl;
     string machine;
     char rep;
     do
     {
         cin>>machine;
        h.LM.push_back(machine);
        cout<<"ajouter des machines ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;

}
 /*void hair_cut_service::saisir_hair()
 {
     service::saisir_service();
      cout<<"donner l'age "<<endl;
    cin>>age;
     cout<<" remplir le tableau des machines "<<endl;
     string machine;
     do
     {
         cin>>machine;
        LM.push_back(machine);
        cout<<"ajouter des machines ?"<<endl ;
        char rep;
        cin>>rep;
     }
     while(rep==o||rep==O);
 }*/
 void hair_cut_service::afficheser()
{
    service::afficheser();
    cout<<"l'age:   "<<age<<endl;
    cout<<"les machines dispo   :";
    for(int i=0;i<LM.size();i++)
    {
        cout<<LM[i]<<" /  ";
    }
cout<<endl;
}
void hair_cut_service::ajout_machine(string mch)
{
    LM.push_back(mch);
}
void hair_cut_service::supp_machine(string mch)
{
    int i=0;
    while(bool test=false&&i<=LM.size())
    {
        if(LM[i]==mch)
        {
           test=true;
          LM.erase(LM.begin()+i);
        }
    }
}



hair_cut_service::~hair_cut_service()
{
LM.clear();
}
#include "hair_cut_service.h"
#include<string>
hair_cut_service::hair_cut_service()
{
//    service::service();
    //cout<<"donner l'age "<<endl;
   // cin>>age;
}
istream& operator>>(istream& in,hair_cut_service&h)
{
    service*s=&h;
    in>>*s;
          cout<<"donner l'age "<<endl;
    cin>>h.age;
     cout<<" remplir le tableau des machines "<<endl;
     string machine;
     char rep;
     do
     {
         cin>>machine;
        h.LM.push_back(machine);
        cout<<"ajouter des machines ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;

}
 /*void hair_cut_service::saisir_hair()
 {
     service::saisir_service();
      cout<<"donner l'age "<<endl;
    cin>>age;
     cout<<" remplir le tableau des machines "<<endl;
     string machine;
     do
     {
         cin>>machine;
        LM.push_back(machine);
        cout<<"ajouter des machines ?"<<endl ;
        char rep;
        cin>>rep;
     }
     while(rep==o||rep==O);
 }*/
 void hair_cut_service::afficheser()
{
    service::afficheser();
    cout<<"l'age:   "<<age<<endl;
    cout<<"les machines dispo   :";
    for(int i=0;i<LM.size();i++)
    {
        cout<<LM[i]<<" /  ";
    }
cout<<endl;
}
void hair_cut_service::ajout_machine(string mch)
{
    LM.push_back(mch);
}
void hair_cut_service::supp_machine(string mch)
{
    int i=0;
    while(bool test=false&&i<=LM.size())
    {
        if(LM[i]==mch)
        {
           test=true;
          LM.erase(LM.begin()+i);
        }
    }
}



hair_cut_service::~hair_cut_service()
{
LM.clear();
}
#include "hair_cut_service.h"
#include<string>
hair_cut_service::hair_cut_service()
{
//    service::service();
    //cout<<"donner l'age "<<endl;
   // cin>>age;
}
istream& operator>>(istream& in,hair_cut_service&h)
{
    service*s=&h;
    in>>*s;
          cout<<"donner l'age "<<endl;
    cin>>h.age;
     cout<<" remplir le tableau des machines "<<endl;
     string machine;
     char rep;
     do
     {
         cin>>machine;
        h.LM.push_back(machine);
        cout<<"ajouter des machines ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;

}
 /*void hair_cut_service::saisir_hair()
 {
     service::saisir_service();
      cout<<"donner l'age "<<endl;
    cin>>age;
     cout<<" remplir le tableau des machines "<<endl;
     string machine;
     do
     {
         cin>>machine;
        LM.push_back(machine);
        cout<<"ajouter des machines ?"<<endl ;
        char rep;
        cin>>rep;
     }
     while(rep==o||rep==O);
 }*/
 void hair_cut_service::afficheser()
{
    service::afficheser();
    cout<<"l'age:   "<<age<<endl;
    cout<<"les machines dispo   :";
    for(int i=0;i<LM.size();i++)
    {
        cout<<LM[i]<<" /  ";
    }
cout<<endl;
}
void hair_cut_service::ajout_machine(string mch)
{
    LM.push_back(mch);
}
void hair_cut_service::supp_machine(string mch)
{
    int i=0;
    while(bool test=false&&i<=LM.size())
    {
        if(LM[i]==mch)
        {
           test=true;
          LM.erase(LM.begin()+i);
        }
    }
}



hair_cut_service::~hair_cut_service()
{
LM.clear();
}
