int ldr = A0;
int lm35 = A1;
int loadcell = A2;
int nilaiLDR = 0;
int nilaiLM35 = 0;
int nilaiLoadcell = 0;
int led1 = 2;
int led2 = 3;
int led3 = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  nilaiLDR = analogRead(ldr);
  nilaiLM35 = analogRead(lm35);
  nilaiLM35 = nilaiLM35*0.488;
  nilaiLoadcell = analogRead(loadcell);
  
  if (nilaiLDR >= 45 && nilaiLM35 < 28 )
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  else if(nilaiLDR <= 45 && nilaiLoadcell <= 1000)
  {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }

  else if (nilaiLM35 >= 28 && nilaiLoadcell >= 1000)
  {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }

}
