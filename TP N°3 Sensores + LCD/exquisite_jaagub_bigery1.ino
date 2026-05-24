#define PIR A0
#define trig 11
#define echo 10
#define foto_receptor A2
#define tocar A3
#define red 6
#define green 5
#define blue 3
#define buzzer 9

void setup()
{
  pinMode(PIR, INPUT);
  pinMode(foto_receptor, INPUT);
  pinMode(tocar, INPUT);
  pinMode(echo, INPUT);
  
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(trig, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  float luz = analogRead(foto_receptor);
  float noche = map(luz, 1022, 713, 0, 100);
  if (noche <= 20)
  {
    float temperatura_1 = analogRead(tocar);
    float temperatura = map(temperatura_1, 20, 358, -40, 125);
    int movimiento = analogRead(PIR);
    if (temperatura >= 39 || movimiento == 1018)
    {
      Serial.println("Intruso");
      analogWrite(buzzer, 1000);
      digitalWrite(red, 255);
      delay(1000);
      analogWrite(buzzer, 0);
      digitalWrite(red, 0);
      delay(100);
    }
    analogWrite(buzzer, 0);
    digitalWrite(red, 0);
  }
  else
  {
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    long duracion = pulseIn(echo, HIGH);
    float distancia = duracion * 0.0001715;
    if (distancia < 1)
    {
      Serial.println("Se acercaron demasiado a la obra");
      digitalWrite(red, HIGH);
      analogWrite(buzzer, 1000);
      delay(1000);
      digitalWrite(red, LOW);
      analogWrite(buzzer, 0);
      delay(100);
    }
    
    float temperatura_1 = analogRead(tocar);
    float temperatura = map(temperatura_1, 20, 358, -40, 125);
    if (temperatura >= 39)
    {
      Serial.println("Se toco la obra");
      analogWrite(buzzer, 1000);
      digitalWrite(red, HIGH);
      delay(1000);
      analogWrite(buzzer, 0);
      digitalWrite(red, LOW);
      delay(100);
    }

    int movimiento = analogRead(PIR);
    if (movimiento == 1018)
    {
      Serial.println("se detecto movimiento cerca de la obra");
      digitalWrite(red, HIGH);
      digitalWrite(green, HIGH);
      analogWrite(buzzer, 1000);
      delay(1000);
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
      analogWrite(buzzer, 0);
    }
    Serial.print("Temperatura: ");
    Serial.println(temperatura);
    Serial.print("Movimiento: ");
    Serial.println(movimiento);
    Serial.print("Porcentaje de luz dia noche ");
    Serial.println(noche);
    Serial.print("Distancia: ");
    Serial.println(distancia);
  }
}