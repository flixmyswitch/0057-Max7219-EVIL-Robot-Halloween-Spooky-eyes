// Holloween Spooky & Robort Eyes
//
// Flixmyswitch 2022
//
// Part 7 in this series of videos about LED Max7219 matrix displays
//
// Using a Wemos D1 mini and 4 Max7219 matrix modules
//

#include <MD_Parola.h>
#include "animations.h"
#include "Robot_Eyes.h"

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW  // see video number one about this you have a choice of 4 hardware types to select
#define MAX_DEVICES 4                      // Change this number as required
#define CLK_PIN 14                         // SPI pins on the D1 mini
#define DATA_PIN 13
#define CS_PIN 15

MD_Parola P = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);  // see video 1 why we have called this "P"

uint16_t curString = 0;
int16_t SPEED = 50;
uint16_t AnomateSPEED = 10;
uint16_t PAUSE_TIME = 1000;

// Global variables
const char *msg[] = {
  "sprites",  // you could always leave this empty. This does not display in this code
};

void setup() {

  P.begin();              // start Parola instant
  P.displayClear();       // clear the display
  P.setIntensity(2);      // set the intensity 0 to 15
  P.setInvert(false);     // sets invert for all zones OK, we will cover zones in another video
  P.setFont(Robot_Eyes);  // set the font

  // set up the display text
  P.displayText(msg[curString], PA_CENTER, SPEED + 20, PAUSE_TIME, PA_SPRITE, PA_SPRITE);
  curString++;
  // without the P.displaytext..... line above we can't play with the timeing in the animation.h
  // file so much.  In that file I have used decimal numbers to change the times

  for (uint8_t i = 0; i < ARRAY_SIZE(animList); i++) {
    animList[i].speed *= P.getSpeed();
    animList[i].pause *= P.getPause();
  }
}
 
void loop() {

  static uint8_t i = 0;  // text effect index

  if (P.displayAnimate())  // animates and returns true when an animation is completed

  {
    if (i == ARRAY_SIZE(animList)) i = 0;  // reset loop index

    P.displayText(animList[i].pText, animList[i].align, animList[i].speed,
                  animList[i].pause, animList[i].effecIn, animList[i].effecOut);

    i++;  // then set up for next text effect
    P.displayReset();
  }
}