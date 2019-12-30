void setup() 
{
  Serial.begin(115200);
  pinMode(16,OUTPUT);
}

void loop() 
{
Serial.println(analogRead(A0));
delay(100);
if(analogRead(A0)<=200)
{
  digitalWrite(16,HIGH);
}
else
{
  digitalWrite(16,LOW);
}
}
