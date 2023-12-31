//////////////////////////////////////////////////////////////////////////////////
#ifndef _TRANSMISSION_H__
#define __TRANSMISSION_H__
//////////////////////////////////////////////////
#include <arduino.h>
#include <String.h>
#include "donneesMeteo.h"
//////////////////////////////////////////////////
#define NOMBRE_DE_DECIMALE 1
#define VITESSE_LIAISON_SERIE 9600

//////////////////////////////////////////////////
void initialiserLiaisonSerie(unsigned int vitesse);
void envoyerTrame(String debutTrame, float temperatureSimulee, String finTrame, int nombreDeDecimales=NOMBRE_DE_DECIMALE);
//////////////////////////////////////////////////////////////////////////////////
#endif
//////////////////////////////////////////////////////////////////////////////////