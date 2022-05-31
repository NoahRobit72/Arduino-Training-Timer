// Pins
int buzzers = 7;
int oneMin = 4;
int twentySec = 5;

void setup() {
  pinMode(buzzers,OUTPUT);
  pinMode(oneMin,INPUT);
  pinMode(twentySec,INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(oneMin)){
    Serial.println("ONE MIN IS PRESSED");
    attention();
  }

  if(digitalRead(twentySec)){
    Serial.println("TWENTY SEC IS PRESSED");
    attention();
  }

}


// Attention Signal Function
void attention(){
  for(int i = 1;i < 9; i++){
    tone(buzzers, 450); // Send 1KHz sound signal...
    delay(100);        // ...for 1 sec
    noTone(buzzers);     // Stop sound...
    delay(100);
  }
}
