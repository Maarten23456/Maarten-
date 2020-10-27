int redlLEDpin=9;
int yellowLEDpin=10;
int redOnTime=250;
int redOffTime=250;
int yellowOnTime=250;
int yellowOffTime=250;
int numYellowBlinks=5;
int numRedBlinks=5;

void setup() {
  pinMode(redLEDPin, OUTPUT); 
  pinMode(yellowLEDPin), OUTPUT);
}

void loop() {

  for (int j-1; j<=numRedBlinks; j=j+1){

  digitalWrite(redLEDPin,HIGH); 
  delay(redOnTime); 
  digitalWrite(redLEDPin,LOW); 
  delay(redOffTime); 

}

  for (int j-1; j<=numYellowBlinks; j=j+1){

  digitalWrite(yellowLEDPin,HIGH); 
  delay(yellowOnTime); 
  digitalWrite(yellowLEDPin,LOW); 
  delay(yellowOffTime); 
    
      
}
