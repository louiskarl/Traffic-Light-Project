//Lab 1 - Traffic Light

//Initialize control variables

int buttonState = 0;
int pgmControl = 0;

void setup() {
  // put your setup code here, to run once:

 
//Initialize pins
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, INPUT);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);

 
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(7);
  if (buttonState == HIGH){
    pgmControl = 1;
    while (pgmControl == 1){    //Locks program in loop while pgmControl flag is equal to 1. 
                                //pgmControl flag is not set low by program, only way to exit loop is to disconnect power.
    
    digitalWrite(8, LOW);       //Activates red light, deactivates yellow and green lights.
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    
    
    delay(17000);               //Waits for 17 seconds, then turns on buzzer for three seconds, then deactivates buzzer.
    digitalWrite(11, HIGH);
    delay(3000);
    digitalWrite(11, LOW);

    digitalWrite(8, HIGH);      //Turns on green light, turns off red and yellow lights.
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
      
    delay(17000);               //Waits for 17 seconds, then turns on buzzer for three seconds, then deactivates buzzer.
    digitalWrite(11, HIGH);
    delay(3000);
    digitalWrite(11, LOW);
    
    digitalWrite(8, HIGH);      //Turns on yellow light, turns off red and green lights.
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    
    
    digitalWrite(11, HIGH);      //Turns on buzzer for 3 seconds.
    delay(3000);
    digitalWrite(11, LOW);
    }
  }
   else{
    digitalWrite(8, LOW);       //Flashes the red light on and off once per second until the button is pushed (buttonState == LOW).
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(8, HIGH);
    delay(1000);
    
   }
}
