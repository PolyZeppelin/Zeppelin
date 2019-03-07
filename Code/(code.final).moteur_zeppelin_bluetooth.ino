#include <SoftwareSerial.h>
#define RX 3
#define TX 2
SoftwareSerial BlueT(RX,TX);
char Data;
int PWM=128;


//-- MOTEUR A --
int ENA=9; //Connecté à Arduino pin 9(sortie PWM)
int IN1=4; //Connecté à Arduino pin 4
int IN2=5; //Connecté à Arduino pin 5
//-- MOTEUR B --
int ENB=10; //Connecté à Arduino pin 10(Sortie PWM)
int IN3=6; //Connecté à Arduino pin 6
int IN4=7; //Connecté à Arduino pin 7
//-- MOTEUR C --
int ENC=11;
int IN5=12;
int IN6=13;
void setup() {
  pinMode(ENA,OUTPUT); // Configurer
  pinMode(ENB,OUTPUT); // les broches
  pinMode(ENC,OUTPUT);
  pinMode(IN1,OUTPUT); // comme sortie
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(IN5,OUTPUT);
  pinMode(IN6,OUTPUT);
  
  digitalWrite(ENA,LOW);// Moteur latéral A - Ne pas tourner
  digitalWrite(ENB,LOW);// Moteur latéral B - Ne pas tourner
  digitalWrite(ENC,LOW); //Moteur C
  
  Serial.begin(9600);
  Serial.println("Bonjour - Prêt pour les commandes AT");
  BlueT.begin(9600);
  delay(500);
  }

//Quand on est en LOW - HIGH -> 255
//Quand on est en HIGH - LOW -> 0
void loop() {

  
  if (BlueT.available()) {
    Data=BlueT.read();
    Serial.println(Data);
    //Serial.print(char(BlueT.read()));

    
  if (Data=='A') {
    Serial.println("condition validée");
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
    analogWrite(ENA,255);
    analogWrite(ENB,255);
    delay(1000);
    }    
    
  if (Data=='B'){
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    analogWrite(ENA,255);
    analogWrite(ENB,255);
    Serial.println(Data);
    delay(1000);
    }

  if (Data=='O'){
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,HIGH);
    analogWrite(ENA,0);
    analogWrite(ENB,0);
    Serial.println(Data);
    delay(1000);}

  if (Data=='R'){
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
    analogWrite(ENA,0);
    analogWrite(ENB,255);
    Serial.println(Data);
    delay(1000);
    }
  if (Data=='L'){
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,HIGH);
    analogWrite(ENA,255);
    analogWrite(ENB,0);
    Serial.println(Data);
    delay(1000);
    }
  if (Data=='Z'){
    digitalWrite(IN5,LOW);
    digitalWrite(IN6,HIGH);
    analogWrite(ENC,255);
    Serial.println(Data);
    delay(1000);
  }

  if (Data=='S'){
    digitalWrite(IN5,HIGH);
    digitalWrite(IN6,LOW);
    analogWrite(ENC,255);
    Serial.println(Data);
    delay(1000);
  }
  if (Data=='I'){
    digitalWrite(IN5,LOW);
    digitalWrite(IN6,HIGH);
    analogWrite(ENC,0);
    Serial.println(Data);
    delay(1000);
  }

  if (Data=='P') {
  PWM=BlueT.parseInt();
  Serial.println(PWM);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENA, PWM);
  analogWrite(ENB,PWM);
}
  }
}
 
