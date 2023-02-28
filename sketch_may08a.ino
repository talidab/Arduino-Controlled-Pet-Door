int motorPin1 = 9;
int motorPin2 = 10;
int pirsensor1 = 3;
int pirsensor2 = 5;
int led = 13;

void setup() {
 Serial.begin(9600);
 pinMode(motorPin1, OUTPUT);
 pinMode(motorPin2, OUTPUT);
 pinMode(pirsensor1, INPUT);
 pinMode(pirsensor2, INPUT);
 pinMode(led, OUTPUT);
 digitalWrite(motorPin1, HIGH);
 digitalWrite(motorPin2, HIGH);
 digitalWrite(led, LOW);
 delay(5000);
}
void loop() {
  if(digitalRead(pirsensor1) == HIGH || digitalRead(pirsensor2) == HIGH)
{  
  if(digitalRead(pirsensor1) == HIGH)
 Serial.println("S-a activat senzorul 1");
    else 
 Serial.println("S-a activat senzorul 2");
 digitalWrite(led, HIGH);
 Serial.println("S-a aprins led-ul");
 //urca

 Serial.println("Usa coboara");
 digitalWrite(motorPin1, HIGH);
 digitalWrite(motorPin2, LOW);
 delay(35000);
 //Serial.println("Usa urca");
 digitalWrite(motorPin1, LOW); 
 digitalWrite(motorPin2, HIGH);
 delay(12000); 

 // stop the motor
 //sta pe loc timp de 10 secunde
 //Serial.println("Se asteapta timp de 5 secunde");
 //digitalWrite(motorPin1, HIGH); 
 //digitalWrite(motorPin2, HIGH);
 //delay(10000);

  //coboara
 //
 

//stop the motor
 digitalWrite(motorPin1, HIGH); 
 digitalWrite(motorPin2, HIGH);
 delay(3000);

 digitalWrite(led, LOW);
 Serial.println("S-a stins ledul");
 Serial.println("==========");
 
  digitalWrite(motorPin1, HIGH);
 digitalWrite(motorPin2, HIGH);
 digitalWrite(led, LOW);
 delay(25000);
}
}
