const int led = 5;
int sensor = A1;

void blink(){
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void setup() {
  Serial.begin(9600);
  pinMode (led, OUTPUT);
}

void loop() {
  Serial.println(sensor);
  if(analogRead(sensor) > 100){
    blink();
  }
}
