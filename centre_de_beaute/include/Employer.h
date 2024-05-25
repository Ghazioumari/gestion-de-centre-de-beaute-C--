#ifndef EMPLOYER_H
#define EMPLOYER_H
#include"personne.h"

class Employer :public personne
{
    string profissoion;
      float salaire;
         /* int nb_jour ;//nombre des jours travaille par semaine
         int nb_heur;//nombre des heures travaille par  jours
       float salaire-par-heur;*/

    public:
        Employer();
        virtual ~Employer();
        // void calcul-salaire();
        float getsalaire(){return salaire;}
        void aficher();
        friend istream& operator>>(istream&,Employer&);
        friend ostream& operator<<(ostream&, Employer&);
};

#endif // EMPLOYER_H
