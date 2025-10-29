// Blink example
// LED 1 soniyada yoqilib, 1 soniyada o‘chadi.

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // LED pinini chiqish (output) rejimiga o‘tkazish
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // LED yoqiladi
  delay(1000);                     // 1 soniya kutadi
  digitalWrite(LED_BUILTIN, LOW);  // LED o‘chadi
  delay(1000);                     // 1 soniya kutadi
}
