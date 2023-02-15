#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "../Ville/Ville.hpp"


using namespace std;

class Solution{
    public:
    Solution();
    ~Solution();

    vector<Ville*> getlisteVille();
    void ajoutVille(Ville *ville);
    Ville* getVille(const int &i);

    int getTaille();

    double getValeur();
    void setValeur(const double &val);

    vector<Solution*> CreationPopulation(vector<Ville> villes)

    private:
    vector<Ville*> listeVille;
    int taille;
    double valeur;
};