void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int vector[] = {2 , 6 , 10 , 11};
  int multiplo = 0;
  
  for(int i = 0; i < 4; i++)
  {
    for(int j = 1; j < 6; j++)
    {
      multiplo = vector[i] * j;
      Serial.println(multiplo);
    }
  }
}
