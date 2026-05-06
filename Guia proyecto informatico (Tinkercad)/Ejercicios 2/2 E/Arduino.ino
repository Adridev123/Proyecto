#define anaG A0
#define anaB A1
#define anaR A2
#define ping1 3
#define pinb1 5
#define pinr1 6
void setup()
{
  pinMode(ping1, OUTPUT);
  pinMode(pinb1, OUTPUT);
  pinMode(pinr1, OUTPUT);
}

void loop()
{
  
  int g = map(analogRead(anaG), 0, 1023, 0 ,255);
  int b = map(analogRead(anaB), 0, 1023, 0, 255);
  int r = map(analogRead(anaR), 0, 1023, 0, 255);
    
  analogWrite(ping1, g);
  analogWrite(pinb1, b);
  analogWrite(pinr1, r);

}