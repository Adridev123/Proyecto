#include <Adafruit_NeoPixel.h>

#define CANT_PIXEL 6
#define boton1 2
#define NEOPIN 3
#define luz1 A0

Adafruit_NeoPixel Flex = Adafruit_NeoPixel( CANT_PIXEL , NEOPIN , NEO_RGB + NEO_KHZ800  );

bool estadoBoton = false;
bool ultimo = false;

void setup()
{
  pinMode(boton1, INPUT);
  pinMode(luz1, INPUT);
  
  pinMode(NEOPIN, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  bool boton = digitalRead(2);
  if (boton == HIGH && ultimo == LOW)
  {
    estadoBoton = !estadoBoton;
    delay(50);
  }
  ultimo = boton;
    
  if(estadoBoton)
  {
  	float luz = analogRead(luz1);
    int nivel = map(luz, 1, 310, 0, 100);
    Serial.print("Sensor: ");
    Serial.print(luz);
    Serial.print(" porcentaje: ");
    Serial.print(nivel);
    if (nivel == 0)
    {
   	  Flex.setPixelColor(0, 255, 0, 0); //G, R, B
      Flex.setPixelColor(1, 255, 0, 0);
      Flex.setPixelColor(2, 255, 255, 0);
      Flex.setPixelColor(3, 255, 255, 0);
      Flex.setPixelColor(4, 0, 255, 0);
      Flex.setPixelColor(5, 0, 255, 0);
  	  Flex.show();
      Serial.print(" Num led: 1 ");
      Serial.println("Color: Verde");
    }
    if (nivel >= 20 && nivel < 40)
    {
   	  Flex.setPixelColor(0, 255, 0, 0);
      Flex.setPixelColor(1, 255, 0, 0);
      Flex.setPixelColor(2, 255, 255, 0);
      Flex.setPixelColor(3, 255, 255, 0);
      Flex.setPixelColor(4, 0, 255, 0);
      Flex.setPixelColor(5, 0, 255, 0);
  	  Flex.show();
      Serial.print(" Num led: 2 ");
      Serial.println("Color: Verde");
    }
    if (nivel >= 40 && nivel < 60)
    {
   	  Flex.setPixelColor(0, 255, 0, 0);
      Flex.setPixelColor(1, 255, 0, 0);
      Flex.setPixelColor(2, 255, 255, 0);
      Flex.setPixelColor(3, 255, 255, 0);
      Flex.setPixelColor(4, 0, 255, 0);
      Flex.setPixelColor(5, 0, 255, 0);
  	  Flex.show();
      Serial.print(" Num led: 3 ");
      Serial.println("Color: Verde");
    }
    if (nivel >= 60 && nivel < 80)
    {
   	  Flex.setPixelColor(0, 255, 0, 0);
      Flex.setPixelColor(1, 255, 0, 0);
      Flex.setPixelColor(2, 255, 255, 0);
      Flex.setPixelColor(3, 255, 255, 0);
      Flex.setPixelColor(4, 0, 255, 0);
      Flex.setPixelColor(5, 0, 255, 0);
  	  Flex.show();
      Serial.print(" Num led: 4 ");
      Serial.println("Color: Verde");
    }
      if (nivel >= 80 && nivel < 100)
    {
   	  Flex.setPixelColor(0, 255, 0, 0);
      Flex.setPixelColor(1, 255, 0, 0);
      Flex.setPixelColor(2, 255, 255, 0);
      Flex.setPixelColor(3, 255, 255, 0);
      Flex.setPixelColor(4, 0, 255, 0);
      Flex.setPixelColor(5, 0, 255, 0);
  	  Flex.show();
      Serial.print(" Num led: 5 ");
      Serial.println("Color: Verde");
    }
    if (nivel == 100)
    {
   	  Flex.setPixelColor(0, 255, 0, 0);
      Flex.setPixelColor(1, 255, 0, 0);
      Flex.setPixelColor(2, 255, 255, 0);
      Flex.setPixelColor(3, 255, 255, 0);
      Flex.setPixelColor(4, 0, 255, 0);
      Flex.setPixelColor(5, 0, 255, 0);
  	  Flex.show();
      Serial.print(" Num led: 6 ");
      Serial.println("Color: Rojo");
    }
  }
  else
  {
  	Serial.println("Sistema apagado");
  }
}