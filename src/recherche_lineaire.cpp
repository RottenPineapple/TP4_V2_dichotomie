/**
 * @ Author: vlagard@btslivh.eu
 * @ Create Time: 2022-12-11 14:23:16
 * @ Modified by: Valentin LAGARD
 * @ Modified time: 2022-12-11 22:57:54
 * @ Description: 
 */

#include "header.hpp"

void recherche_lineaire()
{
    int compteur, nb_compar, taille_v_dico;
    bool trouve = false;
    std::ifstream liste_francais;
    std::string mot_a_trouver, mot, mot_vecteur;
    std::vector <std::string> v_dico;

    liste_francais.open(FILENAME, std::ios::in);
    if (!liste_francais.is_open()) {
        std::cout << "Impossible d'ouvrir le fichier en lecture." << std::endl;
    } else {
        while (std::getline(liste_francais, mot, '\n'))
            v_dico.push_back(mot);
        liste_francais.close();
        taille_v_dico = v_dico.size();
        std::cout << "Quel mot recherchez-vous ?" << std::endl;
        std::cin >> mot_a_trouver;
        for (nb_compar = 0; nb_compar < taille_v_dico; nb_compar++) {
            mot_vecteur = v_dico[nb_compar];
            if (mot_vecteur == mot_a_trouver) {
                trouve = true;
                compteur = nb_compar;
                nb_compar = taille_v_dico;
            }
        }
        if (trouve) {
            std::cout << "Le mot " << mot_a_trouver << " fait partie du dictionnaire." << std::endl;
            std::cout << "Le nombre de comparaisons faites est : " << compteur << std::endl;
        } else {
            std::cout << "Le mot " << mot_a_trouver << " ne fait pas partie du dictionnaire." << std::endl;
        }
    }
}