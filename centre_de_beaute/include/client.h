#ifndef CLIENT_H
#define CLIENT_H
#include "Rendez_vous.h"
#include "service.h"
#include"Facial_service.h"
#include"hair_cut_femme.h"
#include"hair_cut_homme.h"
#include"personne.h"
#include"Rendez_vous.h"

#include<vector>
#include<string>

class client :public personne
{
     float facture;
     vector<service*> ser;
     Rendez_vous rende_vous;
      static int nb_client;

    public:
        client();
        virtual ~client();
      //  void aficher();
      //  int  getnbclient();
        void ajout_services(service&);
        void supp_services(int );
        void calcule_facture();
        float getfacture(){return facture;}


       friend  istream& operator>>(istream&,client&);
       friend  ostream& operator<<(ostream&,client&);


    protected:


};

#endif // CLIENT_H
