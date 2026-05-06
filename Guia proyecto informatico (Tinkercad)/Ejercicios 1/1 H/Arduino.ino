#define g 1
#define b 2
#define r 3

int cont = 0;
bool ultimoBoton = LOW;

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  bool botonA = digitalRead(4);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    cont = (cont % 7) + 1;
    delay(50);
  }

  ultimoBoton = botonA;

  if (cont == 1)
  {
    digitalWrite(b, LOW);
    digitalWrite(g, LOW);
    digitalWrite(r, HIGH);
  }

  if (cont == 2)
  {
    digitalWrite(r, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(b, HIGH);
  }

  if (cont == 3)
  {
    digitalWrite(r, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(b, LOW);
  }

  if (cont == 4)
  {
    digitalWrite(r, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(b, HIGH);
  }

  if (cont == 5)
  {
    digitalWrite(r, LOW);
    digitalWrite(g, LOW);
    digitalWrite(b, HIGH);
  }

  if (cont == 6)
  {
    digitalWrite(r, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(b, HIGH);
  }

  if (cont == 7)
  {
    digitalWrite(r, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(b, LOW);
  }
}