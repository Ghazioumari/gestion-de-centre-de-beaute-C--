#include "Facial_service.h"
#include <iostream>

using namespace std;
#include<string>
Facial_service::Facial_service()
{

}
istream& operator>>(istream& in,Facial_service&h)
{
    service*s=&h;
    in>>*s;
    char rep;
 string crem;
 cout<<"saisir les crems disop"<<endl;
     do
     {
         cin>>crem;
       h.LC.push_back(crem);
        cout<<"ajoter des cremes ?"<<endl ;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
     return in;
}
  void Facial_service::ajout_creme(string crem)
  {
       LC.push_back(crem);

}


void Facial_service::saisir_creme()
{
    service::saisir_service();
     cout<<" remplir le tableau des creme "<<endl;
      string crem;
      char rep;
     do
     {
         cin>>crem;
        LC.push_back(crem);
        cout<<"ajoter des cremes ?"<<endl ;
        char rep;
        cin>>rep;
     }
     while(rep=='o'||rep=='O');
}
/*void Facial_service::ajout_creme(string crem)
{
    LC.push_back(crem);
}
*/
  void Facial_service::supp_creme(string crem)
  {
      bool test=false;
      int i=0;
    while(bool test=false&&i<=LC.size())
    {
        if(LC[i]==crem)
        {
           test=true;
          LC.erase(LC.begin()+i);
        }
    }
  }


  void Facial_service::afficheser()
  {
      service::afficheser();
      cout<<"les cremes  dispo   :";
    for(int i=0;i<LC.size();i++)
    {
        cout<<LC[i]<<"  / ";
    }
    cout<<endl;
  }
  ostream& operator<<(ostream& out,Facial_service& f)
  {
      service*s=&f;
       s->afficheser();
      cout<<"les cremes  dispo   :";
    for(int i=0;i<f.LC.size();i++)
    {
        cout<<f.LC[i]<<"  / ";
    }
    cout<<endl;
    return out;
  }
Facial_service::~Facial_service()
{
    //dtor
}

