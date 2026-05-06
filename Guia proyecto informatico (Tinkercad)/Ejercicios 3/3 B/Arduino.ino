
int rojo = 3;
int verde = 5;
int azul = 6;

int boton = 7;
int potenciometro = A0;

bool prendido = false;
bool ultimoBoton = LOW;

int vPot = 0;
int vColor = 0;

int r = 0;
int g = 0;
int b = 0;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);

  pinMode(boton, INPUT);
  pinMode(potenciometro, INPUT);
}

void loop()
{
  bool botonA = digitalRead(boton);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    prendido = !prendido;
    delay(50);
  }

  ultimoBoton = botonA;

  if (prendido == true)
  {
    vPot = analogRead(potenciometro);
    vColor = map(vPot, 0, 1023, 0, 767);

    if (vColor >= 0 && vColor <= 255)
    {
      r = 255 - vColor;
      g = vColor;
      b = 0;
    }

    if (vColor >= 256 && vColor <= 511)
    {
      r = 0;
      g = 511 - vColor;
      b = vColor - 256;
    }

    if (vColor >= 512 && vColor <= 767)
    {
      r = vColor - 512;
      g = 0;
      b = 767 - vColor;
    }

    analogWrite(rojo, r);
    analogWrite(verde, g);
    analogWrite(azul, b);
  }
  else
  {
    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 0);
  }
}