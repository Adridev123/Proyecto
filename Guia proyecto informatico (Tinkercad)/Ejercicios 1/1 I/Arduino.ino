int cont = 0;
bool pausado = false;
bool ultimoBoton = LOW;

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  pinMode(11, INPUT);
}

void loop()
{
  bool botonA = digitalRead(11);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    pausado = !pausado;
    delay(50);
  }

  ultimoBoton = botonA;

  if (cont >= 1)
  {
    digitalWrite(0, HIGH);
  }
  else
  {
    digitalWrite(0, LOW);
  }

  if (cont >= 2)
  {
    digitalWrite(1, HIGH);
  }
  else
  {
    digitalWrite(1, LOW);
  }

  if (cont >= 3)
  {
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }

  if (cont >= 4)
  {
    digitalWrite(3, HIGH);
  }
  else
  {
    digitalWrite(3, LOW);
  }

  if (cont >= 5)
  {
    digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(4, LOW);
  }

  if (cont >= 6)
  {
    digitalWrite(5, HIGH);
  }
  else
  {
    digitalWrite(5, LOW);
  }

  if (cont >= 7)
  {
    digitalWrite(6, HIGH);
  }
  else
  {
    digitalWrite(6, LOW);
  }

  if (cont >= 8)
  {
    digitalWrite(7, HIGH);
  }
  else
  {
    digitalWrite(7, LOW);
  }

  if (cont >= 9)
  {
    digitalWrite(8, HIGH);
  }
  else
  {
    digitalWrite(8, LOW);
  }

  if (cont >= 10)
  {
    digitalWrite(9, HIGH);
  }
  else
  {
    digitalWrite(9, LOW);
  }

  if (pausado == false)
  {
    delay(300);
    cont = cont + 1;

    if (cont > 10)
    {
      cont = 0;
    }
  }
}