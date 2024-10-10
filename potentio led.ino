void setup() {
  pinMode(9, OUTPUT);  // Set pin D9 sebagai output
}

void loop() {
  int sensorValue = analogRead(A0);         // Baca nilai ADC dari potensiometer
  int ledBrightness = map(sensorValue, 0, 1023, 0, 255); // Konversi nilai ADC untuk PWM
  analogWrite(9, ledBrightness);             // Atur terang/redup LED
  delay(50);                                  // Delay 50 ms
}
