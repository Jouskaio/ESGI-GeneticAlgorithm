#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include "Solution.hpp"

using namespace std;





Solution::Solution() {
  x = 0;
  y = 0;
}

int Solution::calculate() {
  // Implement your solution here
  return x + y;
}

//faire une fonction template generate(générateur, évaluateur, séléectionneur, opérateur de croisement , opérateur de croisement, opérateur de mutation , critère d'arrêt , taille de population)
// Return type T