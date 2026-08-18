
void setup()
{
  Serial.begin(3800);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  
  int media[] = { 1, 0 ,0 ,1, 1, 0, 1,1};
  int media1[] = { 0, 1 ,0 ,1, 0, 0, 1,0};
  int cantidad = sizeof(media) / sizeof(media[0]);

  
 
  for(int i = 0; i < cantidad - 1; i++)
  {
  	digitalWrite(2,media[i]);
    digitalWrite(3,media1[i]);
    delay(1000);
  }
  
 
}