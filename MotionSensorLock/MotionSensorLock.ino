// Pin configuration
const int pirSensorPin = 2; // Connect the PIR sensor to digital pin 2
const int ledPin = 13;      // Built-in LED on most Arduino boards

void setup() {
  pinMode(pirSensorPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Optional: Use Serial Monitor for debugging
}

void loop() {
  int motionValue = digitalRead(pirSensorPin);

  if (motionValue == LOW) {
    // Motion detected
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected!");
  } else {
    // No motion
    digitalWrite(ledPin, LOW);
    Serial.println("Motion undetected");
  }
  delay(1000);
}
