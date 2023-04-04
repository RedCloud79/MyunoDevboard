int Led [3] = {5,6,7};
const int btn = 3;

void setup() {
  for (int i = 0; i < 3; i++){
    pinMode(Led[i], OUTPUT);
  }
  pinMode(btn, INPUT);
}

void loop() {
  if(digitalRead(btn) == HIGH){
    for ( int i = 0; i < 3; i++){
      digitalWrite(Led[i], HIGH);
      delay(500);
    }
  }else{
    for ( int i = 0; i < 3; i++){
      digitalWrite(Led[i], LOW);
    }
  }
}
