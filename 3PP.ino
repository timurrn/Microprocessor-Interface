const int ledPins[] = {2, 3, 4};  // Pin LED
const int button1Pin = 7;         // Pin tombol 1 (kiri ke kanan)
const int button2Pin = 8;         // Pin tombol 2 (kanan ke kiri)
const int button3Pin = 9;         // Pin tombol 3 (otomatis kiri-kanan)

int button1State = 0;             // Status tombol 1
int button2State = 0;             // Status tombol 2
int button3State = 0;             // Status tombol 3
bool autoMode = false;            // Menandakan mode otomatis

void setup() {
  // Atur pin LED sebagai output
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  // Atur pin tombol sebagai input
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
}

void loop() {
  // Baca status tombol
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);
  button3State = digitalRead(button3Pin);

  // Jika tombol 1 ditekan, nyalakan LED ke kiri
  if (button1State == HIGH) {
    autoMode = false; // Nonaktifkan mode otomatis
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPins[i], HIGH);   // Nyalakan LED
      delay(300);                       // Tunggu 300ms
      digitalWrite(ledPins[i], LOW);    // Matikan LED
    }
  }

  // Jika tombol 2 ditekan, nyalakan LED ke kanan
  if (button2State == HIGH) {
    autoMode = false; // Nonaktifkan mode otomatis
    for (int i = 2; i >= 0; i--) {
      digitalWrite(ledPins[i], HIGH);   // Nyalakan LED
      delay(300);                       // Tunggu 300ms
      digitalWrite(ledPins[i], LOW);    // Matikan LED
    }
  }

  // Jika tombol 3 ditekan, aktifkan mode otomatis
  if (button3State == HIGH) {
    autoMode = true;
    delay(200); // Debounce
  }

  // Mode otomatis: kiri ke kanan dan kanan ke kiri dengan jeda 0.5 detik
  if (autoMode) {
    // Kiri ke kanan
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPins[i], HIGH);   // Nyalakan LED
      delay(300);                       // Tunggu 300ms
      digitalWrite(ledPins[i], LOW);    // Matikan LED
    }

    delay(500); // Jeda 0.5 detik

    // Kanan ke kiri
    for (int i = 2; i >= 0; i--) {
      digitalWrite(ledPins[i], HIGH);   // Nyalakan LED
      delay(300);                       // Tunggu 300ms
      digitalWrite(ledPins[i], LOW);    // Matikan LED
    }

    delay(500); // Jeda 0.5 detik
  }
}
