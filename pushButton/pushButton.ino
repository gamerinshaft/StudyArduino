// pushButton.ino

const int LED = 12;
const int BUTTON = 7;
int val = 0;
int val_old = 0;
int state = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON);
  // if(val == HIGH && state == 0 && val != val_old){
  if(val == HIGH){
    digitalWrite(LED, HIGH);
    delay(5);
    state = 1;
  // }else if(val == HIGH && state == 1 && val != val_old){
  }else{
    digitalWrite(LED, LOW);
    delay(5);
    state = 0;
  }
  val_old = val;
}

