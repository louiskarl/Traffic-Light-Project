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
    while (pgmControl == 1){
    
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    
    
    delay(17000);
    digitalWrite(11, HIGH);
    delay(3000);
    digitalWrite(11, LOW);

   digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
