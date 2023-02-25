
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

using namespace std;

//seuil de qualité : si on obtient une solution suffisamment bonne, on arrête

//combinaison de critères ci-dessus.

bool CritereArretPlateau(vector<double> ListeVal){
    if(ListeVal.size() >= 10){
        vector <double> MyListe;
        //Ajout des 10 dernières valeurs pour check si présence d'un plateau
        for(int i = ListeVal.size(); i > ListeVal.size()-10; i-- ){
            MyListe.insert(MyListe.begin(),ListeVal[i]);
        }
        //Check si pour la première valeur, nous avons 9 valeurs identiques à 3% près
        for(int i =1; i<10;i++){
            if(!(MyListe[9] >= MyListe[i] - (MyListe[i] * 0.03) && MyListe[0] <= MyListe[i] + (MyListe[i] * 0.03))){
                return true;
            }
        }
    }
    return false;
}