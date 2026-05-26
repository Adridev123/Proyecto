#define ambient A0
#define Temp A1
#define rojo 11
#define verde 10
#define azul 9

void setup()
{
  pinMode(ambient, INPUT);
  pinMode(Temp, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  float emp = analogRead(Temp);
  float luz_1 = analogRead(ambient);
  float vsp;
  float TEMPF;
  
  vsp = emp * 5.0 / 1023.0;
  TEMPF = (vsp - 0.5) * 100;
  
  float luz = map(luz_1, 1, 310, 100, 0);
  
  Serial.print("Nivel de luz: ");
  Serial.println(luz);
  Serial.print("Temperatura actual: ");
  Serial.print(TEMPF);
  Serial.println("°C");
  
  if (luz > 30 && luz < 70)
  {
  	if (TEMPF > 90)
  	{
	    digitalWrite(verde, LOW);
	    digitalWrite(azul, LOW);
	    digitalWrite(rojo, HIGH);
  	}
  	else if (TEMPF > 18)
  	{
	    digitalWrite(rojo, LOW);
	    digitalWrite(azul, LOW);
	    digitalWrite(verde, HIGH);
  	}
  	else
  	{
	    digitalWrite(rojo, LOW);
	    digitalWrite(verde, LOW);
	    digitalWrite(azul, HIGH);
  	}
  }
}