#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "employe.h"
#include "equip.h"
#include <string.h>
#include <stdio.h>
int choix[]={0,0};
int choixc[]={0,0};
int EQ_choix[]={0,0,0};
int choix_cap[]={0,0};
int j,m,a;
int jj=0,mm=0,aa=0;
int jj1=0,mm1=0,aa1=0;
int jj2=0,mm2=0,aa2=0;
int jj3=0,mm3=0,aa3=0;
int jj4=0,mm4=0,aa4=0;
/////////////////////////////////////////////////////////////////////////////////////////////////

void
on_button_admin_gestion_emp_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_gestion_emp, *window_acceuil;

window_acceuil=lookup_widget(objet,"window_princ");
gtk_widget_destroy(window_acceuil);

window_gestion_emp=create_window_gestion();
gtk_widget_show(window_gestion_emp);
}


void
on_button_acceuil_modif_emp_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion;
window=create_window_modif();
gtk_widget_show(window);
window_gestion=lookup_widget(objet,"window_gestion");
gtk_widget_destroy(window_gestion);

}


void
on_button_acceuil_supp_emp_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion;
window=create_window_supp();
gtk_widget_show(window);
window_gestion=lookup_widget(objet,"window_gestion");
gtk_widget_destroy(window_gestion);
}


void
on_button_acceuil_consult_emp_clicked  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajout, *window_consul ,*E_treeview,*window_gestion;

window_ajout=lookup_widget(objet,"window_ajout");
gtk_widget_destroy(window_ajout);

window_consul=create_window_consul();
gtk_widget_show(window_consul);

E_treeview=lookup_widget(window_consul,"E_treeview");

E_afficher(E_treeview);
window_gestion=lookup_widget(objet,"window_gestion");
gtk_widget_destroy(window_gestion);
}


void
on_RBRbuttonSearch_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_acceuil_chercher_emp_clicked (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window, *window_gestion;
window=create_window_cherch();
gtk_widget_show(window);
window_gestion=lookup_widget(objet,"window_gestion");
gtk_widget_destroy(window_gestion);
}


void
on_button_acceuil_ajout_emp_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion;
window=create_window_ajout();
gtk_widget_show(window);

window_gestion=lookup_widget(objet,"window_gestion");
gtk_widget_destroy(window_gestion);
}


void
on_RBRbutton_supp_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* identif,*window_supp;
GtkWidget* pt;
 char id[20], ch[40]; int test;
window_supp=lookup_widget(objet,"window_supp");
identif=lookup_widget(objet,"RBRentry_id_supp");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));
pt=lookup_widget (objet , "label_sortie_supp");
test=E_supprimer(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression reussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_button_afficher_emp_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
 GtkWidget *window_ajout, *window_consul ,*E_treeview;

window_ajout=lookup_widget(objet,"window_ajout");
gtk_widget_destroy(window_ajout);

window_consul=create_window_consul();
gtk_widget_show(window_consul);

E_treeview=lookup_widget(window_consul,"E_treeview");

E_afficher(E_treeview);
}


void
on_button_acceuil_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget* window,*window0,*window1,*window2,*window3,*window4,*window5,*window6;
window0=lookup_widget(objet,"window_princ");
gtk_widget_destroy(window0);
window1=lookup_widget(objet,"window_ajout");
gtk_widget_destroy(window1);
window2=lookup_widget(objet,"window_supp");
gtk_widget_destroy(window2);
window3=lookup_widget(objet,"window_consul");
gtk_widget_destroy(window3);
window4=lookup_widget(objet,"window_modif");
gtk_widget_destroy(window4);
window5=lookup_widget(objet,"window_cherch");
gtk_widget_destroy(window5);
window6=lookup_widget(objet,"window_consul_cherch");
gtk_widget_destroy(window6);

window=create_window_gestion();
gtk_widget_show(window);
}


void
on_button_emp_modif_valider_identif_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
 GtkWidget* identif,*pt; char id [25],ch[40]; int test;
identif=lookup_widget(objet,"entry_emp_modif_identif");
GtkWidget *pt1,*pt2,*pt3,*pt4,*pt5,*pt6,*pt7,*pt8,*pt9,*pt10,*pt11,*pt12,*pt13,*pt14,*pt15,*pt16;
pt1=lookup_widget(objet,"nom_modif_emp");
pt2=lookup_widget(objet,"label_nom_modif_emp");
pt3=lookup_widget(objet,"prenom_modif_emp");
pt4=lookup_widget(objet,"label_prenom_modif_emp");
pt5=lookup_widget(objet,"mdp_modif_emp");
pt6=lookup_widget(objet,"label_mdp_modif_emp");
pt7=lookup_widget(objet,"sexe_modif_emp");
pt8=lookup_widget(objet,"label_sexe_modif_emp");
pt9=lookup_widget(objet,"ddn_modif_emp");
pt10=lookup_widget(objet,"label_ddn_modif_emp");

pt11=lookup_widget(objet,"tel_modif_emp");
pt12=lookup_widget(objet,"label_tel_modif_emp");
pt13=lookup_widget(objet,"adresse_modif_emp");
pt14=lookup_widget(objet,"label_adresse_modif_emp");
pt15=lookup_widget(objet,"mail_modif_emp");
pt16=lookup_widget(objet,"label_mail_modif_emp");

strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
pt=lookup_widget(objet,"label_sortie_valid");
test=E_trouve(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		E_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10,pt11,pt12,pt13,pt14,pt15,pt16);

		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant non existant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_RBRbutton_enr_modif_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[60],ch_value[20],id[20],ch[70]; int e,test;

	GtkWidget *element,*val,*identif,*pt;
GtkWidget *pt1,*pt2,*pt3,*pt4,*pt5,*pt6,*pt7,*pt8,*pt9,*pt10,*pt11,*pt12,*pt13,*pt14,*pt15,*pt16;
pt1=lookup_widget(objet,"nom_modif_emp");
pt2=lookup_widget(objet,"label_nom_modif_emp");
pt3=lookup_widget(objet,"prenom_modif_emp");
pt4=lookup_widget(objet,"label_prenom_modif_emp");
pt5=lookup_widget(objet,"mdp_modif_emp");
pt6=lookup_widget(objet,"label_mdp_modif_emp");
pt7=lookup_widget(objet,"sexe_modif_emp");
pt8=lookup_widget(objet,"label_sexe_modif_emp");
pt9=lookup_widget(objet,"ddn_modif_emp");
pt10=lookup_widget(objet,"label_ddn_modif_emp");

pt11=lookup_widget(objet,"tel_modif_emp");
pt12=lookup_widget(objet,"label_tel_modif_emp");
pt13=lookup_widget(objet,"adresse_modif_emp");
pt14=lookup_widget(objet,"label_adresse_modif_emp");
pt15=lookup_widget(objet,"mail_modif_emp");
pt16=lookup_widget(objet,"label_mail_modif_emp");

pt=lookup_widget(objet,"label_sortie_modif");

identif=lookup_widget(objet,"entry_emp_modif_identif");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
element=lookup_widget(objet,"combo_info");
val=lookup_widget(objet,"entry_emp_modif_value");

strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));

e=int_ch(ch_element); 

		
strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

test=E_modif(id,e,ch_value);

sprintf(ch,"%d",test);//gtk_label_set_text(GTK_LABEL(pt),ch);

	if (strcmp(ch,"-1")==0)
	 {
		sprintf(ch,"ERREUR: Veuillez verifier la date de naissance.");
		gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	else if (strcmp(ch,"-2")==0)
	 {
		sprintf(ch,"ERREUR: Veuillez verifier le mail.");
		gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	else if (strcmp(ch,"1")==0 && strlen(ch_value)!=0 && strlen(ch_element)!=0 && strlen(id)!=0)
		{ 
		 
		    sprintf(ch,"Modification reussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		E_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10,pt11,pt12,pt13,pt14,pt15,pt16);
				   
		}

	else if (strlen(ch_value)==0 || strlen(ch_element)==0 ||strlen(id)==0)
	{
		sprintf(ch,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	    else
		{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_E_treeview_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* identif;
gchar* nom;
gchar* prenom;
gchar* mdp;
gchar* sexe;
gchar* jj;
gchar* mm;
gchar* aa;
gchar* tel;
gchar* adresse;
gchar* mail;
employe e;
GtkWidget* window_modif,*pt;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&identif,1,&nom, 2,&prenom, 3,&mdp,4,&sexe,5,&jj,6,&mm,7,&aa,8,&tel,9,&adresse,10,&mail,-1);

//ouvrir la fenetre de modification
window_modif=create_window_modif();
gtk_widget_show(window_modif);

    
pt=lookup_widget(window_modif,"entry_emp_modif_identif");
gtk_entry_set_text(GTK_ENTRY(pt),identif);



E_afficher(treeview);



}
}


void
on_button_ajouter_emp_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f; employe e; char ch[70];
int j,m,a; char chj[6],chm[15],cha[6]; char text[10];
   
    GtkWidget *I,*N,*P,*MDP,*S,*J,*M,*A,*T,*AD,*MAIL,*pt,*pti; 
    GtkWidget* window_ajout;
    window_ajout=lookup_widget(objet,"window_ajout");
   // I=lookup_widget(objet,"entry_ajout_emp_identif");
    N=lookup_widget(objet,"entry_ajout_emp_nom");
    P=lookup_widget(objet,"entry_ajout_emp_prenom");
    MDP=lookup_widget(objet,"entry_ajout_emp_mdp");
    //S=lookup_widget(objet,"entry_ajout_emp_sexe");
   // S=lookup_widget(objet,"comboboxentry1");
	
    //J=lookup_widget(objet,"entry_ajout_emp_jj");
    J=lookup_widget(objet,"spinbutton_jj");
    //M=lookup_widget(objet,"entry_ajout_emp_mm");
    M=lookup_widget(objet,"spinbutton_mm");
    //A=lookup_widget(objet,"entry_ajout_emp_aa");
    A=lookup_widget(objet,"spinbutton_aa");
    T=lookup_widget(objet,"entry_ajout_emp_tel");
    AD=lookup_widget(objet,"entry_ajout_emp_adresse");
    MAIL=lookup_widget(objet,"entry_ajout_emp_mail");
    pt=lookup_widget (objet , "label_sortie");
pti=lookup_widget(objet,"label1_sortie_id_EM");
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(J)); sprintf(chj,"%d",j);
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chm,"%d",m);
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(A)); sprintf(cha,"%d",a);

    sprintf(e.identif,"E%d",E_identif_auto());
    //strcpy(e.identif,gtk_entry_get_text(GTK_ENTRY(I)));
    strcpy(e.nom,gtk_entry_get_text(GTK_ENTRY(N)));
    strcpy(e.prenom,gtk_entry_get_text(GTK_ENTRY(P)));
    strcpy(e.mdp,gtk_entry_get_text(GTK_ENTRY(MDP)));
    //strcpy(e.sexe,gtk_entry_get_text(GTK_ENTRY(S)));
   //strcpy(e.sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(S)));
	resultat(choix,text);
	strcpy(e.sexe,text);
    //strcpy(e.date_de_naiss.jour,gtk_entry_get_text(GTK_ENTRY(J)));
    strcpy(e.date_de_naiss.jour,chj);
    //strcpy(e.date_de_naiss.mois,gtk_entry_get_text(GTK_ENTRY(M)));
    strcpy(e.date_de_naiss.mois,chm);
    //strcpy(e.date_de_naiss.annee,gtk_entry_get_text(GTK_ENTRY(A)));
    strcpy(e.date_de_naiss.annee,cha);
    strcpy(e.tel,gtk_entry_get_text(GTK_ENTRY(T)));
    strcpy(e.adresse,gtk_entry_get_text(GTK_ENTRY(AD)));
    strcpy(e.mail,gtk_entry_get_text(GTK_ENTRY(MAIL)));
 f=fopen("employe.txt","a+"); fclose(f); //pour eviter l'errerur de E_trouve pour l'ajout du premier employe


	sprintf(ch,"%d",E_trouve(e.identif));
	
if( strlen(e.nom)==0 || strlen(e.prenom)==0 || strlen(e.adresse)==0 || strlen(e.mail)==0 || strlen(e.tel)==0 ||strlen(e.mdp)==0)
	

	{

	sprintf(ch,"ERREUR: veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
  
  else 

{
	if (E_verif_mail(e.mail)==0)
	{
		sprintf(ch,"ERREUR: Veuillez vérifier le mail.");
			    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	   else if ( ( strcmp(chj,"30")==0 ||strcmp(chj,"31")==0 ) && strcmp(chm,"2")==0)
	{
		sprintf(ch,"ERREUR: Veuillez vérifier la date de naissance.");
			    gtk_label_set_text(GTK_LABEL(pt),ch);
	}

	   else if (strcmp(ch,"0")==0&& strlen(e.nom)!=0 &&strlen(e.prenom)!=0 &&strlen(e.adresse)!=0 &&strlen(e.mail)!=0 &&strlen(e.tel)!=0 &&strlen(e.mdp)!=0 )
		{ 
		E_ajout(e);
		f=fopen("E_identif.txt","a+");
		fprintf(f,"%s\n",e.identif);
		fclose(f);
		sprintf(ch,"Ajout reussi!\nCet employé a comme identifiant: %s",e.identif);
		gtk_label_set_text(GTK_LABEL(pt),ch);
 gtk_label_set_text(GTK_LABEL(pti),e.identif);
		}
 

	    else
		{
		    sprintf(ch,"ERREUR: employe deja existant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);


		} 

}


  


}


void
on_RBRbutton_cherch_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_cherch, *window ,*E_treeview,*N,*P,*pt;
char nom[20],prenom[20];int test; char ch[50];

N=lookup_widget(objet,"RBRentry_nom_cherch");
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(N)));
P=lookup_widget(objet,"RBRentry_prenom_cherch");
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(P)));
test=E_ajout1(nom,prenom);

window_cherch=lookup_widget(objet,"window_cherch");
gtk_widget_destroy(window_cherch);

window=create_window_consul_cherch();
gtk_widget_show(window);

E_treeview=lookup_widget(window,"E_treeview2");

E_afficher1(E_treeview);
pt=lookup_widget(window,"label_resultat_rech_emp");
sprintf(ch,"%d",test); 

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"nom et prenom existants!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: employe(s) non existant(s).");
		    gtk_label_set_text(GTK_LABEL(pt),ch); 

		} 
}


void
on_radiobutton_femme_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
 if (gtk_toggle_button_get_active(togglebutton))
	choix[1]=1;
else
	choix[1]=0;
}


void
on_radiobutton_homme_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	choix[0]=1;
else
	choix[0]=0;
}

////////////////gestion equipements///////////////////////////////////////////
void
on_RBRbutton_gest_ajout_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"window_gestion_eq");
gtk_widget_destroy(window0);

window=create_window_ajout_eq();
gtk_widget_show(window);
}


void
on_RBRbutton_gest_modif_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"window_gestion_eq");
gtk_widget_destroy(window0);

window=create_window_modif_eq();
gtk_widget_show(window);
}


void
on_RBRbutton_gest_consul_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajout, *window_consul ,*EQ_treeview,*window_gestion;

window_gestion=lookup_widget(objet,"window_gestion_eq");
gtk_widget_destroy(window_gestion);

window_consul=create_window_consul_eq();
gtk_widget_show(window_consul);

EQ_treeview=lookup_widget(window_consul,"EQ_treeview");

EQ_afficher(EQ_treeview);
}


void
on_RBRbutton_gest_supp_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"window_gestion_eq");
gtk_widget_destroy(window0);

window=create_window_supp_eq();
gtk_widget_show(window);
}


void
on_RBRbutton_gest_cherch_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"window_gestion_eq");
gtk_widget_destroy(window0);

window=create_window_cherch_eq();
gtk_widget_show(window);
}


void
on_RBRcalendar_ajout_equip_day_selected
                                        (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
gtk_calendar_get_date(calendar,&j,&m,&a);
m+=1;
}


void
on_button_ajouter_equip_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
equip e; FILE* f; char ch[70]=""; char date[15]; char text[10]; char x[5];
 
   
    GtkWidget *I,*L,*pt;
    I=lookup_widget(objet,"entry_id_equip");
    L=lookup_widget(objet,"entry_libelle_equip");

    pt=lookup_widget (objet , "label_sortie_ajout_equip");
    
    strcpy(e.identif,gtk_entry_get_text(GTK_ENTRY(I)));
	 //sprintf(e.identif,"EQ%d",EQ_identif_auto());
    strcpy(e.libelle,gtk_entry_get_text(GTK_ENTRY(L)));

    EQ_resultat(EQ_choix,text);
    strcpy(e.descrip,text);

    sprintf(date,"%d/%d/%d",j,m,a);
    strcpy(e.date,date); 
 f=fopen("equip.txt","a+"); fclose(f); //pour eviter l'errerur d'ouverture du fichier en mode "r" de EQ_trouve pour l'ajout du premier equipement
	sprintf(x,"%d",EQ_trouve(e.identif));
	
    
	   if (strcmp(x,"0")==0 && strlen(e.identif)!=0 && strlen(e.libelle)!=0 && strlen(e.date)!=5 )
		{ 
		    EQ_ajout(e);
		/*f=fopen("EQ_identif.txt","a+");
		fprintf(f,"%s\n",e.identif);
		fclose(f);
		    sprintf(ch,"Ajout reussi!\nCet équipement a comme identifiant: %s",e.identif);*/
 		sprintf(ch,"Ajout reussi!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	else if (strlen(e.identif)==0 || strlen(e.libelle)==0 || strlen(e.date)==5)
	{
		
		    sprintf(ch,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		
		
	}
	    else
		if (strlen(e.date)==5 )
		{
		sprintf(ch,"ERREUR: Veuillez sélectionner une date.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	     else{
		    sprintf(ch,"ERREUR: Equipement déjà existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_button_afficher_equip_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajout, *window_consul ,*EQ_treeview,*window2,*window3,*window4,*window5,*window6;

window_ajout=lookup_widget(objet,"window_ajout_eq");
gtk_widget_destroy(window_ajout);

window2=lookup_widget(objet,"window_supp_eq");
gtk_widget_destroy(window2);

window4=lookup_widget(objet,"window_modif_eq");
gtk_widget_destroy(window4);
window5=lookup_widget(objet,"window_cherch_eq");
gtk_widget_destroy(window5);

window_consul=create_window_consul_eq();
gtk_widget_show(window_consul);

EQ_treeview=lookup_widget(window_consul,"EQ_treeview");

EQ_afficher(EQ_treeview);
}


void
on_button_retour_acceuil_equip_clicked (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1,* window2,* window3,* window4,* window5,*window6;
window1=lookup_widget(objet,"window_ajout_eq");
gtk_widget_destroy(window1);
window2=lookup_widget(objet,"window_modif_eq");
gtk_widget_destroy(window2);
window3=lookup_widget(objet,"window_supp_eq");
gtk_widget_destroy(window3);
window4=lookup_widget(objet,"window_consul_eq");
gtk_widget_destroy(window4);
window5=lookup_widget(objet,"window_cherch_eq");
gtk_widget_destroy(window5);

window6=create_window_gestion_eq();
gtk_widget_show(window6);
}


void
on_button_supp_eq_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* identif,*window_supp;
GtkWidget* pt;
 char id[20], ch[40]; int test;
window_supp=lookup_widget(objet,"window_supp_eq");
identif=lookup_widget(objet,"entry_id_supp_eq");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));
pt=lookup_widget (objet , "label_sortie_supp_eq");
test=EQ_supprimer(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression reussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_button_valider_id_equip_modif_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
char id[20]; int test; char ch[40];
GtkWidget* identif=lookup_widget(objet,"entry_eq_id_modif");
GtkWidget* pt=lookup_widget(objet,"label_sortie_valider_eq");
GtkWidget* pt1=lookup_widget(objet,"libelle_eq");
GtkWidget* pt2=lookup_widget(objet,"label_libelle_eq");
GtkWidget* pt3=lookup_widget(objet,"etat_eq");
GtkWidget* pt4=lookup_widget(objet,"label_etat_eq");
GtkWidget* pt5=lookup_widget(objet,"date_achat_eq");
GtkWidget* pt6=lookup_widget(objet,"label_date_achat_eq");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));  

test=EQ_trouve(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		EQ_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6);
		
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_button_enr_modif_eq_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[20]="",ch_value[20]="",id[20],ch[50]; int e,test;

	GtkWidget *element,*val,*identif,*pt,*pt1,*pt2,*pt3,*pt4,*pt5,*pt6;
pt1=lookup_widget(objet,"libelle_eq");
pt2=lookup_widget(objet,"label_libelle_eq");
pt3=lookup_widget(objet,"etat_eq");
pt4=lookup_widget(objet,"label_etat_eq");
pt5=lookup_widget(objet,"date_achat_eq");
pt6=lookup_widget(objet,"label_date_achat_eq");

pt=lookup_widget(objet,"label_sortie_eq_modif");
identif=lookup_widget(objet,"entry_eq_id_modif");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
element=lookup_widget(objet,"combo_info_eq_modif");
val=lookup_widget(objet,"entry_eq_value_modif");

strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));
//c=int_ch(ch_element); //sprintf(ch,"%d",e);
//strcpy(ch,ch_element[0]);
//sscanf(&ch,"%d",e); sprintf(ch,"%d",e);
e=int_ch(ch_element); //sprintf(ch," %d",e);
		  //  gtk_label_set_text(GTK_LABEL(pt),ch);
strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

test=EQ_modif(id,e,ch_value);

sprintf(ch,"%d",test); gtk_label_set_text(GTK_LABEL(pt),ch);

    
	    if (strcmp(ch,"1")==0 && strlen(ch_value)!=0 && strlen(ch_element)!=0)
		{ 
		 
		    sprintf(ch,"Modification reussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		EQ_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6);
			
		}
	    else
		if (strlen(ch_value)==0 || strlen(ch_element)==0)
	{
		sprintf(ch,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	     else{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_EQ_treeview_row_activated           (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* identif;
gchar* libelle;
gchar* descrip;
gchar* date;

equip e;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);
GtkWidget* window_modif,*pt;
if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&identif,1,&libelle, 2,&descrip, 3,&date,-1);
}
//ouvrir la fenetre de modification
window_modif=create_window_modif_eq();
gtk_widget_show(window_modif);

    
pt=lookup_widget(window_modif,"entry_eq_id_modif");
gtk_entry_set_text(GTK_ENTRY(pt),identif);


//appel de la fct de suppression
//E_supprimer(identif);
//màj du treeview
EQ_afficher(treeview);

}


void
on_RBRbutton_cherch_eq_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_cherch, *window ,*EQ_treeview,*L,*pt;
char libelle[20],prenom[20];int test; char ch[50];

L=lookup_widget(objet,"entry_libelle_cherch_eq");
strcpy(libelle,gtk_entry_get_text(GTK_ENTRY(L)));

test=EQ_ajout1(libelle);
window_cherch=lookup_widget(objet,"window_cherch_eq");
gtk_widget_destroy(window_cherch);

window=create_window_cherch_eq();
gtk_widget_show(window);

EQ_treeview=lookup_widget(window,"EQ_treeview_cherch");

EQ_afficher1(EQ_treeview);
pt=lookup_widget(window,"label_resultat_cherch_eq");
sprintf(ch,"%d",test); 
    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"equipement(s) existant(s)!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: equipement(s) non existant(s).");
		    gtk_label_set_text(GTK_LABEL(pt),ch); 

		} 

}



////////////////////////-fin gestion equipements-///////////////////////////////
void
on_button_goto_gest_eq_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion,*windowd;
window=create_window_gestion_eq();
gtk_widget_show(window);
windowd=lookup_widget(objet,"window_princ_espace_emp");
gtk_widget_destroy(windowd);
}





void
on_button_goto_gest_affect_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion,*windowd;
window=create_window_gestion_aff();
gtk_widget_show(window);
windowd=lookup_widget(objet,"window_princ_espace_emp");
gtk_widget_destroy(windowd);

}

/*
void
on_radiobutton_mauvais_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	EQ_choix[2]=1;
else
	EQ_choix[2]=0;
}


void
on_radiobutton_moyen_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	EQ_choix[1]=1;
else
	EQ_choix[1]=0;
}


void
on_radiobutton_bon_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	EQ_choix[0]=1;
else
	EQ_choix[0]=0;
}*/




void
on_gestion_plantation_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion,*windowd;
window=create_menu_plantation();
gtk_widget_show(window);
windowd=lookup_widget(objet,"window_princ_espace_emp");
gtk_widget_destroy(windowd);
}



/////////////////////////////////////////gestion plantation//////////////////////////////////////////////////

void
on_ajout_plante_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowajouter;

GtkWidget *windowpl1,* windowpl2,* windowpl3,* windowpl4,* windowpl5 ;
windowpl1=lookup_widget(objet,"menu_plantation");
gtk_widget_destroy(windowpl1);

windowpl2=lookup_widget(objet,"modifier_plante");
gtk_widget_destroy(windowpl2);
windowpl3=lookup_widget(objet,"suppression_plante");
gtk_widget_destroy(windowpl3);
windowpl4=lookup_widget(objet,"affichage_plantes");
gtk_widget_destroy(windowpl4);
windowpl5=lookup_widget(objet,"window_affichage_exep");
gtk_widget_destroy(windowpl5);

windowajouter=create_ajouter_plante();
gtk_widget_show (windowajouter);
}


void
on_modifier_plante_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowmodifier ;

GtkWidget *windowpl1,* windowpl2,* windowpl3,* windowpl4,* windowpl5;

windowpl1=lookup_widget(objet,"menu_plantation");
gtk_widget_destroy(windowpl1);

windowpl2=lookup_widget(objet,"ajouter_plante");
gtk_widget_destroy(windowpl2);
windowpl3=lookup_widget(objet,"suppression_plante");
gtk_widget_destroy(windowpl3);
windowpl4=lookup_widget(objet,"affichage_plantes");
gtk_widget_destroy(windowpl4);
windowpl5=lookup_widget(objet,"window_affichage_exep");
gtk_widget_destroy(windowpl5);
windowmodifier=create_modifier_plante();
gtk_widget_show (windowmodifier);
}


void
on_supprimer_plante_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowsupp;

GtkWidget *windowpl1,* windowpl2,* windowpl3,* windowpl4,* windowpl5 ;
windowpl1=lookup_widget(objet,"menu_plantation");
gtk_widget_destroy(windowpl1);

windowpl3=lookup_widget(objet,"ajouter_plante");
gtk_widget_destroy(windowpl3);
windowpl2=lookup_widget(objet,"modifier_plante");
gtk_widget_destroy(windowpl2);

windowpl4=lookup_widget(objet,"affichage_plantes");
gtk_widget_destroy(windowpl4);
windowpl5=lookup_widget(objet,"window_affichage_exep");
gtk_widget_destroy(windowpl5);

windowsupp=create_suppression_plante();
gtk_widget_show (windowsupp);
}


void
on_afficher_plante_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowaffich ;
GtkWidget *fenetre_ajout;
GtkWidget *treeview1;


GtkWidget *windowpl1,* windowpl2,* windowpl3,* windowpl4,* windowpl5;

windowpl1=lookup_widget(objet,"menu_plantation");
gtk_widget_destroy(windowpl1);

windowpl4=lookup_widget(objet,"ajouter_plante");
gtk_widget_destroy(windowpl4);
windowpl2=lookup_widget(objet,"modifier_plante");
gtk_widget_destroy(windowpl2);
windowpl3=lookup_widget(objet,"suppression_plante");
gtk_widget_destroy(windowpl3);

windowpl5=lookup_widget(objet,"window_affichage_exep");
gtk_widget_destroy(windowpl5);



windowaffich=lookup_widget(objet,"affichage_plantes");
windowaffich=create_affichage_plante();
gtk_widget_show (windowaffich);


treeview1=lookup_widget(windowaffich,"treeviewpl1");
afficher_plant(treeview1);

}

//////////////////////////////////////////////////////////////
void
on_valider_plante_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f; plante p; char ch[50];
int j,m,a,s; char chj[20],chm[20],cha[20],chs[20],text[20];
   
    GtkWidget *C,*N,*T,*S,*J,*M,*A,*E,*pt;
    GtkWidget *ajouter_plante;
    ajouter_plante=lookup_widget(objet,"ajouter_plante");
    C=lookup_widget(objet,"entry_code_plante");
    N=lookup_widget(objet,"nom_plante");
    S=lookup_widget(objet,"spinbutton_stock");
    T=lookup_widget(objet,"combobox_type");
    J=lookup_widget(objet,"spinbutton_j");
    M=lookup_widget(objet,"spinbutton_m");
    A=lookup_widget(objet,"spinbutton_a");

    pt=lookup_widget (objet ,"sortie_ajout_plantation");
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(J)); sprintf(chj,"%d",j);
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chm,"%d",m);
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(A)); sprintf(cha,"%d",a);
s=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(S)); sprintf(chs,"%d",s);
strcpy(p.code_plant,gtk_entry_get_text(GTK_ENTRY(C)));
strcpy(p.nom,gtk_entry_get_text(GTK_ENTRY(N)));
strcpy(p.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(T)));

strcpy(p.date.jour,chj);
strcpy(p.date.mois,chm);
strcpy(p.date.annee,cha);
strcpy(p.quantite,chs);


	
	
    
	    if (P_trouve(p.code_plant)==0)
		{ 
		    ajouter_plant (p);
		    sprintf(ch,"Ajout reussi");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else if (P_trouve(p.code_plant)!=0)
		{
		    sprintf(ch,"ERREUR: plante deja existante");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		}

		else 
{ 
		    ajouter_plant (p);
		    sprintf(ch,"Ajout reussi");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}

}

///////////////////////////////////////////////////////////////////
void
on_retourpl1_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *menuprincipal ;


GtkWidget *windowpl1,* windowpl2,* windowpl3,* windowpl4,* windowpl5;
windowpl1=lookup_widget(objet,"ajouter_plante");
gtk_widget_destroy(windowpl1);
windowpl2=lookup_widget(objet,"modifier_plante");
gtk_widget_destroy(windowpl2);
windowpl3=lookup_widget(objet,"suppression_plante");
gtk_widget_destroy(windowpl3);
windowpl4=lookup_widget(objet,"affichage_plantes");
gtk_widget_destroy(windowpl4);
windowpl5=lookup_widget(objet,"window_affichage_exep");
gtk_widget_destroy(windowpl5);


menuprincipal=create_menu_plantation();
gtk_widget_show (menuprincipal);

}


void
on_valid_modif_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[20],ch_value[20],id[20],ch[40]; int e,test;

	GtkWidget *element,*val,*identif,*pt;

pt=lookup_widget(objet,"label_sortie_modif_P");
identif=lookup_widget(objet,"code_modif");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
element=lookup_widget(objet,"infoP_modif");
val=lookup_widget(objet,"entry_modifP");

strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));
//c=int_ch(ch_element); //sprintf(ch,"%d",e);
//strcpy(ch,ch_element[0]);
//sscanf(&ch,"%d",e); sprintf(ch,"%d",e);
e=int_ch(ch_element); //sprintf(ch," %d",e);
		  //  gtk_label_set_text(GTK_LABEL(pt),ch);
strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

test=modif_plantation(id,e,ch_value);

sprintf(ch,"%d",test);//gtk_label_set_text(GTK_LABEL(pt),ch);

    
	    if (strcmp(ch,"1")==0)
		{ 
		 
		    sprintf(ch,"Modification reussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 




/*GtkWidget *windowaffich;
windowaffich=create_affichage_plantes();
gtk_widget_show (windowaffich);*/
}


void
on_retourpl2_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *menuprincipal1;

GtkWidget *windowpl1,* windowpl2,* windowpl3,* windowpl4,* windowpl5;
windowpl1=lookup_widget(objet,"ajouter_plante");
gtk_widget_destroy(windowpl1);
windowpl2=lookup_widget(objet,"modifier_plante");
gtk_widget_destroy(windowpl2);
windowpl3=lookup_widget(objet,"suppression_plante");
gtk_widget_destroy(windowpl3);
windowpl4=lookup_widget(objet,"affichage_plantes");
gtk_widget_destroy(windowpl4);
windowpl5=lookup_widget(objet,"window_affichage_exep");
gtk_widget_destroy(windowpl5);

menuprincipal1=create_menu_plantation();

gtk_widget_show (menuprincipal1);
}


void
on_valider_supp_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* code_plante,*window_supp;
GtkWidget* pt;
 char id[20], ch[50]; int test;
window_supp=lookup_widget(objet,"suppression_plante");
code_plante=lookup_widget(objet,"code_supp");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(code_plante)));
pt=lookup_widget (objet , "label_sortie_supp");
test=supprimer_plant(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression reussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: ID inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


/*
windowaffich=create_affichage_plantes();
gtk_widget_show (windowaffich);*/



on_retourpl3_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *menuprincipal2;

GtkWidget *windowpl1,* windowpl2,* windowpl3,* windowpl4,* windowpl5;
windowpl1=lookup_widget(objet,"ajouter_plante");
gtk_widget_destroy(windowpl1);
windowpl2=lookup_widget(objet,"modifier_plante");
gtk_widget_destroy(windowpl2);
windowpl3=lookup_widget(objet,"suppression_plante");
gtk_widget_destroy(windowpl3);
windowpl4=lookup_widget(objet,"affichage_plantes");
gtk_widget_destroy(windowpl4);
windowpl5=lookup_widget(objet,"window_affichage_exep");
gtk_widget_destroy(windowpl5);

menuprincipal2=create_menu_plantation();
gtk_widget_show (menuprincipal2);
}


void
on_treeviewpl1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

GtkTreeIter iter;
gchar* code_plant;
gchar* nom;
gchar* type;
gchar* jj;
gchar* mm;
gchar* aa;
gchar* quantite;
plante p;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);
GtkWidget* window_modif,*pt;

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&code_plant,1,&nom,2,&type,3,&jj,4,&mm,5,&aa,6,&quantite,-1);






window_modif=create_modifier_plante();
gtk_widget_show(window_modif);

pt=lookup_widget(window_modif,"code_modif");
gtk_entry_set_text(GTK_ENTRY(pt),code_plant);





//màj du treeview
afficher_plant(treeview);



}
}





////////////////////////////////////

void
on_retourpl4_clicked                     (GtkWidget       *objet,
                                          gpointer         user_data)
{
GtkWidget *menuprincipal3,*aff ;
GtkWidget *windowpl1,* windowpl2,* windowpl3,* windowpl4,* windowpl5;
windowpl1=lookup_widget(objet,"ajouter_plante");
gtk_widget_destroy(windowpl1);
windowpl2=lookup_widget(objet,"modifier_plante");
gtk_widget_destroy(windowpl2);
windowpl3=lookup_widget(objet,"suppression_plante");
gtk_widget_destroy(windowpl3);
windowpl4=lookup_widget(objet,"affichage_plantes");
gtk_widget_destroy(windowpl4);
windowpl5=lookup_widget(objet,"window_affichage_exep");
gtk_widget_destroy(windowpl5);
menuprincipal3=create_menu_plantation();
gtk_widget_show (menuprincipal3);
}


/////////////////////////////////////////////////////////////////

void
on_recherche_code_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* identif,*pt; char id [25],ch[40]; int test;
char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
GtkWidget *ty, *n, *jj, *mm, *aa, *et, *st;
FILE* f;
f=fopen("plante.txt","r");
identif=lookup_widget(objet,"code_modif");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
ty=lookup_widget(objet,"type_sortie");
n=lookup_widget(objet,"nom_sortie");
jj=lookup_widget(objet,"jour_sortie");
mm=lookup_widget(objet,"mois_sortie");
aa=lookup_widget(objet,"annee_sortie");
st=lookup_widget(objet,"stock_sortie");
pt=lookup_widget(objet,"label_sortie_valid");

	if (f!=NULL)
{
         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
            {
	if (strcmp(id,ch1)==0)
	{
			 sprintf(ch,"Identifiant existant!");
		    	 gtk_label_set_text(GTK_LABEL(pt),ch);

			gtk_label_set_text(GTK_LABEL(n),ch2);
			gtk_label_set_text(GTK_LABEL(ty),ch3);
			gtk_label_set_text(GTK_LABEL(jj),ch4);
			gtk_label_set_text(GTK_LABEL(mm),ch5);
			gtk_label_set_text(GTK_LABEL(aa),ch6);
			gtk_label_set_text(GTK_LABEL(st),ch7);
	}	}
	fclose(f);
		}
	    else
		{
		    sprintf(ch,"ERREUR:non existant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}




/////////////////////////////////////////////////////////////////


void
on_button_cherche_nombre_plantation_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f; plante p; char ch[50];
int m,a,test; char chm[20],cha[20],chnb[20];
char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
int nb=0;
   
    GtkWidget *J,*M,*A,*pt;
    GtkWidget *affichage;
    affichage=lookup_widget(objet,"affichage_plantes");

    M=lookup_widget(objet,"spinbutton_mois_chercher");
    A=lookup_widget(objet,"spinbutton_annee_chercher");

    pt=lookup_widget (objet ,"sortie_nombre_de_plantation");

m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chm,"%d",m);
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(A)); sprintf(cha,"%d",a);
test=pl_ajout1(chm,cha);
f=fopen("plante.txt","r");
if (f!=NULL)
{
         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
            {
	if (strcmp(chm,ch5)==0&&strcmp(cha,ch6)==0)

	{

		nb++ ;
	}
}}
fclose(f);
		if (nb==0)
{
		    sprintf(ch,"Pas de plantation cette mois");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
}

else	{ 
sprintf(chnb,"%d",nb);
gtk_label_set_text(GTK_LABEL(pt),chnb);
	}
}

/////////////////////////////////////////////////////////////////
void
on_afficher_nbr_plantation_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *windowaffich ;
GtkWidget *fenetre_ajout;
GtkWidget *treeview2;


GtkWidget *windowpl1,* windowpl2,* windowpl3,* windowpl4,* windowpl5;
windowpl1=lookup_widget(objet,"ajouter_plante");
gtk_widget_destroy(windowpl1);
windowpl2=lookup_widget(objet,"modifier_plante");
gtk_widget_destroy(windowpl2);
windowpl3=lookup_widget(objet,"suppression_plante");
gtk_widget_destroy(windowpl3);
windowpl4=lookup_widget(objet,"affichage_plantes");
gtk_widget_destroy(windowpl4);
windowpl5=lookup_widget(objet,"menu_plantation");
gtk_widget_destroy(windowpl5);




windowaffich=lookup_widget(objet,"window_affichage_exep");
windowaffich=create_window_affichage_exep();
gtk_widget_show (windowaffich);


treeview2=lookup_widget(windowaffich,"treeview_aff");
afficher_plant1(treeview2);


/*
GtkWidget *window_affich1, *affichage ,*E_treeview,*M,*A,*pt;
int test; char ch[40];
char chm[20],cha[20];

M=lookup_widget(objet,"spinbutton_mois_chercher");
A=lookup_widget(objet,"spinbutton_annee_chercher");

M=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chm,"%d",M);
A=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(A)); sprintf(cha,"%d",A);

test=pl_ajout1(chm,cha);

window_affich1=lookup_widget(objet,"affichage_plantes");
gtk_widget_destroy(window_affich1);

affichage=create_window_affichage_exep();
gtk_widget_show(affichage);

E_treeview=lookup_widget(affichage,"treeview_aff");

afficher_plant1(E_treeview);
pt=lookup_widget(objet,"sortie_affichage_nombre_plantation");


    
	    if (test==1)
		{ 
		    
		    sprintf(ch,"Plantation pour cette mois!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"Pas de plantation cette mois");
		    gtk_label_set_text(GTK_LABEL(pt),ch); 

		}*/
}

/////////////////////////////////////////////////////////////////
void
on_treeview_aff_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* code_plant;
gchar* nom;
gchar* type;
gchar* jj;
gchar* mm;
gchar* aa;
gchar* quantite;
plante p;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);
GtkWidget* window_modif,*pt;

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,1,&code_plant,2,&nom,3,&type,4,&jj,5,&mm,6,&aa,7,&quantite,-1);


strcpy(p.code_plant,code_plant);
strcpy(p.nom,nom);
strcpy(p.type,type);
strcpy(p.date.jour,jj);
strcpy(p.date.mois,mm);
strcpy(p.date.annee,aa);
strcpy(p.quantite,quantite);

//appel de la fct de suppression
supprimer_plant(code_plant);


//màj du treeview
afficher_plant1(treeview);



}
}


void
on_retour_affichage_exep_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *menuprincipal ;

GtkWidget *windowpl1,* windowpl2,* windowpl3,* windowpl4,* windowpl5;
windowpl1=lookup_widget(objet,"ajouter_plante");
gtk_widget_destroy(windowpl1);
windowpl2=lookup_widget(objet,"modifier_plante");
gtk_widget_destroy(windowpl2);
windowpl3=lookup_widget(objet,"suppression_plante");
gtk_widget_destroy(windowpl3);
windowpl4=lookup_widget(objet,"affichage_plantes");
gtk_widget_destroy(windowpl4);
windowpl5=lookup_widget(objet,"window_affichage_exep");
gtk_widget_destroy(windowpl5);

menuprincipal=create_menu_plantation();
gtk_widget_show (menuprincipal);
}


/////////////////////////////////////////gestion financiere//////////////////////////////////////////////////








void
on_gestion_financiere_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion,*windowd;
window=create_acceuil_finance();
gtk_widget_show(window);
windowd=lookup_widget(objet,"window_princ_espace_emp");
gtk_widget_destroy(windowd);
}




void
on_ajouter_transac_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *ajouter_transac ;

GtkWidget *windowf1,* windowf2,* windowf3,* windowf4,* windowf5 ;
windowf1=lookup_widget(objet,"acceuil_finance");
gtk_widget_destroy(windowf1);
windowf2=lookup_widget(objet,"modif_transac");
gtk_widget_destroy(windowf2);
windowf3=lookup_widget(objet,"supprimer_transac");
gtk_widget_destroy(windowf3);
windowf4=lookup_widget(objet,"affichage_transac");
gtk_widget_destroy(windowf4);
windowf5=lookup_widget(objet,"affichage_exep");
gtk_widget_destroy(windowf5);

ajouter_transac=create_ajout_transac();
gtk_widget_show (ajouter_transac);
}

////////////////////////////////////////////////////////////////////////
void
on_modifier_transac_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *modifiertransac ;

GtkWidget *windowf1,* windowf2,* windowf3,* windowf4,* windowf5 ;
windowf1=lookup_widget(objet,"acceuil_finance");
gtk_widget_destroy(windowf1);
windowf2=lookup_widget(objet,"ajout_transac");
gtk_widget_destroy(windowf2);
windowf3=lookup_widget(objet,"supprimer_transac");
gtk_widget_destroy(windowf3);
windowf4=lookup_widget(objet,"affichage_transac");
gtk_widget_destroy(windowf4);
windowf5=lookup_widget(objet,"affichage_exep");
gtk_widget_destroy(windowf5);

modifiertransac=create_modif_transac();
gtk_widget_show (modifiertransac);
}

////////////////////////////////////////////////////////////////////////
void
on_supprimer_transac_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *supprimertransac ;

GtkWidget *windowf1,* windowf2,* windowf3,* windowf4,* windowf5 ;
windowf1=lookup_widget(objet,"acceuil_finance");
gtk_widget_destroy(windowf1);
windowf2=lookup_widget(objet,"modif_transac");
gtk_widget_destroy(windowf2);
windowf3=lookup_widget(objet,"ajout_transac");
gtk_widget_destroy(windowf3);
windowf4=lookup_widget(objet,"affichage_transac");
gtk_widget_destroy(windowf4);
windowf5=lookup_widget(objet,"affichage_exep");
gtk_widget_destroy(windowf5);

supprimertransac=create_supprimer_transac();
gtk_widget_show (supprimertransac);
}

////////////////////////////////////////////////////////////////////////
void
on_afficher_transac_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowaffich ;
GtkWidget *fenetre_ajout;
GtkWidget *treeview1;


windowaffich=lookup_widget(objet,"affichage_transac");

GtkWidget *windowf1,* windowf2,* windowf3,* windowf4,* windowf5 ;
windowf1=lookup_widget(objet,"acceuil_finance");
gtk_widget_destroy(windowf1);
windowf2=lookup_widget(objet,"modif_transac");
gtk_widget_destroy(windowf2);
windowf3=lookup_widget(objet,"ajout_transac");
gtk_widget_destroy(windowf3);
windowf4=lookup_widget(objet,"supprimer_transac");
gtk_widget_destroy(windowf4);
windowf5=lookup_widget(objet,"affichage_exep");
gtk_widget_destroy(windowf5);

windowaffich=create_affichage_transac();
gtk_widget_show (windowaffich);

treeview1=lookup_widget(windowaffich,"treeviewf1");
afficher_transac(treeview1);
}

////////////////////////////////////////////////////////////////////////
void
on_button_retour1_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *menuprincipal2 ;

GtkWidget *windowf1,* windowf2,* windowf3,* windowf4,* windowf5 ;
windowf1=lookup_widget(objet,"affichage_transac");
gtk_widget_destroy(windowf1);
windowf2=lookup_widget(objet,"modif_transac");
gtk_widget_destroy(windowf2);
windowf3=lookup_widget(objet,"ajout_transac");
gtk_widget_destroy(windowf3);
windowf4=lookup_widget(objet,"supprimer_transac");
gtk_widget_destroy(windowf4);
windowf5=lookup_widget(objet,"affichage_exep");
gtk_widget_destroy(windowf5);
menuprincipal2=create_acceuil_finance();
gtk_widget_show (menuprincipal2);
}

////////////////////////////////////////////////////////////////////////
void
on_button_valider_transac_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f;transaction T; char ch[50];
int j,m,a,mon; char chj[20],chm[20],cha[20],chs[20],text[20];
   
    GtkWidget *C,*N,*O,*MON,*J,*M,*A,*E,*pt,*Ty;
    GtkWidget *ajouter_transac;
    ajouter_transac=lookup_widget(objet,"ajout_transac");
    C=lookup_widget(objet,"entry_code_transac");
    N=lookup_widget(objet,"entry_nom_transac");
    MON=lookup_widget(objet,"entry_montant_facture");
    O=lookup_widget(objet,"entry_objet_transac");
    J=lookup_widget(objet,"spinbutton_jour");
    M=lookup_widget(objet,"spinbutton_mois");
    A=lookup_widget(objet,"spinbutton_annee");
    Ty=lookup_widget(objet,"combobox_type_facture");


    pt=lookup_widget (objet ,"sortie_ajouter_transac");
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(J)); sprintf(chj,"%d",j);
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chm,"%d",m);
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(A)); sprintf(cha,"%d",a);
strcpy(T.code_transac,gtk_entry_get_text(GTK_ENTRY(C)));
strcpy(T.nom,gtk_entry_get_text(GTK_ENTRY(N)));
strcpy(T.objet,gtk_entry_get_text(GTK_ENTRY(O)));
strcpy(T.montant,gtk_entry_get_text(GTK_ENTRY(MON)));
strcpy(T.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Ty)));


strcpy(T.date.jour,chj);
strcpy(T.date.mois,chm);
strcpy(T.date.annee,cha);


		
	
    
	    if (T_trouve(T.code_transac)==0)
		{ 
		    ajouter_transaction (T);
		    sprintf(ch,"Ajout reussi");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: transaction deja existant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		}
}

////////////////////////////////////////////////////////////////////////
void
on_button_chercher_modif_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* identif,*pt; char id [25],ch[40]; int test;
char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20];
GtkWidget *ty, *n, *jj, *mm, *aa, *ob, *mon;
FILE* f;
f=fopen("transac.txt","r");
identif=lookup_widget(objet,"entry_code_modif");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
ty=lookup_widget(objet,"sortie_type_transac");
n=lookup_widget(objet,"sortie_nom_transac");
jj=lookup_widget(objet,"sortie_jour_transac");
mm=lookup_widget(objet,"sortie_mois_transac");
aa=lookup_widget(objet,"sortie_annee_transac");
ob=lookup_widget(objet,"sortie_objet_transac");
mon=lookup_widget(objet,"sortie_montant_transac");
pt=lookup_widget(objet,"sortie_rechercher_modif");

	if (f!=NULL)
{

         while (fscanf (f, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8)!=EOF)
            {
	if (strcmp(id,ch1)==0)
	{
			sprintf(ch,"Identifiant existant!");
		    	gtk_label_set_text(GTK_LABEL(pt),ch);

			gtk_label_set_text(GTK_LABEL(n),ch2);
			gtk_label_set_text(GTK_LABEL(ty),ch8);
			gtk_label_set_text(GTK_LABEL(ob),ch6);
			gtk_label_set_text(GTK_LABEL(jj),ch3);
			gtk_label_set_text(GTK_LABEL(mm),ch4);
			gtk_label_set_text(GTK_LABEL(aa),ch5);
			gtk_label_set_text(GTK_LABEL(mon),ch7);
		}}
	fclose(f);
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant non existant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}

////////////////////////////////////////////////////////////////////////
void
on_button_valider_modif_transac_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[20],ch_value[20],id[20],ch[50]; int e,test;

	GtkWidget *element,*val,*identif,*pt;

pt=lookup_widget(objet,"sortie_information_modif");
identif=lookup_widget(objet,"entry_code_modif");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
element=lookup_widget(objet,"combobox_modif");
val=lookup_widget(objet,"entry_new_val");

strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));

e=int_ch(ch_element); 

strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

test=modif_transac(id,e,ch_value);

sprintf(ch,"%d",test);//gtk_label_set_text(GTK_LABEL(pt),ch);

    
	    if (strcmp(ch,"1")==0)
		{ 
		 
		    sprintf(ch,"Modification reussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 


}

////////////////////////////////////////////////////////////////////////
void
on_button_retour2_modif_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *menuprincipal1 ;

GtkWidget *windowf1,* windowf2,* windowf3,* windowf4,* windowf5 ;
windowf1=lookup_widget(objet,"affichage_transac");
gtk_widget_destroy(windowf1);
windowf2=lookup_widget(objet,"modif_transac");
gtk_widget_destroy(windowf2);
windowf3=lookup_widget(objet,"ajout_transac");
gtk_widget_destroy(windowf3);
windowf4=lookup_widget(objet,"supprimer_transac");
gtk_widget_destroy(windowf4);
windowf5=lookup_widget(objet,"affichage_exep");
gtk_widget_destroy(windowf5);
menuprincipal1=create_acceuil_finance();
gtk_widget_show (menuprincipal1);
}

////////////////////////////////////////////////////////////////////////
void
on_button_valider_supprimer_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* code_transac,*window_supp;
GtkWidget* pt;
 char id[20], ch[50]; int test;
window_supp=lookup_widget(objet,"supprimer_transac");
code_transac=lookup_widget(objet,"entry_code_supp_transac");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(code_transac)));
pt=lookup_widget (objet , "sortie_supp_transac");
test=supprimer_transac(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression reussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: ID inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}

////////////////////////////////////////////////////////////////////////
void
on_button_retour4_transac_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *menuprincipal ;

GtkWidget *windowf1,* windowf2,* windowf3,* windowf4,* windowf5 ;
windowf1=lookup_widget(objet,"affichage_transac");
gtk_widget_destroy(windowf1);
windowf2=lookup_widget(objet,"modif_transac");
gtk_widget_destroy(windowf2);
windowf3=lookup_widget(objet,"ajout_transac");
gtk_widget_destroy(windowf3);
windowf4=lookup_widget(objet,"supprimer_transac");
gtk_widget_destroy(windowf4);
windowf5=lookup_widget(objet,"affichage_exep");
gtk_widget_destroy(windowf5);
menuprincipal=create_acceuil_finance();
gtk_widget_show (menuprincipal);
}

////////////////////////////////////////////////////////////////////////
void
on_treeviewf1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* code_transaction;
gchar* nom;
gchar* type;
gchar* objet;
gchar* jj;
gchar* mm;
gchar* aa;
gchar* montant;
transaction T;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);
GtkWidget* window_modif,*pt;

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&code_transaction,1,&nom,2,&jj,3,&mm,4,&aa,5,&objet,6,&montant,7,&type,-1);

strcpy(T.code_transac,code_transaction);
strcpy(T.nom,nom);
strcpy(T.date.jour,jj);
strcpy(T.date.mois,mm);
strcpy(T.date.annee,aa);
strcpy(T.objet,objet);
strcpy(T.montant,montant);
strcpy(T.type,type);


window_modif=create_modifier_plante();
gtk_widget_show(window_modif);

pt=lookup_widget(window_modif,"entry_code_modif");
gtk_entry_set_text(GTK_ENTRY(pt),code_transaction);



}
}

////////////////////////////////////////////////////////////////////////
void
on_buttonretou5_transac_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *menuprincipal3 ;

GtkWidget *windowf1,* windowf2,* windowf3,* windowf4,* windowf5 ;
windowf1=lookup_widget(objet,"affichage_transac");
gtk_widget_destroy(windowf1);
windowf2=lookup_widget(objet,"modif_transac");
gtk_widget_destroy(windowf2);
windowf3=lookup_widget(objet,"ajout_transac");
gtk_widget_destroy(windowf3);
windowf4=lookup_widget(objet,"supprimer_transac");
gtk_widget_destroy(windowf4);
windowf5=lookup_widget(objet,"affichage_exep");
gtk_widget_destroy(windowf5);
menuprincipal3=create_acceuil_finance();
gtk_widget_show (menuprincipal3);
}


void
on_chercher_nbr_facture_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f; char ch[50];
int m,a,test; char chc[20],chnb[20];
char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20];
int nb=0;
   
    GtkWidget *N,*pt;
    GtkWidget *affichage;
    affichage=lookup_widget(objet,"affichage_transac");

    N=lookup_widget(objet,"entry_code_client_ch");
	strcpy(chc,gtk_entry_get_text(GTK_ENTRY(N)));

   	 pt=lookup_widget (objet ,"sortie_nbr_facture");


test=finance_ajout1(chc);
f=fopen("transac.txt","r");
if (f!=NULL)
{
         while (fscanf (f, "%s %s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8)!=EOF)
            {
	if (strcmp(chc,ch2)==0)

	{

		nb++ ;
	}
}}
fclose(f);
		if (nb==0)
{
		    sprintf(ch,"Pas de Facture ");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
}

else	{ 
sprintf(chnb,"%d",nb);
gtk_label_set_text(GTK_LABEL(pt),chnb);
	}
}


void
on_affichage_facture_client_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowaffich ;
GtkWidget *fenetre_aff;
GtkWidget *treeview2;


windowaffich=lookup_widget(objet,"affichage_exep");


GtkWidget *windowf1,* windowf2,* windowf3,* windowf4,* windowf5 ;
windowf1=lookup_widget(objet,"affichage_transac");
gtk_widget_destroy(windowf1);
windowf2=lookup_widget(objet,"modif_transac");
gtk_widget_destroy(windowf2);
windowf3=lookup_widget(objet,"ajout_transac");
gtk_widget_destroy(windowf3);
windowf4=lookup_widget(objet,"supprimer_transac");
gtk_widget_destroy(windowf4);
windowf5=lookup_widget(objet,"acceuil_finance");
gtk_widget_destroy(windowf5);
windowaffich=create_affichage_exep();
gtk_widget_show (windowaffich);

treeview2=lookup_widget(windowaffich,"treeviewf2");
afficher_transac1(treeview2);
}


void
on_treeviewf2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* code_transaction;
gchar* nom;
gchar* type;
gchar* objet;
gchar* jj;
gchar* mm;
gchar* aa;
gchar* montant;
transaction T;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&code_transaction,1,&nom,2,&jj,3,&mm,4,&aa,5,&objet,6,&montant,7,&type,-1);

strcpy(T.code_transac,code_transaction);
strcpy(T.nom,nom);
strcpy(T.date.jour,jj);
strcpy(T.date.mois,mm);
strcpy(T.date.annee,aa);
strcpy(T.objet,objet);
strcpy(T.montant,montant);
strcpy(T.type,type);
}
afficher_transac1(treeview);

}


void
on_retour_affichage1_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *menuprincipal3 ;

GtkWidget *windowf1,* windowf2,* windowf3,* windowf4,* windowf5 ;
windowf1=lookup_widget(objet,"affichage_transac");
gtk_widget_destroy(windowf1);
windowf2=lookup_widget(objet,"modif_transac");
gtk_widget_destroy(windowf2);
windowf3=lookup_widget(objet,"ajout_transac");
gtk_widget_destroy(windowf3);
windowf4=lookup_widget(objet,"supprimer_transac");
gtk_widget_destroy(windowf4);
windowf5=lookup_widget(objet,"affichage_exep");
gtk_widget_destroy(windowf5);
menuprincipal3=create_acceuil_finance();
gtk_widget_show (menuprincipal3);
}





/////////////////////////////gestion client////////////////////////////////////////////


void
on_gestion_client_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion,*windowd;
window=create_window_welcome();
gtk_widget_show(window);
windowd=lookup_widget(objet,"window_princ_espace_emp");
gtk_widget_destroy(windowd);

}




void
on_radiobutton_femmec_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	choixc[1]=1;
else
	choixc[1]=0;
}


void
on_radiobutton_hommec_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	choixc[0]=1;
else
	choixc[0]=0;
}


void
on_ajouter_client_clicked              (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
FILE* f; 
client c; char ch[40];
int jj,mm,aa,x; char chj[5],chm[5],cha[10]; char text[10];
   
    GtkWidget *code,*nom,*prenom,*cin,*mdp,*email,*j,*m,*a,*adr,*tel,*commentaire;
    GtkWidget* window_ajouter_client;
    window_ajouter_client=lookup_widget(objet_graphique,"window_ajouter_client");
    code=lookup_widget(objet_graphique,"entry_codeclient");
    
    nom=lookup_widget(objet_graphique,"entry_nomclient");
    prenom=lookup_widget(objet_graphique,"entry_prenomclient");
    cin=lookup_widget(objet_graphique,"entry_loginclient");
    mdp=lookup_widget(objet_graphique,"entry_mdp");
    email=lookup_widget(objet_graphique,"entry_email");
    adr=lookup_widget(objet_graphique,"entry_adresse");
    tel=lookup_widget(objet_graphique,"entry_tel");
    
    j=lookup_widget(objet_graphique,"spinbutton_j");
   
    m=lookup_widget(objet_graphique,"spinbutton_m");
    
    a=lookup_widget(objet_graphique,"spinbutton_a");
    

    commentaire=lookup_widget (objet_graphique , "confirmation_ajout_client");
jj=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(j)); sprintf(chj,"%d",jj);
mm=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(m)); sprintf(chm,"%d",mm);
aa=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(a)); sprintf(cha,"%d",aa);
    strcpy(c.code_client,gtk_entry_get_text(GTK_ENTRY(code)));
    
    strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
    strcpy(c.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
    strcpy(c.cin,gtk_entry_get_text(GTK_ENTRY(cin)));
    strcpy(c.mdp,gtk_entry_get_text(GTK_ENTRY(mdp)));
    strcpy(c.email,gtk_entry_get_text(GTK_ENTRY(email)));
    strcpy(c.adresse,gtk_entry_get_text(GTK_ENTRY(adr)));
    strcpy(c.tel,gtk_entry_get_text(GTK_ENTRY(tel)));
    strcpy(c.ddn.jour,chj);

    strcpy(c.ddn.mois,chm);

   strcpy(c.ddn.annee,cha);
   
	resultatc(choixc,text);
	strcpy(c.civilite,text);
  
 //ajouter_client(c);
  x=trouve_client(c.code_client);
  sprintf(ch,"%d",x);
	
    
	    if (strcmp(ch,"0")==0)
		{ 
		    ajouter_client(c);
		    sprintf(ch,"Ajout reussi");
		    gtk_label_set_text(GTK_LABEL(commentaire),ch);
		}
	    else
		{
		    sprintf(ch,"client deja existant");
		    gtk_label_set_text(GTK_LABEL(commentaire),ch);

		} 

}


void
on_retour_home_ajout_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_client,*window_welcome;
window_ajouter_client=lookup_widget(objet,"window_ajouter_client");
gtk_widget_destroy(window_ajouter_client);
window_welcome=create_window_welcome();
gtk_widget_show(window_welcome);
}


void
on_home_supp_client_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_suppression_client,*window_welcome;
window_suppression_client=lookup_widget(objet,"window_suppression_client");
gtk_widget_destroy(window_suppression_client);
window_welcome=create_window_welcome();
gtk_widget_show(window_welcome);
}


void
on_button_supp_client_clicked          (GtkWidget     *objet,
                                        gpointer         user_data)
{
GtkWidget* identif_client,*window_suppression_client;
GtkWidget* comm;
 char id[20], ch[40]; int test;
window_suppression_client=lookup_widget(objet,"window_suppression_client");
identif_client=lookup_widget(objet,"entry_code_supp");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif_client)));
comm=lookup_widget (objet , "confirmation_spp");
test=supprimer_client(id);
sprintf(ch,"%d",test);

    
 if (strcmp(ch,"1")==0)
 { 
		    
  sprintf(ch,"Supression reussie");
  gtk_label_set_text(GTK_LABEL(comm),ch);
 }
 else
 {
  sprintf(ch,"clientt n'existe pas");
  gtk_label_set_text(GTK_LABEL(comm),ch);
 } 
}


void
on_treeview_affc_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* id;

gchar* nom;
gchar* prenom;
gchar* cin;
gchar* mdp;
gchar* email;
gchar* adresse;
gchar* tel;

gchar* jj;
gchar* mm;
gchar* aa;
gchar* civ;


client c;
GtkWidget *window_modification_client;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,1,&nom, 2,&prenom, 3,&cin,4,&mdp,5,&email,6,&adresse,7,&tel,8,&jj,9,&mm,10,&aa,11,&civ-1);

//copie dans client
    strcpy(c.code_client,id);
   
    /*strcpy(c.nom,nom);
    strcpy(c.prenom,prenom);
    strcpy(c.cin,cin);
    strcpy(c.mdp,mdp);
    strcpy(c.email,email);
    strcpy(c.adresse,adresse);
    strcpy(c.tel,tel);
    strcpy(c.ddn.jour,jj);
    strcpy(c.ddn.mois,mm);
    strcpy(c.ddn.annee,aa);


    strcpy(c.civilite,civ);*/
//ouvrir la fenetre de modification
/*window_modification_client=create_window_modification_client();
gtk_widget_show(window_modification_client);*/


//appel de la fct de suppression
supprimer_client(id);
//màj du treeview
afficher_client(treeview);



}
}


void
on_button_retour_home_aff_clicked      (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_welcome,*window_affichage_clients;
window_affichage_clients=lookup_widget(objet,"window_affichage_clients");
gtk_widget_destroy(window_affichage_clients);
window_welcome=create_window_welcome();
gtk_widget_show(window_welcome);
}


void
on_button_ajouter_client_aff_clicked   (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_client,*window_affichage_clients;
window_affichage_clients=lookup_widget(objet,"window_affichage_clients");
gtk_widget_destroy(window_affichage_clients);
window_ajouter_client=create_window_ajouter_client();
gtk_widget_show(window_ajouter_client);

}


void
on_next_modif_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
/*char id[20],ch[40]; 
int x;

GtkWidget *com,*identif_client,*window_modification_client1,*window_modification_client2;
window_modification_client1=lookup_widget(objet,"window_modification_client1");
                    gtk_widget_destroy(window_modification_client1);
                    window_modification_client2=create_window_modification_client2();
                    gtk_widget_show(window_modification_client2);  
com=lookup_widget(objet,"existance_client_modif");
identif_client=lookup_widget(objet,"entry_codeclient_modif");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif_client))); 
x=trouve_client(id);
sprintf(ch,"%d",x);
	
    
	    if (strcmp(ch,"0")==0)
		{ 
		    
		    sprintf(ch,"client n'existe pas , try again ! ");
		    gtk_label_set_text(GTK_LABEL(com),ch);
		}
	    else
		{
		    sprintf(ch,"client deja existant");
		    gtk_label_set_text(GTK_LABEL(com),ch);
		    

		} */

}


void
on_button_modif_tohome_clicked         (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_modification_client,*window_welcome;
window_modification_client=lookup_widget(objet,"window_modification_client");
gtk_widget_destroy(window_modification_client);
window_welcome=create_window_welcome();
gtk_widget_show(window_welcome);
}


void
on_button_valider_modif_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
    remove("tempID.txt");
    GtkWidget *idrec;
    char id[50];
    idrec=lookup_widget(objet,"entry_codeclient_modif");
    strcpy(id,gtk_entry_get_text(GTK_ENTRY(idrec)));
    FILE* tempID;
    tempID=fopen("tempID.txt","a+"); 
    fprintf (tempID,"%s \n",id);
    fclose(tempID);

GtkWidget *window_modification_client,*modifierclient2;
window_modification_client=lookup_widget(objet,"window_modification_client");
gtk_widget_destroy(window_modification_client);
modifierclient2=create_modifierclient2();
gtk_widget_show(modifierclient2);

}


void
on_button_validmodif_home_clicked      (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_modification_client,*window_welcome;
window_modification_client=lookup_widget(objet,"window_modification_client");
gtk_widget_destroy(window_modification_client);
window_welcome=create_window_welcome();
gtk_widget_show(window_welcome);
}


void
on_consulter_client_acceuil_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *window_affichage_clients,*window_welcome,*treeview_aff;
window_welcome=lookup_widget(objet,"window_welcome");
gtk_widget_destroy(window_welcome);
window_affichage_clients=create_window_affichage_clients();
gtk_widget_show(window_affichage_clients);
treeview_aff=lookup_widget(window_affichage_clients,"treeview_affc");

afficher_client(treeview_aff);
}


void
on_chercher_client_acceuil_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_client,*window_welcome;
window_welcome=lookup_widget(objet,"window_welcome");
gtk_widget_destroy(window_welcome);
window_chercher_client=create_window_chercher_client();
gtk_widget_show(window_chercher_client);
}


void
on_modifier_client_acceuil_clicked     (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_modification_client,*window_welcome;
window_welcome=lookup_widget(objet,"window_welcome");
gtk_widget_destroy(window_welcome);
window_modification_client=create_window_modification_client();
gtk_widget_show(window_modification_client);
}


void
on_supprimer_client_acceuil_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_suppression_client,*window_welcome;
window_welcome=lookup_widget(objet,"window_welcome");
gtk_widget_destroy(window_welcome);
window_suppression_client=create_window_suppression_client();
gtk_widget_show(window_suppression_client);
}


void
on_ajouter_client_acceuil_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_client,*window_welcome;
window_welcome=lookup_widget(objet,"window_welcome");
gtk_widget_destroy(window_welcome);
window_ajouter_client=create_window_ajouter_client();
gtk_widget_show(window_ajouter_client);
}


void
on_chercher_client_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_client, *window ,*treeview_aff,*C,*pt;
char code[20],prenom[20];int test; char ch[40];

C=lookup_widget(objet,"entry_code_chercher");
strcpy(code,gtk_entry_get_text(GTK_ENTRY(C)));

test=ajout_client1(code);
pt=lookup_widget(objet,"existance_client");
sprintf(ch,"%d",test);
if (strcmp(ch,"1")==0)
{ 
		    
 sprintf(ch,"id existant");
 gtk_label_set_text(GTK_LABEL(pt),ch);
}
else
{
sprintf(ch,"impo de trouver ce client");
gtk_label_set_text(GTK_LABEL(pt),ch); 

} 
window_chercher_client=lookup_widget(objet,"window_chercher_client");
gtk_widget_destroy(window_chercher_client);

window=create_window_chercher_client2();
gtk_widget_show(window);

treeview_aff=lookup_widget(window,"treeviewc1");

afficher_client1(treeview_aff);

}




void
on_home_chercher_acc_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_client,*window_welcome;
window_chercher_client=lookup_widget(objet,"window_chercher_client");
gtk_widget_destroy(window_chercher_client);
window_welcome=create_window_welcome();
gtk_widget_show(window_welcome);
}


void
on_home_cher2_acc_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_client2,*window_welcome;
window_chercher_client2=lookup_widget(objet,"window_chercher_client2");
gtk_widget_destroy(window_chercher_client2);
window_welcome=create_window_welcome();
gtk_widget_show(window_welcome);
}


void
on_afficher_ajout_client_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
 GtkWidget *window_ajouter_client, *window_affichage_clients ,*treeview_aff;

window_ajouter_client=lookup_widget(objet,"window_ajouter_client");
gtk_widget_destroy(window_ajouter_client);

window_affichage_clients=create_window_affichage_clients();
gtk_widget_show(window_affichage_clients);

treeview_aff=lookup_widget(window_affichage_clients,"treeview_affc");

afficher_client(treeview_aff);
}


void
on_validation_existance_clicked        (GtkWidget      *objet,
                                        gpointer         user_data)
{
char id[20],ch[40]; 
int x;

GtkWidget *com,*identif_client,*window_modification_client;

com=lookup_widget(objet,"existance_client_modif");
identif_client=lookup_widget(objet,"entry_codeclient_modif");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif_client))); 
x=trouve_client(id);
sprintf(ch,"%d",x);
	
    
	    if (strcmp(ch,"0")==0)
		{ 
		    
		    sprintf(ch,"Client non existant!");
		    gtk_label_set_text(GTK_LABEL(com),ch);
		}
	    else
		{
		    sprintf(ch,"Client existant");
		    gtk_label_set_text(GTK_LABEL(com),ch);
		    

		} 

}


void
on_button2M_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
	FILE* Ft;
	Ft=fopen("tempID.txt","a+"); 
	char idt[30];
	fscanf(Ft, "%s",idt);

    FILE* fw;
    FILE* f1; int test=0;
    char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20],ch8[20],ch9[5],ch10[5],ch11[10],ch12[20];
    f1=fopen("client.txt","r"); fw=fopen("newclient.txt","a+");
    if (fw!=NULL && f1!=NULL)
    {
         while (fscanf (f1, "%s %s %s %s %s %s %s %s %s %s %s %s  \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12)!=EOF)
            {
                if (strcmp (ch1, idt) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s %s %s %s %s %s  \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12);
                else
                    test=1; //supression validéé.
            }

    }
    else
        return test ;
    fclose(fw);
    fclose(f1);
   remove("client.txt");
   rename("newclient.txt","client.txt");






FILE* f; client c; char ch[40];
int jj,mm,aa,x; char chj[5],chm[5],cha[10]; char text[10];
char texte[20];
   
    GtkWidget *code,*nom,*prenom,*cin,*mdp,*email,*j,*m,*a,*adr,*tel,*commentaire;
    GtkWidget* window_ajouter_client;
    window_ajouter_client=lookup_widget(objet,"modifierclient2");
    code=lookup_widget(objet,"entryM1");
    
    nom=lookup_widget(objet,"entryM2");
    prenom=lookup_widget(objet,"entryM3");
    cin=lookup_widget(objet,"entryM4");
    mdp=lookup_widget(objet,"entryM5");
    email=lookup_widget(objet,"entryM6");
    adr=lookup_widget(objet,"entryM7");
    tel=lookup_widget(objet,"entryM8");
    
    j=lookup_widget(objet,"spinbutton1");
   
    m=lookup_widget(objet,"spinbutton2");
    
    a=lookup_widget(objet,"spinbutton3");
    

    commentaire=lookup_widget (objet , "confirmation_ajout_client");
jj=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(j)); sprintf(chj,"%d",jj);
mm=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(m)); sprintf(chm,"%d",mm);
aa=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(a)); sprintf(cha,"%d",aa);
    strcpy(c.code_client,gtk_entry_get_text(GTK_ENTRY(code)));
    
    strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
    strcpy(c.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
    strcpy(c.cin,gtk_entry_get_text(GTK_ENTRY(cin)));
    strcpy(c.mdp,gtk_entry_get_text(GTK_ENTRY(mdp)));
    strcpy(c.email,gtk_entry_get_text(GTK_ENTRY(email)));
    strcpy(c.adresse,gtk_entry_get_text(GTK_ENTRY(adr)));
    strcpy(c.tel,gtk_entry_get_text(GTK_ENTRY(tel)));
    strcpy(c.ddn.jour,chj);

    strcpy(c.ddn.mois,chm);

   strcpy(c.ddn.annee,cha);
   
	resultatc(choixc,text);
	strcpy(c.civilite,text);
  	ajouter_client(c);


GtkWidget *modifierclient2,*window_welcome;
modifierclient2=lookup_widget(objet,"modifierclient2");
gtk_widget_destroy(modifierclient2);
window_welcome=create_window_welcome();
gtk_widget_show(window_welcome);

}


void
on_buttonshowdetail_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window;
window=lookup_widget(objet,"modifierclient2");




	GtkWidget *input1;	
	GtkWidget *input2;	
	GtkWidget *input3;	
	GtkWidget *input4;	
	GtkWidget *input5;
	GtkWidget *input6;
	GtkWidget *input7;
	GtkWidget *input8;
	input1 = lookup_widget(objet,"entryM1");
	input2 = lookup_widget(objet,"entryM2");
	input3 = lookup_widget(objet,"entryM3");
	input4 = lookup_widget(objet,"entryM4");
	input5 = lookup_widget(objet,"entryM5");
	input6 = lookup_widget(objet,"entryM6");
	input7 = lookup_widget(objet,"entryM7");
	input8 = lookup_widget(objet,"entryM8");

        FILE* Fr;
        FILE* Ft;
	Ft=fopen("tempID.txt","a+"); 
	Fr=fopen("client.txt","a+"); 
	char a1[30],a2[30],a3[30],a4[30],a5[30],a6[30],a7[30],a8[30],a9[30],a10[30],a11[30],a12[30];
	char idt[30];
	fscanf(Ft, "%s",idt);
	if (Fr!=NULL)
	{
	while(fscanf(Fr,"%s %s %s %s %s %s %s %s %s %s %s %s \n",a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12)!=EOF)
		{	
				if(strcmp(a1,idt)==0){
				gtk_entry_set_text(GTK_ENTRY(input1),a1);
				gtk_entry_set_text(GTK_ENTRY(input2),a2);
				gtk_entry_set_text(GTK_ENTRY(input3),a3);
				gtk_entry_set_text(GTK_ENTRY(input4),a4);
				gtk_entry_set_text(GTK_ENTRY(input5),a5);
				gtk_entry_set_text(GTK_ENTRY(input6),a6);
				gtk_entry_set_text(GTK_ENTRY(input7),a7);
				gtk_entry_set_text(GTK_ENTRY(input8),a8);
				break;				
				}
		}
}

	fclose(Fr);
}




void
on_radiobutton1m_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	choixc[0]=1;
else
	choixc[0]=0;
}


void
on_radiobutton1f_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	choixc[1]=1;
else
	choixc[1]=0;
}


void
on_button1Modif_clicked                (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *modifierclient2,*window_welcome;
modifierclient2=lookup_widget(objet,"modifierclient2");
gtk_widget_destroy(modifierclient2);
window_welcome=create_window_welcome();
gtk_widget_show(window_welcome);

}


///////////////////////////////////////gestion des troupeau/////////////////////////////



void
on_gestion_troupeau_clicked            (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion,*windowd;

window=create_gestion_troupeau();
gtk_widget_show(window);
windowd=lookup_widget(objet,"window_princ_espace_emp");
gtk_widget_destroy(windowd);
}


void
on_button1_retour_clicked              (GtkWidget      *objet,
                                        gpointer         user_data)
{

}


void
on_button1_consulter_clicked           (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowcons;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"gestion_troupeau");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"ajout_troupeau");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"modif_troupeau");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"supprimer_troupeau");
gtk_widget_destroy(windowpr4);


windowcons=create_consulter_troupeau();
gtk_widget_show (windowcons);
}


void
on_button1_ajouter_clicked             (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowajouter ;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"gestion_troupeau");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"consulter_troupeau");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"modif_troupeau");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"supprimer_troupeau");
gtk_widget_destroy(windowpr4);

windowajouter=create_ajout_troupeau();
gtk_widget_show (windowajouter);
}


void
on_button1_modifier_clicked            (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowmodifier ;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"gestion_troupeau");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"consulter_troupeau");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"ajout_troupeau");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"supprimer_troupeau");
gtk_widget_destroy(windowpr4);
windowmodifier=create_modif_troupeau();
gtk_widget_show (windowmodifier);
}


void
on_button1_supprimer_clicked           (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowsupp;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"gestion_troupeau");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"consulter_troupeau");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"ajout_troupeau");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"modif_troupeau");
gtk_widget_destroy(windowpr4);
windowsupp=create_supprimer_troupeau();
gtk_widget_show (windowsupp);
}


void
on_button2_retour_clicked              (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowgestion1;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"supprimer_troupeau");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"consulter_troupeau");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"ajout_troupeau");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"modif_troupeau");
gtk_widget_destroy(windowpr4);
windowgestion1=create_gestion_troupeau();
gtk_widget_show (windowgestion1);
}


void
on_button1_valider_clicked             (GtkWidget      *objet,
                                        gpointer         user_data)
{
FILE* f; troupeau tr; char ch[50];
int j,m,a; char id[50],s[50],e[50],text[20],p[50],chj[20],chm[20],cha[20];
   
    GtkWidget *ID,*E,*S,*J,*M,*A,*P,*pt,*ajout_troupeau;
 
    ajout_troupeau=lookup_widget(objet,"ajout_troupeau");
    ID=lookup_widget(objet,"entry_identifiant_tr");
    P=lookup_widget(objet,"entry_poids_tr");
    E=lookup_widget(objet,"combobox_espece");
    S=lookup_widget(objet,"combobox_sexe_tr");
    J=lookup_widget(objet,"spinbutton_jour_tr");
    M=lookup_widget(objet,"spinbutton_mois_tr");
    A=lookup_widget(objet,"spinbutton_annee_tr");
    
    pt=lookup_widget (objet ,"verif_ajout_tr");
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(J)); sprintf(chj,"%d",j);
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chm,"%d",m);
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(A)); sprintf(cha,"%d",a);


strcpy(tr.id,gtk_entry_get_text(GTK_ENTRY(ID)));
strcpy(tr.poids,gtk_entry_get_text(GTK_ENTRY(P)));
strcpy(tr.sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(S)));
strcpy(tr.espece,gtk_combo_box_get_active_text(GTK_COMBO_BOX(E)));
strcpy(tr.ddn.jour,chj);
strcpy(tr.ddn.mois,chm);
strcpy(tr.ddn.annee,cha);



 	sprintf(ch,"%d",verif(tr.id));
	
    
	    if (strcmp(ch,"0")==0)
		{ 
		    ajouter_troupeau (tr);
		    sprintf(ch,"Ajout reussi");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: troupeau deja existant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		}
}


void
on_button1_recherche_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* identif,*pt; char id [25],ch[40]; int test;
char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
GtkWidget *esp, *sex, *jjt, *mmt, *aat, *poi;
FILE* f;
f=fopen("troupeau.txt","r");
identif=lookup_widget(objet,"id_a_modifier");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
esp=lookup_widget(objet,"espece_in_modif");
sex=lookup_widget(objet,"sexe_in_modif");
jjt=lookup_widget(objet,"jj_in_modif");
mmt=lookup_widget(objet,"mm_in_modif");
aat=lookup_widget(objet,"aa_in_modif");
poi=lookup_widget(objet,"poids_in_modif");

pt=lookup_widget(objet,"verif_id_a_modifier");
test=verif(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	if (f!=NULL)
{
         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
            { if (strcmp (ch1,id)==0) {
			gtk_label_set_text(GTK_LABEL(esp),ch2);
			gtk_label_set_text(GTK_LABEL(sex),ch3);
			
			gtk_label_set_text(GTK_LABEL(jjt),ch4);
			gtk_label_set_text(GTK_LABEL(mmt),ch5);
			gtk_label_set_text(GTK_LABEL(aat),ch6);
			gtk_label_set_text(GTK_LABEL(poi),ch7); }
		}
	fclose(f);
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant non existant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}
}


void
on_button2_modifier_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[40],ch_value[20],id[20],ch[40]; int e,test;

	GtkWidget *element,*val,*identif,*pt;

pt=lookup_widget(objet,"result_modif");
identif=lookup_widget(objet,"id_a_modifier");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
element=lookup_widget(objet,"combobox_modif");
val=lookup_widget(objet,"modification");
  
strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));
//c=int_ch(ch_element); //sprintf(ch,"%d",e);
//strcpy(ch,ch_element[0]);
//sscanf(&ch,"%d",e); sprintf(ch,"%d",e);
e=int_ch(ch_element); //sprintf(ch," %d",e);
		   //gtk_label_set_text(GTK_LABEL(pt),ch_element);

strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

test=modif_troupeau(id,e,ch_value);

sprintf(ch,"%d",test);//gtk_label_set_text(GTK_LABEL(pt),ch);

    
	    if (strcmp(ch,"1")==0)
		{ 
		 
		    sprintf(ch,"Modification reussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_button2_home_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button3_retour_clicked              (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowgestion2;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"supprimer_troupeau");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"consulter_troupeau");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"ajout_troupeau");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"modif_troupeau");
gtk_widget_destroy(windowpr4);
windowgestion2=create_gestion_troupeau();
gtk_widget_show (windowgestion2);
}


void
on_button4_retour_clicked              (GtkWidget      *objet,
                                        gpointer         user_dataa)
{
GtkWidget *windowgestion3;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"supprimer_troupeau");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"consulter_troupeau");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"ajout_troupeau");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"modif_troupeau");
gtk_widget_destroy(windowpr4);
windowgestion3=create_gestion_troupeau();
gtk_widget_show (windowgestion3);
}


void
on_button2_supprimer_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* ID,*window_supp;
GtkWidget* pt;
 char id[20], ch[50]; int test;
window_supp=lookup_widget(objet,"supprimer_troupeau");
ID=lookup_widget(objet,"id_a_supprimer");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID)));
pt=lookup_widget (objet , "result_supp");
test=supprimer_troupeau(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression reussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: ID inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		}
}


void
on_button3_home_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeviewtr1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* id;
gchar* espece;
gchar* sexe;

gchar* jj;
gchar* mm;
gchar* aa;
gchar* poids;
troupeau tr;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,1,&id,2,&espece,3,&sexe,4,&jj,5,&mm,6,&aa,7,&poids,-1);

//copie dans e
   // strcpy(p.code_plant,code_plant);
    /*strcpy(p.code_plant,code_plant);
strcpy(p.nom,nom);
strcpy(p.type,type);
strcpy(p.etat,etat);
strcpy(p.date.jour,jour);
strcpy(p.date.mois,mois);
strcpy(p.date.annee,annee);
strcpy(p.stock,stock);*/

//appel de la fct de suppression
supprimer_troupeau(id);
//màj du treeview
consulter_troupeau(treeview);



}
}


void
on_button4_home_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button5_retour_clicked              (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowgestion4;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"supprimer_troupeau");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"consulter_troupeau");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"ajout_troupeau");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"modif_troupeau");
gtk_widget_destroy(windowpr4);
windowgestion4=create_gestion_troupeau();
gtk_widget_show (windowgestion4);
}


void
on_button2_recherche_clicked           (GtkWidget      *objet,
                                        gpointer         user_data)
{

}








void
on_button1_afficher_clicked            (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowaffich ;
GtkWidget *fenetre_ajout;
GtkWidget *treeview1;
GtkWidget *N;
GtkWidget *NB;
GtkWidget *NV;
char chn[20],chnb[20],chnv[20];
int nn,nnb,nnv;

fenetre_ajout=lookup_widget(objet,"ajout_troupeau");

windowaffich=lookup_widget(objet,"consulter_troupeau");


treeview1=lookup_widget(windowaffich,"treeviewtr1");
consulter_troupeau(treeview1);

N=lookup_widget(objet,"n_troupeau");
NB=lookup_widget(objet,"nb_troupeau");
NV=lookup_widget(objet,"nv_troupeau");
nn=calcul_troupeau();
nnb=calcul_brebis();
nnv=calcul_veaux();
sprintf(chn,"%d",nn);
sprintf(chnb,"%d",nnb);
sprintf(chnv,"%d",nnv);

gtk_label_set_text(GTK_LABEL(N),chn);
gtk_label_set_text(GTK_LABEL(NB),chnb);
gtk_label_set_text(GTK_LABEL(NV),chnv);
}






////////////////////////////AFFECTATION////////////////////////////////////////////////////////////////////

void
on_button_gest_ajout_aff_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"window_gestion_aff");
gtk_widget_destroy(window0);

window=create_window_ajout_aff();
gtk_widget_show(window);

}


void
on_button_gest_supp_aff_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"window_gestion_aff");
gtk_widget_destroy(window0);

window=create_window_supp_aff();
gtk_widget_show(window);
}


void
on_button_gest_consul_aff_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajout, *window_consul ,*AFF_treeview,*window_gestion;

window_gestion=lookup_widget(objet,"window_gestion_aff");
gtk_widget_destroy(window_gestion);

window_consul=create_window_consul_aff();
gtk_widget_show(window_consul);

AFF_treeview=lookup_widget(window_consul,"AFF_treeview");

AFF_afficher(AFF_treeview);
}


void
on_button_gest_modif_aff_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"window_gestion_aff");
gtk_widget_destroy(window0);

window=create_window_modif_aff();
gtk_widget_show(window);
}


void
on_button_gest_cherch_aff_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"window_gestion_aff");
gtk_widget_destroy(window0);

window=create_window_cherch_aff();
gtk_widget_show(window);
}


void
on_calendar_aff_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
gtk_calendar_get_date(calendar,&jj,&mm,&aa);
mm+=1;
}


void
on_button_enr_ajout_aff_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
affect a; char ch[70]=""; char date[20]; char text[10]; char x[5],chh[10],chmin[10]; int test,test1,test2,h,min;
 
   FILE* f ;
    GtkWidget *C,*I,*CIN,*H,*M,*pt;
   // C=lookup_widget(objet,"entry_code_eq_aff");
   I=lookup_widget(objet,"entry_id_eq_aff");
    CIN=lookup_widget(objet,"entry_cin_eq_aff");
    //H=lookup_widget(objet,"entry1h");
    H=lookup_widget(objet,"spinbutton_h");
    //M=lookup_widget(objet,"entry2m");
    M=lookup_widget(objet,"spinbutton_mmm");
    pt=lookup_widget (objet , "label_sortie_ajout_aff");
    
	h=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(H)); sprintf(chh,"%d",h);
	min=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chmin,"%d",min);
    //strcpy(a.code,gtk_entry_get_text(GTK_ENTRY(C)));
sprintf(a.code,"AFF%d",AFF_identif_auto());
    strcpy(a.CIN_ouvrier,gtk_entry_get_text(GTK_ENTRY(CIN)));
    strcpy(a.id_eq,gtk_entry_get_text(GTK_ENTRY(I)));
	
    //strcpy(a.heure_affect.h,gtk_entry_get_text(GTK_ENTRY(H)));
    strcpy(a.heure_affect.h,chh);
    //strcpy(a.heure_affect.min,gtk_entry_get_text(GTK_ENTRY(M)));
    strcpy(a.heure_affect.min,chmin);
    

    sprintf(date,"%d/%d/%d",jj,mm,aa);
    strcpy(a.date,date); 
f=fopen("affect.txt","a"),fclose(f);
test=AFF_trouve(a.code);
test1=O_trouve(a.CIN_ouvrier);
test2=EQ_trouve(a.id_eq);
	sprintf(x,"%d",test); 
	
    
	    if (strcmp(x,"0")==0 && strlen(a.code)!=0 && strlen(a.id_eq)!=0 && strlen(a.CIN_ouvrier)!=0 && strlen(a.date)!=5 &&test1==1 &&test2==1 )
		{ 
		   AFF_ajout(a);
		    sprintf(ch,"Ajout reussi!\nCette affectation a comme code:%s",a.code);
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		f=fopen("AFF_identif.txt","a+");
		fprintf(f,"%s\n",a.code);
		fclose(f);
		}
	    else
		if (strlen(a.code)==0 || strlen(a.id_eq)==0|| strlen(a.CIN_ouvrier)==0|| strlen(a.date)==5 )
		{
		    sprintf(ch,"ERREUR: veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
else if (test1!=1 && test2!=1)
{
sprintf(ch,"ERREUR: Ouvrier ET Equipements non existants!");
			    gtk_label_set_text(GTK_LABEL(pt),ch);
}
	else
	if( test1!=1)
	{
	sprintf(ch,"ERREUR: Ouvrier non existant!");
			    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	else if (test2!=1)
	{
	sprintf(ch,"ERREUR: Equipement non existant!");
			    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	     else{
		    sprintf(ch,"ERREUR: equipement deja existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_button_supp_aff_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* CODE,*window_supp;
GtkWidget* pt;
 char code[20], ch[40]; int test;
window_supp=lookup_widget(objet,"window_supp_aff");
CODE=lookup_widget(objet,"entry_code_supp_aff");
strcpy(code,gtk_entry_get_text(GTK_ENTRY(CODE)));
pt=lookup_widget (objet , "label_sortie_supp_aff");
test=AFF_supprimer(code);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression reussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: Code inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_button_afficher_aff_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajout, *window_consul ,*AFF_treeview,*window2,*window3,*window4,*window5;

window_ajout=lookup_widget(objet,"window_ajout_aff");
gtk_widget_destroy(window_ajout);

window2=lookup_widget(objet,"window_supp_aff");
gtk_widget_destroy(window2);

window4=lookup_widget(objet,"window_modif_aff");
gtk_widget_destroy(window4);
window5=lookup_widget(objet,"window_cherch_aff");
gtk_widget_destroy(window5);

window_consul=create_window_consul_aff();
gtk_widget_show(window_consul);

AFF_treeview=lookup_widget(window_consul,"AFF_treeview");

AFF_afficher(AFF_treeview);
}




void
on_button_valid_code_aff_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{

char code[20]; int test; char ch[40];
GtkWidget* CODE=lookup_widget(objet,"entry_modif_code_aff");
GtkWidget* pt=lookup_widget(objet,"label_sortie_valid_aff_modif");
GtkWidget* pt1=lookup_widget(objet,"CIN_modif_aff");
GtkWidget* pt2=lookup_widget(objet,"label_CIN_modif_aff");
GtkWidget* pt3=lookup_widget(objet,"id_eq_aff_modif");
GtkWidget* pt4=lookup_widget(objet,"label_id_eq_aff_modif");
GtkWidget* pt5=lookup_widget(objet,"date_aff_modif");
GtkWidget* pt6=lookup_widget(objet,"label_date_aff_modif");
GtkWidget* pt7=lookup_widget(objet,"heure_aff_modif");
GtkWidget* pt8=lookup_widget(objet,"label_heure_aff_modif");
GtkWidget* pt9=lookup_widget(objet,"min_aff_modif");
GtkWidget* pt10=lookup_widget(objet,"label_min_aff_modif");
strcpy(code,gtk_entry_get_text(GTK_ENTRY(CODE)));  

test=AFF_trouve(code);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		AFFECT_affiche_modif(code,pt1,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10);
		
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_button_enr_modif_aff_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[50]="",ch_value[20]="",code[20],ch[50]; int e,test;

	GtkWidget *element,*val,*CODE,*pt,*pt1,*pt2,*pt3,*pt4,*pt5,*pt6,*pt7,*pt8,*pt9,*pt10;
pt1=lookup_widget(objet,"CIN_modif_aff");
pt2=lookup_widget(objet,"label_CIN_modif_aff");
pt3=lookup_widget(objet,"id_eq_aff_modif");
pt4=lookup_widget(objet,"label_id_eq_aff_modif");
pt5=lookup_widget(objet,"date_aff_modif");
pt6=lookup_widget(objet,"label_date_aff_modif");
pt7=lookup_widget(objet,"heure_aff_modif");
pt8=lookup_widget(objet,"label_heure_aff_modif");
pt9=lookup_widget(objet,"min_aff_modif");
pt10=lookup_widget(objet,"label_min_aff_modif");

pt=lookup_widget(objet,"label_sortie_aff_modif");
CODE=lookup_widget(objet,"entry_modif_code_aff");
strcpy(code,gtk_entry_get_text(GTK_ENTRY(CODE)));   
element=lookup_widget(objet,"combo_info_aff_modif");
strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));
val=lookup_widget(objet,"entry_modif_value_aff");
strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));
 //gtk_label_set_text(GTK_LABEL(pt),ch_element);
//c=int_ch(ch_element); //sprintf(ch,"%d",e);
//strcpy(ch,ch_element[0]);
//sscanf(&ch,"%d",e); sprintf(ch,"%d",e);
e=AFF_int_ch(ch_element); //sprintf(ch," %d",e);
		    //gtk_label_set_text(GTK_LABEL(pt),ch);


test=AFF_modif(code,e,ch_value);

sprintf(ch,"%d",test); gtk_label_set_text(GTK_LABEL(pt),ch);

    
	    if (strcmp(ch,"1")==0 && strlen(ch_value)!=0 && strlen(ch_element)!=0 && strlen(code)!=0)
		{ 
		 
		    sprintf(ch,"Modification reussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		AFFECT_affiche_modif(code,pt1,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10);
			
		}
	    else
		if (strlen(ch_value)==0 || strlen(ch_element)==0 ||strlen(code)==0)
	{
		sprintf(ch,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	     else{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_AFF_treeview_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* code;
gchar* cin;
gchar* id;
gchar* date;
gchar* hh;
gchar* mm;

affect a;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);
GtkWidget* window_modif,*pt;
if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&code,1,&cin, 2,&id, 3,&date,4,&hh,5,&mm,-1);
}
//ouvrir la fenetre de modification
window_modif=create_window_modif_aff();
gtk_widget_show(window_modif);

    
pt=lookup_widget(window_modif,"entry_modif_code_aff");
gtk_entry_set_text(GTK_ENTRY(pt),code);


//appel de la fct de suppression
//E_supprimer(identif);
//màj du treeview
AFF_afficher(treeview);

}


void
on_button_consul_goto_cherch_aff_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"window_gestion_aff");
gtk_widget_destroy(window0);

window=create_window_cherch_aff();
gtk_widget_show(window);
}


void
on_button_home_aff_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1,* window2,* window3,* window4,* window5,*window6;
window1=lookup_widget(objet,"window_ajout_aff");
gtk_widget_destroy(window1);
window2=lookup_widget(objet,"window_modif_aff");
gtk_widget_destroy(window2);
window3=lookup_widget(objet,"window_supp_aff");
gtk_widget_destroy(window3);
window4=lookup_widget(objet,"window_consul_aff");
gtk_widget_destroy(window4);
window5=lookup_widget(objet,"window_cherch_aff");
gtk_widget_destroy(window5);

window6=create_window_gestion_aff();
gtk_widget_show(window6);
}


void
on_button_cherch_aff_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_cherch, *window ,*AFF_treeview1,*I,*CIN,*pt;
char cin[20],id[20];int test; char ch[60];

I=lookup_widget(objet,"entry_id_cherch_aff");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(I)));

CIN=lookup_widget(objet,"entry_CIN_cherch_aff");
strcpy(cin,gtk_entry_get_text(GTK_ENTRY(CIN)));

test=AFF_ajout1(cin,id);
window_cherch=lookup_widget(objet,"window_cherch_aff");
gtk_widget_destroy(window_cherch);

window=create_window_cherch_aff();
gtk_widget_show(window);

AFF_treeview1=lookup_widget(window,"AFF_treeview1");

AFF_afficher1(AFF_treeview1);
pt=lookup_widget(window,"label_resultat_cherch_aff");
sprintf(ch,"%d",test); 
    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"affectation(s) existante(s)!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: affectation(s) non existante(s).");
		    gtk_label_set_text(GTK_LABEL(pt),ch); 

		} 

}


void
on_button_valid_cin_ouv_aff_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* CIN, *pt; char ch[50],cin[20]; int test;
CIN=lookup_widget(objet,"entry_cin_eq_aff");
pt=lookup_widget(objet,"label_sortie_valid_cin_affect");
strcpy(cin,gtk_entry_get_text(GTK_ENTRY(CIN)));
test=O_trouve(cin);
sprintf(ch,"%d",test);

if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Ouvrier existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: Ouvrier non existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch); 

		} 

}


void
on_button_valid_id_eq_aff_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* I, *pt; FILE* f;
char ch[50],id[20]; int test;
I=lookup_widget(objet,"entry_id_eq_aff");
pt=lookup_widget(objet,"label_sortie_valid_ref_affect");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(I)));
f=fopen("equip.txt","a"); fclose(f);
test=EQ_trouve(id);
sprintf(ch,"%d",test);

if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Equipement existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: equipement non existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch); 

		} 
}

////////////////////////////////////reservation//////////////////////////////////////////////////
void
on_reservation_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window,*windowd;

window=create_bienvenue_reservation();
gtk_widget_show(window);

windowd=lookup_widget(objet,"espace_client");
gtk_widget_destroy(windowd);
}







void
on_espace_client_reservation_clicked   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowespace_client ;


GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6;
windowR1=lookup_widget(objet,"bienvenue_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"modif_reservatin");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"supp_reservation_admi");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"affichage_reservation");
gtk_widget_destroy(windowR6);



windowespace_client=create_bienvenue_client_resevation();
gtk_widget_show (windowespace_client);
}


void
on_espace_admin_reservation_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowespace_admin ;

GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6,*windowR7;
windowR1=lookup_widget(objet,"bienvenue_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"modif_reservatin");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_client_resevation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"supp_reservation_admi");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"affichage_reservation");
gtk_widget_destroy(windowR6);
windowR7=lookup_widget(objet,"window_princ_espace_emp");
gtk_widget_destroy(windowR7);



windowespace_admin=create_bienvenue_admin_reservation();
gtk_widget_show (windowespace_admin);
}


void
on_valider_reservation_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f; reservation R; char ch[50];
int j,m,a,i; char chj[20],chm[20],cha[20],code[20],chcc[20],chcontrol[50];
int test=0; char chc[20],chn[20];
int test1 ;
int test2,test3 ;
int n=0;
test3=0;
   
    GtkWidget *C,*N,*NM,*J,*M,*A,*H,*pt,*control;
    GtkWidget *ajouter_reser;
    ajouter_reser=lookup_widget(objet,"ajout_reservation");
    N=lookup_widget(objet,"entry_nom_reservation");
    NM=lookup_widget(objet,"entry_numero_reservation");
    H=lookup_widget(objet,"combobox_heure_reservation");
    J=lookup_widget(objet,"spinbutton_jour_reservation");
    M=lookup_widget(objet,"spinbutton_mois_reservation");
    A=lookup_widget(objet,"spinbutton_annee_resrvation");
    pt=lookup_widget (objet ,"sortie_reservation");
    control=lookup_widget (objet ,"entry_erreur_num");


j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(J)); sprintf(chj,"%d",j);
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chm,"%d",m);
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(A)); sprintf(cha,"%d",a);

strcpy(R.nom_client,gtk_entry_get_text(GTK_ENTRY(N)));
strcpy(R.numero,gtk_entry_get_text(GTK_ENTRY(NM)));
if((strlen(R.numero)!=8)||(atoi(R.numero)==0))
test3=1;


strcpy(code,"R1");	 
f=fopen("reservation.txt","r");
if (f!=NULL)
{
	while (fscanf(f,"%s %*s %*s %*s %*s %*s %*s \n",chc)!=EOF)
{



for (i=1;i<=20;i++)
{
chcc[i-1]=chc[i];
}
chcc[i-1]='\0';

n=atoi(chcc);
n=n+1;
strcpy(code,"R");
sprintf(chn,"%d",n);
strcat(code,chn);
}
fclose(f);		
}



strcpy(R.code_reser,code);

strcpy(R.heure,gtk_combo_box_get_active_text(GTK_COMBO_BOX(H)));

strcpy(R.date.jour,chj);
strcpy(R.date.mois,chm);
strcpy(R.date.annee,cha);
test1= R_trouve(R.code_reser);
test2= R_trouvenom(R.nom_client);

		if (test3==1)
			{
				sprintf(chcontrol,"ERREUR!!");
				gtk_label_set_text(GTK_LABEL(control),chcontrol);

			}
    
	    if ((test1==0)&&(test2==0)&&(test3==0))
		{ 
		    ajouter_reservation(R);
		    sprintf(ch,"Ajout reussi");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		}
	    else
		{

		    sprintf(ch,"ERREUR:Reservation déjà existante");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		}

}

		   


void
on_retour_reservation1_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowacceuil ;

GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6;
windowR1=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"modif_reservatin");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_client_resevation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"supp_reservation_admi");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"affichage_reservation");
gtk_widget_destroy(windowR6);

windowacceuil=create_bienvenue_reservation();
gtk_widget_show (windowacceuil);
}


void
on_modifier_reservation_client_clicked (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowmodif ;

GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6;
windowR1=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"bienvenue_reservation");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_client_resevation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"supp_reservation_admi");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"affichage_reservation");
gtk_widget_destroy(windowR6);

windowmodif=create_modif_reservatin();
gtk_widget_show (windowmodif);
}


void
on_ajouter_reservation_client_clicked  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowajout ;

GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6;
windowR1=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"modif_reservatin");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"bienvenue_reservation");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_client_resevation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"supp_reservation_admi");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"affichage_reservation");
gtk_widget_destroy(windowR6);

windowajout=create_ajout_reservation();
gtk_widget_show (windowajout);
}


void
on_chercher_code_modif_reservation_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* name,*pt; char nn [25],ch[40];
char ch1[20],ch2[20],ch3[20],ch4[20],ch5[20],ch6[20],ch7[20];
GtkWidget *n, *jj, *mm, *aa, *nm, *hh;
FILE* f;
f=fopen("reservation.txt","r");
name=lookup_widget(objet,"entry_code_reservation_modif");
strcpy(nn,gtk_entry_get_text(GTK_ENTRY(name)));   
n=lookup_widget(objet,"sortie_nom_client_reservation");
nm=lookup_widget(objet,"sortie_numero_client_reservation");
jj=lookup_widget(objet,"sortie_jour_reservation");
mm=lookup_widget(objet,"sortie_mois_reservation");
aa=lookup_widget(objet,"sortie_annee_reservation");
hh=lookup_widget(objet,"sortie_heure_reservation");
pt=lookup_widget(objet,"sortie_code_reservation_recherche");


    
	if (f!=NULL)
{

         while (fscanf (f, "%s %s %s %s %s %s %s \n",ch1,ch2,ch3,ch4,ch5,ch6,ch7)!=EOF)
            {
	if (strcmp(nn,ch2)==0)
	{

			sprintf(ch,"Reservation existante!");
		    	gtk_label_set_text(GTK_LABEL(pt),ch);

			gtk_label_set_text(GTK_LABEL(n),ch2);
			gtk_label_set_text(GTK_LABEL(nm),ch3);
			gtk_label_set_text(GTK_LABEL(jj),ch4);
			gtk_label_set_text(GTK_LABEL(mm),ch5);
			gtk_label_set_text(GTK_LABEL(aa),ch6);
			gtk_label_set_text(GTK_LABEL(hh),ch7);
	}
		}
	fclose(f);
		}
	    else
		{
		    sprintf(ch,"Pas de reservation!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		}
}


void
on_valider_modif_reservation_clicked   (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[20],ch_value[20],id[20],ch[50]; int e,test;

	GtkWidget *element,*val,*identif,*pt;

pt=lookup_widget(objet,"sortie_modif_reservation");
identif=lookup_widget(objet,"entry_code_reservation_modif");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
element=lookup_widget(objet,"combobox_modif_reservation");
val=lookup_widget(objet,"entry_new_val_reservation");

strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));

e=int_ch(ch_element); 

strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

test=modif_reservation(id,e,ch_value);

sprintf(ch,"%d",test);//gtk_label_set_text(GTK_LABEL(pt),ch);

    
	    if (strcmp(ch,"1")==0)
		{ 
		 
		    sprintf(ch,"Modification reussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_retour_modif_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowacceuil ;

GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6;
windowR1=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"modif_reservatin");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_client_resevation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"supp_reservation_admi");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"affichage_reservation");
gtk_widget_destroy(windowR6);

windowacceuil=create_bienvenue_reservation();
gtk_widget_show (windowacceuil);
}


void
on_modif_accueil_admin_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowmodif ;

GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6;
windowR1=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"bienvenue_reservation");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_client_resevation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"supp_reservation_admi");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"affichage_reservation");
gtk_widget_destroy(windowR6);

windowmodif=create_modif_reservatin();
gtk_widget_show (windowmodif);
}


void
on_afficher_reservation_admin_clicked  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowaffich ;
GtkWidget *fenetre_ajout;
GtkWidget *treeview1;

fenetre_ajout=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(fenetre_ajout);
windowaffich=lookup_widget(objet,"affichage_reservation");

GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6;
windowR1=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"bienvenue_reservation");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_client_resevation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"supp_reservation_admi");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"modif_reservatin");
gtk_widget_destroy(windowR6);

windowaffich=create_affichage_reservation();
gtk_widget_show (windowaffich);

treeview1=lookup_widget(windowaffich,"treeviewreser1");
afficher_reservation(treeview1);
}


void
on_supprimer_reservation_admin_clicked (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowsupp ;

GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6;
windowR1=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"bienvenue_reservation");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_client_resevation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"affichage_reservation");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"modif_reservatin");
gtk_widget_destroy(windowR6);

windowsupp=create_supp_reservation_admi();
gtk_widget_show (windowsupp);
}


void
on_valider_supp_reservation_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* code_reser,*window_supp;
GtkWidget* pt;
 char id[20], ch[50]; int test;
window_supp=lookup_widget(objet,"supp_reservation_admi");
code_reser=lookup_widget(objet,"entry_code_reservation_supp");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(code_reser)));
pt=lookup_widget (objet , "sortie_reservation_supp");
test=supprimer_reservation(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression reussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: ID inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_retour_supp_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowacceuil ;

GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6;
windowR1=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"supp_reservation_admi");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_client_resevation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"affichage_reservation");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"modif_reservatin");
gtk_widget_destroy(windowR6);

windowacceuil=create_bienvenue_reservation();
gtk_widget_show (windowacceuil);
}


void
on_treeviewreser1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* code_reser;
gchar* nom_client;
gchar* numero;
gchar* heure;
gchar* jj;
gchar* mm;
gchar* aa;

reservation R;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée


gtk_tree_model_get(GTK_LIST_STORE(model),&iter,1,&code_reser,2,&nom_client,3,&numero,4,&jj,5,&mm,6,&aa,7,&heure,-1);
strcpy(R.code_reser,code_reser);
strcpy(R.nom_client,nom_client);
strcpy(R.numero,numero);
strcpy(R.date.jour,jj);
strcpy(R.date.mois,mm);
strcpy(R.date.annee,aa);
strcpy(R.heure,heure);

}
}


void
on_retour_affichage_reservation_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowacceuil ;
GtkWidget *windowR1,* windowR2,* windowR3,* windowR4,* windowR5,*windowR6;
windowR1=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(windowR1);
windowR2=lookup_widget(objet,"ajout_reservation");
gtk_widget_destroy(windowR2);
windowR3=lookup_widget(objet,"modif_reservatin");
gtk_widget_destroy(windowR3);
windowR4=lookup_widget(objet,"bienvenue_client_resevation");
gtk_widget_destroy(windowR4);
windowR5=lookup_widget(objet,"supp_reservation_admi");
gtk_widget_destroy(windowR5);
windowR6=lookup_widget(objet,"affichage_reservation");
gtk_widget_destroy(windowR6);
windowacceuil=create_bienvenue_reservation();
gtk_widget_show (windowacceuil);
}




////////////////////////////precipitation/////////////////////////////////
void
on_gestion_precipitation_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window,*windowd;

window=create_acceuil_precipitation();
gtk_widget_show(window);
windowd=lookup_widget(objet,"window_princ_espace_emp");
gtk_widget_destroy(windowd);
}



void
on_afficher_precipitation_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowaffich ;
GtkWidget *fenetre_ajout;
GtkWidget *treeview1;

fenetre_ajout=lookup_widget(objet,"ajout_precipitation");
gtk_widget_destroy(fenetre_ajout);
windowaffich=lookup_widget(objet,"affichage_precipitation");

GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"ajout_precipitation");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"modif_precipitation");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"supprimer_precipitatio");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"acceuil_precipitation");
gtk_widget_destroy(windowpr4);

windowaffich=create_affichage_precipitation();
gtk_widget_show (windowaffich);

treeview1=lookup_widget(windowaffich,"treeviewpr1");
afficher_precipitation(treeview1);
}


void
on_supprimer_precipitation_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *supprim_precipitation ;

GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"acceuil_precipitation");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"ajout_precipitation");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"modif_precipitation");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"affichage_precipitation");
gtk_widget_destroy(windowpr4);


supprim_precipitation=create_supprimer_precipitatio();
gtk_widget_show (supprim_precipitation);
}


void
on_modifier_precipitation_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *modif_prcipitation ;

GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"acceuil_precipitation");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"ajout_precipitation");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"supprimer_precipitatio");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"affichage_precipitation");
gtk_widget_destroy(windowpr4);

modif_prcipitation=create_modif_precipitation();
gtk_widget_show (modif_prcipitation);
}


void
on_ajouter_precipitation_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *ajout_precipitation ;

GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"acceuil_precipitation");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"modif_precipitation");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"supprimer_precipitatio");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"affichage_precipitation");
gtk_widget_destroy(windowpr4);

ajout_precipitation=create_ajout_precipitation();
gtk_widget_show (ajout_precipitation);
}


void
on_valider_precipitation_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f;precipitation PT; char ch[50];
int j,m,a,mon; char chj[20],chm[20],cha[20],chs[20],text[20];
int test1 , test2;
   
    GtkWidget *C,*QA,*M,*A,*pt,*pt2;
    GtkWidget *ajouter_precipitation1;
    ajouter_precipitation1=lookup_widget(objet,"ajout_precipitation");
    C=lookup_widget(objet,"entry_code_precipitation");
    QA=lookup_widget(objet,"entry_quantite_prec");
    M=lookup_widget(objet,"spinbutton_mois_precipitation");
    A=lookup_widget(objet,"spinbutton_annee_precipitation");
   

    pt=lookup_widget (objet ,"sortie_validation");
    pt2=lookup_widget (objet ,"code_label_prec");
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chm,"%d",m);
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(A)); sprintf(cha,"%d",a);
//mon=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(QA)); //sprintf(chs,"%d",mon);
strcpy(chs,gtk_entry_get_text(GTK_ENTRY(QA)));
//strcpy(PT.code_precipitation,gtk_entry_get_text(GTK_ENTRY(C)));
sprintf(PT.code_precipitation,"P%d",Pr_identif_auto());
strcpy(PT.mois,chm);
strcpy(PT.annee,cha);
strcpy(PT.quantite,chs);
//test1=Pr_trouve(PT.code_precipitation);
test2=P_trouve_mois_annee(PT.mois,PT.annee);

		

    
	    if (test2!=1)
		{ 

 ajouter_precipitation (PT);
f=fopen("P_identif.txt","a+");
		fprintf(f,"%s\n",PT.code_precipitation);
		fclose(f);
	 sprintf(ch,"Ajout reussi \nCode precipitation= %s",PT.code_precipitation);
		gtk_label_set_text(GTK_LABEL(pt),ch);
 gtk_label_set_text(GTK_LABEL(pt2),PT.code_precipitation);

			
		
			
		}
	    else
	
		{
		    sprintf(ch,"ERREUR: precipitation déjà existante");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		}
}


void
on_chercher_modif_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* identif,*pt; char id [25],ch[40]; int test;
char ch1[20],ch2[20],ch3[20],ch4[20];
GtkWidget *qa, *mm, *aa;
FILE* f;
f=fopen("precipitation.txt","r");
identif=lookup_widget(objet,"entry2");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
qa=lookup_widget(objet,"sortie_quantite");
mm=lookup_widget(objet,"sortie_mois_precipitation");
aa=lookup_widget(objet,"sortie_annee_precipitation");
pt=lookup_widget(objet,"sortie_recherche_precipitation");

	if (f!=NULL)
{

         while (fscanf (f, "%s %s %s %s\n",ch1,ch2,ch3,ch4)!=EOF)
            {
	if (strcmp(id,ch1)==0)

		{

		   	 sprintf(ch,"Identifiant existant!");
		   	 gtk_label_set_text(GTK_LABEL(pt),ch);

			gtk_label_set_text(GTK_LABEL(qa),ch2);
			gtk_label_set_text(GTK_LABEL(mm),ch3);
			gtk_label_set_text(GTK_LABEL(aa),ch4);


		}}
	fclose(f);
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant non existant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_valider_modif_precipitation_clicked (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[20],ch_value[20],id[20],ch[50]; int e,test;

	GtkWidget *element,*val,*identif,*pt;

pt=lookup_widget(objet,"sortie_resultat_precipitation");
identif=lookup_widget(objet,"entry2");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
element=lookup_widget(objet,"combobox_modifpr");
val=lookup_widget(objet,"entry_val");

strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));

e=int_ch(ch_element); 

strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

test=modif_precipitation(id,e,ch_value);

sprintf(ch,"%d",test);//gtk_label_set_text(GTK_LABEL(pt),ch);

    
	    if (strcmp(ch,"1")==0)
		{ 
		 
		    sprintf(ch,"Modification reussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 


}


void
on_retourpr2_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *retour_acceuil ;

GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"ajout_precipitation");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"modif_precipitation");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"supprimer_precipitatio");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"affichage_precipitation");
gtk_widget_destroy(windowpr4);

retour_acceuil=create_acceuil_precipitation();
gtk_widget_show (retour_acceuil);
}


void
on_retourpr3_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *retour_acceuil ;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"ajout_precipitation");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"modif_precipitation");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"supprimer_precipitatio");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"affichage_precipitation");
gtk_widget_destroy(windowpr4);
retour_acceuil=create_acceuil_precipitation();
gtk_widget_show (retour_acceuil);
}


void
on_valider_suppression_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* code_precipitation,*window_supp;
GtkWidget* pt;
 char id[20], ch[50]; int test;
window_supp=lookup_widget(objet,"supprimer_precipitatio");
code_precipitation=lookup_widget(objet,"entry_code_supp");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(code_precipitation)));
pt=lookup_widget (objet ,"sortie_code_supprimer");
test=supprimer_precipitation(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression reussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: ID inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_retourpr4_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *retour_acceuil ;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"ajout_precipitation");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"modif_precipitation");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"supprimer_precipitatio");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"affichage_precipitation");
gtk_widget_destroy(windowpr4);
retour_acceuil=create_acceuil_precipitation();
gtk_widget_show (retour_acceuil);
}


void
on_retourpr1_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *retour_acceuil ;
GtkWidget *windowpr1,* windowpr2,* windowpr3,* windowpr4;
windowpr1=lookup_widget(objet,"ajout_precipitation");
gtk_widget_destroy(windowpr1);
windowpr2=lookup_widget(objet,"modif_precipitation");
gtk_widget_destroy(windowpr2);
windowpr3=lookup_widget(objet,"supprimer_precipitatio");
gtk_widget_destroy(windowpr3);
windowpr4=lookup_widget(objet,"affichage_precipitation");
gtk_widget_destroy(windowpr4);
retour_acceuil=create_acceuil_precipitation();
gtk_widget_show (retour_acceuil);
}


void
on_treeviewpr1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* code_precipitation;
gchar* mm;
gchar* aa;
gchar* qq;
precipitation PT;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,1,&code_precipitation,2,&qq,3,&mm,4,&aa,-1);

}
}

/*
void
on_chercher_annee_seche_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f; char ch[50],chq[20],moy[20];
char ch1[20],ch2[20],ch3[20],ch4[20],as[20];
double min,qt; int i=0;
    	GtkWidget *pt,*pt1;
	GtkWidget *affichage;
	affichage=lookup_widget(objet,"affichage_precipitation");
   	pt=lookup_widget (objet ,"sortie_annee_seche");
	pt1=lookup_widget (objet ,"sortie_moy_annee");
	min=calcul_quantite(ch4);
f=fopen("precipitation.txt","r");
if (f!=NULL)
{
         while (fscanf (f, "%s %s %s %s \n",ch1,ch2,ch3,ch4)!=EOF)
           		 {
				i+=1;
				if (i==1)
					min=calcul_quantite(ch4);

				qt=calcul_quantite(ch4);
				if (qt<=min) 
				{
				min=qt;
				strcpy(as,ch4);}
				
			 }
}
fclose(f);
strcpy(chq,as);

sprintf(moy,"%.2f mm",min);
gtk_label_set_text(GTK_LABEL(pt),chq);
gtk_label_set_text(GTK_LABEL(pt1),moy);

}*/


////////////////////////////////////////reclamation////////////////////////
void
on_reclamation_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window,*windowd;

window=create_window_gestion_reclamation();
gtk_widget_show(window);
windowd=lookup_widget(objet,"espace_client");
gtk_widget_destroy(windowd);

}



int t[]={0,0,0};
void
on_calendar_rec_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
gtk_calendar_get_date(calendar,&jj,&mm,&aa);
}


void
on_checkbutton_services_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[0]=1;}
}


void
on_checkbutton_produits_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[1]=1;}
}


void
on_checkbutton_montant_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[2]=1;}
}


void
on_button_ajouter_rec_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
reclamation  r; char ch[50]=""; char date[20]; char text[10]; char x[5]; int test;
 char texte[20];
   
    GtkWidget *C,*CIN,*nom,*prenom,*reclam,*pt;
    C=lookup_widget(objet,"entry_id_rec");
    nom=lookup_widget(objet,"entry_nomclient");
    prenom=lookup_widget(objet,"entry_prenomclient");
    CIN=lookup_widget(objet,"entry_cin");
    reclam=lookup_widget(objet,"entry5");
    
    
   
    pt=lookup_widget (objet , "confirmation_ajout");
    
	
    strcpy(r.idrec,gtk_entry_get_text(GTK_ENTRY(C)));
    strcpy(r.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
    strcpy(r.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
    
    strcpy(r.cin_c,gtk_entry_get_text(GTK_ENTRY(CIN)));
  
    
    
	mm+=1;
    sprintf(date,"%d/%d/%d",jj,mm,aa);
    strcpy(r.date,date); 
    resultatrec( t ,texte) ;
    strcpy(r.type,"");
    strcpy(r.type,texte);
    strcpy(r.rec,gtk_entry_get_text(GTK_ENTRY(reclam)));
    test=trouve_rec(r.idrec);

	
    
	    if (test==0 && strlen(r.idrec)!=0 && strlen(r.cin_c)!=0  )
		{ 
		    ajouter_rec(r);
		    sprintf(ch,"Ajout reussi!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		if (strlen(r.idrec)==0 || strlen(r.cin_c)==0)
		{
		    sprintf(ch,"ERREUR: veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	     	else
		{
		    sprintf(ch,"ERREUR: reclamation deja existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_button_supp_rec_home_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_supprimer_reclamation,*window_gestion_reclamation;
window_gestion_reclamation=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window_gestion_reclamation);
window_supprimer_reclamation=create_window_supprimer_reclamation();
gtk_widget_show(window_supprimer_reclamation);
}


void
on_button_ajouter_rec_home_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_reclamation,*window_gestion_reclamation;
window_gestion_reclamation=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window_gestion_reclamation);
window_ajouter_reclamation=create_window_ajouter_reclamation();
gtk_widget_show(window_ajouter_reclamation);
}


void
on_button_modif_rec_home_clicked       (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowmodifierREC,*window_gestion_reclamation;
window_gestion_reclamation=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window_gestion_reclamation);
windowmodifierREC=create_windowmodifierREC();
gtk_widget_show(windowmodifierREC);
}


void
on_button_chercher_rec_home_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_reclamation,*window_gestion_reclamation;
window_gestion_reclamation=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window_gestion_reclamation);
window_chercher_reclamation=create_window_chercher_reclamation();
gtk_widget_show(window_chercher_reclamation);
}


void
on_button_consulter_rec_home_clicked   (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_consulter_reclamation,*window_gestion_reclamation,*treeview_rec;
window_gestion_reclamation=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window_gestion_reclamation);
window_consulter_reclamation=create_window_consulter_reclamation();
gtk_widget_show(window_consulter_reclamation);
treeview_rec=lookup_widget(window_consulter_reclamation,"treeview_rec");

afficher_reclamation(treeview_rec);
}


void
on_button_ajout_to_home_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_reclamation,*window_gestion_reclamation;
window_ajouter_reclamation=lookup_widget(objet,"window_ajouter_reclamation");
gtk_widget_destroy(window_ajouter_reclamation);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_button_affichage_ajout_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_reclamation,*window_consulter_reclamation,*treeview_rec;
window_ajouter_reclamation=lookup_widget(objet,"window_ajouter_reclamation");
gtk_widget_destroy(window_ajouter_reclamation);
window_consulter_reclamation=create_window_consulter_reclamation();
gtk_widget_show(window_consulter_reclamation);
treeview_rec=lookup_widget(window_consulter_reclamation,"treeview_rec");

afficher_reclamation(treeview_rec);
}


void
on_treeview_rec_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* identif_rec;
gchar* cin_client;
gchar* nom;
gchar* prenom;
gchar* date;
gchar* type_rec;
gchar* rec;

reclamation r;



GtkTreeModel *model= gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&identif_rec, 1,&nom, 2,&prenom,3,&cin_client,4,&date,5,&type_rec,6,&rec,-1);

//copie dans reclamation
    strcpy(r.idrec,identif_rec);
    /* strcpy(r.nom,nom);
    strcpy(r.prenom,prenom);
    strcpy(r.cin_c,cin_client);
   
    strcpy(r.date,date);
    strcpy(r.type,type_rec);
    strcpy(r.rec,rec);*/
//appel de la fct de suppression
supprimer_reclamation(identif_rec);
//màj du treeview
afficher_reclamation(treeview);



}
}


void
on_button_aff_to_home_clicked          (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_consulter_reclamation,*window_gestion_reclamation;
window_consulter_reclamation=lookup_widget(objet,"window_consulter_reclamation");
gtk_widget_destroy(window_consulter_reclamation);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_button_existance_idrec_clicked      (GtkWidget      *objet,
                                        gpointer         user_data)
{
 GtkWidget *id,*output,*window_supprimer_reclamation;
int test; char x[5],ch[50]="",idrec[20];
reclamation r;
window_supprimer_reclamation=lookup_widget(objet,"window_supprimer_reclamation");
id=lookup_widget(objet,"entry_idrec_supp");
output=lookup_widget(objet,"existance_rec_supp");
  strcpy(r.idrec,gtk_entry_get_text(GTK_ENTRY(id)));
test=trouve_rec(r.idrec);
sprintf(x,"%d",test);
if (test==1)
	{
	   sprintf(ch," votre reclamation existe deja ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}
else
	{
	   sprintf(ch,"votre reclamation n'existe pas ! ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}

}
void
on_button_supprimer_reclamation_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* identif_rec,*window_supprimer_reclamation;
GtkWidget* comm;
 char id[20], ch[40]; int test;
window_supprimer_reclamation=lookup_widget(objet,"window_supprimer_reclamation");
identif_rec=lookup_widget(objet,"entry_idrec_supp");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif_rec)));
comm=lookup_widget (objet , "confirmation_sppression");
test=supprimer_reclamation(id);


    
 if (test==1)
	 { 
			    
	  sprintf(ch,"Supression reussie");
	  gtk_label_set_text(GTK_LABEL(comm),ch);
	 }
 else
	 {
	  sprintf(ch," reclamation n'existe pas !");
	  gtk_label_set_text(GTK_LABEL(comm),ch);
	 } 
}


void
on_button_supp_to_home_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_supprimer_reclamation,*window_gestion_reclamation;
window_supprimer_reclamation=lookup_widget(objet,"window_supprimer_reclamation");
gtk_widget_destroy(window_supprimer_reclamation);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_button_verfier_existance_id_clicked (GtkWidget      *objet,
                                        gpointer         user_data)
{
 /*GtkWidget* identif,*pt; char id [25],ch[40]; int test;
identif=lookup_widget(objet,"entry_id_cherche");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
pt=lookup_widget(objet,"commentaire");
test=trouve_rec(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"0")==0)
		{ 
		    
		    sprintf(ch,"reclamation existe");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: reclamation non existant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} */



}


void
on_button_chercher_rec_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_reclamation, *window_chercher_reclamation2 ,*treeview_rec,*N;//,*P,*pt;
char code[20];
int test;char ch[40];
//window_chercher_reclamation=lookup_widget(objet,"window_chercher_reclamation");
//gtk_widget_destroy(window_chercher_reclamation);
N=lookup_widget(objet,"entry_nom_cherche");

strcpy(N,gtk_entry_get_text(GTK_ENTRY(code)));  


//pt=lookup_widget(objet,"commentaire");
test=ajout_rec1(code);
/*sprintf(ch,"%d",test);

             if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"reclamation existe");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: reclamation non existant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} */
window_chercher_reclamation=lookup_widget(objet,"window_chercher_reclamation");
gtk_widget_destroy(window_chercher_reclamation);

window_chercher_reclamation2=create_window_chercher_reclamation2();
gtk_widget_show(window_chercher_reclamation2);

treeview_rec=lookup_widget(window_chercher_reclamation2,"treeview_cher");

afficher_rec1(treeview_rec);

}


void
on_button_retour_cher_acc_clicked      (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_reclamation,*window_gestion_reclamation;
window_chercher_reclamation=lookup_widget(objet,"window_chercher_reclamation");
gtk_widget_destroy(window_chercher_reclamation);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_treeview_cher_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button_cher2_home_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_reclamation2,*window_gestion_reclamation;
window_chercher_reclamation2=lookup_widget(objet,"window_chercher_reclamation2");
gtk_widget_destroy(window_chercher_reclamation2);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_ButtonModifier1_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
    remove("tempRID.txt");
    GtkWidget *idrec;
    char id[50];
    idrec=lookup_widget(objet,"entryModifier1");
    strcpy(id,gtk_entry_get_text(GTK_ENTRY(idrec)));
    FILE* tempID;
    tempID=fopen("tempRID.txt","a+"); 
    fprintf (tempID,"%s \n",id);
    fclose(tempID);

GtkWidget *windowmodifierREC,*windowmodifierREC2;
windowmodifierREC=lookup_widget(objet,"windowmodifierREC");
gtk_widget_destroy(windowmodifierREC);
windowmodifierREC2=create_windowmodifierREC2();
gtk_widget_show(windowmodifierREC2);



}

void
on_calendarM1_day_selected             (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
gtk_calendar_get_date(calendar,&jj,&mm,&aa);
}


void
on_buttonModifier2_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
reclamation  r; char ch[50]=""; char date[20]; char text[10]; char x[5]; int test;
 char texte[20];
   
    FILE* fw;
    FILE* f;

        FILE* Ft;
	Ft=fopen("tempRID.txt","a+"); 
	char idt[30];
	fscanf(Ft, "%s",idt);
	char a1[30],a2[30],a3[30],a4[30],a5[30],a6[30],a7[30];
    f=fopen("reclamation.txt","r"); fw=fopen("newrec.txt","a+");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s %s   \n",a1,a2,a3,a4,a5,a6,a7)!=EOF)
            {
                if (strcmp (a1, idt) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s   \n",a1,a2,a3,a4,a5,a6,a7);
            }

    }
    else
        return (test) ;
    fclose(fw);
    fclose(f);
    fclose(Ft);
   remove("reclamation.txt");
   rename("newrec.txt","reclamation.txt");


    GtkWidget *C,*CIN,*nom,*prenom,*reclam,*pt;
    C=lookup_widget(objet,"entryM1");
    nom=lookup_widget(objet,"entryM2");
    prenom=lookup_widget(objet,"entryM3");
    CIN=lookup_widget(objet,"entryM4");
    reclam=lookup_widget(objet,"entryM5");
    
    
   
    pt=lookup_widget (objet , "confirmation_ajout");
    
	
    strcpy(r.idrec,gtk_entry_get_text(GTK_ENTRY(C)));
    strcpy(r.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
    strcpy(r.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
    
    strcpy(r.cin_c,gtk_entry_get_text(GTK_ENTRY(CIN)));
  
    
    
	mm+=1;
    sprintf(date,"%d/%d/%d",jj,mm,aa);
    strcpy(r.date,date); 
    resultatrec( t ,texte) ;
    strcpy(r.type,"");
    strcpy(r.type,texte);
    strcpy(r.rec,gtk_entry_get_text(GTK_ENTRY(reclam)));
    test=trouve_rec(r.idrec);
    sprintf(x,"%d",test); 
	
    
	    if (test==0 && strlen(r.idrec)!=0 && strlen(r.cin_c)!=0  )
		{ 
		    ajouter_rec(r);
		    sprintf(ch,"Ajout reussi!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		if (strlen(r.idrec)==0 || strlen(r.cin_c)==0)
		{
		    sprintf(ch,"ERREUR: veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	     	else
		{
		    sprintf(ch,"ERREUR: reclamation deja existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 	
}


void
on_checkbuttonM2_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[1]=1;}
}


void
on_checkbuttonM3_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[2]=1;}
}


void
on_checkbuttonM1_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[0]=1;}
}


void
on_buttonprevious_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window;
window=lookup_widget(objet,"windowmodifierREC2");




	GtkWidget *input1;	
	GtkWidget *input2;	
	GtkWidget *input3;	
	GtkWidget *input4;	
	GtkWidget *input5;
	input1 = lookup_widget(objet,"entryM1");
	input2 = lookup_widget(objet,"entryM2");
	input3 = lookup_widget(objet,"entryM3");
	input4 = lookup_widget(objet,"entryM4");
	input5 = lookup_widget(objet,"entryM5");

        FILE* Fr;
        FILE* Ft;
	Ft=fopen("tempRID.txt","a+"); 
	Fr=fopen("reclamation.txt","a+"); 
	char a1[30],a2[30],a3[30],a4[30],a5[30],a6[30],a7[30];
	char idt[30];
	fscanf(Ft, "%s",idt);
	if (Fr!=NULL)
	{
	while(fscanf(Fr,"%s %s %s %s %s %s %s \n",a1,a2,a3,a4,a5,a6,a7)!=EOF)
		{	
				if(strcmp(a1,idt)==0){
				gtk_entry_set_text(GTK_ENTRY(input1),a1);
				gtk_entry_set_text(GTK_ENTRY(input2),a3);
				gtk_entry_set_text(GTK_ENTRY(input3),a4);
				gtk_entry_set_text(GTK_ENTRY(input4),a2);
				gtk_entry_set_text(GTK_ENTRY(input5),a7);
				break;				
				}
		}
}

	fclose(Fr);
}


void
on_buttonHOMEM_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowmodifierREC2,*window_gestion_reclamation;
windowmodifierREC2=lookup_widget(objet,"windowmodifierREC2");
gtk_widget_destroy(windowmodifierREC2);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_buttonHomeM2_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowmodifierREC,*window_gestion_reclamation;
windowmodifierREC=lookup_widget(objet,"windowmodifierREC");
gtk_widget_destroy(windowmodifierREC);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_button1_clicked                     (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *id,*output,*windowmodifierREC;
int test; char x[5],ch[50]="",idrec[20];
reclamation r;
windowmodifierREC=lookup_widget(objet,"windowmodifierREC");
id=lookup_widget(objet,"entryModifier1");
output=lookup_widget(objet,"label40");
  strcpy(r.idrec,gtk_entry_get_text(GTK_ENTRY(id)));
test=trouve_rec(r.idrec);
sprintf(x,"%d",test);
if (test==1)
	{
	   sprintf(ch," votre reclamation existe deja ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}
else
	{
	   sprintf(ch,"votre reclamation n'existe pas ! ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}
}
void
on_verifier_rec_chercher_clicked       (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *id,*output,*window_chercher_reclamation;
int test; char x[5],ch[50]="",idrec[20];
reclamation r;
window_chercher_reclamation=lookup_widget(objet,"window_chercher_reclamation");
id=lookup_widget(objet,"entry_nom_cherche");
output=lookup_widget(objet,"commentaire");
  strcpy(r.idrec,gtk_entry_get_text(GTK_ENTRY(id)));
test=trouve_rec(r.idrec);
sprintf(x,"%d",test);
if (test==1)
	{
	   sprintf(ch," votre reclamation existe deja ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}
else
	{
	   sprintf(ch,"votre reclamation n'existe pas ! ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}
}

/*



void
on_calendar_rec_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
gtk_calendar_get_date(calendar,&jj,&mm,&aa);
}


void
on_checkbutton_services_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[0]=1;}
}


void
on_checkbutton_produits_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[1]=1;}
}


void
on_checkbutton_montant_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[2]=1;}
}


void
on_button_ajouter_rec_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
reclamation  r; char ch[50]=""; char date[20]; char text[10]; char x[5]; int test;
 char texte[20];
   
    GtkWidget *C,*CIN,*nom,*prenom,*reclam,*pt;
    C=lookup_widget(objet,"entry_id_rec");
    nom=lookup_widget(objet,"entry_nomclient");
    prenom=lookup_widget(objet,"entry_prenomclient");
    CIN=lookup_widget(objet,"entry_cin");
    reclam=lookup_widget(objet,"entry5");
    
    
   
    pt=lookup_widget (objet , "confirmation_ajout");
    
	
    strcpy(r.idrec,gtk_entry_get_text(GTK_ENTRY(C)));
    strcpy(r.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
    strcpy(r.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
    
    strcpy(r.cin_c,gtk_entry_get_text(GTK_ENTRY(CIN)));
  
    
    
	mm+=1;
    sprintf(date,"%d/%d/%d",jj,mm,aa);
    strcpy(r.date,date); 
    resultat( t ,texte) ;
    strcpy(r.type,"");
    strcpy(r.type,texte);
    strcpy(r.rec,gtk_entry_get_text(GTK_ENTRY(reclam)));
    test=trouve_rec(r.idrec);

	
    
	    if (test==0 && strlen(r.idrec)!=0 && strlen(r.cin_c)!=0  )
		{ 
		    ajouter_rec(r);
		    sprintf(ch,"Ajout reussi!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		if (strlen(r.idrec)==0 || strlen(r.cin_c)==0)
		{
		    sprintf(ch,"ERREUR: veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	     	else
		{
		    sprintf(ch,"ERREUR: reclamation deja existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_button_supp_rec_home_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_supprimer_reclamation,*window_gestion_reclamation;
window_gestion_reclamation=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window_gestion_reclamation);
window_supprimer_reclamation=create_window_supprimer_reclamation();
gtk_widget_show(window_supprimer_reclamation);
}


void
on_button_ajouter_rec_home_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_reclamation,*window_gestion_reclamation;
window_gestion_reclamation=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window_gestion_reclamation);
window_ajouter_reclamation=create_window_ajouter_reclamation();
gtk_widget_show(window_ajouter_reclamation);
}


void
on_button_modif_rec_home_clicked       (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowmodifierREC,*window_gestion_reclamation;
window_gestion_reclamation=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window_gestion_reclamation);
windowmodifierREC=create_windowmodifierREC();
gtk_widget_show(windowmodifierREC);
}


void
on_button_chercher_rec_home_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_reclamation,*window_gestion_reclamation;
window_gestion_reclamation=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window_gestion_reclamation);
window_chercher_reclamation=create_window_chercher_reclamation();
gtk_widget_show(window_chercher_reclamation);
}


void
on_button_consulter_rec_home_clicked   (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_consulter_reclamation,*window_gestion_reclamation,*treeview_rec;
window_gestion_reclamation=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window_gestion_reclamation);
window_consulter_reclamation=create_window_consulter_reclamation();
gtk_widget_show(window_consulter_reclamation);
treeview_rec=lookup_widget(window_consulter_reclamation,"treeview_rec");

afficher_reclamation(treeview_rec);
}


void
on_button_ajout_to_home_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_reclamation,*window_gestion_reclamation;
window_ajouter_reclamation=lookup_widget(objet,"window_ajouter_reclamation");
gtk_widget_destroy(window_ajouter_reclamation);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_button_affichage_ajout_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_reclamation,*window_consulter_reclamation,*treeview_rec;
window_ajouter_reclamation=lookup_widget(objet,"window_ajouter_reclamation");
gtk_widget_destroy(window_ajouter_reclamation);
window_consulter_reclamation=create_window_consulter_reclamation();
gtk_widget_show(window_consulter_reclamation);
treeview_rec=lookup_widget(window_consulter_reclamation,"treeview_rec");

afficher_reclamation(treeview_rec);
}


void
on_treeview_rec_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* identif_rec;
gchar* cin_client;
gchar* nom;
gchar* prenom;
gchar* date;
gchar* type_rec;
gchar* rec;

reclamation r;



GtkTreeModel *model= gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&identif_rec, 1,&nom, 2,&prenom,3,&cin_client,4,&date,5,&type_rec,6,&rec,-1);

//copie dans reclamation
    strcpy(r.idrec,identif_rec);
    /* strcpy(r.nom,nom);
    strcpy(r.prenom,prenom);
    strcpy(r.cin_c,cin_client);
   
    strcpy(r.date,date);
    strcpy(r.type,type_rec);
    strcpy(r.rec,rec);
//appel de la fct de suppression
supprimer_reclamation(identif_rec);
//màj du treeview
afficher_reclamation(treeview);



}
}


void
on_button_aff_to_home_clicked          (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_consulter_reclamation,*window_gestion_reclamation;
window_consulter_reclamation=lookup_widget(objet,"window_consulter_reclamation");
gtk_widget_destroy(window_consulter_reclamation);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_button_existance_idrec_clicked      (GtkWidget      *objet,
                                        gpointer         user_data)
{
 GtkWidget *id,*output,*window_supprimer_reclamation;
int test; char x[5],ch[50]="",idrec[20];
reclamation r;
window_supprimer_reclamation=lookup_widget(objet,"window_supprimer_reclamation");
id=lookup_widget(objet,"entry_idrec_supp");
output=lookup_widget(objet,"existance_rec_supp");
  strcpy(r.idrec,gtk_entry_get_text(GTK_ENTRY(id)));
test=trouve_rec(r.idrec);
sprintf(x,"%d",test);
if (test==1)
	{
	   sprintf(ch," votre reclamation existe deja ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}
else
	{
	   sprintf(ch,"votre reclamation n'existe pas ! ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}

}
void
on_button_supprimer_reclamation_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* identif_rec,*window_supprimer_reclamation;
GtkWidget* comm;
 char id[20], ch[40]; int test;
window_supprimer_reclamation=lookup_widget(objet,"window_supprimer_reclamation");
identif_rec=lookup_widget(objet,"entry_idrec_supp");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif_rec)));
comm=lookup_widget (objet , "confirmation_sppression");
test=supprimer_reclamation(id);


    
 if (test==1)
	 { 
			    
	  sprintf(ch,"Supression reussie");
	  gtk_label_set_text(GTK_LABEL(comm),ch);
	 }
 else
	 {
	  sprintf(ch," reclamation n'existe pas !");
	  gtk_label_set_text(GTK_LABEL(comm),ch);
	 } 
}


void
on_button_supp_to_home_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_supprimer_reclamation,*window_gestion_reclamation;
window_supprimer_reclamation=lookup_widget(objet,"window_supprimer_reclamation");
gtk_widget_destroy(window_supprimer_reclamation);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_button_verfier_existance_id_clicked (GtkWidget      *objet,
                                        gpointer         user_data)
{
 /*GtkWidget* identif,*pt; char id [25],ch[40]; int test;
identif=lookup_widget(objet,"entry_id_cherche");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
pt=lookup_widget(objet,"commentaire");
test=trouve_rec(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"0")==0)
		{ 
		    
		    sprintf(ch,"reclamation existe");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: reclamation non existant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 



}


void
on_button_chercher_rec_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_reclamation, *window_chercher_reclamation2 ,*treeview_rec,*N;//,*P,*pt;
char code[20];
int test;char ch[40];
//window_chercher_reclamation=lookup_widget(objet,"window_chercher_reclamation");
//gtk_widget_destroy(window_chercher_reclamation);
N=lookup_widget(objet,"entry_nom_cherche");

strcpy(N,gtk_entry_get_text(GTK_ENTRY(code)));  


//pt=lookup_widget(objet,"commentaire");
test=ajout_rec1(code);
/*sprintf(ch,"%d",test);

             if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"reclamation existe");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: reclamation non existant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
window_chercher_reclamation=lookup_widget(objet,"window_chercher_reclamation");
gtk_widget_destroy(window_chercher_reclamation);

window_chercher_reclamation2=create_window_chercher_reclamation2();
gtk_widget_show(window_chercher_reclamation2);

treeview_rec=lookup_widget(window_chercher_reclamation2,"treeview_cher");

afficher_rec1(treeview_rec);

}


void
on_button_retour_cher_acc_clicked      (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_reclamation,*window_gestion_reclamation;
window_chercher_reclamation=lookup_widget(objet,"window_chercher_reclamation");
gtk_widget_destroy(window_chercher_reclamation);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_treeview_cher_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button_cher2_home_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_chercher_reclamation2,*window_gestion_reclamation;
window_chercher_reclamation2=lookup_widget(objet,"window_chercher_reclamation2");
gtk_widget_destroy(window_chercher_reclamation2);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_ButtonModifier1_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
    remove("tempID.txt");
    GtkWidget *idrec;
    char id[50];
    idrec=lookup_widget(objet,"entryModifier1");
    strcpy(id,gtk_entry_get_text(GTK_ENTRY(idrec)));
    FILE* tempID;
    tempID=fopen("tempID.txt","a+"); 
    fprintf (tempID,"%s \n",id);
    fclose(tempID);

GtkWidget *windowmodifierREC,*windowmodifierREC2;
windowmodifierREC=lookup_widget(objet,"windowmodifierREC");
gtk_widget_destroy(windowmodifierREC);
windowmodifierREC2=create_windowmodifierREC2();
gtk_widget_show(windowmodifierREC2);



}

void
on_calendarM1_day_selected             (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
gtk_calendar_get_date(calendar,&jj,&mm,&aa);
}


void
on_buttonModifier2_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
reclamation  r; char ch[50]=""; char date[20]; char text[10]; char x[5]; int test;
 char texte[20];
   
    FILE* fw;
    FILE* f;

        FILE* Ft;
	Ft=fopen("tempID.txt","a+"); 
	char idt[30];
	fscanf(Ft, "%s",idt);
	char a1[30],a2[30],a3[30],a4[30],a5[30],a6[30],a7[30];
    f=fopen("reclamation.txt","r"); fw=fopen("newrec.txt","a+");
    if (fw!=NULL && f!=NULL)
    {
         while (fscanf (f, "%s %s %s %s %s %s %s   \n",a1,a2,a3,a4,a5,a6,a7)!=EOF)
            {
                if (strcmp (a1, idt) != 0)
                fprintf (fw,"%s %s %s %s %s %s %s   \n",a1,a2,a3,a4,a5,a6,a7);
            }

    }
    else
        return (test) ;
    fclose(fw);
    fclose(f);
    fclose(Ft);
   remove("reclamation.txt");
   rename("newrec.txt","reclamation.txt");


    GtkWidget *C,*CIN,*nom,*prenom,*reclam,*pt;
    C=lookup_widget(objet,"entryM1");
    nom=lookup_widget(objet,"entryM2");
    prenom=lookup_widget(objet,"entryM3");
    CIN=lookup_widget(objet,"entryM4");
    reclam=lookup_widget(objet,"entryM5");
    
    
   
    pt=lookup_widget (objet , "confirmation_ajout");
    
	
    strcpy(r.idrec,gtk_entry_get_text(GTK_ENTRY(C)));
    strcpy(r.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
    strcpy(r.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
    
    strcpy(r.cin_c,gtk_entry_get_text(GTK_ENTRY(CIN)));
  
    
    
	mm+=1;
    sprintf(date,"%d/%d/%d",jj,mm,aa);
    strcpy(r.date,date); 
    resultat( t ,texte) ;
    strcpy(r.type,"");
    strcpy(r.type,texte);
    strcpy(r.rec,gtk_entry_get_text(GTK_ENTRY(reclam)));
    test=trouve_rec(r.idrec);
    sprintf(x,"%d",test); 
	
    
	    if (test==0 && strlen(r.idrec)!=0 && strlen(r.cin_c)!=0  )
		{ 
		    ajouter_rec(r);
		    sprintf(ch,"Ajout reussi!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		if (strlen(r.idrec)==0 || strlen(r.cin_c)==0)
		{
		    sprintf(ch,"ERREUR: veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	     	else
		{
		    sprintf(ch,"ERREUR: reclamation deja existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 	
}


void
on_checkbuttonM2_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[1]=1;}
}


void
on_checkbuttonM3_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[2]=1;}
}


void
on_checkbuttonM1_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
	{t[0]=1;}
}


void
on_buttonprevious_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window;
window=lookup_widget(objet,"windowmodifierREC2");




	GtkWidget *input1;	
	GtkWidget *input2;	
	GtkWidget *input3;	
	GtkWidget *input4;	
	GtkWidget *input5;
	input1 = lookup_widget(objet,"entryM1");
	input2 = lookup_widget(objet,"entryM2");
	input3 = lookup_widget(objet,"entryM3");
	input4 = lookup_widget(objet,"entryM4");
	input5 = lookup_widget(objet,"entryM5");

        FILE* Fr;
        FILE* Ft;
	Ft=fopen("tempID.txt","a+"); 
	Fr=fopen("reclamation.txt","a+"); 
	char a1[30],a2[30],a3[30],a4[30],a5[30],a6[30],a7[30];
	char idt[30];
	fscanf(Ft, "%s",idt);
	if (Fr!=NULL)
	{
	while(fscanf(Fr,"%s %s %s %s %s %s %s \n",a1,a2,a3,a4,a5,a6,a7)!=EOF)
		{	
				if(strcmp(a1,idt)==0){
				gtk_entry_set_text(GTK_ENTRY(input1),a1);
				gtk_entry_set_text(GTK_ENTRY(input2),a3);
				gtk_entry_set_text(GTK_ENTRY(input3),a4);
				gtk_entry_set_text(GTK_ENTRY(input4),a2);
				gtk_entry_set_text(GTK_ENTRY(input5),a7);
				break;				
				}
		}
}

	fclose(Fr);
}


void
on_buttonHOMEM_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowmodifierREC2,*window_gestion_reclamation;
windowmodifierREC2=lookup_widget(objet,"windowmodifierREC2");
gtk_widget_destroy(windowmodifierREC2);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_buttonHomeM2_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowmodifierREC,*window_gestion_reclamation;
windowmodifierREC=lookup_widget(objet,"windowmodifierREC");
gtk_widget_destroy(windowmodifierREC);
window_gestion_reclamation=create_window_gestion_reclamation();
gtk_widget_show(window_gestion_reclamation);
}


void
on_button1_clicked                     (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *id,*output,*windowmodifierREC;
int test; char x[5],ch[50]="",idrec[20];
reclamation r;
windowmodifierREC=lookup_widget(objet,"windowmodifierREC");
id=lookup_widget(objet,"entryModifier1");
output=lookup_widget(objet,"label40");
  strcpy(r.idrec,gtk_entry_get_text(GTK_ENTRY(id)));
test=trouve_rec(r.idrec);
sprintf(x,"%d",test);
if (test==1)
	{
	   sprintf(ch," votre reclamation existe deja ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}
else
	{
	   sprintf(ch,"votre reclamation n'existe pas ! ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}
}
void
on_verifier_rec_chercher_clicked       (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *id,*output,*window_chercher_reclamation;
int test; char x[5],ch[50]="",idrec[20];
reclamation r;
window_chercher_reclamation=lookup_widget(objet,"window_chercher_reclamation");
id=lookup_widget(objet,"entry_nom_cherche");
output=lookup_widget(objet,"commentaire");
  strcpy(r.idrec,gtk_entry_get_text(GTK_ENTRY(id)));
test=trouve_rec(r.idrec);
sprintf(x,"%d",test);
if (test==1)
	{
	   sprintf(ch," votre reclamation existe deja ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}
else
	{
	   sprintf(ch,"votre reclamation n'existe pas ! ");
	   gtk_label_set_text(GTK_LABEL(output),ch);
	}
}


/*
void
on_button_supp_rec_home_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_ajouter_rec_home_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_modifie_rec_home_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_chercher_rec_home_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_consulter_rec_home_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_calendar_rec_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data)
{

}


void
on_checkbutton_services_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button_ajouter_rec_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_ajouter_to_home_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_affichage_ajout_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_checkbutton_produits_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbutton_montant_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_treeview_rec_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button_aff_to_home_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_existance_idrec_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_supprimer_reclamation_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_supp_to_home_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_retour_cher_acc_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_chercher_rec_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_verifier_rec_chercher_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeview_cher_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button_cher2_home_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonHomeM2_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonModifier1_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_calendarM1_day_selected             (GtkCalendar     *calendar,
                                        gpointer         user_data)
{

}


void
on_buttonModifier2_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_checkbuttonM2_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbuttonM3_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbuttonM1_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_buttonprevious_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonHOMEM_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}



void
on_button_modifie_rec_home_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_ajouter_to_home_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonModifier1_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}



void
on_button_modifier_rec_home_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_ajout_to_home_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ButtonModifier1_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}



void
on_button_modif_rec_home_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/
////////////////////////////CAPTEURS///////////////////////////////////////////////////////////////////////////

void
on_exit_clicked                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0;
		window0=lookup_widget(objet,"fenetre_login");
		gtk_widget_destroy(window0);
}


void
on_LOGIN_CP_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f;
char ch[70],ch1[20],ch2[20]; int test;
 GtkWidget* id,*mdp,*window0,*window1,*pt;
id=lookup_widget(objet,"entry1_login_CP");
mdp=lookup_widget(objet,"entry3_login_CP");
pt=lookup_widget(objet,"label_sortie_msg_emp");
 strcpy(ch1,gtk_entry_get_text(GTK_ENTRY(id)));
    strcpy(ch2,gtk_entry_get_text(GTK_ENTRY(mdp)));
 f=fopen("employe.txt","a+"); fclose(f); //pour eviter l'errerur de E_trouve pour l'ajout du premier employe

test=E_trouve_auth(ch1,ch2);
	sprintf(ch,"%d",test);
 gtk_label_set_text(GTK_LABEL(pt),ch);
	
if( strlen(ch1)==0 || strlen(ch2)==0 )
	

	{

	sprintf(ch,"ERREUR: veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
  
  else if (test==0)
	{
		sprintf(ch,"ERREUR: Veuillez réessayer");
			    gtk_label_set_text(GTK_LABEL(pt),ch);
	}

	   else
		{ 
		window0=lookup_widget(objet,"fenetre_login");
		gtk_widget_destroy(window0);


	
		window1=create_window_princ_espace_emp ();
		gtk_widget_show(window1);	
		}
 


}


void
on_espace_votre_capteurs_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *fenetre_capteurs_temperature;  
GtkWidget *fenetre_capteurs_humidite ;

GtkWidget *pInfo;
GtkWidget *pWindow;
GtkWidget *treeview,*treeview2,*treeview3,*treeview4;

if ( (choix_cap[0]==1) && (choix_cap[1]==1) )
{
fenetre_capteurs_temperature=create_fenetre_capteurs_temperature();
fenetre_capteurs_humidite=create_fenetre_capteurs_humidite();

gtk_widget_show (fenetre_capteurs_temperature);

treeview=lookup_widget(fenetre_capteurs_temperature,"treeview_cp_T_def");
affich_cp_t_def(treeview);
treeview2=lookup_widget(fenetre_capteurs_temperature,"treeview_marque_cp_t");
affich_marque_cp_t_def(treeview2);

gtk_widget_show (fenetre_capteurs_humidite);

treeview3=lookup_widget(fenetre_capteurs_humidite,"treeview_cp_H_def");
affich_cp_h_def(treeview3);

treeview4=lookup_widget(fenetre_capteurs_humidite,"treeview_marque_cp_h");
affich_marque_cp_h_def(treeview4);

}

else if (choix_cap[1]==1)
{
fenetre_capteurs_humidite=create_fenetre_capteurs_humidite();
gtk_widget_show (fenetre_capteurs_humidite);

treeview3=lookup_widget(fenetre_capteurs_humidite,"treeview_cp_H_def");
affich_cp_h_def(treeview3);
treeview4=lookup_widget(fenetre_capteurs_humidite,"treeview_marque_cp_h");
affich_marque_cp_h_def(treeview4);


}


else if (choix_cap[0]==1)
{
fenetre_capteurs_temperature=create_fenetre_capteurs_temperature();
gtk_widget_show (fenetre_capteurs_temperature);

treeview=lookup_widget(fenetre_capteurs_temperature,"treeview_cp_T_def");
affich_cp_t_def(treeview);

treeview2=lookup_widget(fenetre_capteurs_temperature,"treeview_marque_cp_t");
affich_marque_cp_t_def(treeview2);
}


else if (choix_cap[0]!=1 && (choix_cap[1]!=1) ) 
{
pWindow = gtk_widget_get_toplevel(GTK_WIDGET(user_data));
 
    pInfo = gtk_message_dialog_new(GTK_WINDOW(pWindow),
        GTK_DIALOG_MODAL,
        GTK_MESSAGE_INFO,
        GTK_BUTTONS_OK,
        "Il faut choisir un type de capteur ! ");
 
    gtk_dialog_run(GTK_DIALOG(pInfo));
 
    gtk_widget_destroy(pInfo);
}
}


void
on_suppression_CAP_T_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* CODE,*window_supp;
GtkWidget* pt;
 char code[20], ch[60]; int test;
window_supp=lookup_widget(objet,"fenetre_capteurs_temperature");
CODE=lookup_widget(objet,"entry_id_supp_CP_T");
strcpy(code,gtk_entry_get_text(GTK_ENTRY(CODE)));
pt=lookup_widget (objet , "label_sortie_supp_CP_T");
test=CAP_T_supprimer(code);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression réussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: Identifiant de capteur inexistant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_affich_CP_T_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajout,*window0, *window_consul ,*AFF_treeview,*window3,*window4,*window5;

window_ajout=lookup_widget(objet,"fenetre_ajout_CP_T");
gtk_widget_destroy(window_ajout);


window4=lookup_widget(objet,"fenetre_modif_CP_T");
gtk_widget_destroy(window4);

window5=lookup_widget(objet,"fenetre_recherche_CP_T");
gtk_widget_destroy(window5);

window0=lookup_widget(objet,"fenetre_capteurs_temperature");
gtk_widget_destroy(window0);

window_consul=create_fenetre_consul_CP_T();
gtk_widget_show(window_consul);

AFF_treeview=lookup_widget(window_consul,"treeview_cp_t");

CAP_T_afficher(AFF_treeview);
}


void
on_modification_CP_T_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget* window0, *window;

window0=lookup_widget(objet,"fenetre_capteurs_temperature");
gtk_widget_destroy(window0);

window=create_fenetre_modif_CP_T();
gtk_widget_show(window);

}


void
on_cherche_CP_T_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;

window0=lookup_widget(objet,"fenetre_capteurs_temperature");
gtk_widget_destroy(window0);

window=create_fenetre_recherche_CP_T();
gtk_widget_show(window);
}


void
on_ajout_capteurs_temperature_clicked  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"fenetre_capteurs_temperature");
gtk_widget_destroy(window0);

window=create_fenetre_ajout_CP_T();
gtk_widget_show(window);
}


void
on_suppression_val_T_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* CODE,*window_supp;
GtkWidget* pt;
 char code[20], ch[40]; int test;
window_supp=lookup_widget(objet,"fenetre_capteurs_temperature");
CODE=lookup_widget(objet,"entry_id_supp_val_T");
strcpy(code,gtk_entry_get_text(GTK_ENTRY(CODE)));
pt=lookup_widget (objet , "label_sortie_supp_val_T");
test=VAL_T_supprimer(code);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression réussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_affich_val_T_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajout,*window0, *window_consul ,*AFF_treeview,*window3,*window4,*window5;

window_ajout=lookup_widget(objet,"fenetre_ajout_val_T");
gtk_widget_destroy(window_ajout);


window4=lookup_widget(objet,"fenetre_modif_VAL_T");
gtk_widget_destroy(window4);

window5=lookup_widget(objet,"fenetre_recherche_VAL_T");
gtk_widget_destroy(window5);

window0=lookup_widget(objet,"fenetre_capteurs_temperature");
gtk_widget_destroy(window0);

window_consul=create_fenetre_consul_VAL_T();
gtk_widget_show(window_consul);

AFF_treeview=lookup_widget(window_consul,"treeview_val_t");

VAL_T_afficher(AFF_treeview);
}


void
on_modification_val_T_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;

window0=lookup_widget(objet,"fenetre_capteurs_temperature");
gtk_widget_destroy(window0);

window=create_fenetre_modif_VAL_T();
gtk_widget_show(window);
}


void
on_cherche_val_T_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;

window0=lookup_widget(objet,"fenetre_capteurs_temperature");
gtk_widget_destroy(window0);

window=create_fenetre_recherche_VAL_T();
gtk_widget_show(window);
}


void
on_ajout_val_temperature_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;

window0=lookup_widget(objet,"fenetre_capteurs_temperature");
gtk_widget_destroy(window0);

window=create_fenetre_ajout_val_T();
gtk_widget_show(window);
}


void
on_treeview_cp_T_def_row_activated     (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
//vide
}


void
on_treeview_marque_cp_t_row_activated  (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
//vide
}


void
on_attention_marque_t_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *pt,*window_evite_cet_marque;
	
window_evite_cet_marque=create_fenetre_marque_eviter_T();
gtk_widget_show(window_evite_cet_marque);
pt=lookup_widget(window_evite_cet_marque,"sortie_marque_alar_t");

FILE* f;
FILE* f2; char ch[50],chq[20];
char marque[20],evite[20];
int min,occurence; int i=0;
  int occ;  	
int deb=1;

	f2=fopen("occurence_H2.txt","a+");fclose(f2);
	min=calcul_marque(marque);
f=fopen("occurence_H.txt","r");
f2=fopen("occurence_H2.txt","a+");
if (f!=NULL)
{
         while (fscanf (f, "%s %d \n",marque,occ)!=EOF)
           		 {

if (deb < occ)
{
deb = occ ;
fprintf(f2,"%s %d \n",marque,occ);
				strcpy(evite,marque);
}

/*
				i+=1;
				if (i==1)
					min=calcul_marque(marque);

				occurence=calcul_marque(marque);
				if (occurence<=min) 
				{
				min=occurence;
				strcpy(evite,marque);
				}
				*/
//fprintf(f2,"%s %d \n",marque,occ);
			 }

}
fclose(f);
fclose(f2);
strcpy(chq,evite);


gtk_label_set_text(GTK_LABEL(pt),chq);




}


void
on_suppression_CP_H_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* CODE,*window_supp;
GtkWidget* pt;
 char code[20], ch[40]; int test;
window_supp=lookup_widget(objet,"fenetre_capteurs_humidite");
CODE=lookup_widget(objet,"entry_id_supp_CP_H");
strcpy(code,gtk_entry_get_text(GTK_ENTRY(CODE)));
pt=lookup_widget (objet , "label_sortie_supp_CP_H");
test=CAP_H_supprimer(code);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression réussie");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_modification_CP_H_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"fenetre_capteurs_humidite");
gtk_widget_destroy(window0);

window=create_fenetre_modif_CP_H();
gtk_widget_show(window);
}


void
on_cherche_CP_H_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"fenetre_capteurs_humidite");
gtk_widget_destroy(window0);

window=create_fenetre_recherche_CP_H();
gtk_widget_show(window);
}


void
on_affich_CP_H_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajout, *window_consul ,*AFF_treeview,*window3,*window4,*window5;



GtkWidget* window0;
window0=lookup_widget(objet,"fenetre_capteurs_humidite");
gtk_widget_destroy(window0);


window_ajout=lookup_widget(objet,"fenetre_ajout_CP_H");
gtk_widget_destroy(window_ajout);


window4=lookup_widget(objet,"fenetre_modif_CP_H");
gtk_widget_destroy(window4);

window5=lookup_widget(objet,"fenetre_recherche_CP_H");
gtk_widget_destroy(window5);

window_consul=create_fenetre_consul_CP_H();
gtk_widget_show(window_consul);

AFF_treeview=lookup_widget(window_consul,"treeview_cp_h");

CAP_H_afficher(AFF_treeview);
}


void
on_ajout_CP_H_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"fenetre_capteurs_humidite");
gtk_widget_destroy(window0);

window=create_fenetre_ajout_CP_H();
gtk_widget_show(window);
}


void
on_suppression_val_H_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* CODE,*window_supp;
GtkWidget* pt;
 char code[20], ch[40]; int test;
window_supp=lookup_widget(objet,"fenetre_capteurs_humidite");
CODE=lookup_widget(objet,"entry_id_supp_val_H");
strcpy(code,gtk_entry_get_text(GTK_ENTRY(CODE)));
pt=lookup_widget (objet , "label_sortie_supp_val_H");
test=VAL_H_supprimer(code);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Supression réussite");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_modification_val_H_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"fenetre_capteurs_humidite");
gtk_widget_destroy(window0);

window=create_fenetre_modif_VAL_H();
gtk_widget_show(window);
}


void
on_cherche_val_H_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"fenetre_capteurs_humidite");
gtk_widget_destroy(window0);

window=create_fenetre_recherche_VAL_H();
gtk_widget_show(window);
}


void
on_affich_val_H_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_ajout, *window_consul ,*AFF_treeview,*window3,*window4,*window5;

GtkWidget* window0;
window0=lookup_widget(objet,"fenetre_capteurs_humidite");
gtk_widget_destroy(window0);

window_ajout=lookup_widget(objet,"fenetre_ajout_val_H");
gtk_widget_destroy(window_ajout);


window4=lookup_widget(objet,"fenetre_modif_VAL_H");
gtk_widget_destroy(window4);

window5=lookup_widget(objet,"fenetre_recherche_VAL_H");
gtk_widget_destroy(window5);

window_consul=create_fenetre_consul_VAL_H();
gtk_widget_show(window_consul);

AFF_treeview=lookup_widget(window_consul,"treeview_val_h");

VAL_H_afficher(AFF_treeview);
}


void
on_treeview_cp_H_def_row_activated     (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
//vide 
}


void
on_treeview_marque_cp_h_row_activated  (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
//vide
}


void
on_attention_h_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *pt2,*window_evite_cet_marque2;
window_evite_cet_marque2=create_fenetre_marque_eviter_H();
gtk_widget_show(window_evite_cet_marque2);
pt2=lookup_widget(window_evite_cet_marque2,"sortie_marque_alar_h");

FILE* f2; char ch2[50],chq2[20];
char marque2[20],evite2[20];
double min2,occurence2; int j=0;
    	
	
	min2=calcul_marque(marque2);
f2=fopen("marques_cp_H_embetantes.txt","r");
if (f2!=NULL)
{
         while (fscanf (f2, "%s \n",marque2)!=EOF)
           		 {
				j+=1;
				if (j==1)
					min2=calcul_marque_h(marque2);

				occurence2=calcul_marque_h(marque2);
				if (occurence2 <= min2) 
				{
				min2=occurence2;
				strcpy(evite2,marque2);}
				
			 }
}
fclose(f2);
strcpy(chq2,evite2);


gtk_label_set_text(GTK_LABEL(pt2),chq2);





}


void
on_calendar_cap_t_day_selected         (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
gtk_calendar_get_date(calendar,&jj1,&mm1,&aa1);
	mm1+=1;
}


void
on_ajouter_CP_T_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
Capteur c; 
char ch[50]=""; 
char date[20]; 
char text[10]; 
char x[5],chh[10],chmin[10]; 
int test,h,min;
 
   
GtkWidget *ID , *MARQUE, *REF,*AD_PHY,*LOC ,*H,*M,*pt;

        ID =lookup_widget(objet,"entry_id_cap_t");
        MARQUE =lookup_widget(objet,"entry_marque_cap_t");
        REF =lookup_widget(objet,"entry_ref_cap_t");
        AD_PHY =lookup_widget(objet,"entry_ad_phys_cap_t");
        LOC =lookup_widget(objet,"entry_loc_cap_t");	

//H=lookup_widget(objet,"entry1h");

    H=lookup_widget(objet,"spinbutton_heure_cap_t");

//M=lookup_widget(objet,"entry2m");

        M=lookup_widget(objet,"spinbutton_min_cap_t");
    	pt=lookup_widget (objet , "label_sortie_ajout_capt_temperature");


	h=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(H)); sprintf(chh,"%d",h);
	min=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chmin,"%d",min);

	strcpy(c.id,gtk_entry_get_text(GTK_ENTRY(ID)));
    	strcpy(c.marque,gtk_entry_get_text(GTK_ENTRY(MARQUE)));
    	strcpy(c.reference,gtk_entry_get_text(GTK_ENTRY(REF)));
    	strcpy(c.adresse,gtk_entry_get_text(GTK_ENTRY(AD_PHY)));
	strcpy(c.localisation,gtk_entry_get_text(GTK_ENTRY(LOC)));

	//strcpy(a.heure_affect.h,gtk_entry_get_text(GTK_ENTRY(H)));

    	strcpy(c.hr.h,chh);

    	//strcpy(a.heure_affect.min,gtk_entry_get_text(GTK_ENTRY(M)));

    	strcpy(c.hr.min,chmin);
    
	
    	sprintf(date,"%d/%d/%d",jj1,mm1,aa1);
    	strcpy(c.date,date); 
FILE *f;
f=fopen("capteur_T.txt","a+");
fclose(f);


	test=CAP_T_trouve(c.id);
	sprintf(x,"%d",test); 

	  if (strcmp(x,"0")==0 && strlen(c.id)!=0 && strlen(c.marque)!=0 && strlen(c.reference) && strlen(c.adresse) !=0 && strlen(c.localisation)!=0 && strlen(c.date)!=5  )
		{ 
		    ajouter_capteur(c);
		    sprintf(ch,"Ajout reussi!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		if (strlen(c.id)==0 || strlen(c.marque)==0|| strlen(c.reference)==0|| strlen(c.adresse)==0 || strlen(c.localisation)==0|| strlen(c.date)==5 )
		{
		    sprintf(ch,"ERREUR: veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	     else{
		    sprintf(ch,"ERREUR: Capteur déjà existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		} 



}


void
on_boutton_accueil_CP_T_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *window1,* window2,* window4,* window5,*window6,*window7,*window8, *window9,*window10;
GtkWidget *treeview,*treeview2;

window1=lookup_widget(objet,"fenetre_ajout_CP_T");
gtk_widget_destroy(window1);

window2=lookup_widget(objet,"fenetre_modif_CP_T");
gtk_widget_destroy(window2);

window4=lookup_widget(objet,"fenetre_consul_CP_T");
gtk_widget_destroy(window4);

window5=lookup_widget(objet,"fenetre_recherche_CP_T");
gtk_widget_destroy(window5);

window6=lookup_widget(objet,"fenetre_ajout_val_T");
gtk_widget_destroy(window6);

window7=lookup_widget(objet,"fenetre_modif_VAL_T");
gtk_widget_destroy(window7);

window8=lookup_widget(objet,"fenetre_consul_VAL_T");
gtk_widget_destroy(window8);

window9=lookup_widget(objet,"fenetre_recherche_VAL_T");
gtk_widget_destroy(window9);


window6=create_fenetre_capteurs_temperature();
gtk_widget_show(window6);

GtkWidget *treeview_def1,*treeview_def2;
treeview_def1=lookup_widget(window6,"treeview_cp_T_def");
affich_cp_t_def(treeview_def1);

treeview_def2=lookup_widget(window6,"treeview_marque_cp_t");
affich_marque_cp_t_def(treeview_def2);

}


void
on_calendar_cap_h_day_selected         (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
gtk_calendar_get_date(calendar,&jj3,&mm3,&aa3);
	mm3+=1;
}


void
on_ajouter_CP_H_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
Capteur_h caph; 
char ch[50]=""; 
char date[20]; 
char text[10]; 
char x[5],chh[10],chmin[10]; 
int test,h,min;
 
   
GtkWidget *ID , *MARQUE, *REF,*AD_PHY,*LOC ,*H,*M,*pt;

        ID =lookup_widget(objet,"entry_id_cap_h");
        MARQUE =lookup_widget(objet,"entry_marque_cap_h");
        REF =lookup_widget(objet,"entry_ref_cap_h");
        AD_PHY =lookup_widget(objet,"entry_ad_phys_cap_h");
        LOC =lookup_widget(objet,"entry_loc_cap_h");	

//H=lookup_widget(objet,"entry1h");

    H=lookup_widget(objet,"spinbutton_heure_cap_h");

//M=lookup_widget(objet,"entry2m");

        M=lookup_widget(objet,"spinbutton_min_cap_h");
    	pt=lookup_widget (objet , "label_sortie_ajout_capt_humidite");


	h=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(H)); sprintf(chh,"%d",h);
	min=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chmin,"%d",min);

	strcpy(caph.id,gtk_entry_get_text(GTK_ENTRY(ID)));
    	strcpy(caph.marque,gtk_entry_get_text(GTK_ENTRY(MARQUE)));
    	strcpy(caph.reference,gtk_entry_get_text(GTK_ENTRY(REF)));
    	strcpy(caph.adresse,gtk_entry_get_text(GTK_ENTRY(AD_PHY)));
	strcpy(caph.localisation,gtk_entry_get_text(GTK_ENTRY(LOC)));

	//strcpy(a.heure_affect.h,gtk_entry_get_text(GTK_ENTRY(H)));

    	strcpy(caph.hr.h,chh);

    	//strcpy(a.heure_affect.min,gtk_entry_get_text(GTK_ENTRY(M)));

    	strcpy(caph.hr.min,chmin);
    
	
    	sprintf(date,"%d/%d/%d",jj3,mm3,aa3);
    	strcpy(caph.date,date); 

FILE *f;
f=fopen("capteur_H.txt","a+");
fclose(f);


	test=CAP_H_trouve(caph.id);
	sprintf(x,"%d",test); 



	  if (strcmp(x,"0")==0 && strlen(caph.id)!=0 && strlen(caph.marque)!=0 && strlen(caph.reference) && strlen(caph.adresse) !=0 && strlen(caph.localisation)!=0 && strlen(caph.date)!=5  )
		{ 
		    ajouter_CAP_H(caph);
		    sprintf(ch,"Ajout reussi!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		if (strlen(caph.id)==0 || strlen(caph.marque)==0|| strlen(caph.reference)==0|| strlen(caph.adresse)==0 || strlen(caph.localisation)==0|| strlen(caph.date)==5 )
		{
		    sprintf(ch,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	     else{
		    sprintf(ch,"ERREUR: Capteur déjà existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		} 

}


void
on_enregistrer_modif_cp_t_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[50]="",ch_value[20]="",id[20],ch[50]; 
int e,test;

GtkWidget *element,*val;


GtkWidget* ID=lookup_widget(objet,"entry_id_modif_cp_T");
GtkWidget* pt=lookup_widget(objet,"label_sortie_enregistre_modif_cp_t");

GtkWidget* pt1=lookup_widget(objet,"marque_modif_cp_t");
GtkWidget* pt2=lookup_widget(objet,"label_marque_modif_cp_t");

GtkWidget* pt3=lookup_widget(objet,"ref_modif_cp_t");
GtkWidget* pt4=lookup_widget(objet,"label_ref_modif_cp_t");

GtkWidget* pt5=lookup_widget(objet,"adresse_modif_cp_t");
GtkWidget* pt6=lookup_widget(objet,"label_adresse_modif_cp_t");

GtkWidget* pt7=lookup_widget(objet,"loc_modif_cp_t");
GtkWidget* pt8=lookup_widget(objet,"label_loc_modif_cp_t");

GtkWidget* pt9=lookup_widget(objet,"dat_modif_cp_t");
GtkWidget* pt10=lookup_widget(objet,"label_dat_modif_cp_t");

GtkWidget* pt11=lookup_widget(objet,"heure_modif_cp_t");
GtkWidget* pt12=lookup_widget(objet,"label_heure_modif_cp_t");

GtkWidget* pt13=lookup_widget(objet,"min_modif_cp_t");
GtkWidget* pt14=lookup_widget(objet,"label_min_modif_cp_t");


strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID))); 
  
element=lookup_widget(objet,"combobox_info_modif_cp_t");
strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));

val=lookup_widget(objet,"entry_nv_val_modif_cp_t");

strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

 //gtk_label_set_text(GTK_LABEL(pt),ch_element);
//c=int_ch(ch_element); //sprintf(ch,"%d",e);
//strcpy(ch,ch_element[0]);
//sscanf(&ch,"%d",e); sprintf(ch,"%d",e);

e=CAP_T_int_ch(ch_element);         //sprintf(ch," %d",e);
		                   //gtk_label_set_text(GTK_LABEL(pt),ch);


test=CAP_T_modif(id,e,ch_value);

sprintf(ch,"%d",test); 

gtk_label_set_text(GTK_LABEL(pt),ch);


	    if (strcmp(ch,"1")==0 && strlen(ch_value)!=0 && strlen(ch_element)!=0 && strlen(id)!=0)
		{ 
		 
		    sprintf(ch,"Modification reussite!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		CP_T_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10,pt11,pt12,pt13,pt14);
			
		}
	    else
		if (strlen(ch_value)==0 || strlen(ch_element)==0 ||strlen(id)==0)
	{
		sprintf(ch,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	     else{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_valider_id_modif_cp_t_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
char id[20]; 

int test; 

char ch[40];

GtkWidget* ID=lookup_widget(objet,"entry_id_modif_cp_T");
GtkWidget* pt=lookup_widget(objet,"label_sortie_valid_id_modif_cp_t");

GtkWidget* pt1=lookup_widget(objet,"marque_modif_cp_t");
GtkWidget* pt2=lookup_widget(objet,"label_marque_modif_cp_t");

GtkWidget* pt3=lookup_widget(objet,"ref_modif_cp_t");
GtkWidget* pt4=lookup_widget(objet,"label_ref_modif_cp_t");

GtkWidget* pt5=lookup_widget(objet,"adresse_modif_cp_t");
GtkWidget* pt6=lookup_widget(objet,"label_adresse_modif_cp_t");

GtkWidget* pt7=lookup_widget(objet,"loc_modif_cp_t");
GtkWidget* pt8=lookup_widget(objet,"label_loc_modif_cp_t");

GtkWidget* pt9=lookup_widget(objet,"dat_modif_cp_t");
GtkWidget* pt10=lookup_widget(objet,"label_dat_modif_cp_t");

GtkWidget* pt11=lookup_widget(objet,"heure_modif_cp_t");
GtkWidget* pt12=lookup_widget(objet,"label_heure_modif_cp_t");

GtkWidget* pt13=lookup_widget(objet,"min_modif_cp_t");
GtkWidget* pt14=lookup_widget(objet,"label_min_modif_cp_t");

strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID)));  

test=CAP_T_trouve(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		CP_T_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10,pt11,pt12,pt13,pt14);
		
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_valider_id_modif_cp_h_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
char id[20]; 

int test; 

char ch[40];

GtkWidget* ID=lookup_widget(objet,"entry_id_modif_cp_H");
GtkWidget* pt=lookup_widget(objet,"label_sortie_valid_id_modif_cp_h");

GtkWidget* pt1=lookup_widget(objet,"marque_modif_cp_h");
GtkWidget* pt2=lookup_widget(objet,"label_marque_modif_cp_h");

GtkWidget* pt3=lookup_widget(objet,"ref_modif_cp_h");
GtkWidget* pt4=lookup_widget(objet,"label_ref_modif_cp_h");

GtkWidget* pt5=lookup_widget(objet,"adresse_modif_cp_h");
GtkWidget* pt6=lookup_widget(objet,"label_adresse_modif_cp_h");

GtkWidget* pt7=lookup_widget(objet,"loc_modif_cp_h");
GtkWidget* pt8=lookup_widget(objet,"label_loc_modif_cp_h");

GtkWidget* pt9=lookup_widget(objet,"dat_modif_cp_h");
GtkWidget* pt10=lookup_widget(objet,"label_dat_modif_cp_h");

GtkWidget* pt11=lookup_widget(objet,"heure_modif_cp_h");
GtkWidget* pt12=lookup_widget(objet,"label_heure_modif_cp_h");

GtkWidget* pt13=lookup_widget(objet,"min_modif_cp_h");
GtkWidget* pt14=lookup_widget(objet,"label_min_modif_cp_h");

strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID)));  

test=CAP_H_trouve(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		CP_H_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10,pt11,pt12,pt13,pt14);
		
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_enregistrer_modif_cp_h_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[50]="",ch_value[20]="",id[20],ch[50]; 
int e,test;

GtkWidget *element,*val;


GtkWidget* ID=lookup_widget(objet,"entry_id_modif_cp_H");
GtkWidget* pt=lookup_widget(objet,"label_sortie_enregistre_modif_cp_h");

GtkWidget* pt1=lookup_widget(objet,"marque_modif_cp_h");
GtkWidget* pt2=lookup_widget(objet,"label_marque_modif_cp_h");

GtkWidget* pt3=lookup_widget(objet,"ref_modif_cp_h");
GtkWidget* pt4=lookup_widget(objet,"label_ref_modif_cp_h");

GtkWidget* pt5=lookup_widget(objet,"adresse_modif_cp_h");
GtkWidget* pt6=lookup_widget(objet,"label_adresse_modif_cp_h");

GtkWidget* pt7=lookup_widget(objet,"loc_modif_cp_h");
GtkWidget* pt8=lookup_widget(objet,"label_loc_modif_cp_h");

GtkWidget* pt9=lookup_widget(objet,"dat_modif_cp_h");
GtkWidget* pt10=lookup_widget(objet,"label_dat_modif_cp_h");

GtkWidget* pt11=lookup_widget(objet,"heure_modif_cp_h");
GtkWidget* pt12=lookup_widget(objet,"label_heure_modif_cp_h");

GtkWidget* pt13=lookup_widget(objet,"min_modif_cp_h");
GtkWidget* pt14=lookup_widget(objet,"label_min_modif_cp_h");


strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID))); 
  
element=lookup_widget(objet,"combobox_info_modif_cp_h");
strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));

val=lookup_widget(objet,"entry_nv_val_modif_cp_h");

strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

 //gtk_label_set_text(GTK_LABEL(pt),ch_element);
//c=int_ch(ch_element); //sprintf(ch,"%d",e);
//strcpy(ch,ch_element[0]);
//sscanf(&ch,"%d",e); sprintf(ch,"%d",e);

e=CAP_H_int_ch(ch_element);         //sprintf(ch," %d",e);
		                   //gtk_label_set_text(GTK_LABEL(pt),ch);


test=CAP_H_modif(id,e,ch_value);

sprintf(ch,"%d",test); 

gtk_label_set_text(GTK_LABEL(pt),ch);


	    if (strcmp(ch,"1")==0 && strlen(ch_value)!=0 && strlen(ch_element)!=0 && strlen(id)!=0)
		{ 
		 
		    sprintf(ch,"Modification réussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		CP_H_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10,pt11,pt12,pt13,pt14);
			
		}
	    else
		if (strlen(ch_value)==0 || strlen(ch_element)==0 ||strlen(id)==0)
	{
		sprintf(ch,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	     else{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_treeview_cp_t_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* id;
gchar* marque;
gchar* adresse;
gchar* reference;
gchar* localisation;
gchar* date;
gchar* hh;
gchar* mm;



Capteur c;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);
GtkWidget* window_modif,*pt;
if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,1,&marque, 2,&reference, 3,&adresse ,4,&localisation, 5,&date,6,&hh,7,&mm,-1);
}
//ouvrir la fenetre de modification
window_modif=create_fenetre_modif_CP_T();
gtk_widget_show(window_modif);

    
pt=lookup_widget(window_modif,"entry_id_modif_cap_T");
gtk_entry_set_text(GTK_ENTRY(pt),id);


//appel de la fct de suppression
//E_supprimer(identif);
//màj du treeview
CAP_T_afficher(treeview);
}


void
on_treeview_cp_h_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* id;
gchar* marque;
gchar* adresse;
gchar* reference;
gchar* localisation;
gchar* date;
gchar* hh;
gchar* mm;



Capteur c;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);
GtkWidget* window_modif,*pt;
if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,1,&marque, 2,&reference, 3,&adresse ,4,&localisation, 5,&date,6,&hh,7,&mm,-1);
}
//ouvrir la fenetre de modification
window_modif=create_fenetre_modif_CP_H();
gtk_widget_show(window_modif);

    
pt=lookup_widget(window_modif,"entry_id_modif_cap_H");
gtk_entry_set_text(GTK_ENTRY(pt),id);


//appel de la fct de suppression
//E_supprimer(identif);
//màj du treeview
CAP_H_afficher(treeview);
}


void
on_cherch_cp_t_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_cherch, *window ,*AFF_treeview1,*I,*CIN,*pt;
char ref[20],id[20];

int test; 

char ch[60];

I=lookup_widget(objet,"entry_id_rech_cp_t");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(I)));

CIN=lookup_widget(objet,"entry_ref_rech_cp_t");
strcpy(ref,gtk_entry_get_text(GTK_ENTRY(CIN)));

test=CAP_T_ajout1(id,ref);
window_cherch=lookup_widget(objet,"fenetre_recherche_CP_T");
gtk_widget_destroy(window_cherch);

window=create_fenetre_recherche_CP_T();
gtk_widget_show(window);

AFF_treeview1=lookup_widget(window,"treeview_cherch_cp_t");

CAP_T_afficher1(AFF_treeview1);
pt=lookup_widget(window,"label_sortie_rech_cp_t");
sprintf(ch,"%d",test); 
    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Capteur(s) existant(s)!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: Capteur(s) non existante(s).");
		    gtk_label_set_text(GTK_LABEL(pt),ch); 

		} 
}


void
on_cherch_cp_h_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_cherch, *window ,*AFF_treeview1,*I,*CIN,*pt;
char ref[20],id[20];

int test; 

char ch[60];

I=lookup_widget(objet,"entry_id_rech_cp_h");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(I)));

CIN=lookup_widget(objet,"entry_ref_rech_cp_h");
strcpy(ref,gtk_entry_get_text(GTK_ENTRY(CIN)));

test=CAP_H_ajout1(id,ref);
window_cherch=lookup_widget(objet,"fenetre_recherche_CP_H");
gtk_widget_destroy(window_cherch);

window=create_fenetre_recherche_CP_H();
gtk_widget_show(window);

AFF_treeview1=lookup_widget(window,"treeview_cherch_cp_h");

CAP_H_afficher1(AFF_treeview1);
pt=lookup_widget(window,"label_sortie_rech_cp_h");
sprintf(ch,"%d",test); 
    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Capteur(s) existant(s)!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: Capteur(s) non existant(s).");
		    gtk_label_set_text(GTK_LABEL(pt),ch); 

		} 
}


void
on_boutton_accueil_CP_H_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1,* window2,* window4,* window5,*window6,*window7,*window8, *window9,*window10;

window1=lookup_widget(objet,"fenetre_ajout_CP_H");
gtk_widget_destroy(window1);

window2=lookup_widget(objet,"fenetre_modif_CP_H");
gtk_widget_destroy(window2);

window4=lookup_widget(objet,"fenetre_consul_CP_H");
gtk_widget_destroy(window4);

window5=lookup_widget(objet,"fenetre_recherche_CP_H");
gtk_widget_destroy(window5);

window6=lookup_widget(objet,"fenetre_ajout_val_H");
gtk_widget_destroy(window6);

window7=lookup_widget(objet,"fenetre_modif_VAL_H");
gtk_widget_destroy(window7);

window8=lookup_widget(objet,"fenetre_consul_VAL_H");
gtk_widget_destroy(window8);

window9=lookup_widget(objet,"fenetre_recherche_VAL_H");
gtk_widget_destroy(window9);


window10=create_fenetre_capteurs_humidite();
gtk_widget_show(window10);


GtkWidget *treeviewdef3,*treeviewdef4;
treeviewdef3=lookup_widget(window10,"treeview_cp_H_def");
affich_cp_h_def(treeviewdef3);

treeviewdef4=lookup_widget(window10,"treeview_marque_cp_h");
affich_marque_cp_h_def(treeviewdef4);



}


void
on_calendar_val_t_day_selected         (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
gtk_calendar_get_date(calendar,&jj2,&mm2,&aa2);
mm2+=1;
}


void
on_valider_id_ajout_val_t_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
char id[20]; 

int test; 

char ch[40];

GtkWidget* ID=lookup_widget(objet,"entry_id_val_t");
GtkWidget* pt=lookup_widget(objet,"label_sortie_valid_id_ajout_val_t");

GtkWidget* pt1=lookup_widget(objet,"marque_modif_cp_t");
GtkWidget* pt2=lookup_widget(objet,"label_marque_modif_cp_t");

GtkWidget* pt3=lookup_widget(objet,"ref_modif_cp_t");
GtkWidget* pt4=lookup_widget(objet,"label_ref_modif_cp_t");

GtkWidget* pt5=lookup_widget(objet,"adresse_modif_cp_t");
GtkWidget* pt6=lookup_widget(objet,"label_adresse_modif_cp_t");

GtkWidget* pt7=lookup_widget(objet,"loc_modif_cp_t");
GtkWidget* pt8=lookup_widget(objet,"label_loc_modif_cp_t");

GtkWidget* pt9=lookup_widget(objet,"dat_modif_cp_t");
GtkWidget* pt10=lookup_widget(objet,"label_dat_modif_cp_t");

GtkWidget* pt11=lookup_widget(objet,"heure_modif_cp_t");
GtkWidget* pt12=lookup_widget(objet,"label_heure_modif_cp_t");

GtkWidget* pt13=lookup_widget(objet,"min_modif_cp_t");
GtkWidget* pt14=lookup_widget(objet,"label_min_modif_cp_t");

strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID)));  

test=CAP_T_trouve(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		CP_T_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10,pt11,pt12,pt13,pt14);
		
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_accueil_val_T_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1,* window2,* window4,* window5,*window6,*window7,*window8, *window9, *window10 ;

window1=lookup_widget(objet,"fenetre_ajout_CP_T");
gtk_widget_destroy(window1);

window2=lookup_widget(objet,"fenetre_modif_CP_T");
gtk_widget_destroy(window2);

window4=lookup_widget(objet,"fenetre_consul_CP_T");
gtk_widget_destroy(window4);

window5=lookup_widget(objet,"fenetre_recherche_CP_T");
gtk_widget_destroy(window5);

window6=lookup_widget(objet,"fenetre_ajout_val_T");
gtk_widget_destroy(window6);

window7=lookup_widget(objet,"fenetre_modif_VAL_T");
gtk_widget_destroy(window7);

window8=lookup_widget(objet,"fenetre_consul_VAL_T");
gtk_widget_destroy(window8);

window9=lookup_widget(objet,"fenetre_recherche_VAL_T");
gtk_widget_destroy(window9);

window6=create_fenetre_capteurs_temperature();
gtk_widget_show(window6);


GtkWidget *treeview_def1,*treeview_def2;
treeview_def1=lookup_widget(window6,"treeview_cp_T_def");
affich_cp_t_def(treeview_def1);

treeview_def2=lookup_widget(window6,"treeview_marque_cp_t");
affich_marque_cp_t_def(treeview_def2);


}


void
on_valider_id_modif_val_t_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
char id[20]; 
FILE* f;
int test; 

char ch[40];

GtkWidget* ID=lookup_widget(objet,"entry_id_modif_val_T");
GtkWidget* pt=lookup_widget(objet,"label_sortie_valid_id_modif_val_t");

GtkWidget* pt1=lookup_widget(objet,"marque_modif_val_t");
GtkWidget* pt2=lookup_widget(objet,"label_marque_modif_val_t");

GtkWidget* pt3=lookup_widget(objet,"val_modif_val_t");
GtkWidget* pt4=lookup_widget(objet,"label_val_modif_val_t");


GtkWidget* pt9=lookup_widget(objet,"dat_modif_val_t");
GtkWidget* pt10=lookup_widget(objet,"label_dat_modif_val_t");

GtkWidget* pt11=lookup_widget(objet,"heure_modif_val_t");
GtkWidget* pt12=lookup_widget(objet,"label_heure_modif_val_t");

GtkWidget* pt13=lookup_widget(objet,"min_modif_val_t");
GtkWidget* pt14=lookup_widget(objet,"label_min_modif_val_t");

strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID)));  
f=fopen("capteur_T.txt","a"); fclose(f);
test=CAP_T_trouve(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		VAL_T_affiche_modif(id,pt1,pt2,pt3,pt4,pt9,pt10,pt11,pt12,pt13,pt14);
		
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_treeview_val_t_row_activated        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* id;
gchar* marque;
gchar* valeur;
gchar* date;
gchar* hh;
gchar* mm;



Valeur_t vt;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);
GtkWidget* window_modif,*pt;
if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,1,&marque, 2,&valeur, 3,&date,4,&hh,5,&mm,-1);
}
//ouvrir la fenetre de modification
window_modif=create_fenetre_modif_VAL_T();
gtk_widget_show(window_modif);

    
pt=lookup_widget(window_modif,"entry_id_modif_val_T");
gtk_entry_set_text(GTK_ENTRY(pt),id);


//appel de la fct de suppression
//E_supprimer(identif);
//màj du treeview
VAL_T_afficher(treeview);
}


void
on_cherch_val_t_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_cherch, *window ,*AFF_treeview1,*I,*CIN,*pt;
char marque[20],id[20];

int test; 

char ch[60];

I=lookup_widget(objet,"entry_id_rech_val_t");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(I)));

CIN=lookup_widget(objet,"entry_marque_rech_val_t");
strcpy(marque,gtk_entry_get_text(GTK_ENTRY(CIN)));

FILE* f,*f1;
f= fopen("valeur_T.txt","r");
f1= fopen("valeur_T1.txt","w");
fclose(f1);
fclose(f);

test=VAL_T_ajout1(id,marque);
window_cherch=lookup_widget(objet,"fenetre_recherche_VAL_T");
gtk_widget_destroy(window_cherch);

window=create_fenetre_recherche_VAL_T();
gtk_widget_show(window);

AFF_treeview1=lookup_widget(window,"treeview_cherch_val_t");

VAL_T_afficher1(AFF_treeview1);
pt=lookup_widget(window,"label_sortie_rech_val_t");
sprintf(ch,"%d",test); 

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Capteur(s) existant(s)!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: Capteur(s) non existante(s).");
		    gtk_label_set_text(GTK_LABEL(pt),ch); 

		} 

}


void
on_calendar_val_h_day_selected         (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
gtk_calendar_get_date(calendar,&jj4,&mm4,&aa4);
	mm4+=1;
}


void
on_ajouter_val_H_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
Valeur_h vh; 

char ch[50]=""; 
char date[20]; 
char text[10]; 
char x[5],x2[5],chh[10],chmin[10]; 
int test,test2,h,min;

   FILE* f;
GtkWidget *ID , *MARQUE, *VALEUR,*H,*M,*pt;

        ID =lookup_widget(objet,"entry_id_val_h");
        MARQUE =lookup_widget(objet,"entry_marque_val_h");
        VALEUR =lookup_widget(objet,"entry_val_val_h");
        

//H=lookup_widget(objet,"entry1h");

    H=lookup_widget(objet,"spinbutton_heure_val_h");

//M=lookup_widget(objet,"entry2m");

        M=lookup_widget(objet,"spinbutton_min_val_h");
    	pt=lookup_widget (objet , "label_sortie_ajout_val_h");


	h=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(H)); sprintf(chh,"%d",h);
	min=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chmin,"%d",min);

	strcpy(vh.id,gtk_entry_get_text(GTK_ENTRY(ID)));
    	strcpy(vh.marque,gtk_entry_get_text(GTK_ENTRY(MARQUE)));
    	strcpy(vh.valeur,gtk_entry_get_text(GTK_ENTRY(VALEUR)));
    	

	//strcpy(a.heure_affect.h,gtk_entry_get_text(GTK_ENTRY(H)));

    	strcpy(vh.hr.h,chh);

    	//strcpy(a.heure_affect.min,gtk_entry_get_text(GTK_ENTRY(M)));

    	strcpy(vh.hr.min,chmin);
    

    	sprintf(date,"%d/%d/%d",jj4,mm4,aa4);
    	strcpy(vh.date,date); 

FILE *f2,*f3;
f=fopen("valeur_H.txt","a+"); fclose(f);
f2=fopen("cp_H_defectueux.txt","a"); fclose(f2);
f3=fopen("marques_cp_H_embetantes.txt","a"); fclose(f3);
	test=CAP_H_trouve(vh.id);
	sprintf(x,"%d",test); 

	test2=VAL_H_trouve(vh.id);
	sprintf(x2,"%d",test2);


	        if  ( strcmp(x2,"1")==0 && strlen(vh.id)!=0 && strlen(vh.marque)!=0 && strlen(vh.valeur)&& strlen(vh.date)!=5 )
	        {
		    sprintf(ch,"Identifiant déjà existant !!!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

	        }

	     else
		if (strcmp(x,"0")==0 && strcmp(x2,"0")==0 && strlen(vh.id)!=0 && strlen(vh.marque)!=0 && strlen(vh.valeur)&& strlen(vh.date)!=5 )
	        {
		    sprintf(ch," Cet id ne correspond à aucun Capteur!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		} 



	    else
		if (strcmp(x,"1")==0 && strcmp(x2,"0")==0 && strlen(vh.id)!=0 && strlen(vh.marque)!=0 && strlen(vh.valeur)&& strlen(vh.date)!=5  )
		{ 
		    ajouter_val_h(vh);
			//detection_cp_T_defectueux(vt.valeur,vt.id,vt.marque);
		    sprintf(ch,"Ajout reussi!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
			detection_cp_H_defectueux(vh.valeur,vh.id,vh.marque);
		}

	    else
		if (strlen(vh.id)==0 || strlen(vh.marque)==0|| strlen(vh.valeur)==0|| strlen(vh.date)==5 )
		{
		    sprintf(ch,"ERREUR: veuillez remplir tous les champs !!.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}

}


void
on_valider_id_ajout_val_h_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
char id[20]; 

int test; 

char ch[40];

GtkWidget* ID=lookup_widget(objet,"entry_id_val_h");
GtkWidget* pt=lookup_widget(objet,"label_sortie_valid_id_ajout_val_h");

GtkWidget* pt1=lookup_widget(objet,"marque_modif_cp_h");
GtkWidget* pt2=lookup_widget(objet,"label_marque_modif_cp_h");

GtkWidget* pt3=lookup_widget(objet,"ref_modif_cp_h");
GtkWidget* pt4=lookup_widget(objet,"label_ref_modif_cp_h");

GtkWidget* pt5=lookup_widget(objet,"adresse_modif_cp_h");
GtkWidget* pt6=lookup_widget(objet,"label_adresse_modif_cp_h");

GtkWidget* pt7=lookup_widget(objet,"loc_modif_cp_h");
GtkWidget* pt8=lookup_widget(objet,"label_loc_modif_cp_h");

GtkWidget* pt9=lookup_widget(objet,"dat_modif_cp_h");
GtkWidget* pt10=lookup_widget(objet,"label_dat_modif_cp_h");

GtkWidget* pt11=lookup_widget(objet,"heure_modif_cp_h");
GtkWidget* pt12=lookup_widget(objet,"label_heure_modif_cp_h");

GtkWidget* pt13=lookup_widget(objet,"min_modif_cp_h");
GtkWidget* pt14=lookup_widget(objet,"label_min_modif_cp_h");

strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID)));  

test=CAP_H_trouve(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		CP_H_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10,pt11,pt12,pt13,pt14);
		
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_valider_id_modif_val_h_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
char id[20]; 

int test; 

char ch[40];

GtkWidget* ID=lookup_widget(objet,"entry_id_modif_val_H");
GtkWidget* pt=lookup_widget(objet,"label_sortie_valid_id_modif_val_h");

GtkWidget* pt1=lookup_widget(objet,"marque_modif_val_h");
GtkWidget* pt2=lookup_widget(objet,"label_marque_modif_val_h");

GtkWidget* pt3=lookup_widget(objet,"val_modif_val_h");
GtkWidget* pt4=lookup_widget(objet,"label_val_modif_val_h");


GtkWidget* pt9=lookup_widget(objet,"dat_modif_val_h");
GtkWidget* pt10=lookup_widget(objet,"label_dat_modif_val_h");

GtkWidget* pt11=lookup_widget(objet,"heure_modif_val_t");
GtkWidget* pt12=lookup_widget(objet,"label_heure_modif_val_h");

GtkWidget* pt13=lookup_widget(objet,"min_modif_val_h");
GtkWidget* pt14=lookup_widget(objet,"label_min_modif_val_h");

strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID)));  

test=VAL_H_trouve(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		VAL_H_affiche_modif(id,pt1,pt2,pt3,pt4,pt9,pt10,pt11,pt12,pt13,pt14);
		
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_enregistrer_modif_val_h_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[50]="",ch_value[20]="",id[20],ch[50]; 
int e,test;

GtkWidget *element,*val;

GtkWidget* ID=lookup_widget(objet,"entry_id_modif_val_H");
GtkWidget* pt=lookup_widget(objet,"label_sortie_enregistre_modif_val_h");

GtkWidget* pt1=lookup_widget(objet,"marque_modif_val_h");
GtkWidget* pt2=lookup_widget(objet,"label_marque_modif_val_h");

GtkWidget* pt3=lookup_widget(objet,"val_modif_val_h");
GtkWidget* pt4=lookup_widget(objet,"label_val_modif_val_h");


GtkWidget* pt9=lookup_widget(objet,"dat_modif_val_h");
GtkWidget* pt10=lookup_widget(objet,"label_dat_modif_val_h");

GtkWidget* pt11=lookup_widget(objet,"heure_modif_val_h");
GtkWidget* pt12=lookup_widget(objet,"label_heure_modif_val_h");

GtkWidget* pt13=lookup_widget(objet,"min_modif_val_h");
GtkWidget* pt14=lookup_widget(objet,"label_min_modif_val_h");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID))); 
  
element=lookup_widget(objet,"combobox_info_modif_val_h");
strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));

val=lookup_widget(objet,"entry_nv_val_modif_val_h");

strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

 //gtk_label_set_text(GTK_LABEL(pt),ch_element);
//c=int_ch(ch_element); //sprintf(ch,"%d",e);
//strcpy(ch,ch_element[0]);
//sscanf(&ch,"%d",e); sprintf(ch,"%d",e);

e=VAL_H_int_ch(ch_element);         //sprintf(ch," %d",e);
		                   //gtk_label_set_text(GTK_LABEL(pt),ch);


test=VAL_H_modif(id,e,ch_value);

sprintf(ch,"%d",test); 

gtk_label_set_text(GTK_LABEL(pt),ch);



	    if (strcmp(ch,"1")==0 && strlen(ch_value)!=0 && strlen(ch_element)!=0 && strlen(id)!=0)
		{ 
		 
		    sprintf(ch,"Modification reussite!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		VAL_H_affiche_modif(id,pt1,pt2,pt3,pt4,pt9,pt10,pt11,pt12,pt13,pt14);
			
		}
	    else
		if (strlen(ch_value)==0 || strlen(ch_element)==0 ||strlen(id)==0)
	{
		sprintf(ch,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	     else{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 


}


void
on_treeview_val_h_row_activated        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* id;
gchar* marque;
gchar* valeur;
gchar* date;
gchar* hh;
gchar* mm;



Valeur_t vt;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);
GtkWidget* window_modif,*pt;
if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,1,&marque, 2,&valeur, 3,&date,4,&hh,5,&mm,-1);
}
//ouvrir la fenetre de modification
window_modif=create_fenetre_modif_VAL_H();
gtk_widget_show(window_modif);

    
pt=lookup_widget(window_modif,"entry_id_modif_val_H");
gtk_entry_set_text(GTK_ENTRY(pt),id);


//appel de la fct de suppression
//E_supprimer(identif);
//màj du treeview
VAL_H_afficher(treeview);
}


void
on_capteurs_temperature_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

if (gtk_toggle_button_get_active(togglebutton))
{
choix_cap[0]=1; 
}
else 
choix_cap[0]=0;
}


void
on_capteurs_humidite_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

if (gtk_toggle_button_get_active(togglebutton))
{
choix_cap[1]=1;
}
else 
choix_cap[1]=0;
}


void
on_cherch_val_h_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_cherch, *window ,*AFF_treeview1,*I,*CIN,*pt;
char marque[20],id[20];

int test; 

char ch[60];

I=lookup_widget(objet,"entry_id_rech_val_h");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(I)));

CIN=lookup_widget(objet,"entry_marque_rech_val_h");
strcpy(marque,gtk_entry_get_text(GTK_ENTRY(CIN)));

test=VAL_H_ajout1(id,marque);
window_cherch=lookup_widget(objet,"fenetre_recherche_VAL_H");
gtk_widget_destroy(window_cherch);

window=create_fenetre_recherche_VAL_H();
gtk_widget_show(window);

AFF_treeview1=lookup_widget(window,"treeview_cherch_val_h");

VAL_H_afficher1(AFF_treeview1);
pt=lookup_widget(window,"label_sortie_rech_val_h");
sprintf(ch,"%d",test); 

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Capteur(s) existant(s)!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}
	    else
		{
		    sprintf(ch,"ERREUR: Capteur(s) non existante(s).");
		    gtk_label_set_text(GTK_LABEL(pt),ch); 

		} 

}


void
on_enregistrer_modif_val_t_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{
char ch_element[50]="",ch_value[20]="",id[20],ch[50]; 
int e,test;

GtkWidget *element,*val;

GtkWidget* ID=lookup_widget(objet,"entry_id_modif_val_T");
GtkWidget* pt=lookup_widget(objet,"label_sortie_enregistre_modif_val_t");

GtkWidget* pt1=lookup_widget(objet,"marque_modif_val_t");
GtkWidget* pt2=lookup_widget(objet,"label_marque_modif_val_t");

GtkWidget* pt3=lookup_widget(objet,"val_modif_val_t");
GtkWidget* pt4=lookup_widget(objet,"label_val_modif_val_t");


GtkWidget* pt9=lookup_widget(objet,"dat_modif_val_t");
GtkWidget* pt10=lookup_widget(objet,"label_dat_modif_val_t");

GtkWidget* pt11=lookup_widget(objet,"heure_modif_val_t");
GtkWidget* pt12=lookup_widget(objet,"label_heure_modif_val_t");

GtkWidget* pt13=lookup_widget(objet,"min_modif_val_t");
GtkWidget* pt14=lookup_widget(objet,"label_min_modif_val_t");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(ID))); 
  
element=lookup_widget(objet,"combobox_info_modif_val_t");
strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));

val=lookup_widget(objet,"entry_nv_val_modif_val_t");

strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

 //gtk_label_set_text(GTK_LABEL(pt),ch_element);
//c=int_ch(ch_element); //sprintf(ch,"%d",e);
//strcpy(ch,ch_element[0]);
//sscanf(&ch,"%d",e); sprintf(ch,"%d",e);

e=VAL_T_int_ch(ch_element);         //sprintf(ch," %d",e);
		                   //gtk_label_set_text(GTK_LABEL(pt),ch);


test=VAL_T_modif(id,e,ch_value);

sprintf(ch,"%d",test); 

gtk_label_set_text(GTK_LABEL(pt),ch);



	    if (strcmp(ch,"1")==0 && strlen(ch_value)!=0 && strlen(ch_element)!=0 && strlen(id)!=0)
		{ 
		 
		    sprintf(ch,"Modification réussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		VAL_T_affiche_modif(id,pt1,pt2,pt3,pt4,pt9,pt10,pt11,pt12,pt13,pt14);
			
		}
	    else
		if (strlen(ch_value)==0 || strlen(ch_element)==0 ||strlen(id)==0)
	{
		sprintf(ch,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	     else{
			
		    sprintf(ch,"ERREUR: identifiant inexistant");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 

}


void
on_ajouter_val_T_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
Capteur c; 	
Valeur_t vt; 

char ch[50]=""; 
char date[20]; 
char text[10]; 
char x[5],x2[5],chh[10],chmin[10]; 
int test,test2,h,min;
 
   
GtkWidget *ID , *MARQUE, *VALEUR,*H,*M,*pt; FILE* f;

        ID =lookup_widget(objet,"entry_id_val_t");
        MARQUE =lookup_widget(objet,"entry_marque_val_t");
        VALEUR =lookup_widget(objet,"entry_val_val_t");
        

//H=lookup_widget(objet,"entry1h");

    H=lookup_widget(objet,"spinbutton_heure_val_t");

//M=lookup_widget(objet,"entry2m");

        M=lookup_widget(objet,"spinbutton_min_val_t");
    	pt=lookup_widget (objet , "label_sortie_ajout_val_temperature");


	h=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(H)); sprintf(chh,"%d",h);
	min=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(M)); sprintf(chmin,"%d",min);

	strcpy(vt.id,gtk_entry_get_text(GTK_ENTRY(ID)));
    	strcpy(vt.marque,gtk_entry_get_text(GTK_ENTRY(MARQUE)));
    	strcpy(vt.valeur,gtk_entry_get_text(GTK_ENTRY(VALEUR)));
    	

	//strcpy(a.heure_affect.h,gtk_entry_get_text(GTK_ENTRY(H)));

    	strcpy(vt.hr.h,chh);

    	//strcpy(a.heure_affect.min,gtk_entry_get_text(GTK_ENTRY(M)));

    	strcpy(vt.hr.min,chmin);
    
	
    	sprintf(date,"%d/%d/%d",jj2,mm2,aa2);
    	strcpy(vt.date,date); 

FILE *f2,*f3;
f=fopen("valeur_T.txt","a+"); fclose(f);
f2=fopen("cp_T_defectueux.txt","a"); fclose(f2);
f3=fopen("marques_cp_T_embetantes.txt","a"); fclose(f3);



	test=CAP_T_trouve(vt.id);
	sprintf(x,"%d",test); 

	test2=VAL_T_trouve(vt.id);
	sprintf(x2,"%d",test2);

	 
//test=1 ==> mawjoud fel fichier.txt

	        if  ( strcmp(x2,"1")==0 && strlen(vt.id)!=0 && strlen(vt.marque)!=0 && strlen(vt.valeur)&& strlen(vt.date)!=5 )
	        {
		    sprintf(ch,"Identifiant déjà existant !!!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

	        }


	     else
		if (strcmp(x,"0")==0 && strcmp(x2,"0")==0 && strlen(vt.id)!=0 && strlen(vt.marque)!=0 && strlen(vt.valeur)&& strlen(vt.date)!=5 )
	        {
		    sprintf(ch," Cet id ne correspond à aucun Capteur!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		} 



	    else
		if (strcmp(x,"1")==0 && strcmp(x2,"0")==0 && strlen(vt.id)!=0 && strlen(vt.marque)!=0 && strlen(vt.valeur)&& strlen(vt.date)!=5  )
		{ 
		    ajouter_val_t(vt);
			//detection_cp_T_defectueux(vt.valeur,vt.id,vt.marque);
		    sprintf(ch,"Ajout reussi!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
			detection_cp_T_defectueux(vt.id,vt.marque,vt.valeur);
		}

	    else
		if (strlen(vt.id)==0 || strlen(vt.marque)==0|| strlen(vt.valeur)==0|| strlen(vt.date)==5 )
		{
		    sprintf(ch,"ERREUR: veuillez remplir tous les champs!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		}

}


void
on_button_goto_gest_capt_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion,*windowd;
window=create_fenetre_choix();
gtk_widget_show(window);
windowd=lookup_widget(objet,"window_princ_espace_emp");
gtk_widget_destroy(windowd);
}


void
on_ajout_val_H_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0, *window;
window0=lookup_widget(objet,"fenetre_capteurs_humidite");
gtk_widget_destroy(window0);

window=create_fenetre_ajout_val_H();
gtk_widget_show(window);
}


void
on_button_nb_tr_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *windowcons;
windowcons=create_consulter_troupeau();
gtk_widget_show (windowcons);
}



////////////////////////////////////////gestion ouvrier////////////////////////////////
void
on_button_goto_gest_ouv_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window,*window_gestion,*windowd;
window=create_gestion_ouvrier();
gtk_widget_show(window);
windowd=lookup_widget(objet,"window_princ_espace_emp");
gtk_widget_destroy(windowd);
}


void
on_buttonAjouter1B_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
	ouv o; 
	GtkWidget *input1, *input2, *input3, *input4;
	GtkWidget *pt;
	GtkWidget *ajout_ouvrier;
	FILE* f;
	char msg[70]; int test; char x[20];

	input1 = lookup_widget(objet, "entryNOM_ajout") ;
	input2 = lookup_widget(objet, "entryPrenom_ajout") ;
	input3 = lookup_widget(objet, "entryTelephone_ajout") ;
	input4 = lookup_widget(objet, "entryCIN_ajout") ;
	pt = lookup_widget(objet,"labelAjout");

	strcpy(o.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(o.prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
	strcpy(o.tel,gtk_entry_get_text(GTK_ENTRY(input3)));
	strcpy(o.cin,gtk_entry_get_text(GTK_ENTRY(input4)));
	
	test=Ouv_trouve(o.cin);
	sprintf(x,"%d",test); 
	
	if (strcmp(x,"0")==0 && strlen(o.nom)!=0 && strlen(o.prenom)!=0 &&strlen(o.tel)!=0 && strlen(o.cin)==8 ){ 
		 O_ajouter(o);
		 sprintf(msg,"Ajout reussi!");
		 gtk_label_set_text(GTK_LABEL(pt),msg);
		}
	    else if (strlen(o.nom)==0 || strlen(o.prenom)==0|| strlen(o.tel)==0|| strlen(o.cin)==0 )
		{
		    sprintf(msg,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),msg);
		}
	else if (strlen(o.cin)<8)
	{
		sprintf(msg,"ERREUR: Veuillez vérifier votre CIN!");
		    gtk_label_set_text(GTK_LABEL(pt),msg);
	}
	     else{
		    sprintf(msg,"ERREUR: Ouvrier déjà existant!");
		    gtk_label_set_text(GTK_LABEL(pt),msg);

		} 
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_buttonHome_ajout_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *home,*window0,*window1,*window2,*window3,*window4 ;
	home=create_gestion_ouvrier();
	gtk_widget_show (home);
	window0=lookup_widget(objet,"ajout_ouvrier");
	gtk_widget_destroy(window0);
	window1=lookup_widget(objet,"supprime_ouvrier");
	gtk_widget_destroy(window1);
	window2=lookup_widget(objet,"modifier_ouvrier");
	gtk_widget_destroy(window2);
	window3=lookup_widget(objet,"consulter_ouvrier");
	gtk_widget_destroy(window3);
	window4=lookup_widget(objet,"affichage_ouvrier");
	gtk_widget_destroy(window4);


}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button_ouvrier_mois_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *ouvrier_mois1 ;
	abscences abs;
	GtkWidget *out;
	char msg[177];
	char meilleur[30];

	ouvrier_mois1=create_ouvrier_mois();

	gtk_widget_show (ouvrier_mois1);
	
	out = lookup_widget(objet,"label_ouvrier_mois");

	//strcpy(meilleur,best());

	//strcat(msg,meilleur);
	gtk_label_set_text(GTK_LABEL(out),msg);
	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_buttonAjout1A_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget* window0, *window;
	window0=lookup_widget(objet,"gestion_ouvrier");
	gtk_widget_destroy(window0);

	window=create_ajout_ouvrier();
	gtk_widget_show(window);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_buttonSupprimer_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{

	GtkWidget* window0, *window;
	window0=lookup_widget(objet,"gestion_ouvrier");
	gtk_widget_destroy(window0);

	window=create_supprime_ouvrier();
	gtk_widget_show(window);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_buttonModifier_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
	
	GtkWidget* window0, *window;

	window0=lookup_widget(objet,"gestion_ouvrier");
	gtk_widget_destroy(window0);

	window=create_modifier_ouvrier();;
	gtk_widget_show(window);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button_gestion_aff_ouv_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *window_gest, *window_consul ,*O_treeview;

	window_gest=lookup_widget(objet,"gestion_ouvrier");
	gtk_widget_destroy(window_gest);
	
	window_consul=create_affichage_ouvrier();
	gtk_widget_show(window_consul);

	O_treeview=lookup_widget(window_consul,"treeview_ouvrier");

	O_afficher(O_treeview);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_buttonConsulter_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{

	GtkWidget *consulter ;
	GtkWidget *aff;

	aff=lookup_widget(objet,"gestion_ouvrier");
	gtk_widget_destroy(aff);

	consulter=create_consulter_ouvrier();
	gtk_widget_show (consulter);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_buttonCIN_supp_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{

	GtkWidget* cin,*window_supp, *out;
	char id[20], msg[50]; 
	int test;

	window_supp=lookup_widget(objet,"supprime_ouvrier");
	cin=lookup_widget(objet,"entryCIN_supp");

	strcpy(id,gtk_entry_get_text(GTK_ENTRY(cin)));
	out = lookup_widget(objet,"labelSupp");
	
	if(strlen(id)==8){
		O_supprimer(id);
		
		sprintf(msg,"Suppression validé");
		gtk_label_set_text(GTK_LABEL(out),msg);
	}
	else{
		sprintf(msg,"Erreur : CIN invalid");
		gtk_label_set_text(GTK_LABEL(out),msg);
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_buttonHome_supp_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_buttonHome_modif_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button_retour_modif_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_buttonVerif_modif_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
	char ch_element[70]="",ch_value[20]="",cin1[20],ch[50]; 
	int e,test;
	GtkWidget *element,*val,*cin01,*pt;
	
	pt=lookup_widget(objet,"label_modif_reussi");

	
	cin01=lookup_widget(objet,"entry_cin_modif");
	strcpy(cin1,gtk_entry_get_text(GTK_ENTRY(cin01))); 
  
	element=lookup_widget(objet,"combobox1_modif");
	strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));

	val=lookup_widget(objet,"entry_info_modif");
	strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

	//gtk_label_set_text(GTK_LABEL(pt),ch_element);
	//c=int_ch(ch_element); 
	//sprintf(ch,"%d",e);
	//strcpy(ch,ch_element[0]);
	//sscanf(&ch,"%d",e); 
	//sprintf(ch,"%d",e);
	//sprintf(ch," %d",e);
	//gtk_label_set_text(GTK_LABEL(pt),ch);
	
	e=o_int_ch(ch_element); 
	//gtk_label_set_text(GTK_LABEL(pt),ch_value);
	test=O_modif(cin1,e,ch_value);

	sprintf(ch,"%d",test); 
	if ((strcmp(ch,"1")==0) && (strlen(ch_value)!=0) && (strlen(ch_element)!=0) && (strlen(cin1)!=0))
	{ 	
			 
		sprintf(ch,"Modification reussie!");
		gtk_label_set_text(GTK_LABEL(pt),ch);
		
	}
	else if ((strlen(ch_value)==0) || (strlen(ch_element)==0) || (strlen(cin1)==0))
	{
		sprintf(ch,"ERREUR : Veuillez remplir tous les champs.");
		gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	else
	{			
		sprintf(ch,"ERREUR : identifiant inexistant");
		gtk_label_set_text(GTK_LABEL(pt),ch);
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button_aff_modif_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *window_gest, *window_consul ,*O_treeview;

	window_gest=lookup_widget(objet,"gestion_ouvrier");
	gtk_widget_destroy(window_gest);
	
	window_consul=create_affichage_ouvrier();
	gtk_widget_show(window_consul);

	O_treeview=lookup_widget(window_consul,"treeview_ouvrier");

	O_afficher(O_treeview);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_calendar1_day_selected              (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_buttonHome_consult_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_button_consult_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *input1;
	GtkWidget *pt;
	FILE* f;
	
	abscences abs;
	abscences abs1;
	int mycode=1;

	char msg[70];
	int test;
	char cin1[20];
	char datte[20];
	char ch[20];

	pt=lookup_widget(objet,"label_reussit");

	input1 = lookup_widget(objet,"entry_cin_consulter") ;
	//fflush(stdin);
	strcpy(abs1.cin,gtk_entry_get_text(GTK_ENTRY(input1)));

	mycode=make_code(abs1.cin);
	sprintf(ch,"%d",mycode);

	strcpy(abs1.code,ch);

	sprintf(datte,"%d/%d/%d",jj,mm,aa);
	strcpy(abs1.date,datte);


	
	if((strlen(abs1.cin)==8 && Ouv_trouve(abs1.cin)==1)){
		consulter_ouvrier(abs1);
		sprintf(msg,"Abscence confirmée");
		gtk_label_set_text(GTK_LABEL(pt),msg);
	}
	else if (Ouv_trouve(abs1.cin)!=1)
{
		sprintf(msg,"Ouvrier non existant");
		gtk_label_set_text(GTK_LABEL(pt),msg);
}
	else{
		sprintf(msg,"Erreur : Longeur de num CIN invalid");
		gtk_label_set_text(GTK_LABEL(pt),msg);
	}

}
	

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_buttonAfficheAbs_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *window_consulter, *window_aff ,*abs_treeview;

	window_consulter=lookup_widget(objet,"consulter_ouvrier");
	gtk_widget_destroy(window_consulter);
	
	window_aff=create_affichage_abscence();
	gtk_widget_show(window_aff);

	abs_treeview=lookup_widget(window_aff,"treeview_abs");

	afficher_abscence(abs_treeview);

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_button_chercher_abs_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *window_consulter, *window_aff ,*abs_indiv_treeview;
	GtkWidget *input;
	char cin00[20];
	
	

	window_consulter=lookup_widget(objet,"consulter_ouvrier");

	input=lookup_widget(objet,"entry_cin_consulter");
	strcpy(cin00,gtk_entry_get_text(GTK_ENTRY(input)));

	gtk_widget_destroy(window_consulter);

	window_aff=create_abscence_indiv();
	gtk_widget_show(window_aff);

	abs_indiv_treeview=lookup_widget(window_aff,"treeview_abs_indiv");

	chercher(cin00,abs_indiv_treeview);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_buttonRetour_consulter_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *gestion ;
	GtkWidget* window0;

	window0=lookup_widget(objet,"consulter_ouvrier");
	gtk_widget_destroy(window0);

	gestion=create_gestion_ouvrier();
	gtk_widget_show (gestion);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_treeview_abs_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* cin;
gchar* code;
gchar* date;

abscences e;
GtkWidget* window_modif,*pt;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&cin,1,&code, 2,&date,-1);

//ouvrir la fenetre de modification
//window_modif=create_window_modif();
//gtk_widget_show(window_modif);

    
//pt=lookup_widget(window_modif,"entry_emp_modif_identif");
//gtk_entry_set_text(GTK_ENTRY(pt),identif);



chercher(cin,treeview);

abs_supprimer(cin,code);

}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_buttonRetour_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_btn_home_aff_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_treeview_ouvrier_row_activated      (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_button_retour_aff_ouv_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *gestion ;
	GtkWidget *aff;
	
	aff=lookup_widget(objet,"affichage_ouvrier");
	gtk_widget_destroy(aff);
	
	gestion=create_gestion_ouvrier();
	gtk_widget_show (gestion);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_button_confirmer_avancement_clicked (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *input1;
	GtkWidget *pt;
	GtkWidget *avancement11;
	FILE* f;
	
	tache t;
	abscences abs;

	char msg[70];
	int test;
	
	pt=lookup_widget(objet,"label_out_avancement");

	input1 = lookup_widget(objet, "entry_cin_avancement") ;
	strcpy(t.cin1,gtk_entry_get_text(GTK_ENTRY(input1)));

	
	avancement11=lookup_widget(objet,"spinbutton1");
	t.percent=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(avancement11));

	if(strlen(t.cin1)==8 && Ouv_trouve(t.cin1)){
		avancement(t);
		sprintf(msg,"Avancement confirmé");
		gtk_label_set_text(GTK_LABEL(pt),msg);
	}
	else if (strlen(t.cin1)==0){
		sprintf(msg,"Veuillez remplir tous les champs");
		gtk_label_set_text(GTK_LABEL(pt),msg);
	}
	else{
		sprintf(msg,"Erreur : Longeur de num CIN invalid");
		gtk_label_set_text(GTK_LABEL(pt),msg);
	}
		
	
	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_treeview_abs_indiv_row_activated    (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* cin;
gchar* code;
gchar* date;

abscences e;
GtkTreeModel *model= gtk_tree_view_get_model(treeview);
GtkWidget* window_modif,*pt;
if (gtk_tree_model_get_iter(model, &iter,path))
{
//obtenir les valeurs de la ligne selectionnée

gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&cin,1,&code, 2,&date,-1);
}
//ouvrir la fenetre de modification
window_modif=create_window_modif_abs();
gtk_widget_show(window_modif);

    
pt=lookup_widget(window_modif,"entry_cin_modif_abs");
gtk_entry_set_text(GTK_ENTRY(pt),cin);

pt=lookup_widget(window_modif,"entry_code_modif_abs");
gtk_entry_set_text(GTK_ENTRY(pt),code);

//appel de la fct de suppression
//E_supprimer(identif);
//màj du treeview
afficher_abscence(treeview);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_button_avancement_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *avancement1 ;
	GtkWidget *gestion;

	gestion=lookup_widget(objet,"gestion_ouvrier");
	gtk_widget_destroy(gestion);

	avancement1=create_avancement();
	gtk_widget_show (avancement1);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_button_retour_supp_ouv_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *gestion ;
	GtkWidget *supp;

	supp=lookup_widget(objet,"supprime_ouvrier");
	gtk_widget_destroy(supp);

	gestion=create_gestion_ouvrier();
	gtk_widget_show (gestion);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button_home_list_ouv_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_button_retour_avancement_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *gestion ;
	GtkWidget *supp;

	supp=lookup_widget(objet,"avancement");
	gtk_widget_destroy(supp);

	gestion=create_gestion_ouvrier();
	gtk_widget_show (gestion);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_button_retour_ajout_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *gestion ;
	GtkWidget *supp;

	supp=lookup_widget(objet,"ajout_ouvrier");
	gtk_widget_destroy(supp);

	gestion=create_gestion_ouvrier();
	gtk_widget_show (gestion);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_buttonRetourModif_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *retour ;
	GtkWidget* window0, *window;
	
	window0=lookup_widget(objet,"modifier_ouvrier");
	gtk_widget_destroy(window0);

	retour=create_gestion_ouvrier();
	gtk_widget_show (retour);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_calendar_abs_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data)
{
	gtk_calendar_get_date(calendar,&jj,&mm,&aa);
	mm+=1;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_button_retour_indiv_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *consult;
	GtkWidget *aff;

	aff=lookup_widget(objet,"abscence_indiv");
	gtk_widget_destroy(aff);

	consult=create_consulter_ouvrier();
	gtk_widget_show (consult);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void
on_buttonRetour_aff_abs_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *consult;
	GtkWidget *aff;

	aff=lookup_widget(objet,"affichage_abscence");
	gtk_widget_destroy(aff);

	consult=create_consulter_ouvrier();
	gtk_widget_show (consult);
}

/*
void
on_button_Ajout1A_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonModifier_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonSupprimer_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonConsulter_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_gestion_aff_ouv_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_homr_principal_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_avancement_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_ouvrier_mois_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_retour_ajout_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_ajouter_ouv_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonCIN_supp_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_home_supp_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonretour_supp_ouv_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonVerif_modif_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonHome_modif_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_aff_modif_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonRetourModif_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_calendar_abs_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data)
{

}


void
on_buttonHome_consult_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonRetour_consulter_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonAfficheAbs_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_chercher_abs_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_consult_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeview_abs_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_btn_home_aff_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonRetour_aff_abs_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeview_ouvrier_row_activated      (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button_home_list_ouv_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_button_retour_aff_ouv_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_retour_avancement_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_confirmer_avancement_clicked (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeview_abs_indiv_row_activated    (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button_retour_indiv_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}



void
on_buttonAjout1A_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_home_principal_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttoAjouter1B_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonHome_ajout_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_retour_supp_ouv_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_retour_aff_ouv_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}




void
on_buttonAjouter1B_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/


void
on_se_deconnecter_client_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{ GtkWidget *window0,*window1;
		window0=lookup_widget(objet,"espace_client");
		gtk_widget_destroy(window0);


	
		window1=create_window_auth_client ();
		gtk_widget_show(window1);
}


void
on_button_se_dec_emp_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window0,*window1;
		window0=lookup_widget(objet,"window_princ_espace_emp");
		gtk_widget_destroy(window0);


	
		window1=create_fenetre_login ();
		gtk_widget_show(window1);
}


void
on_button_exit_client_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0;
		window0=lookup_widget(objet,"window_auth_client");
		gtk_widget_destroy(window0);
}


void
on_button_login_client_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{FILE* f;
char ch[70],ch1[20],ch2[20]; int test;
 GtkWidget* id,*mdp,*window0,*window1,*pt;
id=lookup_widget(objet,"entry_auth_id_cl");
mdp=lookup_widget(objet,"entry_auth_mdp_cl");
pt=lookup_widget(objet,"label_sortie_msg_cl");
 strcpy(ch1,gtk_entry_get_text(GTK_ENTRY(id)));
    strcpy(ch2,gtk_entry_get_text(GTK_ENTRY(mdp)));
 f=fopen("client.txt","a+"); fclose(f); //pour eviter l'errerur de E_trouve pour l'ajout du premier employe

test=auth_client(ch1,ch2);
	sprintf(ch,"%d",test);
 gtk_label_set_text(GTK_LABEL(pt),ch);
	
if( strlen(ch1)==0 || strlen(ch2)==0 )
	

	{

	sprintf(ch,"ERREUR: veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
  
  else if (test==0)
	{
		sprintf(ch,"ERREUR: Veuillez réessayer de nouveau.");
			    gtk_label_set_text(GTK_LABEL(pt),ch);
	}

	   else
		{ 
		window0=lookup_widget(objet,"window_auth_client");
		gtk_widget_destroy(window0);


	
		window1=create_espace_client ();
		gtk_widget_show(window1);	
		}
 



}

void
on_chercher_annee_seche_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f; char ch[50],chq[20],moy[20];
char ch1[20],ch2[20],ch3[20],ch4[20],as[20];
double min,qt; int i=0;
    	GtkWidget *pt,*pt1;
	GtkWidget *affichage;
	affichage=lookup_widget(objet,"affichage_precipitation");
   	pt=lookup_widget (objet ,"sortie_annee_seche");
	pt1=lookup_widget (objet ,"sortie_moy_annee");
	min=calcul_quantite(ch4);
f=fopen("precipitation.txt","r");
if (f!=NULL)
{
         while (fscanf (f, "%s %s %s %s \n",ch1,ch2,ch3,ch4)!=EOF)
           		 {
				i+=1;
				if (i==1)
					min=calcul_quantite(ch4);

				qt=calcul_quantite(ch4);
				if (qt<=min) 
				{
				min=qt;
				strcpy(as,ch4);}
				
			 }
}
fclose(f);
strcpy(chq,as);

sprintf(moy,"%.2f mm",min);
gtk_label_set_text(GTK_LABEL(pt),chq);
gtk_label_set_text(GTK_LABEL(pt1),moy);

}


void
on_button_annee_la_plus_seche_clicked  (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *pt1,*pt2,*window;
	
window=create_window_annee_seche();
gtk_widget_show(window);
pt1=lookup_widget(window,"label_year_sec");
pt2=lookup_widget(window,"label_moyenne_annuelle");
FILE* f; char ch[50],chq[20],moy[20];
char ch1[20],ch2[20],ch3[20],ch4[20],as[20];
double min,qt; int i=0;
    	
	
	min=calcul_quantite(ch4);
f=fopen("precipitation.txt","r");
if (f!=NULL)
{
         while (fscanf (f, "%s %s %s %s \n",ch1,ch2,ch3,ch4)!=EOF)
           		 {
				i+=1;
				if (i==1)
					min=calcul_quantite(ch4);

				qt=calcul_quantite(ch4);
				if (qt<=min) 
				{
				min=qt;
				strcpy(as,ch4);}
				
			 }
}
fclose(f);
strcpy(chq,as);

sprintf(moy,"%.3f mm",min);
gtk_label_set_text(GTK_LABEL(pt1),chq);
gtk_label_set_text(GTK_LABEL(pt2),moy);
}


void
on_button_taux_abs_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *window_consulter, *window_aff ,*abs_treeview;

	window_consulter=lookup_widget(objet,"consulter_ouvrier");
	gtk_widget_destroy(window_consulter);
	
	window_aff=create_affichage_abscence();
	gtk_widget_show(window_aff);

	abs_treeview=lookup_widget(window_aff,"treeview_abs");

	afficher_abscence(abs_treeview);
}


void
on_button_retour_esp_admin_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *window1,*window0,*window2,*window3,*window4,*window5,*window_gestion_emp,*window6,*window7,*window8;
GtkWidget *window9,*window10,*window11,*window12;
window1=lookup_widget(objet,"window_gestion");
gtk_widget_destroy(window0);

window2=lookup_widget(objet,"window_gestion_eq");
gtk_widget_destroy(window1);

window3=lookup_widget(objet,"gestion_troupeau");
gtk_widget_destroy(window2);

window3=lookup_widget(objet,"gestion_aff");
gtk_widget_destroy(window3);

window4=lookup_widget(objet,"gestion_ouvrier");
gtk_widget_destroy(window4);

window5=lookup_widget(objet,"window_welcome");
gtk_widget_destroy(window5);

window7=lookup_widget(objet,"acceuil_precipitation");
gtk_widget_destroy(window7);

window8=lookup_widget(objet,"menu_plantation");
gtk_widget_destroy(window8);
window8=lookup_widget(objet,"acceuil_finance");
gtk_widget_destroy(window8);
window9=lookup_widget(objet,"gestion_troupeau");
gtk_widget_destroy(window9);
window10=lookup_widget(objet,"fenetre_choix");
gtk_widget_destroy(window10);
window11=lookup_widget(objet,"window_gestion_aff");
gtk_widget_destroy(window11);
window12=lookup_widget(objet,"bienvenue_admin_reservation");
gtk_widget_destroy(window12);


window_gestion_emp=create_window_princ_espace_emp();
gtk_widget_show(window_gestion_emp);
}


void
on_button_num_cap_clicked              (GtkWidget       *button,
                                        gpointer         user_data)
{ 

GtkWidget *treeview_marque,*treeview_marque2,*treeview_marque3,*treeview_marque4;
GtkWidget *fenetre_marque_alarmante_T;
GtkWidget *fenetre_marque_alarmante_H;

fenetre_marque_alarmante_T=create_fenetre_marque_alarmante_T();
fenetre_marque_alarmante_H=create_fenetre_marque_alarmante_H();

gtk_widget_show (fenetre_marque_alarmante_T);

treeview_marque=lookup_widget(fenetre_marque_alarmante_T,"treeview_cp_T_def2");
affich_cp_t_def(treeview_marque);

treeview_marque2=lookup_widget(fenetre_marque_alarmante_T,"treeview_marque_cp_t2");
affich_marque_cp_t_def(treeview_marque2);



gtk_widget_show (fenetre_marque_alarmante_H);

treeview_marque3=lookup_widget(fenetre_marque_alarmante_H,"treeview_cp_H_def3");
affich_cp_h_def(treeview_marque3);

treeview_marque4=lookup_widget(fenetre_marque_alarmante_H,"treeview_marque_cp_h4");
affich_marque_cp_h_def(treeview_marque4);




}

void
on_button_marque_cap_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{


GtkWidget *pt,*window_evite_cet_marque;
	
window_evite_cet_marque=create_fenetre_marque_eviter_T();
gtk_widget_show(window_evite_cet_marque);
pt=lookup_widget(window_evite_cet_marque,"sortie_marque_alar_t");

FILE* f; char ch[50],chq[20];
char marque[20],evite[20];
double min,occurence; int i=0;
    	
	
	min=calcul_marque(marque);
f=fopen("marques_cp_T_embetantes.txt","r");
if (f!=NULL)
{
         while (fscanf (f, "%s \n",marque)!=EOF)
           		 {
				i+=1;
				if (i==1)
					min=calcul_marque(marque);

				occurence=calcul_marque(marque);
				if (occurence<=min) 
				{
				min=occurence;
				strcpy(evite,marque);}
				
			 }
}
fclose(f);
strcpy(chq,evite);


gtk_label_set_text(GTK_LABEL(pt),chq);


GtkWidget *pt2,*window_evite_cet_marque2;
	
window_evite_cet_marque2=create_fenetre_marque_eviter_H();
gtk_widget_show(window_evite_cet_marque2);
pt2=lookup_widget(window_evite_cet_marque2,"sortie_marque_alar_h");

FILE* f2; char ch2[50],chq2[20];
char marque2[20],evite2[20];
double min2,occurence2; int j=0;
    	
	
	min2=calcul_marque(marque2);
f2=fopen("marques_cp_H_embetantes.txt","r");
if (f2!=NULL)
{
         while (fscanf (f2, "%s \n",marque2)!=EOF)
           		 {
				j+=1;
				if (j==1)
					min2=calcul_marque_h(marque2);

				occurence2=calcul_marque_h(marque2);
				if (occurence2 <= min2) 
				{
				min2=occurence2;
				strcpy(evite2,marque2);}
				
			 }
}
fclose(f2);
strcpy(chq2,evite2);


gtk_label_set_text(GTK_LABEL(pt2),chq2);



}


void
on_button_meilleur_ouv_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *ouvrier_mois1 ;
	abscences abs;
	GtkWidget *out;
	char msg[177];
	char meilleur[30];

	ouvrier_mois1=create_ouvrier_mois();

	gtk_widget_show (ouvrier_mois1);
	
	out = lookup_widget(objet,"label_ouvrier_mois");

	//strcpy(meilleur,best());

	//strcat(msg,meilleur);
	gtk_label_set_text(GTK_LABEL(out),msg);
}


void
on_embetante_t_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{

FILE* f; char ch[50],chq[20];
char ch1[20],as[20];
int q,qt;
    	GtkWidget *pt;
	GtkWidget *affichage;

   	pt=lookup_widget (objet ,"sortie_marque_alar_t");
	q=0;
f=fopen("marques_cp_T_embetantes.txt","r");
if (f!=NULL)
{
         while (fscanf (f, "%s \n",ch1)!=EOF)
           		 {
				
				qt=calcul_marque(ch1);
				if (qt<=q) 
				{
				q=qt;
				strcpy(as,ch1);}
				else q=qt;
			 }
}
fclose(f);
strcpy(chq,as);

gtk_label_set_text(GTK_LABEL(pt),chq);
}


void
on_emb_h_clicked                       (GtkWidget       *objet,
                                        gpointer         user_data)
{

FILE* f; char ch[50],chq[20];
char ch1[20],as[20];
int q,qt;
    	GtkWidget *pt;
	GtkWidget *affichage;
	affichage=lookup_widget(objet,"fenetre_marque_eviter_H");
   	pt=lookup_widget (objet ,"sortie_marque_alar_h");
	q=0;
f=fopen("marques_cp_H_embetantes.txt","r");
if (f!=NULL)
{
         while (fscanf (f, "%s \n",ch1)!=EOF)
           		 {
				
				qt=calcul_marque_h(ch1);
				if (qt<=q) 
				{
				q=qt;
				strcpy(as,ch1);}
				else q=qt;
			 }
}
fclose(f);
strcpy(chq,as);

gtk_label_set_text(GTK_LABEL(pt),chq);
}


void
on_valider_id_supp_equip_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{
char id[20]; int test; char ch[40];
GtkWidget* identif=lookup_widget(objet,"entry_id_supp_eq");
GtkWidget* pt=lookup_widget(objet,"label_out_id_supp_equip");

strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));  

test=EQ_trouve(id);
sprintf(ch,"%d",test);

    
	    if (strcmp(ch,"1")==0)
		{ 
		    
		    sprintf(ch,"Identifiant existant!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		
		}
	    else
		{
		    sprintf(ch,"ERREUR: identifiant inexistant.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);

		} 
}


void
on_button_modif_abs_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window=create_window_modif_abs();
gtk_widget_show(window);
}


void
on_valider_modif_abs_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{

char ch_element[20]="",code[20],ch_value[20]="",id[20],ch[50]; int e,test;

	GtkWidget *element,*val,*identif,*pt1,*cd;

GtkWidget* pt=lookup_widget(objet,"sortie_msg_modif_absence");
cd=lookup_widget(objet,"entry_code_modif_abs");
strcpy(code,gtk_entry_get_text(GTK_ENTRY(cd))); 

identif=lookup_widget(objet,"entry_cin_modif_abs");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(identif)));   
element=lookup_widget(objet,"comboboxentry_modif_abs");
val=lookup_widget(objet,"entry_new_val_abs");

strcpy(ch_element,gtk_combo_box_get_active_text(GTK_COMBO_BOX(element)));
//c=int_ch(ch_element); //sprintf(ch,"%d",e);
//strcpy(ch,ch_element[0]);
e=0; //sprintf(ch," %d",e);
		  //  gtk_label_set_text(GTK_LABEL(pt),ch);
strcpy(ch_value,gtk_entry_get_text(GTK_ENTRY(val)));

test=abs_modif(id,code,e,ch_value);

sprintf(ch,"%d",test);// gtk_label_set_text(GTK_LABEL(pt),ch);

    
	    if (strcmp(ch,"1")==0 && strlen(ch_value)!=0 && strlen(ch_element)!=0)
		{ 
		 
		    sprintf(ch,"Modification reussie!");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
		//EQ_affiche_modif(id,pt1,pt2,pt3,pt4,pt5,pt6);
			
		}
	    else
		if (strlen(ch_value)==0 || strlen(ch_element)==0)
	{
		sprintf(ch,"ERREUR: Veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
	    

}


void
on_retour_reservation_client_acceuil_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1,*window2;
window1=create_espace_client();
gtk_widget_show(window1);
window2=lookup_widget(objet,"bienvenue_reservation");
gtk_widget_destroy(window2);
window2=lookup_widget(objet,"window_gestion_reclamation");
gtk_widget_destroy(window2);

}


void
on_radiobutton_mauvais_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	EQ_choix[2]=1;
else
	EQ_choix[2]=0;
}


void
on_radiobutton_moyen_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	EQ_choix[1]=1;
else
	EQ_choix[1]=0;
}


void
on_radiobutton_bon_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
	EQ_choix[0]=1;
else
	EQ_choix[0]=0;
}


void
on_button_login_admin_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f;
char ch[70],ch1[20],ch2[20]; int test;
 GtkWidget* id,*mdp,*window0,*window1,*pt;
id=lookup_widget(objet,"entry_admin_login");
mdp=lookup_widget(objet,"entry_mdp_admin");
pt=lookup_widget(objet,"label_sortie_auth_admin");
 strcpy(ch1,gtk_entry_get_text(GTK_ENTRY(id)));
    strcpy(ch2,gtk_entry_get_text(GTK_ENTRY(mdp)));
 f=fopen("admin.txt","a+"); fclose(f);

test=auth_admin(ch1,ch2);
	sprintf(ch,"%d",test);
 gtk_label_set_text(GTK_LABEL(pt),ch);
	
if( strlen(ch1)==0 || strlen(ch2)==0 )
	

	{

	sprintf(ch,"ERREUR: veuillez remplir tous les champs.");
		    gtk_label_set_text(GTK_LABEL(pt),ch);
	}
  
  else if (test==0)
	{
		sprintf(ch,"ERREUR: Veuillez réessayer de nouveau.");
			    gtk_label_set_text(GTK_LABEL(pt),ch);
	}

	   else
		{ 
		window0=lookup_widget(objet,"window_auth_admin");
		gtk_widget_destroy(window0);


	
		window1=create_window_princ ();
		gtk_widget_show(window1);	
		}
 


}


void
on_button_exit_admin_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
		GtkWidget* window0=lookup_widget(objet,"window_auth_admin");
		gtk_widget_destroy(window0);
}


void
on_button_se_dec_admin_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{


GtkWidget *window0,*window1;
		window0=lookup_widget(objet,"create_window_princ");
		gtk_widget_destroy(window0);


	
		window1=create_window_auth_admin ();
		gtk_widget_show(window1);
	
}


void
on_button_mdp_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* window0=create_window_princ();
		gtk_widget_destroy(window0);


	
GtkWidget* window1=create_window_modif_password ();
		gtk_widget_show(window1);
}


void
on_button_valid_new_mdp_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
FILE* f; char ch[20]; GtkWidget* mdp,*pt;
mdp=lookup_widget(objet,"entry_new_password_modif");
pt=lookup_widget(objet,"label_sorie_password_modif");
f=fopen("admin.txt","w");
strcpy(ch,gtk_entry_get_text(GTK_ENTRY(mdp)));
fprintf(f,"%s %s \n","admin",ch);
gtk_label_set_text(GTK_LABEL(pt),"Modification réussie.");
fclose(f);
}


void
on_button_retour_adminn_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
		GtkWidget* window0=create_window_modif_password ();
		gtk_widget_destroy(window0);
GtkWidget* window2=create_window_annee_seche();
		gtk_widget_destroy(window2);


	
		GtkWidget* window1=create_window_princ ();
		gtk_widget_show(window1);
}

