#include "Evaluateur.hpp"
#include "Solution.hpp"


//Return la distance entre les villes obtenu comme note
Evaluateur Evaluateur::getEvaluation(Solution a) {

}





/*
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