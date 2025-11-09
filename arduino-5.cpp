int ledPin = 10;
int yoruglik = 255;
void setup(){
  pinMode(ledPin, OUTPUT);
}

void loop(){
  analogWrite(ledPin, yoruglik);
}
