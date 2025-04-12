Serial.begin(9600);  // Скорость 9600 бод
}

void loop() {
  if (Serial.available()) {
    String data = Serial.readStringUntil('\n');
    Serial.print("Arduino получил: ");
    Serial.println(data);
  }
  delay(100);
}
