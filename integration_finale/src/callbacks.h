#include <gtk/gtk.h>


void
on_button_admin_gestion_emp_clicked    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_acceuil_modif_emp_clicked    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_acceuil_supp_emp_clicked     (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_acceuil_consult_emp_clicked  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_RBRbuttonSearch_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_acceuil_chercher_emp_clicked (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_acceuil_ajout_emp_clicked    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_RBRbutton_supp_clicked              (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_afficher_emp_clicked         (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_acceuil_clicked              (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_emp_modif_valider_identif_clicked
                                        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_RBRbutton_enr_modif_clicked         (GtkWidget       *button,
                                        gpointer         user_data);

void
on_E_treeview_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_ajouter_emp_clicked          (GtkWidget       *button,
                                        gpointer         user_data);

void
on_RBRbutton_cherch_clicked            (GtkWidget       *button,
                                        gpointer         user_data);

void
on_radiobutton_femme_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_homme_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_RBRbutton_gest_ajout_clicked        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_RBRbutton_gest_modif_clicked        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_RBRbutton_gest_consul_clicked       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_RBRbutton_gest_supp_clicked         (GtkWidget       *button,
                                        gpointer         user_data);

void
on_RBRbutton_gest_cherch_clicked       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_RBRcalendar_ajout_equip_day_selected
                                        (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_button_ajouter_equip_clicked        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_afficher_equip_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_retour_acceuil_equip_clicked (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_supp_eq_clicked              (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_valider_id_equip_modif_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_enr_modif_eq_clicked         (GtkWidget       *button,
                                        gpointer         user_data);

void
on_EQ_treeview_row_activated           (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_RBRbutton_cherch_eq_clicked         (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_goto_gest_eq_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_goto_gest_ouv_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_goto_gest_affect_clicked     (GtkWidget       *button,
                                        gpointer         user_data);

void
on_radiobutton_mauvais_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_moyen_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_bon_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
void
on_gestion_plantation_clicked          (GtkWidget       *objet,
                                        gpointer         user_data);
////////gestion de plantation/////////////////


void
on_ajout_plante_clicked                (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_modifier_plante_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_supprimer_plante_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_afficher_plante_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_valider_plante_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retourpl1_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_valid_modif_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retourpl2_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_valider_supp_clicked                (GtkWidget       *objet,
                                        gpointer         user_data);

void

on_retourpl3_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeviewpl1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_retourpl4_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);



void
on_recherche_code_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_consulter_affichage_pante_clicked   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button2_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);



void
on_button_cherche_nombre_plantation_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_afficher_nbr_plantation_clicked     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeview_aff_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_retour_affichage_exep_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);



void
on_ajouter_transac_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_modifier_transac_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_supprimer_transac_clicked           (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_afficher_transac_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_retour1_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_valider_transac_clicked      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_chercher_modif_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_valider_modif_transac_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_retour2_modif_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_valider_supprimer_clicked    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_retour4_transac_clicked      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeviewf1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_buttonretou5_transac_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_chercher_nbr_facture_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_affichage_facture_client_clicked    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeviewf2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_retour_affichage1_clicked           (GtkWidget       *objet,
                                        gpointer         user_data);




void
on_gestion_financiere_clicked          (GtkWidget       *objet,
                                        gpointer         user_data);


void
on_gestion_client_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);
//////////////gestion client///////////////////////////////////////


void
on_radiobutton_femmec_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_hommec_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_ajouter_client_clicked              (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_retour_home_ajout_clicked           (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_home_supp_client_clicked            (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button_supp_client_clicked          (GtkWidget     *objet,
                                        gpointer         user_data);

void
on_treeview_affc_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_retour_home_aff_clicked      (GtkWidget     *objet,
                                        gpointer         user_data);

void
on_button_ajouter_client_aff_clicked   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_next_modif_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_modif_tohome_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_valider_modif_clicked        (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button_validmodif_home_clicked      (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_consulter_client_acceuil_clicked    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_chercher_client_acceuil_clicked     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_modifier_client_acceuil_clicked     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_supprimer_client_acceuil_clicked    (GtkWidget     *objet,
                                        gpointer         user_data);

void
on_ajouter_client_acceuil_clicked      (GtkWidget     *objet,
                                        gpointer         user_data);

void
on_chercher_client_clicked             (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_home_chercher_acc_clicked           (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_home_cher2_acc_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_afficher_ajout_client_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_validation_existance_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button2M_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonshowdetail_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_radiobutton2M_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton1M_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton1m_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton1f_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button1Modif_clicked                (GtkButton       *objet,
                                        gpointer         user_data);

void
on_gestion_reclamation_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_gestion_client_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);


////////////////////////gestion troupeau///////////////////////////////////////////////
void
on_gestion_troupeau_clicked            (GtkWidget      *objet,
                                        gpointer         user_data);


void
on_button1_retour_clicked              (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button1_consulter_clicked           (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button1_ajouter_clicked             (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button1_modifier_clicked            (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button1_supprimer_clicked           (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button2_retour_clicked              (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button1_valider_clicked             (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button1_recherche_clicked           (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button2_modifier_clicked            (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button2_home_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_button3_retour_clicked              (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button4_retour_clicked              (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button2_supprimer_clicked           (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button3_home_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeviewtr1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button4_home_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_button5_retour_clicked              (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button2_recherche_clicked           (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_radiobutton_brebi_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);


void
on_radiobutton_veau_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);


void
on_button1_afficher_clicked            (GtkWidget      *objet,
                                        gpointer         user_data);

////////////////////affectation////////////////
void
on_button_gest_ajout_aff_clicked       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_gest_supp_aff_clicked        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_gest_consul_aff_clicked      (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_gest_modif_aff_clicked       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_gest_cherch_aff_clicked      (GtkWidget       *button,
                                        gpointer         user_data);

void
on_calendar_aff_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_button_enr_ajout_aff_clicked        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_afficher_aff_clicked         (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_supp_aff_clicked             (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_valid_code_aff_clicked       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_enr_modif_aff_clicked        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_AFF_treeview_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_consul_goto_cherch_aff_clicked
                                        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_home_aff_clicked             (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_cherch_aff_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_valid_cin_ouv_aff_clicked    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_valid_id_eq_aff_clicked      (GtkWidget       *button,
                                        gpointer         user_data);

void
on_reservation_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data);
//////////////////////////////reservation///////////////////////////////////

void
on_espace_client_reservation_clicked   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_espace_admin_reservation_clicked    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_valider_reservation_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retour_reservation1_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_modifier_reservation_client_clicked (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_ajouter_reservation_client_clicked  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_chercher_code_modif_reservation_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_valider_modif_reservation_clicked   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retour_modif_clicked                (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_modif_accueil_admin_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_afficher_reservation_admin_clicked  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_supprimer_reservation_admin_clicked (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_valider_supp_reservation_clicked    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retour_supp_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeviewreser1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_retour_affichage_reservation_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data);

/////////////////////precipitation////////////////////////////////////
void
on_gestion_precipitation_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_afficher_precipitation_clicked      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_supprimer_precipitation_clicked     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_modifier_precipitation_clicked      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_ajouter_precipitation_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_valider_precipitation_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_chercher_modif_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_valider_modif_precipitation_clicked (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retourpr2_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retourpr3_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_valider_suppression_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retourpr4_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retourpr1_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeviewpr1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);


//////////////////////////////////////reclamation//////////////////////////////////

void
on_reclamation_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data);


void
on_calendar_rec_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_checkbutton_services_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton_produits_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton_montant_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button_ajouter_rec_clicked          (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_supp_rec_home_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_ajouter_rec_home_clicked     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_modif_rec_home_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_chercher_rec_home_clicked    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_consulter_rec_home_clicked   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_ajout_to_home_clicked        (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button_affichage_ajout_clicked      (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_treeview_rec_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_aff_to_home_clicked          (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button_existance_idrec_clicked      (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_button_supprimer_reclamation_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_supp_to_home_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_verfier_existance_id_clicked (GtkWidget     *objet,
                                        gpointer         user_data);

void
on_button_chercher_rec_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_retour_cher_acc_clicked      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeview_cher_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_cher2_home_clicked           (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_ButtonModifier1_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_calendarM1_day_selected             (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_buttonModifier2_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_checkbuttonM2_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonM3_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonM1_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttonprevious_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonHOMEM_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonHomeM2_clicked                (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button1_clicked                     (GtkButton       *objet,
                                        gpointer         user_data);

void
on_verifier_rec_chercher_clicked       (GtkButton       *objet,
                                        gpointer         user_data);
/*



void
on_button_supp_rec_home_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_ajouter_rec_home_clicked     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_modifie_rec_home_clicked     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_chercher_rec_home_clicked    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_consulter_rec_home_clicked   (GtkButton       *button,
                                        gpointer         user_data);

void
on_calendar_rec_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_checkbutton_services_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button_ajouter_rec_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_ajouter_to_home_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_affichage_ajout_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_checkbutton_produits_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton_montant_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_treeview_rec_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_aff_to_home_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_existance_idrec_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_supprimer_reclamation_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_supp_to_home_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_cher_acc_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_chercher_rec_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_verifier_rec_chercher_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview_cher_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_cher2_home_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonHomeM2_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonModifier1_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_calendarM1_day_selected             (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_buttonModifier2_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_checkbuttonM2_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonM3_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonM1_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttonprevious_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonHOMEM_clicked                 (GtkButton       *button,
                                        gpointer         user_data);


void
on_button_modifie_rec_home_clicked     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_ajouter_to_home_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonModifier1_clicked             (GtkButton       *button,
                                        gpointer         user_data);


void
on_button_modifier_rec_home_clicked    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_ajout_to_home_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_ButtonModifier1_clicked             (GtkButton       *button,
                                        gpointer         user_data);


void
on_button_modif_rec_home_clicked       (GtkButton       *button,
                                        gpointer         user_data);
*/

void
on_exit_clicked                        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_LOGIN_CP_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_espace_votre_capteurs_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_suppression_CAP_T_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_affich_CP_T_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);

void
on_modification_CP_T_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_cherche_CP_T_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_ajout_capteurs_temperature_clicked  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_suppression_val_T_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_affich_val_T_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_modification_val_T_clicked          (GtkWidget       *button,
                                        gpointer         user_data);

void
on_cherche_val_T_clicked               (GtkWidget       *button,
                                        gpointer         user_data);

void
on_ajout_val_temperature_clicked       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_treeview_cp_T_def_row_activated     (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_treeview_marque_cp_t_row_activated  (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_attention_marque_t_clicked          (GtkWidget       *button,
                                        gpointer         user_data);

void
on_suppression_CP_H_clicked            (GtkWidget       *button,
                                        gpointer         user_data);

void
on_modification_CP_H_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_cherche_CP_H_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_affich_CP_H_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);

void
on_ajout_CP_H_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_suppression_val_H_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_modification_val_H_clicked          (GtkWidget       *button,
                                        gpointer         user_data);

void
on_cherche_val_H_clicked               (GtkWidget       *button,
                                        gpointer         user_data);

void
on_affich_val_H_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_treeview_cp_H_def_row_activated     (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_treeview_marque_cp_h_row_activated  (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_attention_h_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);

void
on_calendar_cap_t_day_selected         (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_ajouter_CP_T_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_boutton_accueil_CP_T_clicked        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_calendar_cap_h_day_selected         (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_ajouter_CP_H_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_enregistrer_modif_cp_t_clicked      (GtkWidget       *button,
                                        gpointer         user_data);

void
on_valider_id_modif_cp_t_clicked       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_valider_id_modif_cp_h_clicked       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_enregistrer_modif_cp_h_clicked      (GtkWidget       *button,
                                        gpointer         user_data);

void
on_treeview_cp_t_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_treeview_cp_h_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_cherch_cp_t_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);

void
on_cherch_cp_h_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);

void
on_boutton_accueil_CP_H_clicked        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_calendar_val_t_day_selected         (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_valider_id_ajout_val_t_clicked      (GtkWidget       *button,
                                        gpointer         user_data);

void
on_accueil_val_T_clicked               (GtkWidget       *button,
                                        gpointer         user_data);

void
on_valider_id_modif_val_t_clicked      (GtkWidget       *button,
                                        gpointer         user_data);

void
on_treeview_val_t_row_activated        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_cherch_val_t_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_calendar_val_h_day_selected         (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_ajouter_val_H_clicked               (GtkWidget       *button,
                                        gpointer         user_data);

void
on_valider_id_ajout_val_h_clicked      (GtkWidget       *button,
                                        gpointer         user_data);

void
on_valider_id_modif_val_h_clicked      (GtkWidget       *button,
                                        gpointer         user_data);

void
on_enregistrer_modif_val_h_clicked     (GtkWidget       *button,
                                        gpointer         user_data);

void
on_treeview_val_h_row_activated        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_capteurs_temperature_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_capteurs_humidite_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_cherch_val_h_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_enregistrer_modif_val_t_clicked     (GtkWidget       *button,
                                        gpointer         user_data);

void
on_ajouter_val_T_clicked               (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_goto_gest_capt_clicked       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_ajout_val_H_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_nb_tr_clicked                (GtkButton       *button,
                                        gpointer         user_data);

////////////////////////////gestion ouvrier////////////////////////////////

void
on_button_goto_gest_ouv_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonAjouter1B_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonHome_ajout_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_ouvrier_mois_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonAjout1A_clicked               (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonSupprimer_clicked             (GtkWidget       *button,
                                        gpointer         user_data);

void
on_buttonModifier_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_gestion_aff_ouv_clicked      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonConsulter_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonCIN_supp_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonHome_supp_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonHome_modif_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_retour_modif_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonVerif_modif_clicked           (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_aff_modif_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_calendar1_day_selected              (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_buttonHome_consult_clicked          (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_consult_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonAfficheAbs_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_chercher_abs_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonRetour_consulter_clicked      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeview_abs_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_buttonRetour_clicked                (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_btn_home_aff_clicked                (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeview_ouvrier_row_activated      (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_retour_aff_ouv_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_confirmer_avancement_clicked (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeview_abs_indiv_row_activated    (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_avancement_clicked           (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_retour_supp_ouv_clicked      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_home_list_ouv_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_home_list_ouv_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_retour_avancement_clicked    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_retour_ajout_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);


void
on_buttonRetourModif_clicked           (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_calendar_abs_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_button_retour_indiv_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonRetour_aff_abs_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);



/*

void
on_button_Ajout1A_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonModifier_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonSupprimer_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonConsulter_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_gestion_aff_ouv_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_homr_principal_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_avancement_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_ouvrier_mois_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_ajout_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_ajouter_ouv_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonCIN_supp_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_home_supp_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonretour_supp_ouv_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonVerif_modif_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonHome_modif_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_aff_modif_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonRetourModif_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_calendar_abs_day_selected           (GtkCalendar     *calendar,
                                        gpointer         user_data);

void
on_buttonHome_consult_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonRetour_consulter_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonAfficheAbs_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_chercher_abs_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_consult_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview_abs_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_btn_home_aff_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonRetour_aff_abs_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview_ouvrier_row_activated      (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_home_list_ouv_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_button_retour_aff_ouv_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_avancement_clicked    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_confirmer_avancement_clicked (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview_abs_indiv_row_activated    (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_retour_indiv_clicked         (GtkButton       *button,
                                        gpointer         user_data);


void
on_buttonAjout1A_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_home_principal_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttoAjouter1B_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonHome_ajout_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_supp_ouv_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_aff_ouv_clicked       (GtkButton       *button,
                                        gpointer         user_data);


void
on_buttonAjouter1B_clicked             (GtkButton       *button,
                                        gpointer         user_data);
*/

void
on_se_deconnecter_client_clicked       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_se_dec_emp_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_exit_client_clicked          (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_login_client_clicked         (GtkWidget       *button,
                                        gpointer         user_data);


void
on_chercher_annee_seche_clicked        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_annee_la_plus_seche_clicked  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_taux_abs_clicked             (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_retour_esp_admin_clicked     (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_num_cap_clicked              (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_marque_cap_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_meilleur_ouv_clicked         (GtkWidget       *button,
                                        gpointer         user_data);

void
on_embetante_t_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);

void
on_emb_h_clicked                       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_valider_id_supp_equip_clicked       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_modif_abs_clicked            (GtkWidget       *button,
                                        gpointer         user_data);

void
on_valider_modif_abs_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_retour_reservation_client_acceuil_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_radiobutton_mauvais_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_moyen_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_bon_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button_login_admin_clicked          (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_exit_admin_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_se_dec_admin_clicked         (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_mdp_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_valid_new_mdp_clicked        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_retour_adminn_clicked        (GtkWidget       *button,
                                        gpointer         user_data);
