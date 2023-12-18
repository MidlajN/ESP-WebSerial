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
  if (Serial.available() > 0) {
    char character = Serial.read();
    if (character == '1')
    {
      digitalWrite(LED, HIGH);
    } else {
      digitalWrite(LED, LOW);
    }
    
  }
  Serial.println("Hello, World!");
  delay(1000);
  // delay(1000);
  // digitalWrite(LED, LOW);
  // delay(1000);
  
  // delay(1000);
}

// put function definitions here:
