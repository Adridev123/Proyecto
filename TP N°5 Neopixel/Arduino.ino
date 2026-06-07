#include <Adafruit_NeoPixel.h>

#define NEOPIN 2
#define NEOPIN1 3
#define NEOPIN2 4
#define CANT_PIXEL 12

Adafruit_NeoPixel Ring = Adafruit_NeoPixel( CANT_PIXEL , NEOPIN , NEO_RGB + NEO_KHZ800  );
Adafruit_NeoPixel Ring1 = Adafruit_NeoPixel( CANT_PIXEL , NEOPIN1 , NEO_RGB + NEO_KHZ800  );
Adafruit_NeoPixel Ring2 = Adafruit_NeoPixel( CANT_PIXEL , NEOPIN2 , NEO_RGB + NEO_KHZ800  );

void setup()
{
  pinMode(NEOPIN, OUTPUT);
  pinMode(NEOPIN1, OUTPUT);
  
  Ring.begin();
  Ring.clear();
  Ring.show();
  Ring1.begin();
  Ring1.clear();
  Ring1.show();
  Ring2.begin();
  Ring2.clear();
  Ring2.show();
 
  Serial.begin(9600);
  randomSeed( analogRead(A0) );
}

bool direccion = true;
int count = 0;

void loop()
{
  // GRB
  // ---1---
  Ring.setPixelColor(0, 0, 255, 0);
  Ring.show();
  delay(500);
  Ring.setPixelColor(0, 0, 0, 0);
  Ring.setPixelColor(1, 255, 0, 0);
  Ring.show();
  delay(500);
  Ring.setPixelColor(1, 0, 0, 0);
  Ring.setPixelColor(2, 0, 0, 255);
  Ring.show();
  delay(500);
  Ring.setPixelColor(2, 0, 0, 0);
  Ring.setPixelColor(3, 0, 255, 255);
  Ring.show();
  delay(500);
  Ring.setPixelColor(3, 0, 0, 0);
  Ring.setPixelColor(4, 255, 0, 255);
  Ring.show();
  delay(500);
  Ring.setPixelColor(4, 0, 0, 0);
  Ring.setPixelColor(5, 255, 255, 0);
  Ring.show();
  delay(500);
  Ring.setPixelColor(5, 0, 0, 0);
  Ring.setPixelColor(6, 255, 255, 255);
  Ring.show();
  delay(500);
  Ring.setPixelColor(6, 0, 0, 0);
  Ring.setPixelColor(7, 255, 100, 100);
  Ring.show();
  delay(500);
  Ring.setPixelColor(7, 0, 0, 0);
  Ring.setPixelColor(8, 100, 100, 255);
  Ring.show();
  delay(500);
  Ring.setPixelColor(8, 0, 0, 0);
  Ring.setPixelColor(9, 100, 255, 100);
  Ring.show();
  delay(500);
  Ring.setPixelColor(9, 0, 0, 0);
  Ring.setPixelColor(10, 100, 255, 255);
  Ring.show();
  delay(500);
  Ring.setPixelColor(10, 0, 0, 0);
  Ring.setPixelColor(11, 255, 100, 255);
  Ring.show();
  delay(500);
  Ring.setPixelColor(11, 0, 0, 0);
  // ---1---
  
  delay(1000);
  
  // ---2---
  while (count != -1)
  {
    Ring1.setPixelColor(count, 0, 255, 0);
    Ring1.show();
    delay(250);
    Ring1.setPixelColor(count, 0, 0, 0);
    Ring1.show();
    if (count == 11)
    {
      direccion = false;
    }
    if (direccion)
    {
      count++;
    }
    else
    {
      count--;
    }
  }
  count = 0;
  direccion = true;
  // ---2---
  
  delay(1000);
  
  // ---3---
  Ring2.setPixelColor(0 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.setPixelColor(2 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.setPixelColor(4 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.setPixelColor(6 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.setPixelColor(8 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.setPixelColor(10 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.show();
  delay(500);
  Ring2.setPixelColor(0, 0, 0, 0);
  Ring2.setPixelColor(2, 0, 0, 0);
  Ring2.setPixelColor(4, 0, 0, 0);
  Ring2.setPixelColor(6, 0, 0, 0);
  Ring2.setPixelColor(8, 0, 0, 0);
  Ring2.setPixelColor(10, 0, 0, 0);
  Ring2.show();
  Ring2.setPixelColor(1 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.setPixelColor(3 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.setPixelColor(5 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.setPixelColor(7 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.setPixelColor(9 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.setPixelColor(11 ,random(0,255+1),random(0,255+1),random(0,255+1));
  Ring2.show();
  delay(500);
  Ring2.setPixelColor(1, 0, 0, 0);
  Ring2.setPixelColor(3, 0, 0, 0);
  Ring2.setPixelColor(5, 0, 0, 0);
  Ring2.setPixelColor(7, 0, 0, 0);
  Ring2.setPixelColor(9, 0, 0, 0);
  Ring2.setPixelColor(11, 0, 0, 0);
  Ring2.show();
  // ---3---
}