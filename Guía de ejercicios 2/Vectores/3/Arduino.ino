
void setup()
{
  Serial.begin(3800);
}

void loop()
{
  
  float media[] = {5.4 , 5.39 , 5.38 , 5.31 , 5.21 , 5.03 , 4.45 , 3.95 , 2.6 , 1.49  };
  int cantidad = sizeof(media) / sizeof(media[0]);
  float max = 0;
  
 
  for(int i = 0; i < cantidad - 1; i++)
  {
  	if(media[i] > max)
    {
    	max = media[i];
    }
  }
  
  Serial.print(max);
  Serial.println();
}