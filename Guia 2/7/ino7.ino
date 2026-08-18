#define uno 1
#define dos 2
#define tres 3
#define cuatro 4
#define cinco 5
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  int vector[] = {1, 2, 3, 4, 5};
  vector[1] = uno;
  vector[2] = dos;
  vector[3] = tres;
  vector[4] = cuatro;
  vector[5] = cinco;
	for (int i = 1; i < 6; i++)
    {
      digitalWrite(vector[i], HIGH);
      delay(500);
      digitalWrite(vector[i+1], HIGH);
      delay(500);
      digitalWrite(vector[i+2], HIGH);
      delay(500);
      digitalWrite(vector[i+3], HIGH);
      delay(500);
      digitalWrite(vector[i+4], HIGH);
    }
}
