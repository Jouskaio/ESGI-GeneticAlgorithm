#pragma once
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <iomanip>
#include <vector>
#include "../Evaluateur/Evaluateur.hpp"
#include "../Solution/Solution.hpp"
#include "../Croisement/Croisement.hpp"
#include "../Ville/Ville.hpp"
#include "../Evaluateur/Evaluateur.hpp"

using namespace std;

/***
 * Algo utilisant la selection par élitisme donc les N meilleures éléments de notre solution
 * @param Population
 * @return
 */
vector<Solution*> Selecteur(vector<Solution*> Population){
    vector <Solution*> NewGeneration;

    //Ajout des notes à chaque solution
    //Evaluateur(Population);

    //Récupération de la meilleure valeur de la population
    double distanceMini = getMeilleureSolution(Population);

    //Determination de notre seuil pour la sélection
    double seuil = distanceMini + distanceMini * 15 / 100;

    //Selection via les N meilleurs parents donc selection par élitisme
    for(Solution* sol : Population){
        if(sol->getValeur() < seuil){
            NewGeneration.push_back(sol);
        }
    }
    return NewGeneration;
}