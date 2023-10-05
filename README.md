[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=12203220&assignment_repo_type=AssignmentRepo)
# Activité meteo

Objectifs: 	Afin de s’assurer d’une transmission correcte de données, il faut s’assurer d'envois respectant un protocole prédéfini. On simulera l’envoi de données météorologiques par des variables aléatoires bornées.

Cette activité est à réaliser avec **PlatformIO** pour une carte ESP32 avec le _framework_ **Arduino**.

Le fichier de projet `platformio.ini` :

```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
```
Le fichier `src/main.cpp` initial :

```cpp

#include <Arduino.h>

#include "transmission.h"
#include "donneesMeteo.h"

///////////////////////////////////////////////////////////////
void setup() {
   //TO DO
}
///////////////////////////////////////////////////////////////
void loop() {
  //TO DO
}
///////////////////////////////////////////////////////////////
```
