int l1 = 7;
int l2 = 8;
int l3 = 9;
int l4 = 10;
int l5 = 11;
int l6 = 12;
int l7 = 13;
int pinLDR = A0;
int valorLDR = 0;
int valorLDR2 =0;  
 
void setup()
{
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  pinMode(l7, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  valorLDR= analogRead(pinLDR);
  if(valorLDR>=515){
    digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, HIGH);
  digitalWrite(l5, HIGH);
  digitalWrite(l6, HIGH);
  digitalWrite(l7, HIGH);
  delay(200);
  digitalWrite(l1,LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  digitalWrite(l7, LOW);
  delay(200);
  Serial.println("Exceso de luz");
  }
  if(valorLDR && valorLDR2>=429 && valorLDR2 && valorLDR< 515){
    digitalWrite(l1,LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, HIGH);
  digitalWrite(l7, LOW);
  Serial.println("Nivel 6 de luz");
  }
  if(valorLDR>=343 && valorLDR< 429){
    digitalWrite(l1,LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, HIGH);
  digitalWrite(l6, LOW);
  digitalWrite(l7, LOW);
  Serial.println("Nivel 5 de luz");
  }
  if(valorLDR>=257 && valorLDR< 343){
    digitalWrite(l1,LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, HIGH);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  digitalWrite(l7, LOW);
  Serial.println("Nivel 4 de luz");
  }
  if(valorLDR>=171 && valorLDR< 257){
    digitalWrite(l1,LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  digitalWrite(l7, LOW);
  Serial.println("Nivel 3 de luz");
  }
if(valorLDR>=86 && valorLDR < 171){
  digitalWrite(l1,LOW);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  digitalWrite(l7, LOW);
  Serial.println("Nivel 2 de luz");
}
if(valorLDR< 86){
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  digitalWrite(l7, LOW);
  Serial.println("Nivel 1 de luz");
}else{
  digitalWrite(l1,LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  digitalWrite(l6, LOW);
  digitalWrite(l7, LOW);
  
}
}
