
void setup()
{
  Serial.begin(3800);
  pinMode(2,OUTPUT);
}

void loop()
{
  
  int media[] = { 1, 0 ,0 ,1, 1, 0, 1,1};
  int cantidad = sizeof(media) / sizeof(media[0]);

  
 
  for(int i = 0; i < cantidad - 1; i++)
  {
  	digitalWrite(2,media[i]);
    delay(1000);
  }
  
 
}