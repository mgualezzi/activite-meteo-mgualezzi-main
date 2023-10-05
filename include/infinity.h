#ifndef __INFINITY_H__
#define __INFINITY_H__

#define VITESSE_SERIE   9600
#define APPUYE      true
#define RELACHE     false
#define ACTIVER     HIGH
#define DESACTIVER  LOW
#define ALLUMER     HIGH
#define ETEINDRE    LOW
#define ATTENDRE    2000        // durée en ms

// Entrées Analogiques et Numériques
#define BOUTON_SW1      27
#define BOUTON_SW2      33
#define BOUTON_SW3      32

#define TRIMMER_2       36
#define TRIMMER_1       39

// Sorties Analogiques et Numériques
#define LED_ROUGE       16
#define LED_VERTE       5
#define LED_ORANGE      17
#define RTC_SCK         25
#define RTC_DATA        26


// Liaison I2C et afficheur Oled
#define LARGEUR_PIXEL 10
#define SDA_PIN 21
#define SCL_PIN 22
#define OLED_ADRESS  0x3C
#define FONTS       ArialMT_Plain_16
#define LIGNE_1 0
#define LIGNE_2 1
#define LIGNE_3 2
#define LIGNE_4 3
#define OLED_WIDTH   128
#define OLED_HEIGHT  64
#define COLOR   1
//#define IMAGES


#define ADC_MIN         0
#define ADC_MAX        4095
#define VREF_ADC_MIN   0      //en millivolts
#define VREF_ADC_MAX   3300
/*
struct bouton {
        uint8_t broche;
        uint32_t nombreAppui;
        bool appui;
    };

class espInfinity {
   private:
   bool etatEntree ;
   bool etatMemorisee;
   uint8_t  valeurSwitch;

  
  public:
    espInfinity();          // constructeur
    ~espInfinity();         // destructeur
  
    static void init(void);
    static void appuiSW1(void);
    static void appuiSW2(void);
    static void appuiSW3(void);
    void dipswitch(void);

    void initBroche(int broche , int etat);
    bool lireEntree(uint8_t entree);
    uint16_t lireEntreeAnalogique(uint8_t entree);
    uint8_t lireSwitch(void);
    
   
    void commander(int sortie, bool etat);
    void commanderFeu(bool rouge , bool orange, bool vert);
    
    void initAfficheur(void);
    void effacerAfficheur(void);
    void afficher(int ligne, String texte);
    void afficherImage(const uint8_t *bitmap);
    bool actualiserAffichage(bool etatAcomparer);
};



*/


#endif