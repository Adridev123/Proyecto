#define rojo 6
#define azul 5
#define verde 3

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  analogWrite(azul, 20);
  analogWrite(verde, 20);
  delay(1000);
  analogWrite(azul, 90);
  analogWrite(verde, 90);
  delay(1000);
  analogWrite(azul, 255);
  analogWrite(verde, 255);
  delay(2000);
  analogWrite(azul, 0);
  analogWrite(verde, 0);
  //milanesa
  analogWrite(rojo, 20);
  delay(1000);
  analogWrite(rojo, 90);
  delay(1000);
  analogWrite(rojo, 255);
  delay(2000);
  analogWrite(rojo, 0);
  //milanesa2
  analogWrite(rojo, 20);
  analogWrite(verde, 20);
  delay(1000);
  analogWrite(rojo, 90);
  analogWrite(verde, 90);
  delay(1000);
  analogWrite(rojo, 255);
  analogWrite(verde, 255);
  delay(2000);
  analogWrite(rojo, 0);
  analogWrite(verde, 0);
}