#ifndef _PROG_
#define _PROG_
#include"materiel.h"
#include"date.h"

struct Equipe
{
    Date date_enregistrement;
    int nombre_personne;
    //char menbre[nombre];
    char nom_equipe[50];
    int jour_travail;
    int nombre_materiel;
};
typedef struct Equipe Equipe;

Equipe enregistrement_equipe();
int rechercher_equipe(Equipe tableau[], int t, char name[]);
Equipe changement_equipe(Equipe tabl[], int ta, char name[]);
void afficher_equipe(Equipe tab[], int t);

#endif