#include "employe.h"
#include <string.h>
#include <stdio.h>

enum
{
	IDENTIF,
	NOM,
	PRENOM,
	MDP,
	SEXE,
	JJ,
	MM,
	AA,
	TEL,
	ADRESSE,
	MAIL,
	COLUMNS
};


void E_ajout( employe e)
{
FILE* f; 
f= fopen("employe.txt","a+");
if (f!=NULL)
{
fprintf(f,"%s %s %s %s %s %s %s %s %s %s %s \n", e.identif,e.nom,e.prenom,e.mdp,e.sexe,e.date_de_naiss.jour,e.date_de_naiss.mois,e.date_de_naiss.annee,e.tel,e.adresse,e.mail);
}
fclose(f);
}

/////////////////////////////////////////////////////////////////////////////////
int E_supprimer(char identif[])
{
    FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[3],ch6[10],ch7[5],ch8[30],ch9[20],ch10[20],ch05[20];
    f=fopen("employe.txt","r"); fw=fopen("employe_aux.txt","a");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch05,ch5,ch6,ch7,ch8,ch9,ch10)!=EOF)
            {
                if (strcmp (ch1, identif) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch05,ch5,ch6,ch7,ch8,ch9,ch10);
                else
                  test=1; //supression etablie.
		
            }

    }
    else
        return ;
    fclose(fw);
    fclose(f);
   remove("employe.txt");
   rename("employe_aux.txt","employe.txt");
return test;}
////////////////////////////////////////////////////////////////////////////
int int_ch(char ch[])
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
else if (ch[0]=='9')
	return 9;
else return (-1);

}




/////////////////////////////////////////////////////////////////////////////

int E_modif(char identif[],int element,char val[] ) 
{
 FILE* fw;
    FILE* f; int test=0;int test0=1;

    char ch0[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[5],ch6[15],ch7[5],ch8[20],ch9[30],ch10[20];
    f=fopen("employe.txt","r"); fw=fopen("employe_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10)!=EOF)
            {
                if (strcmp (ch0, identif) == 0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,val,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,val,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,val,ch4,ch5,ch6,ch7,ch8,ch9,ch10);
                            break;
                        case 3:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,val,ch5,ch6,ch7,ch8,ch9,ch10);
                            break;
                        case 4:
			test0=E_verif_date(val,ch6,ch7);
		if (test0==1)
                           fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,val,ch6,ch7,ch8,ch9,ch10);
		else {
				test =-1;
				fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10);
		}
                            break;
                        case 5:
			test0=E_verif_date(ch5,val,ch7);
		if (test0==1)
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,val,ch7,ch8,ch9,ch10);
		else {
				test =-1;
				fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10);
		}
                            break;
                        case 6:
			test0=E_verif_date(ch5,ch6,val);
		if (test0==1)
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,val,ch8,ch9,ch10);
		else {
				test =-1;
				fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10);
		}
                            break;
                        case 7:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,val,ch9,ch10);
                            break;
                        case 8:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,val,ch10);
                            break;
                        case 9:
                test0=E_verif_mail(val);
		if (test0==1)
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,val);
		else {
				test =-2;
				fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10);
		}
                            break;

                    }
                }
                    else
                     fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10);

            }

}
fclose(f); fclose(fw);
 remove("employe.txt");
 rename("employe_aux.txt","employe.txt");

return test;
}
////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////

void E_afficher(GtkWidget* liste)
{
FILE* f;
GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	char identif[20];
	char nom[20];
	char prenom[20];
	char mdp[20];
	char sexe[20];
	char jj[20],mm[20],aa[20];
	char tel[20];
	char adresse[20];
	char mail[20];
store=gtk_tree_view_get_model(liste);
if (store==NULL)
{
	
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("identif",renderer,"text",IDENTIF,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("nom",renderer,"text",NOM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("prenom",renderer,"text",PRENOM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("mdp",renderer,"text",MDP,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("sexe",renderer,"text",SEXE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("jour_de_naiss",renderer,"text",JJ,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	 column=gtk_tree_view_column_new_with_attributes("mois_de_naiss",renderer,"text",MM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);


renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("annee_de_naiss",renderer,"text",AA,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);


renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("tel",renderer,"text",TEL,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);


renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("adresse",renderer,"text",ADRESSE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("mail",renderer,"text",MAIL,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
 
}

store=gtk_list_store_new (COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

f=fopen("employe.txt","r");
if (f==NULL)
{
	return;
}

else
{
f=fopen("employe.txt","a+");
	while( fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s \n",identif,nom,prenom,mdp,sexe,jj,mm,aa,tel,adresse,mail)!=EOF)
	{
	gtk_list_store_append(store,&iter);

	gtk_list_store_set(store,&iter,IDENTIF,identif, NOM,nom, PRENOM,prenom, MDP,mdp, SEXE,sexe, JJ,jj, MM,mm, AA,aa, TEL,tel, ADRESSE,adresse, MAIL,mail,-1);
	}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}

}


///////////
int E_trouve(char identif[])
{
	FILE* f; int test=0; char ch[20];
	f=fopen("employe.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(identif,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}

//////////////
void E_chercher(char nom[],char prenom[])
{
}
//////////////
void resultat(int choix[],char text[])
{
strcpy(text,"femme");
if (choix[0]==1&& choix[1]==0)
	strcpy(text,"homme");
if (choix[0]==0 && choix[1]==1)
	strcpy(text,"femme");
}


///////////////////////////////////////////////////////////////////////////////
void E_afficher1(GtkWidget* liste)
{


GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

char identif[20];
	char nom[20];
	char prenom[20];
	char mdp[20];
	char sexe[20];
	char jj[20],mm[20],aa[20];
	char tel[20];
	char adresse[20];
	char mail[20];


	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Identifiant", 		renderer,"text",IDENTIF,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Nom", 		  renderer,"text",NOM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Prenom", 		  renderer,"text",PRENOM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Mdp", 		renderer,"text",MDP,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Sexe", 		  renderer,"text",SEXE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Jour", 		  renderer,"text",JJ,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Mois", 		renderer,"text",MM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Annee", 			renderer,"text",AA,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Tel", 			renderer,"text",TEL,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Adresse", 			renderer,"text",ADRESSE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Mail", 			renderer,"text",MAIL,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
	}

	store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
F=fopen("employe1.txt","r");
if(F==NULL)
{
	return;
}
else
{
   F=fopen("employe1.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s %s %s %s %s %s \n",identif,nom,prenom,mdp,sexe,jj,mm,aa,tel,adresse,mail)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);
	gtk_list_store_set(store,&iter,IDENTIF,identif, NOM,nom, PRENOM,prenom, MDP,mdp, SEXE,sexe, JJ,jj, MM,mm, AA,aa, TEL,tel, ADRESSE,adresse, MAIL,mail,-1);
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));
	g_object_unref (store);
}

}
///////////////////////////////////////////////////////////////////////////////
int E_ajout1(char nom[],char prenom[])

{
FILE* f,*f1;
f1= fopen("employe1.txt","w");fclose(f1);
 int test=0; char ch0[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20],ch9[30],ch10[20];
f1= fopen("employe1.txt","a+"); f= fopen("employe.txt","r");
if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10)!=EOF)
	{
		if (strcmp(ch1,nom)==0 && strcmp(ch2,prenom)==0)
	{
fprintf(f1,"%s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10);
test=1;
	}
	}
}
fclose(f); fclose(f1);
return test;}
///////////////////////////////////////////////////////////////////////////////////////////////////////
void E_affiche_modif( char id[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10,GtkWidget* pt11,GtkWidget* pt12,GtkWidget* pt13,GtkWidget* pt14,GtkWidget* pt15,GtkWidget* pt16)
{
FILE* f; char ch[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20],ch9[20],ch10[20],date[20];
	f=fopen("employe.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s \n",ch,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10)!=EOF)
		{	
			if (strcmp(id,ch)==0)
				{
gtk_label_set_text(GTK_LABEL(pt1)," Nom:");
gtk_label_set_text(GTK_LABEL(pt2),ch1);
gtk_label_set_text(GTK_LABEL(pt3),"Prenom:");
gtk_label_set_text(GTK_LABEL(pt4),ch2);
gtk_label_set_text(GTK_LABEL(pt5),"Mot de passe:");
gtk_label_set_text(GTK_LABEL(pt6),ch3);

gtk_label_set_text(GTK_LABEL(pt7),"sexe:");
gtk_label_set_text(GTK_LABEL(pt8),ch4);
gtk_label_set_text(GTK_LABEL(pt9),"Date de naissance:");
sprintf(date,"%s/%s/%s",ch5,ch6,ch7);
gtk_label_set_text(GTK_LABEL(pt10),date);

gtk_label_set_text(GTK_LABEL(pt11),"Telephone:");
gtk_label_set_text(GTK_LABEL(pt12),ch8);
gtk_label_set_text(GTK_LABEL(pt13),"Adresse:");
gtk_label_set_text(GTK_LABEL(pt14),ch9);
gtk_label_set_text(GTK_LABEL(pt15),"E-mail:");
gtk_label_set_text(GTK_LABEL(pt16),ch10);

				}
		}
}
fclose(f);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int E_verif_date(char jj[],char mm[],char aa[])
{
 
	int test=1;
	int j=atoi(jj),m=atoi(mm),a=atoi(aa); 
	if (j==0 || m==0 || a==0) //si jj ou mm ou aa ne sont pas de base des chaines numeriques
		return 0;

	if ( m==2 )
		{
		 if (j>29 || j<0)
			test=0;
		}
	if ( (j==30 || j==31) && m==2)
		test=0;

	if (j>31 || m>12 || a<1950 || m<1 || j<1)
		test=0;	

	return test;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int derniere_pos(char ch[], char c)
{
int n=strlen(ch); int i,x=-1;
for (i=0;i<n;i++)
{
 if (c==ch[i])
	x=i;
}
return x;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int E_verif_mail(char mail[])
{


	if ( derniere_pos(mail,'.')>derniere_pos(mail,'@') && derniere_pos(mail,'@')!=-1 && mail[strlen(mail)-1]!='.')
		return 1;
	else return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
int get_last_id()

{
FILE* f=fopen("E_identif.txt","r"); int e; char ch[20],ch1[20];
if (f!=NULL)
{
	while(fscanf(f,"%s\n",ch)!=EOF)
	{
	}
strcpy(ch1,&ch[1]);
e=atoi(ch1);


}
fclose(f);
return e;
}
////////////////////////////////////////////////////////////////////////////////////////////
int E_identif_auto()
{
	FILE* f; char* ch,*ch1; char ch_compt[20]=""; int e; int car;
	f=fopen("E_identif.txt","a"); fclose(f);
	f=fopen("E_identif.txt","r");
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
		
          	
			e=get_last_id();
			e+=1;

		}
	}

fclose(f);
return (e);

}
enum{
CODE_PLANT,
NOMpl,
TYPE,
JOUR_DE_PLANTATION,
MOIS_DE_PLANTATION,
ANNEE_DE_PLANTATION,
QUANTITE,
COLUMNSpl
};



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
	column = gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",NOMpl,NULL);
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
gtk_list_store_set(store, &iter,CODE_PLANT,code_plant,NOMpl,nom,TYPE,type,JOUR_DE_PLANTATION, jj,MOIS_DE_PLANTATION,mm,ANNEE_DE_PLANTATION,aa,QUANTITE,quantite,-1);

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
	column = gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",NOMpl,NULL);
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
gtk_list_store_set(store, &iter,CODE_PLANT,code_plant,NOMpl,nom,TYPE,type,JOUR_DE_PLANTATION, jj,MOIS_DE_PLANTATION,mm,ANNEE_DE_PLANTATION,aa,QUANTITE,quantite,-1);

}
	fclose(f_plant);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);

}
}


///////////finance.c//////////////////////////////

enum{
CODE_TRANSACTION,
NOMf,
JOUR_DE_TRANSACTION,
MOIS_DE_TRANSACTION,
ANNEE_DE_TRANSACTION,
OBJET,
MONTANT,
TYPEf,
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
	column = gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",NOMf,NULL);
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
	column = gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPEf,NULL);
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
gtk_list_store_set(store, &iter,CODE_TRANSACTION,code_transac,NOMf,nom,JOUR_DE_TRANSACTION, jj,MOIS_DE_TRANSACTION,mm,ANNEE_DE_TRANSACTION,aa,OBJET,objet,MONTANT,montant,TYPEf,type,-1);

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
	column = gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",NOMf,NULL);
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
	column = gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPEf,NULL);
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
gtk_list_store_set(store, &iter,CODE_TRANSACTION,code_transac,NOMf,nom,JOUR_DE_TRANSACTION, jj,MOIS_DE_TRANSACTION,mm,ANNEE_DE_TRANSACTION,aa,OBJET,objet,MONTANT,montant,TYPEf,type,-1);

}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);

}
}
//////////////////////////////////client.c//////////////////////////////////////////////////
enum
{
	IDc,
	NOMc,
	PRENOMc,
	CINc,
	MDPc,
	EMAILc,
	ADRc,
	TELc,
	JJc,
	MMc,
	AAc,
	CIVc,
	COLUMNSc
};

void ajouter_client(client c)
{
FILE* f; 
f= fopen("client.txt","a+");
if (f!=NULL)
{
fprintf(f,"%s %s %s %s %s %s %s %s %s %s %s %s  \n", c.code_client,c.nom,c.prenom,c.cin,c.mdp,c.email,c.adresse,c.tel,c.ddn.jour,c
.ddn.mois,c.ddn.annee,c.civilite);
}
fclose(f);
}
////////////////////////
int trouve_client(char identif[])
{
FILE* f; int test=0;
client c;
 //char ch[20];
f=fopen("client.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s \n",c.code_client)!=EOF)
		{	
			if (strcmp(identif,c.code_client)==0)
				test=1;
		}
}
fclose(f);
return test;
}
/////////////////////////////////
void resultatc(int choix[],char text[])
{
if (choix[0]==1&& choix[1]==0)
	strcpy(text,"homme");
if (choix[0]==0 && choix[1]==1)
	strcpy(text,"femme");
}
//////////////////
int supprimer_client(char id_client[])
{
    FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20],ch9[5],ch10[5],ch11[10],ch12[20];
    f=fopen("client.txt","r"); fw=fopen("newclient.txt","a+");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12)!=EOF)
            {
                if (strcmp (ch1, id_client) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12);
                else
                    test=1; //supression validéé.
            }

    }
    else
        return test ;
    fclose(fw);
    fclose(f);
   remove("client.txt");
   rename("newclient.txt","client.txt");
return test;}
///////////////////////////////////////////////////////
int inttoch(char ch[])
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
else if (ch[0]=='9')
	return 9;
else if (ch[0]=='10')
	return 10;
else return (-1);

}
////////////////////////////////////////////////////
int modifier_client(char id_client[],int element,char ch_modifier[] ) 
{
 FILE* fw;
 FILE* f; int test=0;

    client c;
    f=fopen("client.txt","r"); fw=fopen("newclient.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",c.code_client,c.nom,c.prenom,c.cin,c.mdp,c.email,c.adresse,c.tel,c.ddn.jour,c.ddn.mois,c.ddn.annee,c.civilite)!=EOF)
            {
                if (strcmp (c.code_client, id_client) == 0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",c.code_client,ch_modifier,c.prenom,c.cin,c.mdp,c.email,c.adresse,c.tel,c.ddn.jour,c.ddn.mois,c.ddn.annee,c.civilite);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",c.code_client,c.nom,ch_modifier,c.cin,c.mdp,c.email,c.adresse,c.tel,c.ddn.jour,c.ddn.mois,c.ddn.annee,c.civilite);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s \n",c.code_client,c.nom,c.prenom,ch_modifier,c.mdp,c.email,c.adresse,c.tel,c.ddn.jour,c.ddn.mois,c.ddn.annee,c.civilite);
                            break;
                        case 3:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",c.code_client,c.nom,c.prenom,c.cin,ch_modifier,c.email,c.adresse,c.tel,c.ddn.jour,c.ddn.mois,c.ddn.annee,c.civilite);
                            break;
                        case 4:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",c.code_client,c.nom,c.prenom,c.cin,c.mdp,ch_modifier,c.adresse,c.tel,c.ddn.jour,c.ddn.mois,c.ddn.annee,c.civilite);
                            break;
                        case 5:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s \n",c.code_client,c.nom,c.prenom,c.cin,c.mdp,c.email,ch_modifier,c.tel,c.ddn.jour,c.ddn.mois,c.ddn.annee,c.civilite);
                            break;
                        case 6:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",c.code_client,c.nom,c.prenom,c.cin,c.mdp,c.email,c.adresse,ch_modifier,c.ddn.jour,c.ddn.mois,c.ddn.annee,c.civilite);
                            break;
                        case 7:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",c.code_client,c.nom,c.prenom,c.cin,c.mdp,c.email,c.adresse,c.tel,ch_modifier,c.ddn.mois,c.ddn.annee,c.civilite);
                            break;
                        case 8:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",c.code_client,c.nom,c.prenom,c.cin,c.mdp,c.email,c.adresse,c.tel,c.ddn.jour,ch_modifier,c.ddn.annee,c.civilite);
                            break;
                        case 9:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",c.code_client,c.nom,c.prenom,c.cin,c.mdp,c.email,c.adresse,c.tel,c.ddn.jour,c.ddn.mois,ch_modifier,c.civilite);
                            break;
			case 10:
                            fprintf (fw, "%s %s %s %s %s %s %s %s %s %s %s %s \n",c.code_client,c.nom,c.prenom,c.cin,c.mdp,c.email,c.adresse,c.tel,c.ddn.jour,c.ddn.mois,c.ddn.annee,ch_modifier);
                            break;

                    }
                }
                    else
                     fprintf (fw, "%s %s  %s %s %s %s %s %s %s %s %s %s \n",c.code_client,c.nom,c.prenom,c.cin,c.mdp,c.email,c.adresse,c.tel,c.ddn.jour,c.ddn.mois,c.ddn.annee,c.civilite);

            }

}
fclose(f); fclose(fw);
 remove("client.txt");
 rename("newclient.txt","client.txt");

return test;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
int trouve_client_cin(char cin[])
{
FILE* f; int test=0;
client c;
 //char ch[20];
f=fopen("client.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%*s %*s %*s %s %*s %*s %*s %*s %*s %*s %*s %*s \n",c.cin)!=EOF)
		{	
			if (strcmp(cin,c.cin)==0)
				test=1;
		}
}
fclose(f);
return test;
}
/////////////////////
void afficher_client(GtkWidget* liste)
{

GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview
	FILE *f ;
	char id[20];
	char nom[20];
	char prenom[20];
	char cin[20];
	char mdp[20];
	char email[20];
	char adresse[20];
	char tel[20];
	char jj[5],mm[5],aa[10];
	
	char civilite[30];
	
store=gtk_tree_view_get_model(liste);
if (store==NULL)
{
	
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("id",renderer,"text",IDc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("nom",renderer,"text",NOMc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("prenom",renderer,"text",PRENOMc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("cin",renderer,"text",CINc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("mdp",renderer,"text",MDPc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("email",renderer,"text",EMAILc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("adresse",renderer,"text",ADRc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("tel",renderer,"text",TELc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("jour_de_naiss",renderer,"text",JJc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	 column=gtk_tree_view_column_new_with_attributes("mois_de_naiss",renderer,"text",MMc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);


renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("annee_de_naiss",renderer,"text",AAc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);


renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("civilite",renderer,"text",CIVc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);


}

store=gtk_list_store_new (COLUMNSc, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

f=fopen("client.txt","r");
if (f==NULL)
{
	return;
}

else
{
f=fopen("client.txt","a+");
	while( fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s \n",id,nom,prenom,cin,mdp,email,adresse,tel,jj,mm,aa,civilite)!=EOF)
	{
	gtk_list_store_append(store,&iter);

	gtk_list_store_set(store,&iter,IDc,id,NOMc,nom, PRENOMc,prenom,CINc,cin, MDPc,mdp,EMAILc,email,ADRc,adresse,TELc,tel, JJc,jj, MMc,mm, AAc,aa, CIVc,civilite,-1);
	}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}

}
/////////////////////////////////
int ajout_client1(char id[])

{
FILE* f,*f1;
f1= fopen("client1.txt","w");fclose(f1);
 int test=0; char ch0[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[5],ch9[5],ch10[10],ch11[20];
f1= fopen("client1.txt","a+"); f= fopen("client.txt","r");
if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11)!=EOF)
	{
		if (strcmp(ch0,id)==0 )
	{
fprintf(f1,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11);
test=1;
	}
	}
}
fclose(f); fclose(f1);
return test;
}
////////////////////////////
void afficher_client1(GtkWidget* liste)
{
FILE* f;
GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview
	char id[20];
	char nom[20];
	char prenom[20];
	char cin[20];
	char mdp[20];
	char email[20];
	char adresse[20];
	char tel[20];
	char jj[5],mm[5],aa[10];
	
	char civilite[30];
store=gtk_tree_view_get_model(liste);
if (store==NULL)
{
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("id",renderer,"text",IDc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);


renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("nom",renderer,"text",NOMc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("prenom",renderer,"text",PRENOMc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("cin",renderer,"text",CINc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("mdp",renderer,"text",MDPc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("email",renderer,"text",EMAILc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("adresse",renderer,"text",ADRc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("tel",renderer,"text",TELc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("jour_de_naiss",renderer,"text",JJc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	 column=gtk_tree_view_column_new_with_attributes("mois_de_naiss",renderer,"text",MMc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);


renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("annee_de_naiss",renderer,"text",AAc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);


renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("civilite",renderer,"text",CIVc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
	

}

store=gtk_list_store_new (COLUMNSc, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

f=fopen("client1.txt","r");
if (f==NULL)
{
	return;
}

else
{
f=fopen("client1.txt","a+");
	while( fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s \n",id,nom,prenom,cin,mdp,email,adresse,tel,jj,mm,aa,civilite)!=EOF)
	{
	gtk_list_store_append(store,&iter);

	gtk_list_store_set(store,&iter,IDc,id, NOMc,nom, PRENOMc,prenom,CINc,cin, MDPc,mdp,EMAILc,email,ADRc,adresse,TELc,tel, JJc,jj, MMc,mm, AAc,aa, CIVc,civilite,-1);
	}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}

}
//////////////////////////////////////////troupeau/////////////////////////////////////////
enum{
IDENTIFIANT,
ESPECE,
SEXEtr,
JOUR_DE_TROUPEAU,
MOIS_DE_TROUPEAU,
ANNEE_DE_TROUPEAU,
POIDS,
COLUMNStr,
};


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
	column = gtk_tree_view_column_new_with_attributes("Sexe",renderer,"text",SEXEtr,NULL);
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
gtk_list_store_set(store, &iter,IDENTIFIANT,id,ESPECE,espece,SEXEtr,sexe,JOUR_DE_TROUPEAU, jj,MOIS_DE_TROUPEAU,mm,ANNEE_DE_TROUPEAU,aa,POIDS,poids,-1);

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
	  
////////////////////////////////////AFFECTATION////////////////////////////////////////////////////////////////////////////////

enum
{
AFFCODE,
AFFCIN,
AFFID,
AFFDATE,
AFFHH,
AFFMM,
AFFCOLUMNS

};


void AFF_ajout(affect a)
{

 FILE* f; 
 
    f=fopen("affect.txt","a+");
    if (f!=NULL)
    {
        fprintf(f,"%s %s %s %s %s %s \n", a.code, a.CIN_ouvrier, a.id_eq, a.date, a.heure_affect.h, a.heure_affect.min);   
    }
fclose(f);

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int AFF_trouve(char num[])
{

FILE* f; int test=0; char ch[20];
f=fopen("affect.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(num,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void AFF_afficher(GtkWidget* liste)
{



GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

    char code[20];
char CIN_ouvrier[20];
    char id_eq[20];
    char date[20];
char hh[10];
char mm[10];


	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Code d'affectation", 		renderer,"text",AFFCODE,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("CIN de l'ouvrier", 		  renderer,"text",AFFCIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Identifiant d'equipement", 		  renderer,"text",AFFID,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'affectation", 		renderer,"text",AFFDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure d'affectation", 		renderer,"text",AFFHH,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Minute d'affectation", 		renderer,"text",AFFMM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(AFFCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
F=fopen("affect.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("affect.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s \n",code,CIN_ouvrier,id_eq,date,hh,mm)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,AFFCODE,code,AFFCIN,CIN_ouvrier,AFFID,id_eq,AFFDATE,date,AFFHH,hh,AFFMM,mm, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int AFF_supprimer(char code[])
{
    FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[10],ch6[10];
    f=fopen("affect.txt","r"); fw=fopen("affect_aux.txt","a");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6)!=EOF)
            {
                if (strcmp (ch1, code) != 0)
                fprintf (fw,"%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6);
                else
                    test=1; //supression etablie.
            }

    }
    else
        return ;
    fclose(fw);
    fclose(f);
   remove("affect.txt");
   rename("affect_aux.txt","affect.txt");
return test;

}
//////////////////////////////////////////////////////////////////////////////////
int AFF_modif(char code[],int element,char val[] )
{
     FILE* fw;
    FILE* f; int test=0;

    char ch0[20],ch1[20],ch2[10],ch3[20],ch4[10],ch5[10];
    f=fopen("affect.txt","r"); fw=fopen("affect_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5)!=EOF)
            {
                if (strcmp (ch0, code) == 0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,val,ch2,ch3,ch4,ch5);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,val,ch3,ch4,ch5);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,val,ch4,ch5);
                            break;
                        case 3:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,val,ch5);
                            break;
                        case 4:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,val);
                            break;
                       

                    }
                }
                 else
                     fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5);

            }

}
fclose(f); fclose(fw);
 remove("affect.txt");
 rename("affect_aux.txt","affect.txt");

return test;

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////


int AFF_int_ch(char ch[])
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

else return (-1);

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void AFFECT_affiche_modif( char code[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10)
{
FILE* f; char ch[20],ch1[20],ch2[20],ch3[20],ch4[10],ch5[10];
	f=fopen("affect.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s \n",ch,ch1,ch2,ch3,ch4,ch5)!=EOF)
		{	
			if (strcmp(code,ch)==0)
				{
gtk_label_set_text(GTK_LABEL(pt1)," CIN d'ouvrier:");
gtk_label_set_text(GTK_LABEL(pt2),ch1);
gtk_label_set_text(GTK_LABEL(pt3),"Identifiant d'equipement:");
gtk_label_set_text(GTK_LABEL(pt4),ch2);
gtk_label_set_text(GTK_LABEL(pt5),"Date d'affectation:");
gtk_label_set_text(GTK_LABEL(pt6),ch3);

gtk_label_set_text(GTK_LABEL(pt7),"Heure d'affectation:");
gtk_label_set_text(GTK_LABEL(pt8),ch4);
gtk_label_set_text(GTK_LABEL(pt9),"Minute d'affectation:");
gtk_label_set_text(GTK_LABEL(pt10),ch5);

				}
		}
}
fclose(f);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void AFF_afficher1(GtkWidget* liste)
{

	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

    char code[20];
char CIN_ouvrier[20];
    char id_eq[20];
    char date[20];
char hh[10];
char mm[10];


	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Code d'affectation", 		renderer,"text",AFFCODE,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("CIN de l'ouvrier", 		  renderer,"text",AFFCIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Identifiant d'equipement", 		  renderer,"text",AFFID,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'affectation", 		renderer,"text",AFFDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure d'affectation", 		renderer,"text",AFFHH,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Minute d'affectation", 		renderer,"text",AFFMM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(AFFCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
F=fopen("affect1.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("affect1.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s \n",code,CIN_ouvrier,id_eq,date,hh,mm)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,AFFCODE,code,AFFCIN,CIN_ouvrier,AFFID,id_eq,AFFDATE,date,AFFHH,hh,AFFMM,mm, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}

}
///////////////////////////////////////////////////////////////////////////////
int AFF_ajout1(char cin[],char id[])

{
FILE* f,*f1;
f1= fopen("affect1.txt","w");fclose(f1);
 int test=0; char ch0[20],ch1[20],ch2[20],ch3[20],ch4[10],ch5[10];
f1= fopen("affect1.txt","a+"); f= fopen("affect.txt","r");
if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5)!=EOF)
	{
		if (strcmp(ch1,cin)==0&&strcmp(ch2,id)==0)
	{
fprintf(f1,"%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5);
test=1;
	}
	}
}
fclose(f); fclose(f1);
return test;
}
///////////////////////////////////////////////////////////////////////////////////
int aff_get_last_id()

{
FILE* f=fopen("AFF_identif.txt","r"); int e; char ch[20],ch1[20];
if (f!=NULL)
{
	while(fscanf(f,"%s\n",ch)!=EOF)
	{
	}
strcpy(ch1,&ch[1]);
strcpy(ch1,&ch1[1]);
strcpy(ch1,&ch1[1]);
e=atoi(ch1);


}
fclose(f);
return e;
}
////////////////////////////////////////////////////////////////////////////////////////////
int AFF_identif_auto()
{
	FILE* f; char* ch,*ch1; char ch_compt[20]=""; int e; int car;
	f=fopen("AFF_identif.txt","a"); fclose(f);
	f=fopen("AFF_identif.txt","r");
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
		
          	
			e=aff_get_last_id();
			e+=1;

		}
	}

fclose(f);
return (e);

}

int O_trouve(char cin[])
{

FILE* f; int test=0; char ch[20];
f=fopen("ouvrier.txt","a"); fclose(f);
f=fopen("ouvrier.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(cin,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}
/////////////////////////////////////reservation/////////////////////////////////////

enum{
CODE_RESER,
NOM_CLIENT,
JOUR,
MOIS,
ANNEE,
HEURE,
NUMERO,
COLUMNSreser
};

void ajouter_reservation(reservation R)
{
   FILE *f ;
  f=fopen("reservation.txt","a+");
    if (f!=NULL)
	{
	fprintf(f,"%s %s %s %s %s %s %s \n",R.code_reser,R.nom_client,R.numero,R.date.jour,R.date.mois,R.date.annee,R.heure);

    	}
    fclose(f);

}
////////////////////////////////////////////////////////////////////////////
int R_trouve(char code[])
{
	FILE* f; int test=0; char ch[30];
	f=fopen("reservation.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(code,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}

////////////////////////////////////////////////////////////////////////////
/*char code_reser(char code[20])

{

	FILE* f; int test=0; char ch[20],chn[20];

	f=fopen("reservation.txt","r");
	int n ;
if (f!=NULL)
{
	while (fscanf(f,"%s %*s %*s %*s %*s %*s %*s \n",ch)!=EOF)
{
n=atoi(ch);
n=n+1;
strcpy(code,"R");
sprintf(chn,"%d",n);
strcat(code,chn);
}
fclose(f);		
}

else strcpy(code,"R1");

return code;
}*/

////////////////////////////////////////////////////////////////////////////

int R_trouvenom(char nom[])
{
	FILE* f; int test=0; char ch[20];
	f=fopen("reservation.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%*s %s %*s %*s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(nom,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}
////////////////////////////////////////////////////////////////////////////
int supprimer_reservation(char code_sup[])
{
    FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
    f=fopen("reservation.txt","r"); fw=fopen("reservation_aux.txt","a");
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
   remove("reservation.txt");
   rename("reservation_aux.txt","reservation.txt");
return test;}
////////////////////////////////////////////////////////////////////////////

int modif_reservation(char code_modif[],int element,char val[] )
{
FILE* fw;
    FILE* f; int test=0;

    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
    f=fopen("reservation.txt","r"); fw=fopen("reservation_aux.txt","a");
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
                            break;                          

                    }
                }
                    else
                     fprintf (fw, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7);

            }

}
fclose(f); fclose(fw);
 remove("reservation.txt");
 rename("reservation_aux.txt","reservation.txt");

return test;
}
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
int afficher_reservation(GtkWidget* liste)
{


GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	 char code_reser[20];
         char nom_client[20];
         char jour[20];
         char mois[20],annee[20],heure[20],numero[20];



	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Code_reser", 		renderer,"text",CODE_RESER,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("CIN client", 		  renderer,"text",NOM_CLIENT,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Jour", 		  renderer,"text",JOUR,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Mois", 		renderer,"text",MOIS,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Annee", 			renderer,"text",ANNEE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure", 			renderer,"text",HEURE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Numero", 			renderer,"text",NUMERO,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
	}

//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(COLUMNSreser, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING);
F=fopen("reservation.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("reservation.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s %s \n",code_reser,nom_client,numero,jour,mois,annee,heure)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
gtk_list_store_set (store, &iter,CODE_RESER,code_reser,NOM_CLIENT,nom_client,NUMERO,numero,JOUR,jour,MOIS,mois,ANNEE,annee,HEURE,heure, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//

	g_object_unref (store);
}

}
////////////////////////////////////////precipitation//////////////////////////////////////

enum{
ECODE_PRECIPITATION,
EMOIS_DE_PRECIPITATION,
EANNEE_DE_PRECIPITATION,
EQUANTITEpr,
COLUMNSpr
};


void ajouter_precipitation(precipitation PT)
{
    FILE *f ;
  f=fopen("precipitation.txt","a+");
    if (f!=NULL)
	{
	fprintf(f,"%s %s %s %s  \n",PT.code_precipitation,PT.quantite,PT.mois,PT.annee);

    	}
    fclose(f);

}
///////////////////////////////////////////////////////////////////
int Pr_trouve(char code[])
{
	FILE* f; int test=0; char ch[20];
	f=fopen("precipitation.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(code,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}
///////////////////////////////////////////////////////////////////
int supprimer_precipitation(char code_sup[])
{
   FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20];
    f=fopen("precipitation.txt","r"); fw=fopen("precipitation_aux.txt","a+");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s \n",ch1,ch2,ch3,ch4)!=EOF)
            {
                if (strcmp (ch1, code_sup) != 0)
                fprintf (fw,"%s %s %s %s \n",ch1,ch2,ch3,ch4);
                else
                    test=1; //supression etablie.
            }

    }
    else
        return(0) ;

    fclose(fw);
    fclose(f);
   remove("precipitation.txt");
   rename("precipitation_aux.txt","precipitation.txt");
return test;}
///////////////////////////////////////////////////////////////////
int modif_precipitation(char code_modif[],int element,char val[] )
{
FILE* fw;
    FILE* f; int test=0;

    char ch1[20],ch2[20],ch3[20],ch4[20];
    f=fopen("precipitation.txt","r"); fw=fopen("precipitation_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s \n",ch1,ch2,ch3,ch4)!=EOF)
            {
                if (strcmp (ch1, code_modif) == 0)
                {
                    test=1;
                    switch (element)
                    {

                        case 0:
                            fprintf (fw, "%s %s %s %s \n",val,ch2,ch3,ch4);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s \n",ch1,ch2,val,ch4);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s \n",ch1,ch2,ch3,val);
                            break;
                        case 3:
                            fprintf (fw, "%s %s %s %s \n",ch1,val,ch3,ch4);
                            break;
                        

                    }
                }
                    else
                     fprintf (fw, "%s %s %s %s \n",ch1,ch2,ch3,ch4);

            }

}
fclose(f); fclose(fw);
 remove("precipitation.txt");
 rename("precipitation_aux.txt","precipitation.txt");

return test;
}
///////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
int afficher_precipitation(GtkWidget* list)
{

GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview
	FILE *f ;
	char aa [25],mm[20],qq[20],code_precipitation[20];

	store=NULL ;

	store=gtk_tree_view_get_model(list);
	if (store==NULL)
	{
	
	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Code_precipitation",renderer,"text",ECODE_PRECIPITATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);



	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Mois ",renderer,"text",EMOIS_DE_PRECIPITATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Annee ",renderer,"text",EANNEE_DE_PRECIPITATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);

	renderer = gtk_cell_renderer_text_new () ;
	column = gtk_tree_view_column_new_with_attributes("Quantite",renderer,"text",EQUANTITEpr,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (list), column);


	}
store=gtk_list_store_new (COLUMNSpr, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("precipitation.txt","r");
if(f==NULL)
{
return;
}
else
{

f=fopen("precipitation.txt","a+");
while (fscanf(f,"%s %s %s %s \n",code_precipitation,qq,mm,aa)!=EOF)
{
gtk_list_store_append(store, &iter);
gtk_list_store_set(store, &iter,ECODE_PRECIPITATION,code_precipitation,EQUANTITEpr,qq,EMOIS_DE_PRECIPITATION,mm,EANNEE_DE_PRECIPITATION,aa,-1);

}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(list),GTK_TREE_MODEL(store));
g_object_unref(store);

}

}
////////////////////////////////////////////////////////////////////////////////
int P_trouve_mois_annee(char mois[],char annee[] )
{
	FILE* f; int test=0; char ch1[20],ch2[20];
	f=fopen("precipitation.txt","a"); fclose(f);
	f=fopen("precipitation.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%*s %*s %s %s \n",ch1,ch2)!=EOF)
		{	
			if ((strcmp(annee,ch2)==0)&&(strcmp(mois,ch1)==0))

				test=1;
		}
}
fclose(f);
return test;
}
////////////////////////////////////////////////////////////////////////////////

double calcul_quantite(char annee[])
{
FILE* f;
double qtt=0;
double qt;
char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20];
f=fopen("precipitation.txt","a");fclose(f);
f=fopen("precipitation.txt","r");
if (f!=NULL)
{
         while (fscanf (f, "%s %s %s %s \n",ch1,ch2,ch3,ch4)!=EOF)
           		 {
				if (strcmp(ch4,annee)==0) 
				{qt=atof(ch2);
				 qtt=qtt+qt;

				}

		
			 }
}
    fclose(f);

return qtt;
}
////////////////////////////////reclamation////////////////////////////////////////////////

enum
{
	EID,
	ECIN,
	ENOM,
	EPRENOM,
	EDATE,
	ETYPE,
	EREC,
	RCOLUMNS
};




///les boutons cases à cocher 
void resultatrec(int t[] ,char texte[]) 
{
if(t[0]== 1)
strcpy(texte,"services");
if(t[1] ==1 )
strcpy(texte,"produits"); 
if(t[2] == 1)
strcpy(texte,"montant"); 
return texte;
}
////ajout du reclamation 
void ajouter_rec(reclamation  r)
{

 FILE* f; 
 
    f=fopen("reclamation.txt","a+");
    if (f!=NULL)
    {
        fprintf(f,"%s %s %s %s %s %s %s  \n",r.idrec,r.cin_c,r.nom,r.prenom,r.date,r.type,r.rec);   
    }
fclose(f);

}
///////
int trouve_rec(char id[])
{

FILE* f; int test=0; char ch[20];
reclamation r;
f=fopen("reclamation.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s %*s \n",r.idrec)!=EOF)
		{	
			if (strcmp(id,r.idrec)==0)
				test=1;
		}
}
fclose(f);
return test;
}
/////////////////////////////
void afficher_reclamation(GtkWidget* liste)
{


GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview
FILE* f;
	char identif_rec[20];
	char cin_client[20];
	char nom[20];
	char prenom[20];
	char date[20];
	char type_rec[20];
        char rec[100];
	store=NULL;

	
store=gtk_tree_view_get_model(liste);
if (store==NULL)
{
	
renderer=gtk_cell_renderer_text_new();	
column=gtk_tree_view_column_new_with_attributes("identif_rec",renderer,"text",EID,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);



renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("nom",renderer,"text",ENOM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("prenom",renderer,"text",EPRENOM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	
column=gtk_tree_view_column_new_with_attributes("cin_client",renderer,"text",ECIN,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("date",renderer,"text",EDATE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("type_rec",renderer,"text",ETYPE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("rec",renderer,"text",EREC,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);



}

store=gtk_list_store_new (RCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

f=fopen("reclamation.txt","r");
if (f==NULL)
{
	fclose(f);
	return;
}

else
{
f=fopen("reclamation.txt","a+");
	while( fscanf(f,"%s %s %s %s %s %s %s \n",identif_rec,cin_client,nom,prenom,date,type_rec,rec)!=EOF)
	{
	gtk_list_store_append(store,&iter);

	gtk_list_store_set(store,&iter, EID, identif_rec, ECIN, cin_client, EPRENOM, prenom, ENOM, nom, EDATE, date, ETYPE, type_rec, EREC,rec,-1);
	}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}

}
///////////////////////////////
int supprimer_reclamation(char id_rec[])
{
    FILE* fw;
    FILE* f; int test=0;
    reclamation r;
    f=fopen("reclamation.txt","r"); fw=fopen("newrec.txt","a+");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s %s   \n",r.idrec, r.nom,r.prenom,r.cin_c,  r.date,r.type,r.rec)!=EOF)
            {
                if (strcmp (r.idrec, id_rec) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s   \n",r.idrec,r.nom,r.prenom,r.cin_c,  r.date,r.type,r.rec);
                else
                    test=1; //supression validéé.
            }

    }
    else
        return test ;
    fclose(fw);
    fclose(f);
   remove("reclamation.txt");
   rename("newrec.txt","reclamation.txt");
return test;
}
///////////////////////////////////////
int ajout_rec1(char id[])
{
FILE* f,*f1;
f1= fopen("reclamation1.txt","w");fclose(f1);
 int test=0; char ch0[20],ch1[20],ch2[20],ch3[20],ch4[10],ch5[20],ch6[100];
f1= fopen("reclamation1.txt","a+"); f= fopen("reclamation.txt","r");
if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6)!=EOF)
	{
		if( strcmp(ch0,id)==0 )
	        {
                   fprintf(f1,"%s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6);
                   test=1;
	        }
	}
}
fclose(f); fclose(f1);
return test;
}
///////////////////////////////////////////////////////////////////////////////
void afficher_rec1(GtkWidget* liste)
{
GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview
FILE* f;
	char identif_rec[20];
	char cin_client[8];
	char nom[20];
	char prenom[20];
	char date[20];
	char type_rec[20];
        char rec[100];
	
store=gtk_tree_view_get_model(liste);
if (store==NULL)
{
	
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("identif_rec",renderer,"text",EID,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("nom",renderer,"text",ENOM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("prenom",renderer,"text",EPRENOM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("cin_client",renderer,"text",ECIN,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);



renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("date",renderer,"text",EDATE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("type_rec",renderer,"text",ETYPE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();	column=gtk_tree_view_column_new_with_attributes("rec",renderer,"text",EREC,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);


}

store=gtk_list_store_new (RCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

f=fopen("reclamation1.txt","r");
if (f==NULL)
{
	return;
}

else
{
f=fopen("reclamation1.txt","a+");
	while( fscanf(f,"%s %s %s %s %s %s %s\n",identif_rec,nom,prenom,cin_client,date,type_rec,rec)!=EOF)
	{
	gtk_list_store_append(store,&iter);

	gtk_list_store_set(store,&iter,EID,identif_rec,ENOM,nom, EPRENOM,prenom,ECIN,cin_client,EDATE,date, ETYPE,type_rec,EREC,rec,-1);
	}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}

}
//////////////////////////////////////
int pr_get_last_id()

{
FILE* f=fopen("P_identif.txt","r"); int e; char ch[20],ch1[20];
if (f!=NULL)
{
	while(fscanf(f,"%s\n",ch)!=EOF)
	{
	}
strcpy(ch1,&ch[1]);
e=atoi(ch1);


}
fclose(f);
return e;
}
////////////////////////////////////////////////////////////////////////////////////////////
int Pr_identif_auto()
{
	FILE* f; char* ch,*ch1; char ch_compt[20]=""; int e; int car;
	f=fopen("P_identif.txt","a"); fclose(f);
	f=fopen("P_identif.txt","r");
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
		
          	
			e=pr_get_last_id();
			e+=1;

		}
	}

fclose(f);
return (e);

}
////////////////////////////////////CAPTEURS////////////////////////////////////////////////////////////////////////////

////////////////////-------capteur_T.c--------------///////////////////////////////////////////////////


enum {
CAP_TID ,
CAP_TMARQUE ,
CAP_TREFERENCE ,
CAP_TADRESSE ,
CAP_TLOCALISATION,
CAP_TDATE,
CAP_THEURE,
CAP_TMIN,
CAP_TCOLUMNS
};



void ajouter_capteur (Capteur c)
{

FILE* f; 
f= fopen("capteur_T.txt","a+");
if (f!=NULL)
{
fprintf(f,"%s %s %s %s %s %s %s %s \n", c.id , c.marque , c.reference , c.adresse  , c.localisation, c.date, c.hr.h, c.hr.min);
}
fclose(f);
}




int CAP_T_trouve (char id[])
{
FILE* f; 

int test=0; 

char ch[20];

f=fopen("capteur_T.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(id,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}



int CAP_T_supprimer(char id[])
{

FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20];
    f=fopen("capteur_T.txt","r"); fw=fopen("capteur_T_aux.txt","a");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8)!=EOF)
            {
                if (strcmp (ch1, id) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8);
                else
                    test=1; //supression etablie.
            }

    }
    else
        return ;
    fclose(fw);
    fclose(f);
   remove("capteur_T.txt");
   rename("capteur_T_aux.txt","capteur_T.txt");
return test;


}

void CP_T_affiche_modif ( char id[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10,GtkWidget* pt11,GtkWidget* pt12,GtkWidget* pt13,GtkWidget* pt14)

{
FILE* f; 

char ch[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];

	f=fopen("capteur_T.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s %s %s \n",ch,ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
		{	
			if (strcmp(id,ch)==0)

				{
gtk_label_set_text(GTK_LABEL(pt1)," Marque :"); 
gtk_label_set_text(GTK_LABEL(pt2),ch1);

gtk_label_set_text(GTK_LABEL(pt3)," Référence :");
gtk_label_set_text(GTK_LABEL(pt4),ch2);

gtk_label_set_text(GTK_LABEL(pt5)," Adresse physique :");
gtk_label_set_text(GTK_LABEL(pt6),ch3);

gtk_label_set_text(GTK_LABEL(pt7)," Localisation:");
gtk_label_set_text(GTK_LABEL(pt8),ch4);

gtk_label_set_text(GTK_LABEL(pt9)," Date d'ajout :");
gtk_label_set_text(GTK_LABEL(pt10),ch5);

gtk_label_set_text(GTK_LABEL(pt11)," Heure d'ajout :");
gtk_label_set_text(GTK_LABEL(pt12),ch6);

gtk_label_set_text(GTK_LABEL(pt13)," Minute d'ajout :");
gtk_label_set_text(GTK_LABEL(pt14),ch7);


				}
		}
}
fclose(f);

}



int CAP_T_int_ch(char ch[])
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


else return (-1);

}




int CAP_T_modif(char id[],int element,char val[] )
{
     FILE* fw;
    FILE* f; int test=0;

    char ch0[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
    f=fopen("capteur_T.txt","r"); fw=fopen("capteur_T_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
            {
                if (strcmp (ch0, id) == 0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,val,ch2,ch3,ch4,ch5,ch6,ch7);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,val,ch3,ch4,ch5,ch6,ch7);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,val,ch4,ch5,ch6,ch7);
                            break;
                        case 3:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,val,ch5,ch6,ch7);
                            break;
                        case 4:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,val,ch6,ch7);
                            break;
                        case 5:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,val,ch7);
                            break;
                        case 6:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,val);
                            break;
                       

                    }
                }
                 else
                     fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7);

            }

}
fclose(f); fclose(fw);
 remove("capteur_T.txt");
 rename("capteur_T_aux.txt","capteur_T.txt");

return test;

}




void CAP_T_afficher(GtkWidget* liste)
{



GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	char id [20];
	char marque [20];
	char adresse [20];
	char reference [20];
	char localisation [20];
	char date[20];
	char hr [20] , min[20];
	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Id", 		renderer,"text",CAP_TID,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Marque", 		  renderer,"text",CAP_TMARQUE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Reference", 		  renderer,"text",CAP_TREFERENCE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Adresse physique", 		  renderer,"text",CAP_TADRESSE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Localisation", 		  renderer,"text",CAP_TLOCALISATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'ajout", 		renderer,"text",CAP_TDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure d'ajout", 		renderer,"text",CAP_THEURE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Minute d'ajout", 		renderer,"text",CAP_TMIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(CAP_TCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
F=fopen("capteur_T.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("capteur_T.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s %s %s \n",id,marque,reference,adresse,localisation,date,hr,min)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,CAP_TID,id,CAP_TMARQUE,marque,CAP_TREFERENCE,reference,CAP_TADRESSE,adresse,CAP_TLOCALISATION,localisation,CAP_TDATE,date,CAP_THEURE,hr,CAP_TMIN,min, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}
}





int CAP_T_ajout1(char id[] , char reference[])
{
FILE* f,*f1;

f1= fopen("capteur_T1.txt","w");
fclose(f1);

 int test=0; 

char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20];

f1= fopen("capteur_T1.txt","a+"); 
f= fopen("capteur_T.txt","r");

if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8)!=EOF)
	{
		if (strcmp(ch1,id)==0 && strcmp(ch3,reference)==0)
	{
fprintf(f1,"%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8);
test=1;
	}
	}
}
fclose(f); 
fclose(f1);
return test;
}





void CAP_T_afficher1(GtkWidget* liste)
{

	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de treeview
	GtkListStore  *store;    //l'enregistrement de treeview

 	char id [20];
	char marque [20];
	char adresse [20];
	char reference [20];
	char localisation [20];
	char date[20];
	char hr [20] , min[20];


	
	 store=NULL;

	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Id", 		renderer,"text",CAP_TID,NULL);//creation d'une colonne avec du texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Marque", 		  renderer,"text",CAP_TMARQUE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Reference", 		  renderer,"text",CAP_TREFERENCE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Adresse physique", 		  renderer,"text",CAP_TADRESSE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Localisation", 		  renderer,"text",CAP_TLOCALISATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'ajout", 		renderer,"text",CAP_TDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure d'ajout", 		renderer,"text",CAP_THEURE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Minute d'ajout", 		renderer,"text",CAP_TMIN,NULL);

	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(CAP_TCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

F=fopen("capteur_T1.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("capteur_T1.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s %s %s \n",id,marque,reference,adresse,localisation,date,hr,min)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,CAP_TID,id,CAP_TMARQUE,marque,CAP_TREFERENCE,reference,CAP_TADRESSE,adresse,CAP_TLOCALISATION,localisation,CAP_TDATE,date,CAP_THEURE,hr,CAP_TMIN,min, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}


}

/////////////////////////////////-------valeur_T.c///////////////////////////////////////////////////////////////////////////
enum {
VAL_TID ,
VAL_TMARQUE ,
VAL_TVALEUR ,
VAL_TDATE,
VAL_THEURE,
VAL_TMIN,
VAL_TCOLUMNS
};

enum {
V_TID ,
V_TVALEUR ,
COLUMNSS
};

enum {
VD_TMARQUE ,

COLUMNSSS
};

void ajouter_val_t (Valeur_t vt)
{

FILE* f; 
f= fopen("valeur_T.txt","a+");
if (f!=NULL)
{
fprintf(f,"%s %s %s %s %s %s \n", vt.id , vt.marque , vt.valeur , vt.date, vt.hr.h, vt.hr.min);
}
fclose(f);
}




int VAL_T_trouve (char id[])
{
FILE* f; 

int test=0; 

char ch[20];

f=fopen("valeur_T.txt","r");


if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s \n",ch)!=EOF)
		{	

			if (strcmp(id,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}




void VAL_T_affiche_modif ( char id[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10)

{
FILE* f; 

char ch[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20];

	f=fopen("valeur_T.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s \n",ch,ch1,ch2,ch3,ch4,ch5)!=EOF)
		{	
			if (strcmp(id,ch)==0)

				{
gtk_label_set_text(GTK_LABEL(pt1)," Marque :"); 
gtk_label_set_text(GTK_LABEL(pt2),ch1);

gtk_label_set_text(GTK_LABEL(pt3)," Valeur :");
gtk_label_set_text(GTK_LABEL(pt4),ch2);

gtk_label_set_text(GTK_LABEL(pt5)," Date d'ajout :");
gtk_label_set_text(GTK_LABEL(pt6),ch3);

gtk_label_set_text(GTK_LABEL(pt7)," Heure d'ajout :");
gtk_label_set_text(GTK_LABEL(pt8),ch4);

gtk_label_set_text(GTK_LABEL(pt9)," Minute d'ajout :");
gtk_label_set_text(GTK_LABEL(pt10),ch5);


				}
		}
}
fclose(f);

}



int VAL_T_int_ch(char ch[])
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

else return (-1);


}




int VAL_T_modif(char id[],int element,char val[] )
{
     FILE* fw;
    FILE* f; int test=0;

    char ch0[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20];
    f=fopen("valeur_T.txt","r"); fw=fopen("valeur_T_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5)!=EOF)
            {
                if (strcmp (ch0, id) == 0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,val,ch2,ch3,ch4,ch5);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,val,ch3,ch4,ch5);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,val,ch4,ch5);
                            break;
                        case 3:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,val,ch5);
                            break;
                        case 4:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,val);
                            break;
                        
                    }
                }
                 else
                     fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5);

            }

}
fclose(f); fclose(fw);
 remove("valeur_T.txt");
 rename("valeur_T_aux.txt","valeur_T.txt");

return test;

}


void VAL_T_afficher(GtkWidget* liste)
{



GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	char id [20];
	char marque [20];
	char valeur [20];
	char date[20];
	char hr [20] , min[20];
	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Id", 		renderer,"text",VAL_TID,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Marque", 		  renderer,"text",VAL_TMARQUE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Valeur", 		  renderer,"text",VAL_TVALEUR,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'ajout", 		renderer,"text",VAL_TDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure d'ajout", 		renderer,"text",VAL_THEURE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Minute d'ajout", 		renderer,"text",VAL_TMIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(VAL_TCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
F=fopen("valeur_T.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("valeur_T.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s \n",id,marque,valeur,date,hr,min)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,VAL_TID,id,VAL_TMARQUE,marque,VAL_TVALEUR,valeur,VAL_TDATE,date,VAL_THEURE,hr,VAL_TMIN,min, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}
}




int VAL_T_supprimer(char id[])
{

FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20];
    f=fopen("valeur_T.txt","r"); fw=fopen("valeur_T_aux.txt","a");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6)!=EOF)
            {
                if (strcmp (ch1, id) != 0)
                fprintf (fw,"%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6);
                else
                    test=1; //supression etablie.
            }

    }
    else
        return ;
    fclose(fw);
    fclose(f);
   remove("valeur_T.txt");
   rename("valeur_T_aux.txt","valeur_T.txt");
return test;
}



int VAL_T_ajout1(char id[] , char marque[])
{
FILE* f,*f1;

f1= fopen("valeur_T1.txt","w");
fclose(f1);

 int test=0; 

char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20];

f1= fopen("valeur_T1.txt","a+"); 
f= fopen("valeur_T.txt","r");

if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6)!=EOF)
	{
		if (strcmp(ch1,id)==0 && strcmp(ch2,marque)==0)
	{
fprintf(f1,"%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6);
test=1;
	}
	}
}
fclose(f); 
fclose(f1);
return test;
}




void VAL_T_afficher1(GtkWidget* liste)
{

	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de treeview
	GtkListStore  *store;    //l'enregistrement de treeview

 	char id [20];
	char marque [20];
	char valeur [20];
	char date[20];
	char hr [20] , min[20];


	
	 store=NULL;

	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Id", 		renderer,"text",VAL_TID,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Marque", 		  renderer,"text",VAL_TMARQUE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Valeur", 		  renderer,"text",VAL_TVALEUR,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'ajout", 		renderer,"text",VAL_TDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure d'ajout", 		renderer,"text",VAL_THEURE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Minute d'ajout", 		renderer,"text",VAL_TMIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
	
	}
//lA liste contient 6 colonnes de type chaine de caracteres
	store=gtk_list_store_new(VAL_TCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

F=fopen("valeur_T.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("valeur_T.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s \n",id,marque,valeur,date,hr,min)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,VAL_TID,id,VAL_TMARQUE,marque,VAL_TVALEUR,valeur, VAL_TDATE, date,VAL_THEURE, hr,VAL_TMIN,min, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}


}


void detection_cp_T_defectueux( char id[20], char marque[20],char valeur[20])  
{

Valeur_t vt;

double k=atof(valeur); FILE *f2,*f3;

if (k>36 || k<8)
{
f2=fopen("cp_T_defectueux.txt","a+");
fprintf(f2, "%s %s \n",id,valeur);

f3=fopen("marques_cp_T_embetantes.txt","a+");
fprintf(f3, "%s \n",marque);



fclose(f2);
fclose(f3);
}
}



int calcul_marque(char marque[])
{
FILE* f;
int occ=0;

char ch1[20];
f=fopen("marques_cp_T_embetantes.txt","r");
if (f!=NULL)
{
         while (fscanf (f, "%s \n",ch1)!=EOF)
           		 {
				if (strcmp(ch1,marque)==0) 
				{
				 occ=occ++;
				}

		
			 }
}
    fclose(f);

return occ;
}




void affich_cp_t_def(GtkWidget *liste)
{
	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de treeview
	GtkListStore  *store;    //l'enregistrement de treeview

 	char id [20];
	char valeur [20];
	
	 store=NULL;

	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Id", 		renderer,"text",V_TID,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Valeur", 		  renderer,"text",V_TVALEUR,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);



	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(COLUMNSS, G_TYPE_STRING, G_TYPE_STRING);

F=fopen("cp_T_defectueux.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("cp_T_defectueux.txt","a+");
   while(fscanf(F,"%s %s\n",id,valeur)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,V_TID,id,V_TVALEUR,valeur,-1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}

}



void affich_marque_cp_t_def(GtkWidget *liste)
{
	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de treeview
	GtkListStore  *store;    //l'enregistrement de treeview


	char marque [20];

	 store=NULL;

	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes(" Marque à éviter :", 		renderer,"text",VD_TMARQUE,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);



	}
//lA liste contient 2 colonnes de type chaine de caracteres
	store=gtk_list_store_new(COLUMNSSS, G_TYPE_STRING);

F=fopen("marques_cp_T_embetantes.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("marques_cp_T_embetantes.txt","a+");
   while(fscanf(F,"%s \n",marque)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,VD_TMARQUE,marque,-1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}



}

/////////////////////////////////////////////////------capteur_H.c---------//////////////////////////////////////////////
enum {
CAP_HID ,
CAP_HMARQUE ,
CAP_HREFERENCE ,
CAP_HADRESSE ,
CAP_HLOCALISATION,
CAP_HDATE,
CAP_HHEURE,
CAP_HMIN,
CAP_HCOLUMNS
};


void ajouter_CAP_H (Capteur_h caph)
{

FILE* f; 
f= fopen("capteur_H.txt","a+");
if (f!=NULL)
{
fprintf(f,"%s %s %s %s %s %s %s %s \n", caph.id , caph.marque , caph.reference , caph.adresse  , caph.localisation, caph.date, caph.hr.h, caph.hr.min);
}
fclose(f);
}




int CAP_H_trouve (char id[])
{
FILE* f; 

int test=0; 

char ch[20];

f=fopen("capteur_H.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(id,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}


int CAP_H_supprimer(char id[])
{

FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20];
    f=fopen("capteur_H.txt","r"); fw=fopen("capteur_H_aux.txt","a");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8)!=EOF)
            {
                if (strcmp (ch1, id) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8);
                else
                    test=1; //supression etablie.
            }

    }
    else
        return ;
    fclose(fw);
    fclose(f);
   remove("capteur_H.txt");
   rename("capteur_H_aux.txt","capteur_H.txt");
return test;


}


void CP_H_affiche_modif ( char id[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10,GtkWidget* pt11,GtkWidget* pt12,GtkWidget* pt13,GtkWidget* pt14)

{
FILE* f; 

char ch[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];

	f=fopen("capteur_H.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s %s %s \n",ch,ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
		{	
			if (strcmp(id,ch)==0)

				{
gtk_label_set_text(GTK_LABEL(pt1)," Marque :"); 
gtk_label_set_text(GTK_LABEL(pt2),ch1);

gtk_label_set_text(GTK_LABEL(pt3)," Référence :");
gtk_label_set_text(GTK_LABEL(pt4),ch2);

gtk_label_set_text(GTK_LABEL(pt5)," Adresse physique :");
gtk_label_set_text(GTK_LABEL(pt6),ch3);

gtk_label_set_text(GTK_LABEL(pt7)," Localisation:");
gtk_label_set_text(GTK_LABEL(pt8),ch4);

gtk_label_set_text(GTK_LABEL(pt9)," Date d'ajout :");
gtk_label_set_text(GTK_LABEL(pt10),ch5);

gtk_label_set_text(GTK_LABEL(pt11)," Heure d'ajout :");
gtk_label_set_text(GTK_LABEL(pt12),ch6);

gtk_label_set_text(GTK_LABEL(pt13)," Minute d'ajout :");
gtk_label_set_text(GTK_LABEL(pt14),ch7);


				}
		}
}
fclose(f);

}



int CAP_H_int_ch(char ch[])
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


else return (-1);

}





int CAP_H_modif(char id[],int element,char val[] )
{
     FILE* fw;
    FILE* f; int test=0;

    char ch0[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
    f=fopen("capteur_H.txt","r"); fw=fopen("capteur_H_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
            {
                if (strcmp (ch0, id) == 0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,val,ch2,ch3,ch4,ch5,ch6,ch7);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,val,ch3,ch4,ch5,ch6,ch7);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,val,ch4,ch5,ch6,ch7);
                            break;
                        case 3:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,val,ch5,ch6,ch7);
                            break;
                        case 4:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,val,ch6,ch7);
                            break;
                        case 5:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,val,ch7);
                            break;
                        case 6:
                            fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,val);
                            break;
                       

                    }
                }
                 else
                     fprintf (fw, "%s %s %s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5,ch6,ch7);

            }

}
fclose(f); fclose(fw);
 remove("capteur_H.txt");
 rename("capteur_H_aux.txt","capteur_H.txt");

return test;

}




void CAP_H_afficher(GtkWidget* liste)
{



GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	char id [20];
	char marque [20];
	char adresse [20];
	char reference [20];
	char localisation [20];
	char date[20];
	char hr [20] , min[20];
	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Id", 		renderer,"text",CAP_HID,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Marque", 		  renderer,"text",CAP_HMARQUE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Reference", 		  renderer,"text",CAP_HREFERENCE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Adresse physique", 		  renderer,"text",CAP_HADRESSE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Localisation", 		  renderer,"text",CAP_HLOCALISATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'ajout", 		renderer,"text",CAP_HDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure d'ajout", 		renderer,"text",CAP_HHEURE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Minute d'ajout", 		renderer,"text",CAP_HMIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(CAP_HCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
F=fopen("capteur_H.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("capteur_H.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s %s %s \n",id,marque,reference,adresse,localisation,date,hr,min)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,CAP_HID,id,CAP_HMARQUE,marque,CAP_HREFERENCE,reference,CAP_HADRESSE,adresse,CAP_HLOCALISATION,localisation,CAP_HDATE,date,CAP_HHEURE,hr,CAP_HMIN,min, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}
}



void CAP_H_afficher1(GtkWidget* liste)
{

	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de treeview
	GtkListStore  *store;    //l'enregistrement de treeview

 	char id [20];
	char marque [20];
	char adresse [20];
	char reference [20];
	char localisation [20];
	char date[20];
	char hr [20] , min[20];


	
	 store=NULL;

	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Id", 		renderer,"text",CAP_HID,NULL);//creation d'une colonne avec du texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Marque", 		  renderer,"text",CAP_HMARQUE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Reference", 		  renderer,"text",CAP_HREFERENCE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Adresse physique", 		  renderer,"text",CAP_HADRESSE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Localisation", 		  renderer,"text",CAP_HLOCALISATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'ajout", 		renderer,"text",CAP_HDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure d'ajout", 		renderer,"text",CAP_HHEURE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Minute d'ajout", 		renderer,"text",CAP_HMIN,NULL);

	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(CAP_HCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

F=fopen("capteur_H1.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("capteur_H1.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s %s %s \n",id,marque,reference,adresse,localisation,date,hr,min)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,CAP_HID,id,CAP_HMARQUE,marque,CAP_HREFERENCE,reference,CAP_HADRESSE,adresse,CAP_HLOCALISATION,localisation,CAP_HDATE,date,CAP_HHEURE,hr,CAP_HMIN,min, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}


}

int CAP_H_ajout1(char id[] , char reference[])
{
FILE* f,*f1;

f1= fopen("capteur_H1.txt","w");
fclose(f1);

 int test=0; 

char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20];

f1= fopen("capteur_H1.txt","a+"); 
f= fopen("capteur_H.txt","r");

if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8)!=EOF)
	{
		if (strcmp(ch1,id)==0 && strcmp(ch3,reference)==0)
	{
fprintf(f1,"%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8);
test=1;
	}
	}
}
fclose(f); 
fclose(f1);
return test;
}

///////////////////////////////////----------valeur_H.c------------///////////////////////
enum {
VAL_HID ,
VAL_HMARQUE ,
VAL_HVALEUR ,
VAL_HDATE,
VAL_HHEURE,
VAL_HMIN,
VAL_HCOLUMNS
};

enum {
V_HID ,
V_HVALEUR ,
VAL_HCOLUMNSS
};

enum {
VD_HMARQUE ,

VAL_HCOLUMNSSS
};



void ajouter_val_h (Valeur_h vh)
{

FILE* f; 
f= fopen("valeur_H.txt","a+");
if (f!=NULL)
{
fprintf(f,"%s %s %s %s %s %s \n", vh.id , vh.marque , vh.valeur , vh.date, vh.hr.h, vh.hr.min);
}
fclose(f);
}


int VAL_H_trouve (char id[])
{
FILE* f; 

int test=0; 

char ch[20];

f=fopen("valeur_H.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %*s %*s \n",ch)!=EOF)
		{	
			if (strcmp(id,ch)==0)
				test=1;
		}
}
fclose(f);
return test;
}



int VAL_H_supprimer(char id[])
{

FILE* fw;
    FILE* f; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20];
    f=fopen("valeur_H.txt","r"); fw=fopen("valeur_H_aux.txt","a");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6)!=EOF)
            {
                if (strcmp (ch1, id) != 0)
                fprintf (fw,"%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6);
                else
                    test=1; //supression etablie.
            }

    }
    else
        return ;
    fclose(fw);
    fclose(f);
   remove("valeur_H.txt");
   rename("valeur_H_aux.txt","valeur_H.txt");
return test;
}



void VAL_H_affiche_modif ( char id[], GtkWidget* pt1,GtkWidget* pt2,GtkWidget* pt3,GtkWidget* pt4,GtkWidget* pt5,GtkWidget* pt6,GtkWidget* pt7,GtkWidget* pt8,GtkWidget* pt9,GtkWidget* pt10)

{
FILE* f; 

char ch[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20];

	f=fopen("valeur_H.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s \n",ch,ch1,ch2,ch3,ch4,ch5)!=EOF)
		{	
			if (strcmp(id,ch)==0)

				{
gtk_label_set_text(GTK_LABEL(pt1)," Marque :"); 
gtk_label_set_text(GTK_LABEL(pt2),ch1);

gtk_label_set_text(GTK_LABEL(pt3)," Valeur :");
gtk_label_set_text(GTK_LABEL(pt4),ch2);

gtk_label_set_text(GTK_LABEL(pt5)," Date d'ajout :");
gtk_label_set_text(GTK_LABEL(pt6),ch3);

gtk_label_set_text(GTK_LABEL(pt7)," Heure d'ajout :");
gtk_label_set_text(GTK_LABEL(pt8),ch4);

gtk_label_set_text(GTK_LABEL(pt9)," Minute d'ajout :");
gtk_label_set_text(GTK_LABEL(pt10),ch5);


				}
		}
}
fclose(f);

}



int VAL_H_int_ch(char ch[])
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

else return (-1);


}




int VAL_H_modif(char id[],int element,char val[] )
{
     FILE* fw;
    FILE* f; int test=0;

    char ch0[20],ch1[20],ch2[20],ch3[20],ch4[20],ch5[20];
    f=fopen("valeur_H.txt","r"); fw=fopen("valeur_H_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5)!=EOF)
            {
                if (strcmp (ch0, id) == 0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,val,ch2,ch3,ch4,ch5);
                            break;
                        case 1:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,val,ch3,ch4,ch5);
                            break;
                        case 2:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,val,ch4,ch5);
                            break;
                        case 3:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,val,ch5);
                            break;
                        case 4:
                            fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,val);
                            break;
                        
                    }
                }
                 else
                     fprintf (fw, "%s %s %s %s %s %s \n",ch0,ch1,ch2,ch3,ch4,ch5);

            }

}
fclose(f); fclose(fw);
 remove("valeur_H.txt");
 rename("valeur_H_aux.txt","valeur_H.txt");

return test;

}



void VAL_H_afficher(GtkWidget* liste)
{



GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	char id [20];
	char marque [20];
	char valeur [20];
	char date[20];
	char hr [20] , min[20];
	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Id", 		renderer,"text",VAL_HID,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Marque", 		  renderer,"text",VAL_HMARQUE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Valeur", 		  renderer,"text",VAL_HVALEUR,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'ajout", 		renderer,"text",VAL_HDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure d'ajout", 		renderer,"text",VAL_HHEURE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Minute d'ajout", 		renderer,"text",VAL_HMIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(VAL_HCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
F=fopen("valeur_H.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("valeur_H.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s \n",id,marque,valeur,date,hr,min)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,VAL_HID,id,VAL_HMARQUE,marque,VAL_HVALEUR,valeur,VAL_HDATE,date,VAL_HHEURE,hr,VAL_HMIN,min, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}
}


int VAL_H_ajout1(char id[] , char marque[])
{
FILE* f,*f1;

f1= fopen("valeur_H1.txt","w");
fclose(f1);

 int test=0; 

char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20];

f1= fopen("valeur_H1.txt","a+"); 
f= fopen("valeur_H.txt","r");

if (f!=NULL&&f1!=NULL)
{
	while(fscanf(f,"%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6)!=EOF)
	{
		if (strcmp(ch1,id)==0 && strcmp(ch2,marque)==0)
	{
fprintf(f1,"%s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6);
test=1;
	}
	}
}
fclose(f); 
fclose(f1);
return test;
}



void VAL_H_afficher1(GtkWidget* liste)
{

	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de treeview
	GtkListStore  *store;    //l'enregistrement de treeview

 	char id [20];
	char marque [20];
	char valeur [20];
	char date[20];
	char hr [20] , min[20];


	
	 store=NULL;

	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Id", 		renderer,"text",VAL_HID,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Marque", 		  renderer,"text",VAL_HMARQUE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Valeur", 		  renderer,"text",VAL_HVALEUR,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Date d'ajout", 		renderer,"text",VAL_HDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Heure d'ajout", 		renderer,"text",VAL_HHEURE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Minute d'ajout", 		renderer,"text",VAL_HMIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(VAL_HCOLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

F=fopen("valeur_H1.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("valeur_H1.txt","a+");
   while(fscanf(F,"%s %s %s %s %s %s \n",id,marque,valeur,date,hr,min)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,VAL_HID,id,VAL_HMARQUE,marque,VAL_HVALEUR,valeur,VAL_HDATE,date, VAL_HHEURE,hr,VAL_HMIN,min, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}


}


void detection_cp_H_defectueux(char val[20], char id[20], char marque[20])  
{


double k=atof(val); FILE *f2,*f3;

if (k>55 || k<20)
{
f2=fopen("cp_H_defectueux.txt","a+");
fprintf(f2, "%s %s \n",id,val);

f3=fopen("marques_cp_H_embetantes.txt","a+");
fprintf(f3, "%s \n",marque);



fclose(f2);
fclose(f3);
}
}





int calcul_marque_h(char marque[])
{
FILE* f;
FILE* f2;

int occ=0;

char ch1[20];
f=fopen("marques_cp_H_embetantes.txt","r");
f2=fopen("occurence_H.txt","a+");
if (f!=NULL)
{
         while (fscanf (f, "%s \n",ch1)!=EOF)
           		 {
				if (strcmp(ch1,marque)==0) 
				{
				 occ++;
				}

		
			 }
fprintf(f2,"%s %d \n",marque ,occ);
}
    fclose(f);
    fclose(f2);


return occ;
}



void affich_cp_h_def(GtkWidget *liste)
{
	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de treeview
	GtkListStore  *store;    //l'enregistrement de treeview

 	char id [20];
	char valeur [20];
	
	 store=NULL;

	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("Id", 		renderer,"text",V_HID,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("Valeur", 		  renderer,"text",V_HVALEUR,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);



	}
//lA liste contient 2 colonnes de type chaine de caracteres
	store=gtk_list_store_new(VAL_HCOLUMNSS, G_TYPE_STRING, G_TYPE_STRING);

F=fopen("cp_H_defectueux.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("cp_H_defectueux.txt","a+");
   while(fscanf(F,"%s %s\n",id,valeur)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,V_HID,id,V_HVALEUR,valeur,-1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}

}



void affich_marque_cp_h_def(GtkWidget *liste)
{
	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de treeview
	GtkListStore  *store;    //l'enregistrement de treeview


	char marque [20];

	 store=NULL;

	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes(" Marque à éviter :", 		renderer,"text",VD_HMARQUE,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	


	}
//lA liste contient 2 colonnes de type chaine de caracteres
	store=gtk_list_store_new(VAL_HCOLUMNSSS, G_TYPE_STRING);

F=fopen("marques_cp_H_embetantes.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("marques_cp_H_embetantes.txt","a+");
   while(fscanf(F,"%s \n",marque)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,VD_HMARQUE,marque,-1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}



}
/////////////////////////////ouvrier.c/////////////////////////////////////////////////
enum
{
	OCIN,
	ONOM,
	OPRENOM,
	OTEL,
	COLUMNSouv,
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void O_ajouter( ouv o) 
{
	FILE* f; 
 
   	f=fopen("ouvrier.txt","a+");
    	if (f!=NULL){
        	fprintf(f,"%s %s %s %s \n", o.cin, o.nom, o.prenom, o.tel);   
    	}
	fclose(f);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Ouv_trouve(char cin[])
{

	FILE* f; int test=0; char ch[20];
	f=fopen("ouvrier.txt","a"); fclose(f);
	f=fopen("ouvrier.txt","r");
	if (f!=NULL){
		while(fscanf(f,"%s %*s %*s %*s \n",ch)!=EOF){	
			if (strcmp(cin,ch)==0)
				test=1;
		}
	}
	fclose(f);
	return test;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int O_modif(char cin[],int choice,char modif[])
{
	FILE* fw;
	FILE* f; 
	int test=0;
	char ch1[20];
	char ch2[20];
	char ch3[20];
	char ch4[20];
	
	f=fopen("ouvrier.txt","r"); 
	fw=fopen("fichierAUX.txt","a+");
	if ((fw!=NULL) && (f!=NULL)){
		while (fscanf (f, "%s %s %s %s \n",ch1,ch2,ch3,ch4)!=EOF){
			if (strcmp (ch1,cin) == 0){
				test=1;
				switch (choice)
				{	
					case 1:
						fprintf (fw, "%s %s %s %s \n",ch1,modif,ch3,ch4);
						break;
                        		case 2:
                           			fprintf (fw, "%s %s %s %s \n",ch1,ch2,modif,ch4);
                           			break;
					case 3:
                            			fprintf (fw, "%s %s %s %s \n",ch1,ch2,ch3,modif);
                            			break;
					
                       		}
                	}
			else{
				fprintf (fw, "%s %s %s %s \n",ch1,ch2,ch3,ch4);
			}
		}
	}
	fclose(f); fclose(fw);
	remove("ouvrier.txt");
	rename("fichierAUX.txt","ouvrier.txt");
	return test;

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void O_supprimer(char cin[])
{
	FILE *f,*f_temp;
	int test ;
	char ch1[20];
	char ch2[20];
	char ch3[20];
	char ch4[20];


	f=fopen("ouvrier.txt","r");
	f_temp=fopen("fichAux.txt","w");

	if((f != NULL)&&(f_temp != NULL)){
		while (fscanf(f,"%s %s %s %s\n",ch1,ch2,ch3,ch4)!=EOF){
			if(strcmp(ch1,cin)!=0){
				fprintf(f_temp,"%s %s %s %s\n",ch1,ch2,ch3,ch4);
			}
		}
		fclose(f);
		fclose(f_temp);
	}
	remove("ouvrier.txt");
	rename("fichAux.txt","ouvrier.txt");

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void O_afficher(GtkWidget* liste)
{
	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

   char cin[20];
    char nom[20];
    char prenom[20];
    char tel[20];


	
	 store=NULL;
	 FILE *F;

	store=gtk_tree_view_get_model(liste);//va prendre comme variable de la liste
	if(store==NULL)
	{
	renderer = gtk_cell_renderer_text_new (); //cellule contenant du texte
	column = gtk_tree_view_column_new_with_attributes("CIN:", 		renderer,"text",OCIN,NULL);//creation d'une colonne avec du 		texte
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);//associer 		la colonne à l'afficher (GtkTreeView);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("NOM:", 		  renderer,"text",ONOM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("PRENOM:", 		  renderer,"text",OPRENOM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new (); 
	column = gtk_tree_view_column_new_with_attributes("TELEPHONE", 		renderer,"text",OTEL,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	
	}
//lA liste contient 7 colonnes de type chaine de caracteres
	store=gtk_list_store_new(COLUMNSouv, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
F=fopen("ouvrier.txt","r");
if(F==NULL)
{
	return;
}
else
{ 
   F=fopen("ouvrier.txt","a+");
   while(fscanf(F,"%s %s %s %s \n",cin,nom,prenom,tel)!=EOF)
{       

        	
gtk_list_store_append (store, &iter);//variable intermediaire store
	gtk_list_store_set (store, &iter,OCIN,cin,ONOM,nom,OPRENOM,prenom,OTEL,tel, -1);//correspondre chaque champ a mon variable
}
	fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));//
	g_object_unref (store);
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int o_int_ch(char ch[])
{
	if (ch[0]=='1')
		return 1;
	else if (ch[0]=='2')
		return 2;
	else if (ch[0]=='3')
		return 3;

}
/////////////////////////////////////////////////abscence.c//////////////////////////////////

enum
{
	ECINabs,
	ECODEabs,
	EDATEabs,
	COLUMNSabs,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void abs_supprimer(char cin[],char code[])
{
	FILE *f,*f_temp;
	int test ;
	abscences abs;


	f=fopen("abscence.txt","r");
	f_temp=fopen("fichAux.txt","w");

	if((f != NULL)&&(f_temp != NULL)){
		while (fscanf(f,"%s %s %s\n",abs.cin,abs.code,abs.date)!=EOF){
			if(strcmp(abs.cin,cin)!=0 || strcmp(code,abs.code)!=0){
				fprintf(f_temp,"%s %s %s\n",abs.cin,abs.code,abs.date);
			}
		}
		fclose(f);
		fclose(f_temp);
	}
	remove("abscence.txt");
	rename("fichAux.txt","abscence.txt");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void consulter_ouvrier( abscences abs)
{
	FILE *f=NULL;

	f=fopen("abscence.txt","a+");
	if(f != NULL){
		fprintf(f,"%s %s %s\n",abs.cin,abs.code,abs.date);
	}
	fclose(f);

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void afficher_abscence(GtkWidget *liste)
{
	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	char cin[20];
	char code[5];
	char date[12];

	store = NULL;
	FILE *f;

	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("CIN",renderer,"text",ECINabs,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("Code abscence",renderer,"text",ECODEabs,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("Date d'abscence",renderer,"text",EDATEabs,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);



	store = gtk_list_store_new (COLUMNSabs, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
	
	f = fopen("abscence.txt","r");

	if(f == NULL){
		return;
	}
	else{
		f=fopen("abscence.txt","a+");
		while(fscanf(f,"%s %s %s\n",cin,code,date) != EOF){
			gtk_list_store_append(store,&iter);
			
			
			gtk_list_store_set(store,&iter,ECINabs,cin,ECODEabs,code,EDATEabs,date,-1);
		}
		fclose(f);
		gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
		g_object_unref(store);
	}
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
char checher_taches(char mini_cin[],int mini_code[])
{
	FILE *f1;
	char meilleur[30];
	int j,i,taille;
	tache t;

	int tpercent[100];
	char tcin[100];
	int min;
	int indx;
	ouv o2;
	
	char cin1[8];

	f1=fopen("listeDesTaches.txt","r");
	while(fscanf(f1,"%s %d",t.cin1,t.percent)!=EOF){
		strcpy(tcin[i],t.cin1);
		tpercent[i]=t.percent;
		i++;
	}

	taille=i;
	min=tpercent[0];

	for(j=1;j<taille;j++){
		if(min>tpercent[j]){
			min=tpercent[j];
			indx=j;
		}
	}


	while (fscanf(f1,"%s %s %s %s",o2.nom,o2.prenom,o2.tel,o2.cin)!=EOF){
		if(strcmp(cin1,tcin[indx])==0){
			strcpy(meilleur,o2.nom);
			strcat(meilleur," ");
			strcat(meilleur,o2.prenom);
		}
	}
	
	return meilleur;
}
	*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
char best()
{
	FILE *f1,*f2;
	abscences abs;
	char meilleur[30];
	
	int tcode[100];
	char tcin[100][20];

	int mini_code[20];
	char mini_cin[100][20];

	int i=0,taille=0,j;
	int min;
	int indx;

	f1=fopen("ouvriers.txt","r");
	f2=fopen("abscence.txt","r");

	if((f1 != NULL)&&(f2 != NULL)){
		while (fscanf(f2,"%s %s %s",abs.cin,abs.code,abs.date)!=EOF){
			strcpy(tcin[i],abs.cin);
			tcode[i]=abs.code;
			i++;
		}

		taille=i;
		min=tcode[0];

		for(j=1;j<taille;j++){
			if(min>tcode[j]){
				min=tcode[j];
				indx=j;
			}
		}

		i=0;
		for(j=0;j<taille;j++){
			if(min = tcode[j]){
				mini_code[i] = tcode[j];
				strcpy(mini_cin[i],tcin[j]);
				i++;
			}
		}

		strcpy(meilleur,checher_taches(mini_cin,mini_code));

		
	}


	fclose(f1);
	fclose(f2);

	return meilleur;
}*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void chercher(char cin[], GtkWidget *liste)
{
	GtkCellRenderer *renderer;  //envoyer la saisir de l'utilisateur de 		chaque champ 
	GtkTreeViewColumn *column;//correspendre le contenue du champ a son 		attribue de la liste
	GtkTreeIter   iter;    //itterateur sur l'ensemble des elements de 		treeview
	GtkListStore  *store;    //l'enregistrement de treeview

	char cin1[20];
	char code[5];
	char date[12];

	store = NULL;
	FILE *f;

	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("CIN",renderer,"text",ECINabs,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("Code absence",renderer,"text",ECODEabs,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("Date d'absence",renderer,"text",EDATEabs,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	store = gtk_list_store_new (COLUMNSabs, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
	
	f = fopen("abscence.txt","r");

	if(f == NULL){
		return;
	}
	else{
		f=fopen("abscence.txt","a+");
		while(fscanf(f,"%s %s %s \n",cin1,code,date) != EOF){
			if(strcmp(cin1,cin)==0){
				gtk_list_store_append(store,&iter);

				gtk_list_store_set(store,&iter,ECINabs,cin1,ECODEabs,code,EDATEabs,date,-1);
			}
		}
		fclose(f);
		gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
		g_object_unref(store);
	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void avancement(tache t)
{

	FILE *f=NULL;
	FILE *f_tmp=NULL;
	int test=0;
	char ch1[8];
	int ava;


	f=fopen("listeDesTaches.txt","a+");
	fprintf(f,"%s %d\n",t.cin1,t.percent);
	
	
	fclose(f);
	

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int make_code(char cin1[])
{
	FILE *f;
	abscences abs;
	int codee=1;
	f=fopen("abscence.txt","r");
	if(f!=NULL){
		while(fscanf(f,"%s %s %s",abs.cin,abs.code,abs.date)!=EOF){
			if(strcmp(cin1,abs.cin)==0){
				codee=atoi(abs.code);
				codee+=1;
			}
		}
	}
	fclose(f);
	return (codee);
}



///////////////////////////authentif client///////////////////////////////////////////////////////////////


int auth_client(char id[], char mdp[])
{



FILE* f; int test=0;

 char ch1[20],ch2[20];
f=fopen("client.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %*s %s %*s %*s %*s %*s %*s %*s %*s \n",ch1,ch2)!=EOF)
		{	
			if ( (strcmp(ch1,id)==0) && (strcmp(ch2,mdp)==0))
				test=1;
		}
}
fclose(f);
return test;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int E_trouve_auth(char identif[],char mdp[])
{
	FILE* f; int test=0; char ch[20],ch1[20];
	f=fopen("employe.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %*s %*s %s %*s %*s %*s %*s %*s %*s %*s \n",ch,ch1)!=EOF)
		{	
			if (strcmp(identif,ch)==0 && strcmp(mdp,ch1)==0)
				test=1;
		}
}
fclose(f);
return test;
}


//////////////////////////////////////////////////////////////////////////////////
int abs_modif(char cin[],char code[],int element,char val[] )
{
     FILE* fw;
    FILE* f; int test=0;

    char ch0[20],ch1[20],ch2[10],ch3[20];
    f=fopen("abscence.txt","r"); fw=fopen("abscence_aux.txt","a");
    if (fw!=NULL && f!=NULL)
     {
         while (fscanf (f, "%s %s %s \n",ch0,ch1,ch2)!=EOF)
            {
                if (strcmp (ch0, cin) == 0 && strcmp(code,ch1)==0)
                {
                    test=1;
                    switch (element)
                    {
			
                        case 0:
                            fprintf (fw, "%s %s %s \n",ch0,ch1,val);
                            break;
                     

                    }
                }
                 else
                     fprintf (fw, "%s %s %s \n",ch0,ch1,ch2);

            }

}
fclose(f); fclose(fw);
 remove("abscence.txt");
 rename("abscence_aux.txt","abscence.txt");

return test;

}


////////////////


int auth_admin(char id[], char mdp[])
{



FILE* f; int test=0;

 char ch1[20],ch2[20];
f=fopen("admin.txt","r");
if (f!=NULL)
{
	while(fscanf(f,"%s %s \n",ch1,ch2)!=EOF)
		{	
			if ( (strcmp(ch1,id)==0) && (strcmp(ch2,mdp)==0))
				test=1;
		}
}
fclose(f);
return test;
}


