//////////////////////////////////////////////////////////////////////////////////
#include "transmission.h"
#include <arduino.h>
#include <String.h>
//////////////////////////////////////////////////////////////////////////////////
void initialiserLiaisonSerie(unsigned int vitesse)
{
  Serial.begin(VITESSE_LIAISON_SERIE);
}
//////////////////////////////////////////////////////////////////////////////////
void envoyerTrame(String debutTrame, float temperatureSimulee, String finTrame, int nombreDeDecimales)
{
  Serial.print(debutTrame);
  Serial.print(temperatureSimulee, nombreDeDecimales);
  Serial.print(finTrame);
}
//////////////////////////////////////////////////////////////////////////////////