//La note va être la distance total entre les points.
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <random>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include "Solution.hpp"
#include "../Solution/Solution.hpp"
#include "../Ville/Ville.hpp"


using namespace std;
#include "Solution.hpp"

class Evaluateur {
    int note;

    public:
    Evaluateur();

    Evaluateur getEvaluation(Solution a);
};