int temperature;  // To store temperature in Celsius

void setup() {
  pinMode(6, OUTPUT);  // Green LED
  pinMode(7, OUTPUT);  // Blue LED
  pinMode(8, OUTPUT);  // Red LED
  Serial.begin(9600);  // Optional: For debugging
}

void loop() {
  int sensorValue = analogRead(A0);  // TMP36 on A0
  float voltage = sensorValue * 5.0 / 1023.0;
  temperature = (voltage - 0.5) * 100;  // TMP36 logic

  Serial.print("Temperature: ");
  Serial.println(temperature);

  if (temperature > 50 && temperature < 70) {
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
  }
  else if (temperature > 10 && temperature <= 50) {
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    delay(500);
  }
  else {
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
  }
}
