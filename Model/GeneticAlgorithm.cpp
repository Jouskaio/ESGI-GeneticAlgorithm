
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
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



template<typename T>
    T generate(GenerateurAleatoire a, Evaluateur b, Selecteur c, Croisement d, Mutation e, CritereArret f, int population){
        //return de type T
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



