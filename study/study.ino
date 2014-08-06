// // study.ino




const int LED1 = 12;
const int LED2 = 10;
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop()
{
  for(int i = 0; i < 10; i++){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    delay(10*i);
    if(i % 2 == 0){
      digitalWrite(LED2, LOW);
    }
    digitalWrite(LED1, LOW);
    delay(10*i);
  }
}