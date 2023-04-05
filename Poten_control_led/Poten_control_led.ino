const int led = 5;
int sensor = A1;

void blink(){
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void setup() {
  pinMode (led, OUTPUT);
}

void loop() {
  if(analogRead(sensor) > 100){
    blink();
  }
}
