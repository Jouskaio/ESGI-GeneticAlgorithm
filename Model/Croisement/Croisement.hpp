#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "../"
#include "../Solution/Solution.hpp"
#include "../Ville/Ville.hpp"

using namespace std;

/***
 * Fonction de croisement de 2 solutions parent.
 * @param parent1
 * @param parent2
 * @return
 */
Solution* Croisement(Solution *parent1, Solution *parent2){
    Solution *enfant = new Solution();
    //int max = 0;
    /*
    //Récupération de la taille max
    if(parent1->getTaille() > parent2->getTaille()){
        max = parent1->getTaille();
    } else {
        max = parent2->getTaille();
    }
     */
    for(int i = 0; i < parent1->getTaille() ; i++){
        Ville ville1 = parent1->getVille(i);
        Ville ville2 = parent2->getVille(i);
        //on check que les 2 villes n'ont pas le même Id
        if(ville1.getId() != ville2.getId()){
            //On check que la première ville n'est pas présente dans l'enfant et que sa taille est inférieure à celui du parent
            if(!enfant->CheckVille(enfant,ville1) && enfant->getTaille() < parent1->getTaille()){
                enfant->addVille(ville1);
            }
            //On check que la seconde ville n'est pas présente dans l'enfant et que sa taille est inférieure à celui du parent
            if(!enfant->CheckVille(enfant,ville2) && enfant->getTaille() < parent2->getTaille()){
                enfant->addVille(ville2);
            }
        } else {
            //Si les 2 villes ont le même Id on ajoute uniquement qu'une ville
            if(!enfant->CheckVille(enfant,ville1) && enfant->getTaille() < parent1->getTaille()){
                enfant->addVille(ville1);
            }
        }
    }
    return enfant;
}