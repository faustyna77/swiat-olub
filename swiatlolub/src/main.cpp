#include <Arduino.h>
#define foto1 A0
#define foto2 A1
#define koloA1 5
#define koloA2 6
#define koloB1 9
#define koloB2 10

void setup()
{
  Serial.begin(9600);
  pinMode(foto1,INPUT);
}
void loop()
{
  analogRead(foto1);
  Serial.println(analogRead(foto1));
}

/*int prawa;
int lewa;
int aktualny;
int zmierzony;
void setup() {

  Serial.begin(9600);
 
  pinMode(koloA1,OUTPUT);
  pinMode(koloA2,OUTPUT);
  pinMode(koloB1,OUTPUT);
  pinMode(koloB2,OUTPUT);
  // put your setup code here, to run once:
}
void skret_lewo()
{
   analogWrite(koloA1,200);
  analogWrite(koloB1,20);
}
void skret_prawo()
{
  analogWrite(koloA1,20);
  analogWrite(koloB1,200);
}
void prosto()
{
 analogWrite(koloA1,200);
 analogWrite(koloB1,200);
}
void loop() {

aktualny=millis();
if((aktualny-zmierzony)>2000)
{
  zmierzony=millis();
  prosto();
}
else 
{
  skret_prawo();
}

 
/*
  prawa=analogRead(foto1);
  lewa=analogRead(foto2);
  Serial.print("prawa strona:");
  Serial.println(prawa);
  delay(1000);
  Serial.print("lewa strona:");
  Serial.println(lewa);
  delay(1000);
  if((prawa-lewa)<5)
  {
    digitalWrite(koloA1,HIGH);
    digitalWrite(koloA2,LOW);

  }else if{

    digitalWrite(koloB1,HIGH);
    digitalWrite(koloB2,LOW);
  }else if(prawa==lewa)
  {

  }
*/

  // put your main code here, to run repeatedly:

