#define ana A0
#define pin 3

void setup()
{
  pinMode(pin, OUTPUT);
 
}

void loop()
{
  int val = analogRead(ana);
  int freq = map(val, 0, 1023, 0, 255);
  
  analogWrite(pin, freq);
  
  
 
  
}