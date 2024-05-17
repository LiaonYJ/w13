  // variable to store the read value

void setup() {
  pinMode(9, OUTPUT);  // sets the pin as output
  Serial.begin(9600);
}

void loop() {
 int sensorRead=analogRead(A0);
 Serial.println(sensorRead);
 if(sensorRead<500)sensorRead=300;
 else if(sensorRead>800)sensorRead=880;
  int ledblink=map(sensorRead,300,880,0,1000);
  analogWrite(9,sensorRead);
  delay(1);
}
