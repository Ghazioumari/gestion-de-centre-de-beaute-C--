#ifndef SERVICE_H
#define SERVICE_H
#include <iostream>

using namespace std;
#include<string>

class service
{
    protected:
        int num_salle;
        float prix;
        int dure_sevice;

    public:
        service();
        service(int,float,int);
        void saisir_service();
        virtual ~service();
        float getprix(){return prix;}
        virtual void afficheser()=0;
        friend istream& operator>>(istream&,service&);





    private:
};

#endif // SERVICE_H
