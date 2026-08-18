
void setup()
{
  
  
  Serial.begin(3800);
}

void loop()
{
  
  int media[] = { 10,4,2};
  int temp;
  int cantidad = sizeof(media) / sizeof(media[0]);
  
 
  for(int i = 0; i < cantidad - 1; i++)
  {
  	for(int j = 0; j < cantidad -1; j++)
    {
    	if(media[j] > media[j+1])
        {
        	temp = media[j];
          	media[j] = media[j+1];
          	media[j+1] = temp;
        }
    }
  }
  
  for(int i = 0; i < cantidad; i++)
  {
  	Serial.print(media[i]);
    Serial.print(" ");
      
      
  }
  Serial.println();
}