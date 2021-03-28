#include <FastLED.h> //If You don't have FastLED lidary, then Please download it.

#define NUM_LEDS  35  //define how much indiviual pixel LED u uesed
#define LED_PIN   6 //define the OUTPUT Data Pin of your arduino. Like I used here Pin 6, which is a PWM pin.

CRGB leds[NUM_LEDS];
uint8_t hue=0;

void setup() {
  FastLED.addLeds<SM16703, LED_PIN, BRG>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
}

void loop() {
    for(int i=0; i<NUM_LEDS; i++){
        leds[i]= CHSV (hue+(i*10),255,255);
    }
   
   
  FastLED.show();
}
