int gr = 4;
int bl = 5;
int re = 6;
int ye = 7;

int grL = 13;
int blL = 12;
int reL = 11;
int yeL = 10;

boolean onGr=false;
boolean onBl=false;
boolean onRe=false;
boolean onYe=false;

int buttonStateGreen = 0; 
int buttonStateBlue = 0;
int buttonStateRed = 0;
int buttonStateYellow = 0;

void setup() {
  pinMode(grL, OUTPUT);      
  pinMode(gr, INPUT);    
  
  pinMode(blL, OUTPUT);      
  pinMode(bl, INPUT);

  pinMode(reL, OUTPUT);      
  pinMode(re, INPUT);   

  pinMode(yeL, OUTPUT);      
  pinMode(ye, INPUT);   
}

void loop(){
  
  buttonStateGreen = digitalRead(gr);
  if (buttonStateGreen == HIGH) {    
    if(onGr==true){
      onGr=false;
    }  else{
      onGr=true;
    }
  }  
   if (onGr == true) {    
    digitalWrite(grL, HIGH);  
  }
  else {
    digitalWrite(grL, LOW);
  }

  buttonStateYellow = digitalRead(ye);
  if (buttonStateYellow == HIGH) {    
    if(onYe==true){
      onYe=false;
    }  else{
      onYe=true;
    }
  }  
   if (onYe == true) {    
    digitalWrite(yeL, HIGH);  
  }
  else {
    digitalWrite(yeL, LOW);
  }

  buttonStateRed = digitalRead(re);
  if (buttonStateRed == HIGH) {    
    if(onRe==true){
      onRe=false;
    }  else{
      onRe=true;
    }
  } 
   if (onRe == true) {    
    digitalWrite(reL, HIGH);  
  }
  else {
    digitalWrite(reL, LOW);
  }

  buttonStateBlue = digitalRead(bl);
  if (buttonStateBlue == HIGH) {    
    if(onBl==true){
      onBl=false;
    }  else{
      onBl=true;
    }
  }  
   if (onBl == true) {    
    digitalWrite(blL, HIGH);  
  }
  else {
    digitalWrite(blL, LOW);
  }
  if(buttonStateBlue == HIGH && buttonStateYellow == HIGH && buttonStateGreen == HIGH && buttonStateRed == HIGH)
  {
    onBl = false;
    onGr = false;
    onRe = false;
    onYe = false;
    
    digitalWrite(blL, HIGH);
    digitalWrite(grL, HIGH);
    digitalWrite(yeL, HIGH);
    digitalWrite(reL, HIGH);
  }
   delay(200); 
  
}            
