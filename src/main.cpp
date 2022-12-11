/**
 * @ Author: vlagard@btslivh.eu
 * @ Create Time: 2022-12-11 14:00:54
 * @ Modified by: Valentin LAGARD
 * @ Modified time: 2022-12-11 23:13:43
 * @ Description: main file for the TP4
*/

#include "header.hpp"

using namespace std;

int main(int ac, char **av)
{
    if (ac != 2) {
        return (84);
    } else {
        switch (av[1][0]) {
            case '1':
                recherche_lineaire();
                break;
            case '2':
                recherche_dichotomique();
                break;
            default:
                break;
        }
    }
}