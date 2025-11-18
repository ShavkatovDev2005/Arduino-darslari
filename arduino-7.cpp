int potPin = A0;     // Potensiometr A0 pinida
int ledPin = 9;      // LED PWM chiqish 9-pin
int potVal;          // Potdan o‘qilgan qiymat
int ledVal;          // LED uchun PWM qiymat

void setup() {
  Serial.begin(9600);     // Serial monitor
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potVal = analogRead(potPin);               // 0–1023 oralig‘ida
  ledVal = map(potVal, 0, 1023, 0, 255);     // 0–255 oralig‘iga aylantiramiz

  analogWrite(ledPin, ledVal);               // LED yorqinligini boshqarish

  Serial.print("Pot qiymati: ");
  Serial.print(potVal);
  Serial.print("  | LED PWM: ");
  Serial.println(ledVal);

  delay(10);
}
