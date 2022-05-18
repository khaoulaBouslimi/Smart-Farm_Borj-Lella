#include<gtk/gtk.h>

typedef struct
{
    char mois[20];
    char jour [20] ;
    char annee [20];
}datetr;

typedef struct
{
    char id [50];
    char espece[20];
    char sexe[50];
    date ddn;
    char poids[50];
}troupeau;

void ajouter_troupeau (troupeau tr);

int  verif(char id[]);
int int_chtr(char ch[]);
int modif_troupeau(char id_modif[], int element,char val[]);
int supprimer_troupeau(char id[]);
int consulter_troupeau (GtkWidget* list);
int calcul_troupeau();
int calcul_brebis();
int calcul_veaux();

