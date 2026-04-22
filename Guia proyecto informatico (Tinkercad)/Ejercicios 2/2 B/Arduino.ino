#define uno 0
#define dos 1
#define tres 2
#define cuatro 3
#define cinco 5
#define seis 6
#define siete 9
#define ocho 10
#define nueve 11
#define diez 12
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(diez, LOW);
  analogWrite(11, 10);
  analogWrite(10, 30);
  analogWrite(9, 50);
  analogWrite(6, 70);
  analogWrite(5, 90);
  analogWrite(3, 120);
  analogWrite(1, 150);
  analogWrite(0, 180);
  digitalWrite(tres, HIGH);
}