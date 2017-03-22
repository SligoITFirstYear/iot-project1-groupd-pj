void setup() {
Serial.begin(9600);
pinMode(3, OUTPUT);
}
void loop() {
int sensorValue = analogRead(A3);
Serial.println (sensorValue);
delay(500);
if (sensorValue < 200) { // To change the point at which the light turns on change this value.
digitalWrite(3, HIGH);
}
else {
digitalWrite(3,LOW);
}
}
