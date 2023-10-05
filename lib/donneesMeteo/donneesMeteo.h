#ifndef _DONNEESMETEO_H_
#define _DONNEESMETEO_H_

#include    <Arduino.h>

#define NOMBRE_DE_DECIMALE 1
#define DELAIS 1000
#define VALEUR_MIN_TEMPERATURE 0
#define VALEUR_MAX_TEMPERATURE 50
#define VALEUR_MIN_HYGROMETRE 0
#define VALEUR_MAX_HYGROMETRE 100


String fabriquerDebutTrame(int identificateurDeTrame);
String fabriquerFinTrame(long hygrometreSimulee);

float simulerTemperature(float temperatureMinimale, float temperatureMaximale);
long simulerHygrometrie(long temperatureMinimale, long temperatureMaximale);





// TO DO

// TO DO simulerTemperature(//TO DO);
// TO DO simulerHygrometrie(//TO DO);
// TO DO fabriquerTrame(//TO DO);




#endif