/*            Programme de transmssion en liaison série
Date    : 05/10/2023
Auteur  : Matteo GUALEZZI
Rev.    : 1.0  
*/

#include <Arduino.h>
#include "transmission.h"
#include "donneesMeteo.h"

int identificateurDeTrame = 0;

void setup() 
{
Serial.begin(VITESSE_LIAISON_SERIE);
}


void loop() 
{
  float temperature = simulerTemperature(VALEUR_MIN_TEMPERATURE, VALEUR_MAX_TEMPERATURE);
  long hygrometrie = simulerHygrometrie(VALEUR_MIN_HYGROMETRE, VALEUR_MAX_HYGROMETRE);
  String debutTrame = fabriquerDebutTrame(identificateurDeTrame);
  String finTrame = fabriquerFinTrame(hygrometrie);
  envoyerTrame(debutTrame, temperature, finTrame);
  identificateurDeTrame++;
  delay(DELAIS);
}
///////////////////////////////////////////////////////////////             SN-EC;21;29,5;°C;50;%\r\n
