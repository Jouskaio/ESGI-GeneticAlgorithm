//
// Created by Mikail Yilmaz on 07/02/2023.
//

#ifndef C_ALGO_GENETIQUES_GENETICALGORITHM_H
#define C_ALGO_GENETIQUES_GENETICALGORITHM_H


#include "Solution.hpp"
#include "GenerateurAleatoire.hpp"
#include "Evaluateur.hpp"
#include "Selecteur.hpp"
#include "Croisementt.hpp"
#include "Mutation.hpp"
#include "CritereArret.hpp"

using namespace std;


class GeneticAlgorithm {




    template<typename T>
    T generate(GenerateurAleatoire a, Evaluateur b, Selecteur c, Croisement d, Mutation e, CritereArret f, int population){
        //return de type T
    }
};


#endif //C_ALGO_GENETIQUES_GENETICALGORITHM_H



//Faire une classe GeneticAlgorithm, templatisée par :

//un générateur
//un évaluateur
//un sélectionneur
//un opérateur de croisement
//un operateur de mutation
//un critère d’arrêt

//Cette classe aura une méthode run qui prendra en paramètre une taille de population,
//et retournera le résultat de l’algorithme génétique (cette méthode peut appeler la méthode generate créée dans la partie II1).