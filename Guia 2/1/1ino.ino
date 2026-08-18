
void setup()
{
  
  Serial.begin(3800);
  
  
  
}

void loop()
{
  int media[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int cantidad = sizeof(media) / sizeof(media[0]);
  float total = 0;
  for(int i = 0; i < cantidad; i++)
  {
  	total = total + media[i];
  }
  Serial.println(total / 10);

}