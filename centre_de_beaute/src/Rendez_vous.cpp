#include "Rendez_vous.h"

Rendez_vous::Rendez_vous()
{
    /*cout<<"saisie le mois  desire:   ";
    cin>>mois;
     cout<<"saisie la date desire:   ";
    cin>>date;
    cout<<"saisie la heur desire:   ";
    cin>>heur;
    cout<<"saisie lacopmte:   ";
    cin>>acompte;
    */
}
istream& operator>>(istream& in,Rendez_vous& r)
{
    cout<<"saisie le mois  desire:   ";
    cin>>r.mois;
     cout<<"saisie la date desire:   ";
    cin>>r.date;
    cout<<"saisie la heur desire:   ";
    cin>>r.heur;
    cout<<"saisie lacopmte:   ";
    cin>>r.acompte;
}
void Rendez_vous::afficher_red()
{
    cout<<"date  le:   "<<date<<"/"<<mois<<"/2023"<<" a "<<heur<<" heur"<<endl;
    cout<<"lacopmte:   "<<acompte<<endl;

}

Rendez_vous::~Rendez_vous()
{


}
