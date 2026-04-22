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
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(1, HIGH);
  delay(500);
  digitalWrite(0, HIGH);
  delay(500);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(13, LOW);
  delay(1000);
}