// sensor.ino
const int LED = 13;
int rest = 0;
void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  rest = analogRead(0);
  digitalWrite(LED, HIGH);
  delay(rest);
  digitalWrite(LED, LOW);
  delay(rest);
}

