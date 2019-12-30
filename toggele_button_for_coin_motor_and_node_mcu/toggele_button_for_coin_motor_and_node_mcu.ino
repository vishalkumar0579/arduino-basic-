int out=0;
void setup() {
  pinMode(D7,INPUT);
  pinMode(D5,OUTPUT);
}

void loop() {
  if(digitalRead(D7)==HIGH)
  out=!out;
  digitalWrite(D5,out);
}
