// Pins
int buzzers = 7;
int oneMin = 4;
int twentySec = 5;
int cancel = 2;

void setup() {
  pinMode(buzzers,OUTPUT);
  pinMode(oneMin,INPUT);
  pinMode(twentySec,INPUT);
  pinMode(cancel, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(oneMin)){
    Serial.println("ONE MIN IS PRESSED");
    attention();
    delay(1500);
    oneMinute();
  }

  if(digitalRead(twentySec)){
    Serial.println("TWENTY SEC IS PRESSED");
    attention();
    delay(1500);
    twentySeconds();
  }


  delay(1000);
}

void oneMinute(){
  // One Minute
    tone(buzzers, 450); 
    delay(1000);        
    noTone(buzzers);

    delay(29000);

  // Thirty Seconds
    tone(buzzers, 450); 
    delay(300);        
    noTone(buzzers);
    delay(300);        
    tone(buzzers, 450);
    delay(300);       
    noTone(buzzers);
    delay(300);       
    tone(buzzers, 450); 
    delay(300);        
    noTone(buzzers);

    delay(8500);
    
  // Twenty Seconds and Beyond...
    twentySeconds();
}


// Twenty Second Timer Function
void twentySeconds(){

if(digitalRead(cancel)){
Serial.println("Program Canceled");
return;}
      
  // Twenty Seconds
    tone(buzzers, 450); 
    delay(300);        
    noTone(buzzers);
    delay(300);        
    tone(buzzers, 450);
    delay(300);       
    noTone(buzzers);

// Cancel
if(digitalRead(cancel)){
Serial.println("Program Canceled");
return;}
    
    delay(9100);

// Cancel
if(digitalRead(cancel)){
Serial.println("Program Canceled");
return;}

  // Ten Seconds
    tone(buzzers, 450); 
    delay(300);        
    noTone(buzzers);

    delay(4700);

// Cancel
if(digitalRead(cancel)){
Serial.println("Program Canceled");
return;}


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
