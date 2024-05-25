#ifndef HAIR_CUT_HOMME_H
#define HAIR_CUT_HOMME_H
#include <iostream>

using namespace std;
#include"hair_cut_service.h"
#include<vector>
#include<string>

class hair_cut_homme:public hair_cut_service
{
     private:
         vector<string>coupe;//listes des coupe isponible

    public:
        hair_cut_homme();
        virtual ~hair_cut_homme();
        void ajout_coupeh(string);
        void supp_coupeh(string);
        void afficheser();
        friend istream& operator>>(istream&,hair_cut_homme&);
       friend  ostream& operator<<(ostream&,hair_cut_homme&);





};

#endif // HAIR_CUT_HOMME_H
