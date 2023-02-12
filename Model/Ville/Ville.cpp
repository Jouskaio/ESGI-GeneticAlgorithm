//
// Created by Mikail Yilmaz on 12/02/2023.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include "Ville.hpp"


using namespace std;

Ville::Ville(string nom, int id, int latitude, int longitude) {
    this->nom = nom;
    this->id = id;
    this->latitude= latitude;
    this->longitude= longitude
}

Ville::~Ville(){

}

string Ville::getNom() {
    return nom;
}

int Ville::getId() {
    return id;
}

int Ville::getLatitude() {
    return latitude;
}

int Ville::getLongitude() {
    return longitude;
}