void setup()
{
  Serial.begin(9600);
}

void loop()
{
    int media = 0;
	int suma = 0;
	int vector[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  	
    for(int i = 0; i < 10; i++)
  	{
	    suma = suma + vector[i];
  	}
  	
    media = suma / 10;  
	Serial.println(media);
}
