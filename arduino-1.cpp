// Blink example
// LED 1 soniyada yoqilib, 1 soniyada o‘chadi.

void setup() {
  pinMode(13, OUTPUT); // LED pinini chiqish (output) rejimiga o‘tkazish
}

void loop() {
  digitalWrite(13, HIGH); // LED yoqiladi
  delay(1000);                     // 1 soniya kutadi
  digitalWrite(13, LOW);  // LED o‘chadi
  delay(1000);                     // 1 soniya kutadi
}
