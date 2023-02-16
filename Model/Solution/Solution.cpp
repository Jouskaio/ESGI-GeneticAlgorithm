#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "Solution.hpp"
#include "../Ville/Ville.hpp"


using namespace std;

/***
 *
 */
Solution::Solution() {
    taille = 0;
}

/***
 *
 */
Solution::~Solution() {
    if(listeVille.size() > 0){
        for(auto Ville : listeVille){
            delete Ville;
        }
    }
}

/***
 *
 * @param ville
 * @return
 */
vector<Ville*> Solution::ajoutVille(Ville *ville) {
    listeVille.push_back(ville);
    this->taille++;
}

/***
 *
 * @param i
 * @return
 */
Ville* Solution::getVille(const int &i) {
    return listeVille[i];
}

/***
 *
 * @return
 */
int Solution::getValeur() {
    return valeur;
}

/***
 *
 * @param val
 */
void Solution::setValeur(const double &val) {
    this->valeur = val;
}

void Solution::addVille(Ville *ville){
    listeVille.push_back(*ville);
    taille++;
}


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

