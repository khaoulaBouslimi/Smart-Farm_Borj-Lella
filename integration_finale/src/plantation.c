enum{
CODE_PLANT,
NOM,
TYPE,
JOUR_DE_PLANTATION,
MOIS_DE_PLANTATION,
ANNEE_DE_PLANTATION,
QUANTITE,
COLUMNSpl
};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include "plantation.h"


 void ajouter_plant (plante p)
{
FILE* f; 
f= fopen("plante.txt","a+");
 if (f!=NULL)
    {
fprintf(f,"%s %s %s %s %s %s %s \n",p.code_plant,p.nom,p.type,p.date.jour,p.date.mois,p.date.annee,p.quantite);

    }
 fclose(f);
}
/////////////////////////////////////////////////////////////////////////////////


int supprimer_plant(char code_sup[])
{

    FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
    f=fopen("plante.txt","r"); fw=fopen("plante_aux.txt","a");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
            {
                if (strcmp (ch1, code_sup) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7);
                else
                    test=1; //supression etablie.
            }

    }
    else
        return(0) ;

    fclose(fw);
    fclose(f);
   remove("plante.txt");
   rename("plante_aux.txt","plante.txt");
return test;}
////////////////////////////////////////////////////////////


/////////////////////////
 int modif_plantation(char code_modif[], int element,char val[])
{
 FILE* fw;
    FILE* f; int test=0;

    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
    f=fopen("plante.txt","r"); fw=fopen("plante_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {


         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
            {
                if (strcmp (ch1, code_modif) == 0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s %s %s %s %s \n",val,ch2,ch3,ch4,ch5,ch6,ch7);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,ch2,val,ch4,ch5,ch6,ch7);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,val,ch3,ch4,ch5,ch6,ch7);
                            break;
                        case 3:
                            fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,val,ch5,ch6,ch7);
                            break;
                        case 4:
                            fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,val,ch6,ch7);
                            break;
                        case 5:
                            fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,val,ch7);
                            break;
                        case 6:
                            fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,val);
                            break;
    
                   
                    }
                }
                    else
                     fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7);

            }

}
fclose(f); fclose(fw);
 remove("plante.txt");
 rename("plante_aux.txt","plante.txt");

return test;
}


//////////////////////////////////
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
////////////////////////////////
void afficher_plant (GtkWidget* liste)
{
GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview
	FILE *f_plant ;
	char jj[20];
  	char code_plant[20];
	char type[20];
	char nom[20];

	char mm[20];
	char aa [20];
	char quantite[20];
	store=NULL ;

	store=gtk_tree_view_get_model(liste);
	if (store==NULL)
	{
	
	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Code_Plant",renderer,"text",CODE_PLANT,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",NOM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Jour Pl",renderer,"text",JOUR_DE_PLANTATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Mois Pl",renderer,"text",MOIS_DE_PLANTATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Annee Pl",renderer,"text",ANNEE_DE_PLANTATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);



	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("quantite",renderer,"text",QUANTITE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	}
store=gtk_list_store_new (COLUMNSpl, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f_plant=fopen("plante.txt","r");
if(f_plant==NULL)
{
return;
}
else
{
f_plant=fopen("plante.txt","a+");
while (fscanf(f_plant,"%s %s %s %s %s %s %s \n",code_plant,nom,type,jj,mm,aa,quantite)!=EOF)
{
gtk_list_store_append(store, &iter);
gtk_list_store_set(store, &iter,CODE_PLANT,code_plant,NOM,nom,TYPE,type,JOUR_DE_PLANTATION, jj,MOIS_DE_PLANTATION,mm,ANNEE_DE_PLANTATION,aa,QUANTITE,quantite,-1);

}
	fclose(f_plant);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);

}
}




///////////////////////////////////////////////////
int P_trouve(char identif[])
{
	FILE* f; int test=0; char ch[20];
	f=fopen("plante.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(identif,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}
///////////////////////////////////////////////////

int pl_ajout1(char mois[],char annee[])

{
FILE* f,*f1;
f1= fopen("plante1.txt","w");fclose(f1);
 int test=0; char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
f1= fopen("plante1.txt","a+"); f= fopen("plante.txt","r");
if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
	{
		if (strcmp(ch5,mois)==0 && strcmp(ch6,annee)==0)
	{
fprintf(f1,"%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7);
test=1;
	}
	}
}
fclose(f); fclose(f1);
return test;}
///////////////////////////////////////////////////////////////
void afficher_plant1 (GtkWidget* liste)
{

GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview
	FILE *f_plant ;
	char jj[20];
  	char code_plant[20];
	char type[20];
	char nom[20];

	char mm[20];
	char aa [20];
	char quantite[20];
	store=NULL ;

	store=gtk_tree_view_get_model(liste);
	if (store==NULL)
	{
	
	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Code_Plant",renderer,"text",CODE_PLANT,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",NOM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Jour Pl",renderer,"text",JOUR_DE_PLANTATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Mois Pl",renderer,"text",MOIS_DE_PLANTATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Annee Pl",renderer,"text",ANNEE_DE_PLANTATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);



	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("quantite",renderer,"text",QUANTITE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	}
store=gtk_list_store_new (COLUMNSpl, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f_plant=fopen("plante1.txt","r");
if(f_plant==NULL)
{
return;
}
else
{
f_plant=fopen("plante1.txt","a+");
while (fscanf(f_plant,"%s %s %s %s %s %s %s \n",code_plant,nom,type,jj,mm,aa,quantite)!=EOF)
{
gtk_list_store_append(store, &iter);
gtk_list_store_set(store, &iter,CODE_PLANT,code_plant,NOM,nom,TYPE,type,JOUR_DE_PLANTATION, jj,MOIS_DE_PLANTATION,mm,ANNEE_DE_PLANTATION,aa,QUANTITE,quantite,-1);

}
	fclose(f_plant);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);

}
}





