#ifndef EQUIP_H_INCLUDED
#define EQUIP_H_INCLUDED

#include <gtk/gtk.h>



typedef struct
{   char identif[20];
    char libelle[20];
    char descrip[20];
    char date[20];

}equip;

void EQ_ajout(equip e);
int EQ_supprimer(char identif[]);
int EQ_modif( char identif[],int element, char val[]);
int EQ_int_ch(char ch[]);
void EQ_afficher();//tester les autres fonctions
void EQ_chercher(char identif[]);
int EQ_trouve(char identif[]);
void EQ_resultat(int choix[], char text[]);
void EQ_affiche_modif( char identif [], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6);
void EQ_afficher(GtkWidget* liste);
void EQ_afficher1(GtkWidget* liste);
int EQ_ajout1(char libelle[]);
int eq_get_last_id();
int EQ_identif_auto();
//void EQ_afficher(GtkWidget* liste,int a);
#endif // EQUIP_H_INCLUDED
