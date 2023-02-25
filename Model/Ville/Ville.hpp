//
// Created by Mikail Yilmaz on 12/02/2023.
//

#ifndef ESGI_GENETICALGORITHM_VILLE_H
#define ESGI_GENETICALGORITHM_VILLE_H

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

class Ville{
    public:
    Ville();
    Ville(string nom, int id, int latitude, int longitude);
    ~Ville();

    /***
     *
     * @return
     */
    string getNom();

    /***
     *
     * @return
     */
    int getId();

    /***
     *
     * @return
     */
    double getLatitude();

    /***
     *
     * @return
     */
    double getLongitude();

    /***
     *
     * @param a
     * @return
     */
    Ville getVille(Ville a);

    private:
    string nom;
    int id;
    int latitude;
    int longitude;

};

#endif //ESGI_GENETICALGORITHM_VILLE_H
