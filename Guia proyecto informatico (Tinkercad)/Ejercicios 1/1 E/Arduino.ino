#define red 3
#define green 2
#define blue 1
#define red1 6
#define green1 5
#define blue1 4
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  // Rojo Derecha
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  // Rojo Izquierda
  digitalWrite(red1, HIGH);
  delay(500);
  digitalWrite(red1, LOW);
  // Cian Derecha
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  // Cian Izquierda
  digitalWrite(blue1, HIGH);
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(blue1, LOW);
  digitalWrite(green1, LOW);
  // Verde Derecha
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  // Verde Izquierda
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(green1, LOW);
  // Magenta Derecha
  digitalWrite(blue, HIGH);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  // Magenta Izquierda
  digitalWrite(blue1, HIGH);
  digitalWrite(red1, HIGH);
  delay(500);
  digitalWrite(red1, LOW);
  digitalWrite(blue1, LOW);
  // Azul Derecha
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(blue, LOW);
  // Azul Izquierda
  digitalWrite(blue1, HIGH);
  delay(500);
  digitalWrite(blue1, LOW);
  // Blanco Derecha
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  // Blanco Izquierda
  digitalWrite(green1, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(blue1, HIGH);
  delay(500);
  digitalWrite(green1, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(blue1, LOW);
  // Amarillo Derecha
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  // Amarillo Izquierda
  digitalWrite(red1, HIGH);
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(red1, LOW);
  digitalWrite(green1, LOW);
}