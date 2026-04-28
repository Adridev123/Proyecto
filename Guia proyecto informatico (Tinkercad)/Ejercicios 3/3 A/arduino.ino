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
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(300);
  digitalWrite(red1, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(300);
  digitalWrite(red1, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(300);
  digitalWrite(red1, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(300);
  digitalWrite(red1, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(300);
  digitalWrite(red1, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(300);
  digitalWrite(red1, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(300);
  digitalWrite(red1, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(300);
  digitalWrite(red1, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(300);
}
