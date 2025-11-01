int buttonPin = 2;   // Tugma ulangan pin
int ledPin = 10;     // LED ulangan pin
int buttonState = 0; // Tugma holati

void setup() {
  pinMode(ledPin, OUTPUT);     // LED chiqish
  pinMode(buttonPin, INPUT);   // Tugma kirish
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Tugma holatini o‘qish

  ledPin = buttonState; //tugma holatiga qarab ledni o'zgartiradi
}
