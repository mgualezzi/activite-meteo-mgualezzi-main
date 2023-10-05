#include "donneesMeteo.h"
#include    <Arduino.h>

         // entête de la trame
                                        // static --> la portée de la variable se limite au fichier présent

static String entete = "SN-EC";
static String trameComplete;
static String degre ="°C";
static String separateur =";";
static String pourcentage ="%";


// TO DO simulerTemperature(//TO DO);       // Simuler des valeurs de températures
// TO DO simulerHygrometrie(//TO DO);       // Simuler des valeurs d'hygrométrie
// TO DO fabriquerTrame(//TO DO);           // Fabriquer le trame des données en envoyées

float simulerTemperature(float temperatureMinimale, float temperatureMaximale)
{
  float (temperatureSimulee) = float(random(temperatureMinimale * 10 , temperatureMaximale * 10))/10;
  return temperatureSimulee;
}

long simulerHygrometrie(long temperatureMinimale, long temperatureMaximale)
{
  long hygrometreSimulee = random(temperatureMinimale, temperatureMaximale);
  return hygrometreSimulee;
}

String fabriquerDebutTrame(int identificateurDeTrame)
{
  String debutTrame = entete + separateur + identificateurDeTrame + separateur;
  return debutTrame;
}


String fabriquerFinTrame(long hygrometreSimulee)
{
    String finTrame = separateur + degre + separateur + String(hygrometreSimulee) + separateur + pourcentage + "\r\n";
    return finTrame;
}





 /*String trame = fabriquerDeTrame(identificateurDeTrame); 
  Serial.print(trame);
 */