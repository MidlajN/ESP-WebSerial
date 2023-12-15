#include <Arduino.h>

// put function declarations here:
int LED = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  Serial.println("Hello, World!");
  delay(1000);
}

// put function definitions here:
