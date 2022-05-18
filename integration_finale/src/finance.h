typedef struct
{
char jour[20];
char mois[20] ;
char annee[20];
}datef;

typedef struct
{

    char code_transac[20];
    char nom[20];
    char montant[20];
    char objet[20];
    char type[20];
    datef date ;

}transaction;

void ajouter_transaction(transaction T);
int supprimer_transac(char code_sup[]);
int modif_transac(char code_modif[],int element,char val[] ); 
int afficher_transac(GtkWidget* liste);
void resultat(int choix[],char text[]);
int T_trouve(char code[]);
int int_ch(char ch[]);
int finance_ajout1(char nom[]);
int afficher_transac1(GtkWidget* liste);


