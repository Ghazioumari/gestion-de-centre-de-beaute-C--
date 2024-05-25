#ifndef FACIAL_SERVICE_H
#define FACIAL_SERVICE_H
#include <ostream>
#include<istream>
#include<iostream>
#include"istream"
#include"ostream"
using namespace std;
#include<string>
#include"service.h"
#include<string>
#include<vector>



class Facial_service:public service
{
    private:
        vector<string>LC;//tableau des creme
    public:
        Facial_service();
        void saisir_creme();
        virtual ~Facial_service();
     void ajout_creme(string);
        void supp_creme(string);
        virtual void afficheser();
       friend istream& operator>>(istream&,Facial_service&);
     friend ostream& operator<<(ostream&,Facial_service&);




};

#endif // FACIAL_SERVICE_H
