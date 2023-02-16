#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "GenerateurAleatoire.hpp"
#include "../Solution/Solution.hpp"
#include "../Ville/Ville.hpp"


using namespace std;


//A mettre dans GenerateurAleatoire.cpp
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