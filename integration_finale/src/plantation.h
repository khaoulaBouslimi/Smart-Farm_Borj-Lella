#include<gtk/gtk.h>
typedef struct
{
    char jour[20];
    char mois[20];
    char annee[20];
}datepl;



typedef struct
{
    char code_plant [20];
    char type[20];
    char nom[20];
    datepl date;
    char quantite [20];
}plante;
 void ajouter_plant (plante p);
 int modif_plantation(char code_modif[], int element,char val[]);
 int supprimer_plant(char code_sup[]);
 void afficher_plant (GtkWidget* liste);
 void afficher_plant1 (GtkWidget* liste);
 void resultat(int choix[],char text[]);
 int P_trouve(char code[]);
int int_ch(char ch[]);
int P_trouve(char identif[]);

int pl_ajout1(char mois[],char annee[]);
void afficher_plant1 (GtkWidget* liste);


