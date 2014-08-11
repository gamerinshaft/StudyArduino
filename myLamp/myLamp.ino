// myLamp.ino
const int LED = 11;
const int BUTTON = 7;
int bright = 0;
boolean iterater = true;
int pushTime = 0;
int state = 0;
int old_state = 0;
boolean isBright = false;
void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

boolean isPush(){
  return digitalRead(BUTTON) == HIGH;
}

void brightness(){
  while(isPush()){
    if(bright == 0){
      iterater = true;
    }else if(bright == 255){
      iterater = false;
    }
    analogWrite(LED, bright);
    delay(10);
    if(iterater){
      bright++;
    }else{
      bright--;
    }
  }
}
void light(){
  if(isBright){
    digitalWrite(LED, LOW);
    isBright = false;
    bright = 0;
  }else{
    digitalWrite(LED, HIGH);
    bright = 255;
    isBright = true;
  }
  delay(5);
}

void pushCounter(){
  if(isPush()){
    pushTime +=1;
    delay(10);
  }else{
    pushTime = 0;
    delay(10);
  }
}
void loop(){
  state = digitalRead(BUTTON);
  pushCounter();
  if(pushTime > 100){
    brightness();
    state = LOW;
    isBright = true;
  }else if(state == LOW && old_state == HIGH){
    light();
  }
  old_state = state;
}

