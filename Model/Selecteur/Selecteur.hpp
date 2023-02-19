#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "../Evaluateur/Evaluateur.hpp"
#include "../Solution/Solution.hpp"
#include "../Croisement/Croisement.hpp"
#include "../Ville/Ville.hpp"

using namespace std;

vector<Solution*> Selecteur(vector<Solution*> Population){
    vector <Solution*> NewGeneration;

    //Selection via les N meilleurs parents donc selection par élitisme
    vector <Solution*> BestParents = Evaluateur(Population);
    for(Solution* sol : BestParents){
        NewGeneration.push_back(sol);
    }

    while(NewGeneration.size() < 100 + Population.size()){//need to set up une variable glo pour la population size
        int k_parent1 = rand() % Population.size();
        int k_parent2 = rand() % Population.size();

        if(k_parent1 != k_parent2){
            NewGeneration.push_back(Croisement(Population[k_parent2],Population[k_parent2]));

            //implémentation d'une évolution MAYBE
        }
    }
}