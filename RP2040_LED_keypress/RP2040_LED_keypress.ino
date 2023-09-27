#include "Keyboard.h"
#include <Adafruit_NeoPixel.h>

int Power = 11;
int PIN  = 12;
#define NUMPIXELS 1

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(9600);
  pixels.begin();
  pinMode(Power,OUTPUT);
  //digitalWrite(Power, HIGH);
  pixels.clear();

}

void loop() {
  if (Serial.available()) 
  {
    switch (Serial.read())
    {
      case 'r': Serial.println(F("Show red color")); 
      digitalWrite(Power, HIGH);
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(250, 0, 0));
      delay(50);
      pixels.show();
      delay(1000);
      digitalWrite(Power, LOW);
      break;

      case 'g': Serial.println(F("Show green color")); 
      digitalWrite(Power, HIGH);
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(0, 250, 0));
      delay(50);
      pixels.show();
      delay(1000);
      digitalWrite(Power, LOW);
      break;


      case 'b': Serial.println(F("Show blue color")); 
      digitalWrite(Power, HIGH);
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(0, 0, 250));
      delay(50);
      pixels.show();
      delay(1000);
      digitalWrite(Power, LOW);
      break;


      case 'w': Serial.println(F("Show white color")); 
      digitalWrite(Power, HIGH);
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(250, 250, 250));
      delay(50);
      pixels.show();
      delay(1000);
      digitalWrite(Power, LOW);
      break;


      case 'y': Serial.println(F("Show yellow color")); 
      digitalWrite(Power, HIGH);
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(250, 250, 0));
      delay(50);
      pixels.show();
      delay(1000);
      digitalWrite(Power, LOW);
      break;


      case 'q': Serial.println(F("Show colors in a queue")); 
      digitalWrite(Power, HIGH);

      //red
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(250, 0, 0));
      delay(50);
      pixels.show();
      delay(1000);

      //orange
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(250, 90, 0));
      delay(50);
      pixels.show();
      delay(1000);

      //yellow
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(250, 250, 0));
      delay(50);
      pixels.show();
      delay(1000);

      //green
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(0, 250, 0));
      delay(50);
      pixels.show();
      delay(1000);

      //cyan
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(0, 250, 250));
      delay(50);
      pixels.show();
      delay(1000);

      //blue
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(0, 0, 250));
      delay(50);
      pixels.show();
      delay(1000);

      //purple
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(250, 0, 250));
      delay(50);
      pixels.show();
      delay(1000);

      digitalWrite(Power, LOW);
      break;
    }


  }


}
