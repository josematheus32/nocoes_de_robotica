int vermelhoCarro = 13; 
int amareloCarro = 12;
int verdeCarro = 11;
int vermelhoPed = 7;
int verdePed = 6;
int botaoPed = 2;

void setup()
{ 
 pinMode(vermelhoCarro, OUTPUT);
 pinMode(amareloCarro, OUTPUT);
 pinMode(verdeCarro, OUTPUT);
 pinMode(vermelhoPed, OUTPUT);
 pinMode(verdePed, OUTPUT);
 pinMode(botaoPed, INPUT);
}

void loop()
{  
	digitalWrite(verdeCarro, HIGH);
  	digitalWrite(amareloCarro, LOW);
  	digitalWrite(vermelhoCarro, LOW);
  	digitalWrite(vermelhoPed, HIGH);
  	digitalWrite(verdePed, LOW);
  	
  if (digitalRead(botaoPed)== 0){ 
  	digitalWrite(verdeCarro, LOW);
    digitalWrite(amareloCarro, HIGH);
    delay(2000);
    digitalWrite(vermelhoPed, LOW);
    digitalWrite(amareloCarro, LOW);
    digitalWrite(vermelhoCarro, HIGH);
    digitalWrite(verdePed, HIGH);
    delay(5000);
    digitalWrite(verdePed, LOW);
    digitalWrite(vermelhoPed, HIGH);
    delay(1000);
    digitalWrite(vermelhoCarro, LOW);
    digitalWrite(verdeCarro, HIGH);
  }
 
  
}