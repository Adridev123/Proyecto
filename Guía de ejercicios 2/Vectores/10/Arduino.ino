#define piezo 8

int randomNumbers[10];

void setup()
{
  pinMode(piezo, OUTPUT);
  
  randomSeed( analogRead(A0) );
  
  Serial.begin(9600);
  
  for (int i = 0; i < 10; i++)
  {
    randomNumbers[i] = random(1, 11);
  }
  
  for (int i = 0; i < 10; i++)
  {
    Serial.println(randomNumbers[i]);
    if (randomNumbers[i] == 5)
    {
      digitalWrite(piezo, HIGH);
    }
  }
}

void loop()
{
  
}