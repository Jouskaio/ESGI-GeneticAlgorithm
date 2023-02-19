#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "GenerateurAleatoire.hpp"
#include "../Solution/Solution.hpp"
#include "../Ville/Ville.hpp"


using namespace std;

//INUTILE SUREMENT
/***
 * A partir d'un vector de ville permet de remplir un autre vector de ville
 * @param villes
 * @return la nouvelle
 */

vector<Ville> Solution::FillCityList(vector<Ville> villes)
{
    std::vector<Ville> listeVille;
    for (auto ville : villes)
        listeVille.push_back(ville);
    return listeVille;
}

//A REVOIR
/***
 *
 * @param villes
 * @return
 */
vector<Solution*> Solution::generationPopulation(vector<Ville> villes){
    vector<Solution*> Population = vector<Solution*>();

    for(int i = 0; i <100 ; i++){ //Mettre une variable global pour définir la taille max
        vector<Ville> listeVille = FillCityList(villes);
        Solution *solution = new Solution();

        while (listeVille.size() > 0){
            int k = rand() % listeVille.size();
            solution->addVille(new Ville(listeVille[k]));
            listeVille.erase(listeVille.begin()+k);
        }
        Population.push_back(solution);
    }
    return Population;
}