 int relay=14;//d5
 int buz=16;//d0
 int ledg=5;//d1 
 int ldr=2;//d4
 int dth=A0;
 int ir=0;//D3
 int somo=4;//d2

void setup() {
 
 pinMode(ldr,INPUT);
 pinMode(buz,OUTPUT);
 pinMode(ledg,OUTPUT);
 pinMode(somo,INPUT);
 pinMode(ir,INPUT);
 pinMode(dth,INPUT);
 pinMode(relay,OUTPUT);
}

void loop() {
  if(digitalRead(ldr)==LOW)
  {
   digitalWrite(ledg,LOW);
   
   }
   if(digitalRead(ldr)==HIGH)
   {
    digitalWrite(ledg,HIGH);
    
    }

   //SOIL MOISTURE
     if(digitalRead(somo)==LOW)
    {
      digitalWrite(relay,LOW);
      
      }
       if(digitalRead(somo)==HIGH)
      {
        digitalWrite(relay,HIGH);
      }

      //IR SENSOR//

      
        if(digitalRead(ir)==HIGH)
        {
          digitalWrite(buz,LOW);
          }
          if(digitalRead(ir)==LOW)
          {
               digitalWrite(buz,HIGH);
          } 

}
