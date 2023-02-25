#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "GenerateurAleatoire.hpp"
#include "../Solution/Solution.hpp"
#include "../Ville/Ville.hpp"

using namespace std;

/***
 * Permet de générer une population à partir d'une liste de ville
 * Une population est un ensemble de solution et une solution est un ensemble de ville
 * @param villes : La liste de ville choisis arbitrairement
 * @return Population : Une liste de solution
 */
vector<Solution*> generationPopulation(vector<Ville> villes){
    vector<Solution*> Population = new Solution();
    //Décision arbitraire de la taille max d'une population de 100 solutions
    for(int i = 0; i <100 ; i++){
        //Création d'une nouvelle liste avec les villes
        vector<Ville> listeVille;
        for (Ville ville : villes){
            listeVille.push_back(ville);
        }
        Solution *solution = new Solution();

        while (listeVille.size() > 0){
            int k = rand() % listeVille.size();
            solution->addVille(listeVille[k]);
            listeVille.erase(listeVille.begin()+k);
        }
        Population.push_back(solution);
    }
    return Population;
}