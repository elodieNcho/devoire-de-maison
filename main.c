#include<stdio.h>
#include<stdlib.h>
#include"equipe.h"
#include"materiel.h"

#define TAILLE 6

Equipe tab_equipe[TAILLE];
Materiel tab_materiel[TAILLE];
int choi;

int main()
{
    for(int i=0;i<TAILLE;i++)
    {
        tab_equipe[i]=enregistrement_equipe();
        printf("NOMBRE MATERIEL : ");
        scanf("%d",&tab_equipe[i].nombre_materiel);
        tab_materiel[i]=enregistrement_materiel(tab_equipe[i].nombre_materiel);
    }
    while(1)
    {
        printf("NOUS AVONS MAINTENANT TOUTES LES INFORMATIONS 'MERCI!'\n");
        system("pause");
        system("cls");
        printf("QUE VOULEZ VOUS FAIRE? : \n");
        printf("1- NETTOYAGE MATERIEL\n");
        printf("2- CHANGEMENT MATERIEL\n");
        printf("3- CHANGER L'EMPLOI DU TEMPS D'UNE EQUIPE\n");
        printf("4- VOIR MATERIEL D'UNE EQUIPE\n");
        printf("5- VOIR UNE EQUIPE\n");
        printf("6- VOIR TOUTES LES EQUIPES\n");
        scanf("%d",&choi);
        switch(choi)
        {
            case 1 :printf("");
                    char nom[50];
                    printf("NOM EQUIPE : ");
                    scanf("%s",nom);
                    int z=rechercher_equipe(tab_equipe, 6, nom);
                    if(z!=-1)
                    {
                        char no[50];
                        printf("NOM MATERIEL : ");
                        scanf("%s",no);
                        int a=rechercher_materiel(tab_materiel, z, no);
                        if(a!=-1)
                        nettoyage_materiel(tab_materiel, z, no);
                        else
                        printf("INVALIDE\n");
                    }
            break;
            case 2 :
            break;
            case 3 :printf("");
                    char namee[50];
                    printf("NOM EQUIPE : ");
                    scanf("%s",namee);
                    int x=rechercher_equipe(tab_equipe, 6, namee);
                    if(x!=-1)
                    tab_equipe[x]=changement_equipe(tab_equipe, 6, namee);
                    else
                    printf("INVALIDE\n");
            break;
            case 4 :printf("");
                    char non[50];  
                    printf("NOM EQUIPE : ");
                    scanf("%s",non);
                    int q=rechercher_equipe(tab_equipe, 6, non);
                    if(q!=-1)
                    {
                        for(int e=0;e<tab_equipe[q].nombre_materiel;e++)
                        {
                            afficher_materiel(tab_materiel, q);
                            printf("-------------\n");
                        }
                    }
            break;
            case 5 :printf("");
                    char noom[50];
                    printf("NOM EQUIPE : ");
                    scanf("%s",noom);
                    int y=rechercher_equipe(tab_equipe, 6, noom);
                    if(y!=-1)
                    afficher_equipe(tab_equipe, y);
            break;
            case 6 :for(int k=0;k<TAILLE;k++)
                    {
                        afficher_equipe(tab_equipe, k);
                    }
            break;
            default :
            printf("INVALIDE\n");
        }
    }
    return 0;
}