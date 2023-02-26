
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <cstdio>
#include <random>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>

#include "CritereArret/CritereArret.hpp"
#include "Croisement/Croisement.hpp"
#include "Evaluateur/Evaluateur.hpp"
#include "Generateur/GenerateurAleatoire.hpp"
#include "Mutation/Mutation.hpp"
#include "Selecteur/Selecteur.hpp"
#include "Solution/Solution.hpp"
#include "Ville/Ville.hpp"

using namespace std;

#define POPULATION_MAX 20

//template<typename T>
void algorun(vector<Ville> Villes,int taillePopulation){
    vector<double> liste_val;
    double BestVal = 100000000000000000000000000000000000000.00;

    //Génération de notre population
    vector<Solution*> Population = generationPopulation(Villes,taillePopulation);

    //Ajout de note à chaque solution de notre population
    Evaluateur(Population);

    //Algorithme de run
    //Premier critère d'arrêt : 20 itérations max
    for(int i = 0; i < POPULATION_MAX ;i++){
        if(CritereArretPlateau(liste_val)){

        }
        //Sélection de notre nouvelle population en fonction de leurs notes
        vector<Solution*> PopulationElu = Selecteur(Population);
        if(PopulationElu.size() < 2){
            printf("Il n'y a que deux villes dans la solution, la population est trop petite.\n");
            return;
        }

        printf("Generation : %i \n",i+1);
        printf("Meilleure distance de notre population actuelle : %f", getMeilleureSolution(PopulationElu));
        printf("Taille actuelle de la génération : %i", PopulationElu.size());
        //liste_val.push_back(getMeilleureSolution(PopulationElu));
        if(getMeilleureSolution(PopulationElu) < BestVal){
            BestVal = getMeilleureSolution(PopulationElu);
        }
        //Nouvelle génération
        Population = Evolution(PopulationElu);
    }
    printf("Meilleure distance toute generation confondue : %f \n", BestVal);

}


int main(){
    vector<Ville> Villes;

    Ville Paris("Paris", 1, 48.854885, -2.338646);
    Ville Lille("Lille", 2, 50.608719, -3.063295);
    Ville Marseille("Marseille", 3, 43.293551, -5.377397);
    Ville Lyon("Lyon", 4, 45.759132, -4.834604);
    Ville Angouleme("Angouleme",5,45.650002,0.160000);
    Ville Venisseiux("Vénissieux",6,45.699594,4.8844649);
    Ville Creteil("Creteil",7,48.79110,2.462800);
    Ville Grigny("Grigny",8,48.654998,2.392189);
    Ville Evry("Evry",9,48.633333,2.450000);
    Ville Sevran("Sevran",10,48.93897,2.538716);
    Ville Corbeil("Corbeil-Essonne",11,48.492303,2.359044);
    Ville SaintDenis("Saint-Denis",12,48.936181,2.357443);
    Ville Aulnay("Aulnay-sous-Bois",13,48.9412151,2.4970711);
    Ville Aubervilliers("Aubervilliers",14,48.912259,2.384049);
    Ville Sarcelles("Sarcelles",15,48.997347,2.378493);
    Ville Garges("Garges-lès-Gonesse",16,48.97178,2.400724);
    Ville Cergy("Cergy",17,49.035617,2.060325);
    Ville Courneuve("La Courneuve",18,48.9320252,2.3990819);
    Ville Nanterre("Nanterre",19,48.892423,2.215331);
    Ville Evreux("Évreux",20,49.0270129,1.151361);


    Villes.push_back(Paris);
    Villes.push_back(Lille);
    Villes.push_back(Marseille);
    Villes.push_back(Lyon);
    Villes.push_back(Angouleme);
    Villes.push_back(Venisseiux);
    Villes.push_back(Creteil);
    Villes.push_back(Grigny);
    Villes.push_back(Evry);
    Villes.push_back(Sevran);
    Villes.push_back(Corbeil);
    Villes.push_back(SaintDenis);
    Villes.push_back(Aulnay);
    Villes.push_back(Aubervilliers);
    Villes.push_back(Sarcelles);
    Villes.push_back(Garges);
    Villes.push_back(Cergy);
    Villes.push_back(Courneuve);
    Villes.push_back(Nanterre);
    Villes.push_back(Evreux);

    algorun(Villes,20);
    return 0;

}
//Faire une classe GeneticAlgorithm, templatisée par :

//un générateur
//un évaluateur
//un sélectionneur
//un opérateur de croisement
//un operateur de mutation
//un critère d’arrêt

//Cette classe aura une méthode run qui prendra en paramètre une taille de population,
//et retournera le résultat de l’algorithme génétique (cette méthode peut appeler la méthode generate créée dans la partie II1).



