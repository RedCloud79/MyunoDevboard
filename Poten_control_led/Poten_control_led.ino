const int led = 5;
int sensor = A1;
const int but = 3;

void blink(){
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void setup() {
  Serial.begin(9600);
  pinMode (led, OUTPUT);
  pinMode (but, INPUT);
}

void loop() {
  if(analogRead(sensor) >= 100){
    blink();
    if(digitalRead(but) == HIGH){
      exit(0); // loop 종료
    }
  }
  Serial.println(analogRead(sensor));
}
