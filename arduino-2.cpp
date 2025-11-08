int ledPin = 13; // LED 13-pin ga ulangan

void setup() {
  pinMode(ledPin, OUTPUT); // LED pin chiqish sifatida sozlanadi
}

void loop() {
  digitalWrite(ledPin, HIGH); // LEDni yoqish
  delay(1000);                // 1 soniya kutish
  digitalWrite(ledPin, LOW);  // LEDni o‘chirish
  delay(1000);                // 1 soniya kutish
}