#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"materiel.h"

Materiel enregistrement_materiel(int nbr)
{
    Materiel mat[nbr];    
    for(int j=0;j<nbr;j++)
    {
        printf("NOM MATERIEL %d : ",j+1);
        scanf("%s",mat[j].nom_materiel);
        printf("NOMBRE : ");
        scanf("%d",&mat[j].nombre);
        int choix;
        printf("COMBIEN DE TEMPS VOULEZ VOUS CONSIDERER POUR CHANGER OU NETTOYER CE MATERIEL\n");
        printf("1- 1 SEMAINE\n");
        printf("2- 2 SEMAINE\n");
        printf("3- 3 SEMAINE\n");
        printf("4- 1 MOIS\n");
        printf("5- 2 MOIS\n");
        printf("6- 3 MOIS\n");
        printf("7- 1 ANNEE\n");
        scanf("%d",&choix);
        switch(choix)
        {
            case 1 : printf("CHAQUE 1 SEMAINE NOUS VOUS RAPPELERONS D'EFFECTUER VOS CHANGEMENTS\n");
                    mat[j].validite_materiel=1;
            break;
            case 2 : printf("CHAQUE 2 SEMAINE NOUS VOUS RAPPELERONS D'EFFECTUER VOS CHANGEMENTS\n");
                    mat[j].validite_materiel=2;
            break;
            case 3 : printf("CHAQUE 3 SEMAINE NOUS VOUS RAPPELERONS D'EFFECTUER VOS CHANGEMENTS\n");
                    mat[j].validite_materiel=3;
            break;
            case 4 : printf("CHAQUE 1 MOIS NOUS VOUS RAPPELERONS D'EFFECTUER VOS CHANGEMENTS\n");
                    mat[j].validite_materiel=4;
            break;
            case 5 : printf("CHAQUE 2 MOIS NOUS VOUS RAPPELERONS D'EFFECTUER VOS CHANGEMENTS\n");
                    mat[j].validite_materiel=5;
            break;
            case 6 : printf("CHAQUE 3 MOIS NOUS VOUS RAPPELERONS D'EFFECTUER VOS CHANGEMENTS\n");
                    mat[j].validite_materiel=6;
            break;
            case 7 : printf("CHAQUE 1 ANNEE NOUS VOUS RAPPELERONS D'EFFECTUER VOS CHANGEMENTS\n");
                    mat[j].validite_materiel=7;
            break;              
            default :
            printf("INVALIDE\n");         
        }
        printf("------------\n");
    }
    system("pause");
    system("cls");
    return mat[nbr];
}

int rechercher_materiel(Materiel tableau[], int t, char nom[])
{
        for(int i=0;i<t;i++)
        {
        if(strcmp(nom,tableau[i].nom_materiel)==0)
        return i;
        else
        return -1;
        }
}

void nettoyage_materiel(Materiel tableau[], int t, char nom[])
{
        int a=0;
        a=rechercher_materiel(tableau, t, nom);
        if(a!=-1)
        printf("NETTOYAGE EFFECTUE\n");
        else
        printf("INVALIDE\n");
        
}

void afficher_materiel(Materiel tab[], int t)
{
        printf("NOM : %s",tab[t].nom_materiel);
        printf("NOMBRE : %d",tab[t].nombre);
        printf("VALIDITE : ");
        if(tab[t].validite_materiel==1)
        printf("1 SEMAINE\n");
        else if(tab[t].validite_materiel==2)
        printf("2 SEMAINE\n");
        else if(tab[t].validite_materiel==3)
        printf("3 SEMAINE\n");
        else if(tab[t].validite_materiel==4)
        printf("1 MOIS\n");
        else if(tab[t].validite_materiel==5)
        printf("2 MOIS\n");
        else if(tab[t].validite_materiel==6)
        printf("3 MOIS\n");
        else
        printf("1 ANNEE\n");
}