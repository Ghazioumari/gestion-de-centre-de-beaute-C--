#include "service.h"

service::service()
{
   /* cout<<"donner numero de salle  ";
    cin>>num_salle;
     cout<<"donner le prix de service  ";
    cin>>prix;
      cout<<"donner le dure de service  ";
    cin>>dure_sevice;
    */

}
istream& operator>>(istream& in,service& s)
{
     cout<<"donner numero de salle  ";
    cin>>s.num_salle;
     cout<<"donner le prix de service  ";
    cin>>s.prix;
      cout<<"donner le dure de service  ";
    cin>>s.dure_sevice;
   return in;
}
void service::saisir_service()
{
     cout<<"donner numero de salle  ";
    cin>>num_salle;
     cout<<"donner le prix de service  ";
    cin>>prix;
      cout<<"donner le dure de service  ";
    cin>>dure_sevice;
}
service::service(int a ,float b,int c):num_salle(a),prix(b),dure_sevice(c)
{
}

void service::afficheser()
{
    cout<<" numero de salle:  "<<num_salle<<endl;
    cout<<" prix de service:  "<<prix<<endl;
    cout<<" dure de service:  "<<dure_sevice<<endl;
}







service::~service()
{
    //dtor
}
