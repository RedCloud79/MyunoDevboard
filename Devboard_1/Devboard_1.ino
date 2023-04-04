int incomingByte = 0; // for incoming serial data
int Led [3] = {5,6,7};

void Led_bright() {
  for ( int i = 0; i < 3; i++){
      digitalWrite(Led[i], HIGH);
        if(i==2){
          delay(500);
          for ( int i = 0; i < 3; i++){
            digitalWrite(Led[i], LOW);
          }
        }
  }
}

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
  for (int i = 0; i < 3; i++){
    pinMode(Led[i], OUTPUT);
  }
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
    if (incomingByte == 49){
      Led_bright();
    }else if(incomingByte == 50){
      Led_bright();
      delay(500);
      Led_bright();
    }else{
      for ( int i = 0; i < 3; i++){
      digitalWrite(Led[i], LOW);
      }
    }
  }
}