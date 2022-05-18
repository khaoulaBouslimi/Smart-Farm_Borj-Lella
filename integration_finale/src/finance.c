#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include "finance.h"

enum{
CODE_TRANSACTION,
NOM,
JOUR_DE_TRANSACTION,
MOIS_DE_TRANSACTION,
ANNEE_DE_TRANSACTION,
OBJET,
MONTANT,
TYPE,
COLUMNSf
};



void ajouter_transaction(transaction T)
{
    FILE *f ;
  f=fopen("transac.txt","a");
    if (f!=NULL)
	{
	fprintf(f,"%s %s %s %s %s %s %s %s \n",T.code_transac,T.nom,T.date.jour,T.date.mois,T.date.annee,T.objet,T.montant,T.type);

    	}
    fclose(f);

}
////////////////////////////////////////////////////////
void resultat(int choix[],char text[])
{
if (choix[0]==1&& choix[1]==0)
	strcpy(text,"Achat");
if (choix[0]==0 && choix[1]==1)
	strcpy(text,"Vente");
}
//////////////////////////////////////////////////////////
int T_trouve(char code[])
{
	FILE* f; int test=0; char ch[20];
	f=fopen("transac.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s %*s %*s\n",ch)!=EOF)
		{	
			if (strcmp(code,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}
//////////////////////////////////////////////////////////////

int supprimer_transac(char code_sup[])
{

    FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20];
    f=fopen("transac.txt","r"); fw=fopen("transac_aux.txt","a");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8)!=EOF)
            {
                if (strcmp (ch1, code_sup) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8);
                else
                    test=1; //supression etablie.
            }

    }
    else
        return(0) ;

    fclose(fw);
    fclose(f);
   remove("transac.txt");
   rename("transac_aux.txt","transac.txt");
return test;}
//////////////////////////////////////////////////////////////
int modif_transac(char code_modif[],int element,char val[] )
{
FILE* fw;
    FILE* f; int test=0;

    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20];
    f=fopen("transac.txt","r"); fw=fopen("transac_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8)!=EOF)
            {
                if (strcmp (ch1, code_modif) == 0)
                {
                    test=1;
                    switch (element)
                    {

                        case 0:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",val,ch2,ch3,ch4,ch5,ch6,ch7,ch8);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch1,val,ch3,ch4,ch5,ch6,ch7,ch8);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,val);
                            break;
                        case 3:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,val,ch8);
                            break;
                        case 4:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch1,ch2,val,ch4,ch5,ch6,ch7,ch8);
                            break;
                        case 5:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,val,ch5,ch6,ch7,ch8);
                            break;
                        case 6:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,val,ch6,ch7,ch8);
                            break;
                        case 7:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,val,ch7,ch8);
                          

                    }
                }
                    else
                     fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8);

            }

}
fclose(f); fclose(fw);
 remove("transac.txt");
 rename("transac_aux.txt","transac.txt");

return test;
}
//////////////////////////////////////////////////////////////
int int_ch(char ch[])
{

if (ch[0]=='1')
	return 1;
else if (ch[0]=='2')
	return 2;
else if (ch[0]=='3')
	return 3;
else if (ch[0]=='4')
	return 4;
else if (ch[0]=='5')
	return 5;
else if (ch[0]=='6')
	return 6;
else if (ch[0]=='7')
	return 7;

else return (-1);

}
//////////////////////////////////////////////////////////////
int afficher_transac(GtkWidget* liste)
{

GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	FILE *f ;
	char aa [25],montant[20],nom[20],code_transac[20];
	char type[20];
	char jj[20];
	char mm[20];
	char objet[20];
	store=NULL ;

	store=gtk_tree_view_get_model(liste);
	if (store==NULL)
	{
	
	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Code_transac",renderer,"text",CODE_TRANSACTION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",NOM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Jour Tr",renderer,"text",JOUR_DE_TRANSACTION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Mois Tr",renderer,"text",MOIS_DE_TRANSACTION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Annee Tr",renderer,"text",ANNEE_DE_TRANSACTION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Objet",renderer,"text",OBJET,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);



	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Montant",renderer,"text",MONTANT,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	}
store=gtk_list_store_new (COLUMNSf, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("transac.txt","r");
if(f==NULL)
{
return;
}
else
{

f=fopen("transac.txt","a+");
while (fscanf(f,"%s %s %s %s %s %s %s %s \n",code_transac,nom,jj,mm,aa,objet,montant,type)!=EOF)
{
gtk_list_store_append(store, &iter);
gtk_list_store_set(store, &iter,CODE_TRANSACTION,code_transac,NOM,nom,JOUR_DE_TRANSACTION, jj,MOIS_DE_TRANSACTION,mm,ANNEE_DE_TRANSACTION,aa,OBJET,objet,MONTANT,montant,TYPE,type,-1);

}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);

}
}



///////////////////////////////////////////////////////////////////////////

int finance_ajout1(char nom[])

{
FILE* f,*f1;
f1= fopen("transac1.txt","w");fclose(f1);
 int test=0; char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20];
f1= fopen("transac1.txt","a+"); f= fopen("transac.txt","r");
if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8)!=EOF)
	{
		if (strcmp(ch2,nom)==0 )
	{
fprintf(f1,"%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8);
test=1;
	}
	}
}
fclose(f); fclose(f1);
return test;}


///////////////////////////////////////////////////////////////////////////

int afficher_transac1(GtkWidget* liste)
{

GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	FILE *f ;
	char aa [25],montant[20],nom[20],code_transac[20];
	char type[20];
	char jj[20];
	char mm[20];
	char objet[20];
	store=NULL ;

	store=gtk_tree_view_get_model(liste);
	if (store==NULL)
	{
	
	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Code_transac",renderer,"text",CODE_TRANSACTION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",NOM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Jour Tr",renderer,"text",JOUR_DE_TRANSACTION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Mois Tr",renderer,"text",MOIS_DE_TRANSACTION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Annee Tr",renderer,"text",ANNEE_DE_TRANSACTION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Objet",renderer,"text",OBJET,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);



	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Montant",renderer,"text",MONTANT,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	}
store=gtk_list_store_new (COLUMNSf, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("transac1.txt","r");
if(f==NULL)
{
return;
}
else
{

f=fopen("transac1.txt","a+");
while (fscanf(f,"%s %s %s %s %s %s %s %s \n",code_transac,nom,jj,mm,aa,objet,montant,type)!=EOF)
{
gtk_list_store_append(store, &iter);
gtk_list_store_set(store, &iter,CODE_TRANSACTION,code_transac,NOM,nom,JOUR_DE_TRANSACTION, jj,MOIS_DE_TRANSACTION,mm,ANNEE_DE_TRANSACTION,aa,OBJET,objet,MONTANT,montant,TYPE,type,-1);

}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);

}
}























