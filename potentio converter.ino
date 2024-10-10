void setup() {
  Serial.begin(9600);  // Mulai komunikasi serial
}

void loop() {
  int sensorValue = analogRead(A0);  // Baca nilai ADC dari potensiometer
  float voltage = (sensorValue * 5.0) / 1023;  // Konversi nilai ADC ke tegangan
  Serial.print("ADC: ");
  Serial.print(sensorValue);
  Serial.print(" - Tegangan: ");
  Serial.println(voltage);
  delay(500);  // Delay 500 ms
}
