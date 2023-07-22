const int sensorPin = A0; 
const int ledPin = 2;     
const int buzzerPin = 3;  
const int gasThreshold = 50; 
void setup() {
  pinMode(ledPin, OUTPUT);   
  pinMode(buzzerPin, OUTPUT);  
  Serial.begin(9600);         
}
void loop() {
  int gasLevel = analogRead(sensorPin); 
  Serial.print("Gas Level: ");
  Serial.println(gasLevel); 
  if (gasLevel > gasThreshold) {
    digitalWrite(ledPin, HIGH);  
    digitalWrite(buzzerPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW);     
    digitalWrite(buzzerPin, LOW);   
  }
  delay(1000);  
}
