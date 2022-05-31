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
    //attention();
    twentySeconds();
  }

}
// Twenty Second Timer Function
void twentySeconds(){
  // Twenty Seconds
    tone(buzzers, 450); 
    delay(300);        
    noTone(buzzers);
    delay(300);        
    tone(buzzers, 450);
    delay(300);       
    noTone(buzzers);

    delay(9100);

  // Ten Seconds
    tone(buzzers, 450); 
    delay(300);        
    noTone(buzzers);

    delay(4700);
  // Five - One
    for(int i = 1;i <=5; i++){
      tone(buzzers, 450); 
      delay(300);        
      noTone(buzzers);
      delay(700);
    }
    
  // GO
      tone(buzzers, 450); 
      delay(900);        
      noTone(buzzers);
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
