
int LED_BUILTIN1=13;
int LED_BUILTIN2=12;
int LED_BUILTIN3=14;
void setup() {
  pinMode(LED_BUILTIN1, OUTPUT);  
    pinMode(LED_BUILTIN2, OUTPUT);  
      pinMode(LED_BUILTIN3, OUTPUT);  
      Serial.begin(115200);  
}

// the loop function runs over and over again forever
void loop() ````````````
{
  Serial.println(analogRead(A0));
  delay(100);

  digitalWrite(LED_BUILTIN2, LOW);                        
  digitalWrite(LED_BUILTIN3, LOW);    
  digitalWrite(LED_BUILTIN1, HIGH);   
  delay(1000);                      
   digitalWrite(LED_BUILTIN2, HIGH);                        
  digitalWrite(LED_BUILTIN3, LOW);    
  digitalWrite(LED_BUILTIN1, LOW);   
  delay(1000);
   digitalWrite(LED_BUILTIN2, LOW);                        
  digitalWrite(LED_BUILTIN3, HIGH);    
  digitalWrite(LED_BUILTIN1, LOW);   
  delay(1000);
}
