void setup() {
  Serial.begin(9600);  // Mulai komunikasi serial
}

void loop() {
  int sensorValue = analogRead(A0);  // Baca nilai ADC dari potensiometer
  Serial.println(sensorValue);         // Tampilkan nilai ADC di Serial Monitor
  delay(500);                          // Delay 500 ms
}
