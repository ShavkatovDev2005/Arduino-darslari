// 4-dars: Potensiometr bilan LED yorqinligini boshqarish

int potPin = A0;   // Potensiometr markaz chiqishi
int ledPin = 9;    // LED ulangan PWM pin

void setup() {
  pinMode(ledPin, OUTPUT);  // LED chiqish pin
  Serial.begin(9600);       // Serial monitor uchun
}

void loop() {
  int potValue = analogRead(potPin);  // 0 - 1023 oralig‘ida o‘qish
  int ledValue = map(potValue, 0, 1023, 0, 255);  // 0-255 oralig‘iga o‘tkazish
  
  analogWrite(ledPin, ledValue);  // LED yorqinligini boshqarish
  
  Serial.print("Pot qiymat: ");
  Serial.print(potValue);
  Serial.print(" | LED PWM: ");
  Serial.println(ledValue);
  
  delay(50); // biroz kutish
}
