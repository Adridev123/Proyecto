#define ana A3
#define ping1 3
#define pinb1 5
#define pinr1 6
#define ping2 9
#define pinb2 10
#define pinr2 11
void setup()
{
  pinMode(ping1, OUTPUT);
  pinMode(pinb1, OUTPUT);
  pinMode(pinr1, OUTPUT);
  pinMode(ping2, OUTPUT);
  pinMode(pinb2, OUTPUT);
  pinMode(pinr2, OUTPUT);
}

void loop()
{
  int val = analogRead(ana);
  int vel = map(val, 0, 1023, 50 ,1000);
  
  analogWrite(pinb1, 255);
  analogWrite(pinr1, 255);
  analogWrite(pinb2, 255);
  analogWrite(pinr2, 255);
  delay(vel);
  analogWrite(pinb1, 0);
  analogWrite(pinr1, 0);
  analogWrite(pinb2, 0);
  analogWrite(pinr2, 0);
  delay(vel);
 
  
}