#define ana A0
#define pin 3

void setup()
{
  pinMode(pin, OUTPUT);
 
}

void loop()
{
  int val = analogRead(ana);
  int vel = map(val, 0, 1023, 0,10000);
  
  analogWrite(pin,255);
  delay(vel);
  analogWrite(pin,0);
  delay(vel);
 
  
}