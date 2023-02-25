#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include <random>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "../Solution/Solution.hpp"
#include "../Ville/Ville.hpp"

using namespace std;
const double PI = 3.14159265358979323846;
const double EARTH_RADIUS = 6371.0; // en km

/***
 *
 * @param degree
 * @return
 */
double toRadians(double degree) {
    return degree * PI / 180.0;
}

/***
 * Permet de calculer la distance en KM entre deux villes via leurs coordonnées GPS
 * @param ville1
 * @param ville2
 * @return la distance des deux villes en KM
 */
double calculateDistance(Ville *ville1 , Ville ville2) {
    double lat1 = ville1->getLatitude();
    double lon1 = ville1->getLongitude();
    double lat2 = ville2->getLatitude();
    double lon2 = ville2->getLongitude();

    double dLat = toRadians(lat2 - lat1);
    double dLon = toRadians(lon2 - lon1);

    double a = sin(dLat / 2) * sin(dLat / 2) + cos(toRadians(lat1)) * cos(toRadians(lat2)) * sin(dLon / 2) * sin(dLon / 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return EARTH_RADIUS * c;
}

/***
 * Permet de calculer et set la valeur total de toute les villes parmis une solution
 * @param solution
 */
void SolutionDistanceTotalCalcule(Solution *solution){
    double distance = 0;

    for(int i = 0; solution->getTaille() -1 ; i++){
        distance += calculateDistance(solution->getVille(i), solution->getVille(i+1));
    }
    solution->setValeur(distance);
}

/***
 * Fait le tri parmis les meilleures solutions et renvoie la meilleure
 * @param groupeSolution
 * @return
 */
double getMeilleureSolution(vector<Solution*> Solution){
    //Première valeur de notre groupe de solution
    double bestValue = Solution.front()->getValeur();
    //Recherche de la meilleure valeur parmis toute les solutions
    for(Solution* solution : Solution){
        if(solution->getValeur() < bestValue){
            bestValue = solution->getValeur();
        }
    }
    return bestValue;
}

/***
 * Fonction d'évaluation de chaque solution dans une population
 * @param Population
 * @return
 */
void Evaluateur(vector<Solution*> Population){
    //Calcul de chaque solution qui constitue la population
    for(auto solution : Population){
        SolutionDistanceTotalCalcule(solution);
    }
}


/*
double calculateDistance(double lat1, double lon1, double lat2, double lon2) {
    double dLat = toRadians(lat2 - lat1);
    double dLon = toRadians(lon2 - lon1);

    double a = sin(dLat / 2) * sin(dLat / 2) + cos(toRadians(lat1)) * cos(toRadians(lat2)) * sin(dLon / 2) * sin(dLon / 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return EARTH_RADIUS * c;
}

 *
 * Calculate distance (in km) between two points specified by latitude/longitude with Haversine formula
LatLong.distHaversine = function(p1, p2) {
    var R = 6371; // earth's mean radius in km
    var dLat  = p2.lat - p1.lat;
    var dLong = p2.lon - p1.lon;

    var a = Math.sin(dLat/2) * Math.sin(dLat/2) +
            Math.cos(p1.lat) * Math.cos(p2.lat) * Math.sin(dLong/2) * Math.sin(dLong/2);
    var c = 2 * Math.atan2(Math.sqrt(a), Math.sqrt(1-a));
    var d = R * c;

    return d;
}
 */