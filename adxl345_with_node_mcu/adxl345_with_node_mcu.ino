void setup() {
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
Serial.begin(115200);
}

void loop() {
digitalWrite(D1,LOW);
digitalWrite(D2,LOW);
digitalWrite(D5,LOW);
digitalWrite(D6,LOW);
delay(50);
Serial.print(analogRead(A0));
Serial.print(",");
digitalWrite(D1,HIGH);
digitalWrite(D2,LOW);
digitalWrite(D5,LOW);
digitalWrite(D6,LOW);
delay(50);
Serial.print(analogRead(A0));
Serial.print(",");
digitalWrite(D1,LOW);
digitalWrite(D2,HIGH);
digitalWrite(D5,LOW);
digitalWrite(D6,LOW);
delay(50);
Serial.println(analogRead(A0));
}
