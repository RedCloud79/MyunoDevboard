const int led = 5;
const int count = 3;
const int inputPin = 4;
int result = 0;

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
int blink_2(int period){ // 버튼을 누르기전 까지는 led의 깜빡임이 지속, 누르면led 깜박임 횟수 리턴
  int switchval = digitalRead(inputPin) ;

  while (switchval == LOW){
    digitalWrite(led, HIGH);
    delay(period);
    digitalWrite(led, LOW);
    delay(period);
    result++;
    if(digitalRead(inputPin)==HIGH) Serial.println(result);
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop() {
  blink_2(1000);
  //Serial.println(result);
}
