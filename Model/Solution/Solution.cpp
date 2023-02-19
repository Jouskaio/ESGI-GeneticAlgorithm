#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "Solution.hpp"
#include "../Ville/Ville.hpp"


using namespace std;


Solution::Solution() {
    taille = 0;
}

Solution::~Solution() {
    if(listeVille.size() > 0){
        for(auto Ville : listeVille){
            delete Ville;
        }
    }
}


vector<Ville*> Solution::ajoutVille(Ville *ville) {
    listeVille.push_back(ville);
    this->taille++;
}


Ville* Solution::getVille(const int &i) {
    return listeVille[i];
}

int Solution::getValeur() {
    return valeur;
}


void Solution::setValeur(const double &val) {
    this->valeur = val;
}

void Solution::addVille(Ville *ville){
    listeVille.push_back(*ville);
    taille++;
}

bool Solution::CheckVille(Solution *solution, Ville *ville){
    for(Ville villeliste : solution->getVille()){
        if(ville->getId() == villeliste.getId()){
            return true;
        }
    }
    return false;
}

