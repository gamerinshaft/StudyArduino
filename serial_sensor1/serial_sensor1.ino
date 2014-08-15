// serial_sensor.ino
const int LED = 11;
int result = 0;
const int SENSOR = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  result = analogRead(0);
  // Serial.println(result);
  Serial.print(String(result) + "\n");

  analogWrite(LED, result/4);
  delay(1000);

}

