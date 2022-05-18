#include <gtk/gtk.h>
#include <string.h>
typedef struct
{
    char jour[20];
    char mois[20];
    char annee[20];
}date;

typedef struct
{
    char identif[20];
    char nom[20];
    char prenom[20];
    char mdp[20];
    char sexe[20];
    date date_de_naiss;
    char tel[20];
    char adresse[20];
    char mail[20];


}employe;

void E_ajout( employe e);
int E_supprimer(char identif[]);
int E_modif(char identif[],int element,char val[] );
void E_chercher(char nom[],char prenom[]);
void E_afficher(GtkWidget* liste);
int E_trouve(char identif[]);

int int_ch(char ch[]);
void resultat(int choix[],char text[]);
int E_ajout1(char nom[],char prenom[]);
void E_afficher1(GtkWidget* liste);

void AFF_affiche_modif( char id[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10,GtkWidget* pt11,GtkWidget* pt12,GtkWidget* pt13,GtkWidget* pt14,GtkWidget* pt15,GtkWidget* pt16);

int E_verif_date(char jj[],char mm[],char aa[]);
int E_verif_mail(char mail[]);
int derniere_pos(char ch[], char c);
int get_last_id();
int E_identif_auto();


//////////////////////////plantation////////////////////////////
typedef struct
{
    char code_plant [20];
    char type[20];
    char nom[20];
    date date;
    char quantite [20];
}plante;
 void ajouter_plant (plante p);
 int modif_plantation(char code_modif[], int element,char val[]);
 int supprimer_plant(char code_sup[]);
 void afficher_plant (GtkWidget* liste);
 void afficher_plant1 (GtkWidget* liste);
 void resultat(int choix[],char text[]);
 int P_trouve(char code[]);

int P_trouve(char identif[]);

int pl_ajout1(char mois[],char annee[]);
void afficher_plant1 (GtkWidget* liste);
////////////////finance/////////////////

typedef struct
{

    char code_transac[20];
    char nom[20];
    char montant[20];
    char objet[20];
    char type[20];
    date date ;

}transaction;

void ajouter_transaction(transaction T);
int supprimer_transac(char code_sup[]);
int modif_transac(char code_modif[],int element,char val[] ); 
int afficher_transac(GtkWidget* liste);

int T_trouve(char code[]);
int int_ch(char ch[]);
int finance_ajout1(char nom[]);
int afficher_transac1(GtkWidget* liste);


////////////////////////////////////client/////////////////////////////
typedef struct{
	char code_client[20];
	char nom[20];
	char prenom[20];
	char cin[20];
	char mdp[20];
	char email[20];
	char civilite[20];
	char adresse[20];
	char tel[20];

	date ddn ;
}client;
void ajouter_client(client c);
int trouve_client(char identif[]);
void resultat(int choix[],char text[]);
int supprimer_client(char id_client[]);
int inttoch(char ch[]);
int modifier_client(char id_client[],int element,char ch_modifier[] ) ;
void afficher_client(GtkWidget* liste);
void afficher_client1(GtkWidget* liste);
int ajout_client1(char id[]);
int trouve_client_cin(char cin[]);
///////////////////////////////////troupeau//////////////////////////////
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
///////////////////////////////affectation///////////////////////
typedef struct
{
    char h[20];
    char min[20];
}heure;
typedef struct
{
    char code[20];
char CIN_ouvrier[20];
    char id_eq[20];
    char date[20];
    heure heure_affect;
   
}affect;

void AFF_ajout(affect a);
int AFF_trouve(char num[]);
void AFF_afficher(GtkWidget* liste);
int AFF_supprimer(char code[]);
int AFF_modif(char code[],int element,char val[] );
int AFF_int_ch(char ch[]);
void AFFECT_affiche_modif( char code[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10);
void AFF_afficher1(GtkWidget* liste);
int AFF_ajout1(char cin[],char id[]);
int AFF_identif_auto();
int aff_get_last_id();
int O_trouve(char cin[]);
/////////////////////////reservation////////////////////////////
typedef struct
{
    char code_reser[20];
    char nom_client[20];
    date date;
    char heure [20];
    char numero[20];
}reservation;


void ajouter_reservation(reservation R);
int supprimer_reservation(char code_sup[]);
int modif_reservation(char code_modif[],int element,char val[] ); 
int afficher_reservation(GtkWidget* liste);
int R_trouve(char code[]);
int R_trouvenom(char nom[]);
///////////////////////////////////////precipitation///////////////////////////////

typedef struct
{

    	char code_precipitation[20];
    	char quantite[20];
	char mois[20] ;
	char annee[20];

}precipitation;

void ajouter_precipitation(precipitation PT);
int supprimer_precipitation(char code_sup[]);
int modif_precipitation(char code_modif[],int element,char val[] ); 
int afficher_precipitation(GtkWidget* list);
int P_trouve_mois_annee(char mois[],char annee[] );
double calcul_quantite(char annee[]);
int Pr_trouve(char code[]);
int Pr_identif_auto();
int  pr_get_last_id();
////////////////////////////////////////////reclamation///////////////////////////////////


typedef struct
{
    char nom[20];//nom client
    char prenom[20];//prenom client
    char cin_c[10];//cin client
    char idrec[20];//identifiant du rec
    char rec[100];
    //char note[20];//évaluation 
    char type[20];//réclamation pour ? les prod, services,montant
    char date[20];
   // heure hr;//heure d'ajout de reclamation
   
}reclamation;
void resultatrec(int t[] ,char texte[]);
void ajouter_rec(reclamation r );
int trouve_rec(char id[] );
//int verifier_cin(char numero[]);
void afficher_reclamation(GtkWidget* liste);
int supprimer_reclamation(char id_rec[]);
int ajout_rec1(char id[]);
void afficher_rec1(GtkWidget* liste);

////////////////////////////////////CAPTEURS////////////////////////////////////////////////////////////////////////////

////////////////////-------capteur_T.c--------------///////////////////////////////////////////////////
typedef struct
{
    	char id [20];
	char marque [20];
	char adresse [20];
	char reference [20];
	char localisation [20];
	char date[20];
	heure hr ;

}Capteur ;

void ajouter_capteur (Capteur c);
int CAP_T_trouve (char id[]) ;
int CAP_T_supprimer(char id[]);

void CP_T_affiche_modif ( char id[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10,GtkWidget* pt11,GtkWidget* pt12,GtkWidget* pt13,GtkWidget* pt14);

int CAP_T_int_ch(char ch[]);
int CAP_T_modif(char id[],int element,char val[] );
void CAP_T_afficher(GtkWidget* liste);
int CAP_T_ajout1(char id[] , char reference[]);
void CAP_T_afficher1(GtkWidget* liste);


////////////////////---Valeur_T.h------------/////////////////////////////////////////////////
typedef struct
{
    char h[20];
    char min[20];
    
}heure_vt ;

typedef struct
{
    	char id [20];
	char marque [20];
	char valeur [20];
	char date[20];
	heure_vt hr ;

}Valeur_t ;

double atof (const char *str);

void ajouter_val_t (Valeur_t vt);

int VAL_T_trouve (char id[]) ;

int VAL_T_supprimer(char id[]);

void VAL_T_affiche_modif ( char id[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10);

int VAL_T_int_ch(char ch[]);

int VAL_T_modif(char id[],int element,char val[] );

void VAL_T_afficher(GtkWidget* liste);

int VAL_T_ajout1(char id[] , char reference[]);

void VAL_T_afficher1(GtkWidget* liste);

/*----------<<<<<<<<<<<<<<<Capteurs defectueux à état alarmant>>>>>>>>>>>>>>--------------------*/



void detection_cp_T_defectueux(char id[20], char marque[20],char valeur[20]);  //CV  /* id : valeur */


void affich_cp_t_def(GtkWidget *liste);//CV      /*dans un treeview2*/

void affich_marque_cp_t_def(GtkWidget *liste);

int calcul_marque(char marque[]);



/////////////////////////////////////////////------capteur_H.h-------//////////////////////////////////////////////////////
typedef struct
{
    char h[20];
    char min[20];
    
}heure_h;

typedef struct
{
    	char id [20];
	char marque [20];
	char adresse [20];
	char reference [20];
	char localisation [20];
	char date[20];
	heure_h hr ;

}Capteur_h ;




void ajouter_CAP_H (Capteur_h caph);

int CAP_H_trouve (char id[]) ;

int CAP_H_supprimer(char id[]);

void CP_H_affiche_modif ( char id[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10,GtkWidget* pt11,GtkWidget* pt12,GtkWidget* pt13,GtkWidget* pt14);

int CAP_H_int_ch(char ch[]);

int CAP_H_modif(char id[],int element,char val[] );

void CAP_H_afficher(GtkWidget* liste);

int CAP_H_ajout1(char id[] , char reference[]);

void CAP_H_afficher1(GtkWidget* liste);




///////////////////////////////----valeur_H.h---------////////////////////////////////////////////

typedef struct
{
    char h[20];
    char min[20];
    
}heure_vh ;

typedef struct
{
    	char id [20];
	char marque [20];
	char valeur [20];
	char date[20];
	heure_vh hr ;

}Valeur_h ;

void ajouter_val_h (Valeur_h vh);

int VAL_H_trouve (char id[]) ;

int VAL_H_supprimer(char id[]);

void VAL_H_afficher(GtkWidget* liste);

void VAL_H_affiche_modif ( char id[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10);

int VAL_H_int_ch(char ch[]);

int VAL_H_modif(char id[],int element,char val[] );

int VAL_H_ajout1(char id[] , char reference[]);

void VAL_H_afficher1(GtkWidget* liste);

void detection_cp_H_defectueux(char val[20], char id[20], char marque[20]);  //CV  /* id : valeur */

void affich_cp_h_def(GtkWidget *liste);//CV      /*dans un treeview2*/

void affich_marque_cp_h_def(GtkWidget *liste);

int calcul_marque_h (char marque[]);


////////////////////////////////////////////////abscence.h/////////////////////////////////////

typedef struct{
	char cin[10];
	char code[5];
	char date[20];
}abscences;

typedef struct{
	char cin1[10];
	int percent;
}tache;
int abs_modif(char cin[],char code[],int element,char val[] );
void abs_supprimer(char cin[],char code[]);
void consulter_ouvrier(abscences abs);
void afficher_abscence(GtkWidget *liste);
//char best();
//void chercher(char cin[], GtkWidget *liste);
char checher_taches(char mini_cin[],int mini_code[]);
void avancement(tache t);
int make_code(char cin1[]);
//////////////////////////////////////////////ouvrier.h////////////////////////////////////////////

typedef struct
{
char nom[20];
char prenom[20];
char tel[20];
char cin[20];
}ouv;

void O_ajouter(ouv o); 
void O_supprimer(char cin[]);
int Ouv_trouve(char cin[]);
int O_modif (char cin[],int choice,char modif[]);
void O_afficher(GtkWidget* liste);
int o_int_ch(char ch[]);


//////////////////////////authentif client///////////////////////////////////////////////////////////////


int auth_client(char id[], char mdp[]);

int E_trouve_auth(char identif[],char mdp[]);
int auth_admin(char id[], char mdp[]);
