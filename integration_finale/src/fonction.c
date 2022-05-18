enum{
IDENTIFIANT,
ESPECE,
SEXE,
JOUR_DE_TROUPEAU,
MOIS_DE_TROUPEAU,
ANNEE_DE_TROUPEAU,
POIDS,
COLUMNStr,
};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include "fonction.h"

void ajouter_troupeau (troupeau tr)
{
FILE* f; 
f= fopen("troupeau.txt","a+");
 if (f!=NULL)
    {
fprintf(f,"%s %s %s %s %s %s %s \n",tr.id,tr.espece,tr.sexe,tr.ddn.jour,tr.ddn.mois,tr.ddn.annee,tr.poids);

    }
 fclose(f);
}


int verif(char id[])
{
	FILE* f; int test=0; char ch[20];
	f=fopen("troupeau.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s %*s\n",ch)!=EOF)
		{	
			if (strcmp(id,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}

int int_chtr(char ch[])
{
if (ch[0]=='0')
	return 0;
else if (ch[0]=='1')
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
else if (ch[0]=='8')
	return 8;
else return (-1);
}

int modif_troupeau(char id_modif[], int element,char val[])
{
 FILE* fw;
    FILE* f; int test=0;

    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
    f=fopen("troupeau.txt","r"); fw=fopen("troupeau_aux.txt","a+");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
            {
                if (strcmp (ch1, id_modif) == 0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s %s %s %s %s \n",val,ch2,ch3,ch4,ch5,ch6,ch7);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,val,ch3,ch4,ch5,ch6,ch7);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,ch2,val,ch4,ch5,ch6,ch7);
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
                            
                          

                    }
                }
                    else
                     fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7);

            }

}
fclose(f); fclose(fw);
 remove("troupeau.txt");
 rename("troupeau_aux.txt","troupeau.txt");

return test;
}


int supprimer_troupeau(char id[])
{

    FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
    f=fopen("troupeau.txt","r"); fw=fopen("troupeau_aux.txt","a");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
            {
                if (strcmp (ch1, id) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7);
                else
                    test=1; //supression etablie.
            }

    }
    else
        return(0) ;

    fclose(fw);
    fclose(f);
   remove("troupeau.txt");
   rename("troupeau_aux.txt","troupeau.txt");
return test;}


int consulter_troupeau (GtkWidget* list)
{
GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	store=NULL ;
	FILE *f_troupeau ;
  	char id[20];
	char espece[20];
	char sexe[20];
	char jj[20];
	char mm[20];
	char aa [20];
	char poids[20];
	
	store=NULL ;

	store=gtk_tree_view_get_model(list);
	if (store==NULL)
	{
	
	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Identifiant",renderer,"text",IDENTIFIANT,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Espece",renderer,"text",ESPECE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Sexe",renderer,"text",SEXE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Jour",renderer,"text",JOUR_DE_TROUPEAU,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Mois",renderer,"text",MOIS_DE_TROUPEAU,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Annee",renderer,"text",ANNEE_DE_TROUPEAU,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Poids",renderer,"text",POIDS,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);


	}
store=gtk_list_store_new (COLUMNStr, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f_troupeau=fopen("troupeau.txt","r");
if(f_troupeau==NULL)
{
return;
}
else
{
f_troupeau=fopen("troupeau.txt","a+");
while (fscanf(f_troupeau,"%s %s %s %s %s %s %s \n",id,espece,sexe,jj,mm,aa,poids)!=EOF)
{
gtk_list_store_append(store, &iter);
gtk_list_store_set(store, &iter,IDENTIFIANT,id,ESPECE,espece,SEXE,sexe,JOUR_DE_TROUPEAU, jj,MOIS_DE_TROUPEAU,mm,ANNEE_DE_TROUPEAU,aa,POIDS,poids,-1);

}
	fclose(f_troupeau);
gtk_tree_view_set_model(GTK_TREE_VIEW(list),GTK_TREE_MODEL(store));
g_object_unref(store);

}
}


int calcul_troupeau()
{
int n=0;
FILE* f;
char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
f=fopen("troupeau.txt","r");
if (f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
   	   {n++;}
     }
fclose(f);
return n;
}

int calcul_brebis()
{
int nb=0;
FILE* f;
char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
f=fopen("troupeau.txt","r");
if (f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
   	   {
	     if (strcmp(ch2,"Brebi")==0)
	       {nb++;}
 	   }
     }
fclose(f);
return nb;
}


int calcul_veaux()
{
int nv=0;
FILE* f;
char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
f=fopen("troupeau.txt","r");
if (f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
   	   {
	     if (strcmp(ch2,"Veau")==0)
	       {nv++;}
 	   }
     }
fclose(f);
return nv;
}
	      

