const int led_5 = 5;
const int led_6 = 6;
const int led_7 = 7;

void setup() {
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
}

void loop() {
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, HIGH);
  digitalWrite(led_7, HIGH);  
  delay(1000);                      
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, LOW);   
  delay(1000);                      
}
