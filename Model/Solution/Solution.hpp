#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cstdio>
#include <vector>
#include "../Ville/Ville.hpp"

using namespace std;

class Solution{
    public:
    Solution();
    ~Solution();

    /***
     *
     * @return
     */
    vector<Ville*> getlisteVille();

    /***
     *
     * @param ville
     */
    void ajoutVille(Ville *ville);

    /***
     *
     * @param i
     * @return
     */
    Ville* getVille(int i);

    /***
     *
     * @return
     */
    int getTaille();

    /***
     *
     * @return
     */
    double getValeur();

    /***
     *
     * @param val
     */
    void setValeur(double val);

    /***
     *
     * @param villes
     * @return
     */
    vector<Solution*> CreationPopulation(vector<Ville> villes);

    /***
     *
     * @param ville
     */
    void addVille(Ville ville);

    /***
     *
     * @param solution
     * @param ville
     * @return
     */
    bool CheckVille(Solution *solution, Ville *ville);

    private:
    vector<Ville*> listeVille;
    int taille;
    double valeur;
};