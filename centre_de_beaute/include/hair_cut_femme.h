#ifndef HAIR_CUT_FEMME_H
#define HAIR_CUT_FEMME_H
#include <iostream>

using namespace std;
#include"hair_cut_service.h"
#include<string>
#include<vector>

class hair_cut_femme :public hair_cut_service
{

        vector<string>CM;//couleur_meche_disponible
       // vector<string>coupe;//coupe disonible
      public:
        hair_cut_femme();
        virtual ~hair_cut_femme();
      void ajout_couleur(string);
      void supp_couleur(string);
        //  void ajout_coupe(string);
        // void supp_coupe(string);
        void afficheser();
        friend ostream& operator<<(ostream&,hair_cut_femme&);
        friend istream& operator>>(istream& in ,hair_cut_femme&);
        void operator+(string);
        void operator-(string);



};

#endif // HAIR_CUT_FEMME_H
