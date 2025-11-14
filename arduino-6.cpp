int analogPin = A3;
int analogVal;
float nVal;

void setup() {
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  analogVal = analogRead(analogPin);
  nVal = (5./1023.) * analogVal ; 
  Serial.println(nVal);
  delay(500);
}
