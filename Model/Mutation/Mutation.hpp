#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include <random>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "../Solution/Solution.hpp"
#include "../Ville/Ville.hpp"

using namespace std;

/***
 * On mute nos solutions en inversant des villes au hasard pour potentiellement avoir un meilleur score
 * @param solution
 */
void Mutation(Solution *solution){
    Solution *newsolution = new Solution();

    //Utilisation du random pour sélectionner 2 villes au hasard de la solution
    int k_ville1 = rand() % solution->getTaille();
    int k_ville2 = rand() % solution->getTaille();

    //Récupération des 2 villes;
    Ville *ville1 = solution->getVille()[k_ville1];
    Ville *ville2 = solution->getVille()[k_ville2];

    //Ajout des villes en inversant l'index des 2 villes de départ dans une nouvelle solution
    //Ajout des villes jusqu'au premier index
    for(int i = 0; i< k_ville1 ; i++){
        newsolution->addVille(solution->getVille(i));
    }
    //Ajout de la première ville en inversant les 2 villes
    newsolution->addVille(ville2);

    //Ajout des villes jusqu'au second index
    for(int i = k_ville1; i< k_ville2 ; i++){
        newsolution->addVille(solution->getVille(i));
    }
    //Ajout de la seconde ville en inversant les 2 villes
    newsolution->addVille(ville1);

    //Ajout du reste des villes
    for(int i = k_ville2+1 ; i<solution->getTaille(); i++){
        newsolution->addVille(solution->getVille(i));
    }

    solution = newsolution;

}