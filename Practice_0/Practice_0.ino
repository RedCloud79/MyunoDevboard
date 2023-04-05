const int led = 5;
const int count = 3;

void blink_0(){
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
void blink_1(int count){
  while(count > 0){
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    count--;//count를 줄인다.
    Serial.print(count);
    if(count <= 0) break;
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  blink_1(count);
}

void loop() {
  //blink_1(count);
}
