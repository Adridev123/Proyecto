int cont = 0;
bool a = false;
bool b = false;
bool c = false;
bool ultimoBoton = LOW;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  digitalWrite(7, HIGH);
}

void loop()
{
  bool botonA = digitalRead(6);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    cont = (cont + 1) % 3;
    delay(50);
  }

  ultimoBoton = botonA;

  a = (cont == 0);
  b = (cont == 1);
  c = (cont == 2);

  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  if (a == true)
  {
  	digitalWrite(3, HIGH);
  }
  else if (b == true)
  {
  	digitalWrite(4, HIGH);
  } 
  else if   (c == true) 
  {
  digitalWrite(5, HIGH);
  }
}