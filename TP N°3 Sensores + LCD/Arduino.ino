#define PIR A0
#define foto_receptor A2
#define tocar A3
#define red 6
#define green 5
#define blue 3
#define buzzer 9
#define trig 13

void setup()
{
  pinMode(PIR, INPUT);
  pinMode(foto_receptor, INPUT);
  pinMode(tocar, INPUT);
  
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
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
      delay(500);
      analogWrite(buzzer, 0);
      digitalWrite(red, 0);
      delay(100);
    }
    analogWrite(buzzer, 0);
    digitalWrite(red, 0);
  }
  
  
  float temperatura_1 = analogRead(tocar);
  float temperatura = map(temperatura_1, 20, 358, -40, 125);
  if (temperatura >= 39 && noche > 20)
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
  if (movimiento == 1018 && noche > 20)
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
}