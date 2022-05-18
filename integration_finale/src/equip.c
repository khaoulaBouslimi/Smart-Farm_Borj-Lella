#include <stdio.h>
#include <string.h>
#include "equip.h"
#include <gtk/gtk.h>

enum
{
EQIDENTIF,
EQLIBELLE,
EQETAT,
EQDATE,
COLUMNS

};
void EQ_ajout(equip e)
{
    FILE* f; 
 
    f=fopen("equip.txt","a+");
    if (f!=NULL)
    {
        fprintf(f,"%s %s %s %s \n",e.identif,e.libelle,e.descrip,e.date);

        
    }
fclose(f);

}
///////////////////////////////////////////////////////////////////////
int EQ_trouve(char identif[])
{

FILE* f; int test=0; char ch[20];
	f=fopen("equip.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(identif,ch)==0)
				test=1;
		}
}
fclose(f);
return test;

}
///////////////////////////////////////////////////////////////////////////
void EQ_resultat( int choix[], char text[])
{
strcpy(text,"Bon");
if (choix[0]==1 && choix[1]==0 && choix[2]==0)
	strcpy(text,"Bon");
else if (choix[0]==0 && choix[1]==1 && choix[2]==0)
	strcpy(text,"Moyen");
else if (choix[0]==0 && choix[1]==0 && choix[2]==1)
	strcpy(text,"Mauvais");

}
////////////////////////////////////////////////////////////////////////////

int EQ_supprimer(char identif[])
{
    FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20];
    f=fopen("equip.txt","r"); fw=fopen("equip_aux.txt","a");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s \n",ch1,ch2,ch3,ch4)!=EOF)
            {
                if (strcmp (ch1, identif) != 0)
                fprintf (fw,"%s %s %s %s \n",ch1,ch2,ch3,ch4);
                else
                    test=1; //supression etablie.
            }

    }
    else
        return ;
    fclose(fw);
    fclose(f);
   remove("equip.txt");
   rename("equip_aux.txt","equip.txt");
return test;

}
//////////////////////////////////////////////////////////////////////////////////
int EQ_modif(char identif[],int element,char val[] )
{
     FILE* fw;
    FILE* f; int test=0;

    char ch0[20],ch1[20],ch2[10],ch3[20];
    f=fopen("equip.txt","r"); fw=fopen("equip_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s \n",ch0,ch1,ch2,ch3)!=EOF)
            {
                if (strcmp (ch0, identif) == 0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s %s \n",ch0,val,ch2,ch3);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s \n",ch0,ch1,val,ch3);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s \n",ch0,ch1,ch2,val);
                            break;
                       

                    }
                }
                 else
                     fprintf (fw, "%s %s %s %s \n",ch0,ch1,ch2,ch3);

            }

}
fclose(f); fclose(fw);
 remove("equip.txt");
 rename("equip_aux.txt","equip.txt");

return test;

}
////////////////////////////////////////////////
int EQ_int_ch(char ch[])
{
if (ch[0]=='0')
	return 0;
else if (ch[0]=='1')
	return 1;
else if (ch[0]=='2')
	return 2;

else return (-1);

}
/////////////////////////////////////////////////////////////
/*
void chercher(char identif[])
{
    FILE* f; int test=0;

    char ch1[20],ch2[20],ch3[30],ch4[5],ch5[15],ch6[5];
    f=fopen("equip.txt","r");
    if (f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6)!=EOF)
         {
             if (strcmp(ch1,identif)==0)
             {
                 test=1;
                 printf("\n informations sur l'equipement :\nIdentifiant= %s\nLabel= %s\nDescription= %s\nDate d'achat= %s/%s/%s",ch1,ch2,ch3,ch4,ch5,ch6);
             }
         }
     }
     else
        printf("not found");
     fclose(f);
     if (test==0)
        printf("INEXISTANT");
}

void afficher()
{
    FILE* f;
    char ch1[20],ch2[20],ch3[30],ch4[5],ch5[15],ch6[5]; char ligne[95];
    f=fopen("equip.txt","r");
    if (f!=NULL)
     {
         while //(fscanf (f, "%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6)!=EOF) => on la remplace par fgets+sscanf pour un meilleur control
            (fgets(ligne,95,f)!=NULL)
         {
             //if (sscanf(ligne,"%s%s%s%s%s%s",ch1,ch2,ch3,ch4,ch5,ch6)==6)
             printf("%s",ligne);
         }
     }
     else
        printf("\nnot found");
    fclose(f);

}
*/
/////////////////////////////////////////////////////////////////////////////////////////////:
void EQ_affiche_modif( char identif [], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6)
{
FILE* f; char ch[20],ch1[20],ch2[20],ch3[20];
	f=fopen("equip.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %s %s %s \n",ch,ch1,ch2,ch3)!=EOF)
		{	
			if (strcmp(identif,ch)==0)
				{
gtk_label_set_text(GTK_LABEL(pt1)," Libellé:");
gtk_label_set_text(GTK_LABEL(pt2),ch1);
gtk_label_set_text(GTK_LABEL(pt3),"Etat:");
gtk_label_set_text(GTK_LABEL(pt4),ch2);
gtk_label_set_text(GTK_LABEL(pt5),"Date d'achat:");
gtk_label_set_text(GTK_LABEL(pt6),ch3);

				}
		}
}
fclose(f);
}

//////////////////////////////////////////////////////////////////////////////////
void EQ_afficher(GtkWidget* liste)
{



GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

   char identif[20];
    char libelle[20];
    char descrip[20];
    char date[20];


	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Identifiant", 		renderer,"text",EQIDENTIF,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Libellé", 		  renderer,"text",EQLIBELLE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Etat", 		  renderer,"text",EQETAT,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'achat", 		renderer,"text",EQDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
F=fopen("equip.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("equip.txt","a+");
   while(fscanf(F,"%s %s %s %s \n",identif,libelle,descrip,date)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,EQIDENTIF,identif,EQLIBELLE,libelle,EQETAT,descrip,EQDATE,date, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void EQ_afficher1(GtkWidget* liste)
{
GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

   char identif[20];
    char libelle[20];
    char descrip[20];
    char date[20];


	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Identifiant", 		renderer,"text",EQIDENTIF,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Libellé", 		  renderer,"text",EQLIBELLE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Etat", 		  renderer,"text",EQETAT,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'achat", 		renderer,"text",EQDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
F=fopen("equip1.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("equip1.txt","a+");
   while(fscanf(F,"%s %s %s %s \n",identif,libelle,descrip,date)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,EQIDENTIF,identif,EQLIBELLE,libelle,EQETAT,descrip,EQDATE,date, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}
}
///////////////////////////////////////////////////////////////////////////////
int EQ_ajout1(char libelle[])

{
FILE* f,*f1;
f1= fopen("equip1.txt","w");fclose(f1);
 int test=0; char ch0[20],ch1[20],ch2[20],ch3[20];
f1= fopen("equip1.txt","a+"); f= fopen("equip.txt","r");
if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s \n",ch0,ch1,ch2,ch3)!=EOF)
	{
		if (strcmp(ch1,libelle)==0)
	{
fprintf(f1,"%s %s %s %s \n",ch0,ch1,ch2,ch3);
test=1;
	}
	}
}
fclose(f); fclose(f1);
return test;
}
///////////////////////////////////////////////////////////////////////////////
int EQ_identif_auto()
{
	FILE* f; char* ch,*ch1; char ch_compt[20]=""; int e; int car;
	f=fopen("EQ_identif.txt","a"); fclose(f);
	f=fopen("EQ_identif.txt","r");
    ch1= (char*) malloc(sizeof(char)*10);
    ch= (char*) malloc(sizeof(char)*10);
	if (f!=NULL)
	{   car = fgetc(f);
        fflush(stdin);
		if (car==EOF)
			{

			e=1;
			}
		else
		{
		
          	
			e=eq_get_last_id();
			e+=1;

		}
	}

fclose(f);
return (e);

}
////////////////////////////////////////////////////////////////////////////
int eq_get_last_id()

{
FILE* f=fopen("EQ_identif.txt","r"); int e; char ch[20],ch1[20];
if (f!=NULL)
{
	while(fscanf(f,"%s\n",ch)!=EOF)
	{
	}
strcpy(ch1,&ch[1]);
strcpy(ch1,&ch1[1]); // supprimer les deux premiers caracteres
e=atoi(ch1);


}
fclose(f);
return e;
}
////////////////////////////////////

