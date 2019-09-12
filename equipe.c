#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"equipe.h"

Equipe enregistrement_equipe()
{
    Equipe eq;
    printf("DATE : \n");
    printf("JOUR : ");
    scanf("%d",&eq.date_enregistrement.jour);
    printf("MOIS : ");
    scanf("%d",&eq.date_enregistrement.mois);
    printf("ANNEE : ");
    scanf("%d",&eq.date_enregistrement.annee);
    printf("NOM DE L'EQUIPE : ");
    scanf("%s",eq.nom_equipe);
    printf("NOMBRE DE PERSONNES : ");
    scanf("%d",&eq.nombre_personne);
    printf("COMBIEN DE JOUR DE TRAVAIL AVEZ VOUS? : ");
    scanf("%d",&eq.jour_travail);
    return eq;
}

int rechercher_equipe(Equipe tableau[], int t, char name[])
{
    for(int i=0;i<t;i++)
    {
        if(strcmp(name,tableau[i].nom_equipe)==0)
        return i;
        else
        return -1;
    }
}

Equipe changement_equipe(Equipe tabl[], int ta, char name[])
{
    Equipe eq;
    printf("NOUVEAU NOM DE L'EQUIPE : ");
    scanf("%s",eq.nom_equipe);
    printf("NOUVEAU NOMBRE DE PERSONNES : ");
    scanf("%d",&eq.nombre_personne);
    printf("COMBIEN DE JOUR DE TRAVAIL AVEZ VOUS? : ");
    scanf("%d",&eq.jour_travail);
    return eq;
}

void afficher_equipe(Equipe tab[], int t)
{
    printf("NOM EQUIPE : %s\n",tab[t].nom_equipe);
    printf("NOMBRE DE PERSONNES : %s\n",tab[t].nombre_personne);
    printf("JOUR DE TRAVAIL : %s\n",tab[t].jour_travail);
    printf("NOMBRE MATERIEL : %d\n",tab[t].nombre_materiel);
    printf("DATE ENREGISTREMENT : %d/%d/%d\n",tab[t].date_enregistrement.jour,tab[t].date_enregistrement.mois,tab[t].date_enregistrement.annee);
    
}