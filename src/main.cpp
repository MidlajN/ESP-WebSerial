#include <Arduino.h>

// put function declarations here:
int LED = 2;
int flag = true;
void processGcode(String gcode);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    // read the incoming byte for toggling the LED:
    char character = Serial.read();
    if (character == '1')
    {
      digitalWrite(LED, HIGH);
      Serial.println("The LED is now ON");
    } else if (character == '0') {
      digitalWrite(LED, LOW);
      Serial.println("The LED is now OFF");
    } else {
      String command = Serial.readStringUntil('\n');
      // the character variable specified above takes the first letter of each line , is inorder to complete the line we need to add it to the command
      String commandString = character + command;
      processGcode(commandString);
    }
   
  }
  // Check if there is more data (a complete line) available
  
  // if (Serial.available() > 0) {
  //   String command = Serial.readStringUntil('\n');
  //   processGcode(command);
  // }
  // digitalWrite(LED, HIGH);
  // delay(1000);
  // digitalWrite(LED, LOW);
  // delay(1000);
  // Serial.println("Hello, World!");
  // delay(1000);
}

// put function definitions here:
void processGcode(String command) {
  if (flag == true){
      Serial.println("GCode Entered : >> \n");
      flag = false;
  }
  Serial.println(command);
}