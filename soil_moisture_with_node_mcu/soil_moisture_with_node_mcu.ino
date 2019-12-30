int thresh=500;
void setup()
{
pinMode(16,OUTPUT);
}
void loop(){
  int val=analogRead(A0);
  if(val>thresh){
    digitalWrite(buz,HIGH);
  }
  } 
