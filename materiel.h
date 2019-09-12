#ifndef _PROJET_ 
#define _PROJET_

struct Materiel
{
    int nombre;
    char nom_materiel[25];
    int validite_materiel;
};
typedef struct Materiel Materiel;

Materiel enregistrement_materiel();
void nettoyage_materiel(Materiel tableau[], int t, char nom[]);
int rechercher_materiel(Materiel tableau[], int t, char nom[]);
void afficher_materiel(Materiel tab[], int t);

#endif