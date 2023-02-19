#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "../"
#include "../Solution/Solution.hpp"
#include "../Ville/Ville.hpp"


Solution* Croisement(Solution *parent1, Solution *parent2){
    Solution *enfant = new Solution();

    for(int i = 0; i < parent1->getTaille() ; i++){
        Ville ville1 = parent1->getVille(i);
        Ville ville2 = parent2->getVille(i);
        if(ville1.getId() != ville2.getId()){
            if(!enfant->CheckVille(enfant,ville1) && enfant->getTaille() < parent1->getTaille()){
                enfant->addVille(ville1);
            }
            if(!enfant->CheckVille(enfant,ville2) && enfant->getTaille() < parent2->getTaille()){
                enfant->addVille(ville2);
            }
        } else {
            if(!enfant->CheckVille(enfant,ville1) && enfant->getTaille() < parent1->getTaille()){
                enfant->addVille(ville1);
            }
        }
    }
}