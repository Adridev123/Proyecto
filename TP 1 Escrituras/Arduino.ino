#define rojo1 10
#define verde1 11
#define rojo2 0
#define verde2 3
#define azul2 1
#define azul3 5
#define verde3 6
#define rojo3 9
#define sonido 4
void setup()
{
  pinMode(rojo1, OUTPUT);
  pinMode(rojo2, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(azul3, OUTPUT);
  pinMode(verde3, OUTPUT);
  pinMode(sonido, OUTPUT);
}

void loop()
{
  analogWrite(rojo1, 255);
  delay(2000);
  analogWrite(sonido, 255);
  analogWrite(rojo1, 0);
  delay(100);
  analogWrite(sonido, 0);
  analogWrite(rojo1, 255);
  analogWrite(verde1, 50);
  delay(100);
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  delay(100);
  analogWrite(rojo1, 255);
  analogWrite(verde1, 50);
  delay(100);
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  delay(100);
  analogWrite(rojo1, 255);
  analogWrite(verde1, 50);
  delay(100);
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  delay(100);
  analogWrite(rojo1, 255);
  analogWrite(verde1, 50);
  delay(100);
  analogWrite(rojo1, 0);
  analogWrite(verde1, 0);
  
  digitalWrite(rojo2, 255);
  digitalWrite(azul2, 255);
  delay(2000);
  analogWrite(sonido, 255);
  digitalWrite(rojo2, 0);
  digitalWrite(azul2, 0);
  delay(100);
  analogWrite(sonido, 0);
  analogWrite(rojo2, 255);
  analogWrite(verde2, 50);
  delay(100);
  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  delay(100);
  analogWrite(rojo2, 255);
  analogWrite(verde2, 50);
  delay(100);
  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  delay(100);
  analogWrite(rojo2, 255);
  analogWrite(verde2, 50);
  delay(100);
  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  delay(100);
  analogWrite(rojo2, 255);
  analogWrite(verde2, 50);
  delay(100);
  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  
  digitalWrite(azul3, 255);
  digitalWrite(verde3, 255);
  delay(2000);
  analogWrite(sonido, 255);
  digitalWrite(azul3, 0);
  digitalWrite(verde3, 0);
  delay(100);
  analogWrite(sonido, 0);
  analogWrite(rojo3, 255);
  analogWrite(verde3, 50);
  delay(100);
  analogWrite(rojo3, 0);
  analogWrite(verde3, 0);
  delay(100);
  analogWrite(rojo3, 255);
  analogWrite(verde3, 50);
  delay(100);
  analogWrite(rojo3, 0);
  analogWrite(verde3, 0);
  delay(100);
  analogWrite(rojo3, 255);
  analogWrite(verde3, 50);
  delay(100);
  analogWrite(rojo3, 0);
  analogWrite(verde3, 0);
  delay(100);
  analogWrite(rojo3, 255);
  analogWrite(verde3, 50);
  delay(100);
  analogWrite(rojo3, 0);
  analogWrite(verde3, 0);
}