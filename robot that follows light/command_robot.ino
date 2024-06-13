int portaMotor = 10;
int portaMotor2 = 9; 
int portaLDR = A0;
int portaLDR2 = A1;
  
void setup()  
{  
  pinMode(portaMotor, OUTPUT); 
  pinMode(portaMotor2, OUTPUT);
}  
   
void loop()  
{  
  int estado = analogRead(portaLDR);
  int estado2 = analogRead(portaLDR2);
       
  if (estado >= 100)    
  {  
    digitalWrite(portaMotor, HIGH);
  }
  else 
  {  
    digitalWrite(portaMotor, LOW);  
  } 
  if (estado2 >= 100)
  {
    digitalWrite(portaMotor2, HIGH);
  }
  else
  {
    digitalWrite(portaMotor2, LOW);
  }
}  