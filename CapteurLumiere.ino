
const int sensor1=A0;
const int sensor2=A1;


void setup() {
  Serial.begin(9600);
}

void loop() {
 Serial.print(analogRead(sensor1));
 Serial.print(" ");
 Serial.println(analogRead(sensor2));
 
}
