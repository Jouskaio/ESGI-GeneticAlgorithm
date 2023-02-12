//
// Created by Mikail Yilmaz on 12/02/2023.
//

#ifndef ESGI_GENETICALGORITHM_VILLE_H
#define ESGI_GENETICALGORITHM_VILLE_H

#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

class Ville{
    public:
    Ville();
    Ville(string nom, int id, int latitude, int longitude);
    ~Ville();

    string getNom();
    int getId();
    int getLatitude();
    int getLongitude();

    private:
    string nom;
    int id;
    int latitude;
    int longitude;

};

#endif //ESGI_GENETICALGORITHM_VILLE_H
