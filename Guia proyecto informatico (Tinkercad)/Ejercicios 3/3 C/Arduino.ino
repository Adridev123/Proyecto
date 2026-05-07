#define POT A0
#define BOTON 0

int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};

const int cantidadLeds = 8;

bool ejecutando = false;
bool ultimoEstadoBoton = LOW;

void setup()
{
  for (int i = 0; i < cantidadLeds; i++)
  {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }

  pinMode(BOTON, INPUT);
}

void loop()
{
  int valorPot = analogRead(POT);

  int velocidad = map(valorPot, 0, 1023, 50, 1000);

  bool estadoBoton = digitalRead(BOTON);

  if (estadoBoton == HIGH && ultimoEstadoBoton == LOW)
  {
    ejecutando = !ejecutando;
    delay(200);
  }

  ultimoEstadoBoton = estadoBoton;

  if (ejecutando)
  {
    for (int i = 0; i < cantidadLeds; i++)
    {
      digitalWrite(leds[i], HIGH);
      delay(velocidad);
    }

    for (int i = 0; i < cantidadLeds; i++)
    {
      digitalWrite(leds[i], LOW);
      delay(velocidad);
    }
  }
}