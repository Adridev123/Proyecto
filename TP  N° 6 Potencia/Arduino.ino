#define NMOSrele 3
#define NMOSluz 9
int lectTemp = A0;
int pir = A1;

void setup()
{
  pinMode(NMOSrele, OUTPUT);
  pinMode(NMOSluz, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int PIR = analogRead(pir);
  int temp = analogRead(lectTemp);
  
  float volt = temp * 5.0 / 1023.0;
  int TEMP = (volt - 0.5) * 100;
  
 
  if(TEMP > 50)
  {
   
    analogWrite(NMOSrele, 255);
    
    analogWrite(NMOSluz, 0);
  }
  else
  {
    

    if(PIR == 1018)
    {
      analogWrite(NMOSluz, 255);
      
      if(TEMP <= 15)
      {
        analogWrite(NMOSrele, 50);
      }
      if(TEMP == 30)
      {
        analogWrite(NMOSrele, 150);
      }
    }
    else
    {
      analogWrite(NMOSluz, LOW);
      analogWrite(NMOSrele, LOW);
    }
  } 
}