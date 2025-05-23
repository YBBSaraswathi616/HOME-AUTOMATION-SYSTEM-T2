int lightPin = 2;
int fanPin = 3;
void setup() {
  pinMode(lightPin, OUTPUT);
  pinMode(fanPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter commands: LIGHT ON/OFF or FAN ON/OFF");
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "LIGHT ON") {
      digitalWrite(lightPin, HIGH);
    } else if (command == "LIGHT OFF") {
      digitalWrite(lightPin, LOW);
    } else if (command == "FAN ON") {
      digitalWrite(fanPin, HIGH);
    } else if (command == "FAN OFF") {
      digitalWrite(fanPin, LOW);
    } else {
      Serial.println("Invalid command");
    }
  }
}