#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cstdio>
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


Ville* Solution::getVille(int i) {
    return listeVille[i];
}


double Solution::getValeur() {
    return valeur;
}


void Solution::setValeur(double val) {
    this->valeur = val;
}

void Solution::ajoutVille(Ville *ville) {
    listeVille.push_back(ville);
    this->taille++;
}

void Solution::addVille(Ville *ville){
    listeVille.push_back(ville);
    taille++;
}

bool Solution::CheckVille(Solution *solution, Ville *ville){
    for(int i = 0 ; i< solution->getTaille() ; i++){
        if(ville->getId() == solution->getVille(i)->getId()){
            return true;
        }
    }
    return false;
}

