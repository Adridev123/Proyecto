#define LED_R 6
#define LED_G 5
#define LED_B 3
#define buzzer 10

bool ultimo = LOW;
bool estadoBoton = false;

void setup()
{
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A0, INPUT);

  pinMode(13, INPUT);
  
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(10, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int boton1 = digitalRead(13);
  if (boton1 == HIGH && ultimo == LOW)
  {
    estadoBoton = !estadoBoton;
    delay(50);
  }

  ultimo = boton1;

  if (estadoBoton)
  {
    int r = analogRead(A3);
    int g = analogRead(A4);
    int b = analogRead(A5);
    int V = analogRead(A0);

    int red = map(r, 0, 1023, 0, 255);
    int green = map(g, 0, 1023, 0, 255);
    int blue = map(b, 0, 1023, 0, 255);

    int tiempo = map(V, 0, 1023, 0, 3000);
    
    Serial.print("Tiempo: ");
    Serial.println(tiempo);

    Serial.print("r: ");
    Serial.println(red);

    Serial.print("g: ");
    Serial.println(green);

    Serial.print("b: ");
    Serial.println(blue);

    analogWrite(LED_R, red);
    analogWrite(LED_G, green);
    analogWrite(LED_B, blue);
	digitalWrite(buzzer, HIGH);
    
    delay(tiempo);

    analogWrite(LED_R, 0);
    analogWrite(LED_G, 0);
    analogWrite(LED_B, 0);
    digitalWrite(buzzer, LOW);

    delay(tiempo);
  }
  else
  {
    analogWrite(LED_R, 0);
    analogWrite(LED_G, 0);
    analogWrite(LED_B, 0);
  }
}