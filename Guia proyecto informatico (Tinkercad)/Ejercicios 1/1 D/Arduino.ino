#define red 2
#define red1 4
#define buzzer 13

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(red1, HIGH);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red1, LOW);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red1, HIGH);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red1, LOW);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red1, HIGH);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red1, LOW);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red1, HIGH);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red1, LOW);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  digitalWrite(buzzer, LOW);
  delay(6000);
}
