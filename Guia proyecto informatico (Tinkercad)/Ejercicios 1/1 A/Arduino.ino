#define red 3
#define amarillo 2
#define verde 1
#define blanco 5
#define no 4
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  digitalWrite(blanco, HIGH);
  delay(60000);
  digitalWrite(amarillo, HIGH);
  digitalWrite(blanco, LOW);
  delay(3000);
  digitalWrite(amarillo, LOW);
  digitalWrite(red, LOW);
  digitalWrite(no, HIGH);
  digitalWrite(verde, HIGH);
  delay(60000);
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, HIGH);
  delay(3000);
  digitalWrite(amarillo, LOW);
  digitalWrite(no, LOW);
}
