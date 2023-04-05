const int led = 5;

void blink_0(){
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  blink_0();
}
