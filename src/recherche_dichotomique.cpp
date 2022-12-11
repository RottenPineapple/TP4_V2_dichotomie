/**
 * @ Author: vlagard@btslivh.eu
 * @ Create Time: 2022-12-11 22:56:07
 * @ Modified by: Valentin LAGARD
 * @ Modified time: 2022-12-11 23:22:10
 * @ Description: 
 */

#include "header.hpp"

void recherche_dichotomique()
{
    std::string mot, mot_a_trouver, mot_vecteur;
    std::ifstream liste_francais;
    std::vector <std::string> v_dico;
    int nb_compar, taille_v_dico, borne_inf, milieu, borne_sup;
    bool trouve;

    liste_francais.open(FILENAME, std::ios::in);
    if (!liste_francais.is_open()) {
        std::cout << "Impossible d'ouvrir le fichier en lecture." << std::endl;
    } else {
        while (std::getline(liste_francais, mot, '\n'))
            v_dico.push_back(mot);
        liste_francais.close();
        std::cout << "Quel mot recherchez-vous ?" << std::endl;
        std::cin >> mot_a_trouver;
        taille_v_dico = v_dico.size();
        borne_sup = taille_v_dico;
        while (borne_inf < borne_sup) {
            milieu = (borne_inf + borne_sup) / 2;
            mot_vecteur = v_dico[milieu];
            nb_compar++;
            if (mot_vecteur == mot_a_trouver) {
                trouve = true;
                borne_inf = milieu;
                borne_sup = milieu;
            } else if (mot_a_trouver < mot_vecteur) {
                borne_sup = milieu - 1;
            } else {
                borne_inf = milieu + 1;
            }
        }
        if (trouve) {
            std::cout << "Le mot " << mot_a_trouver << " fait partie du dictionnaire." << std::endl;
            std::cout << "Le nombre de comparaison est : " << nb_compar << std::endl;
        } else {
            std::cout << "Le mot " << mot_a_trouver << " ne fait pas partie du dictionnaire" << std::endl;
        }
    }
}