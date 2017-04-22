int rL = 4;
int gL = 5;
int bL = 3; 

void setup() {
  pinMode(rL, OUTPUT);
  pinMode(bL, OUTPUT);
  pinMode(gL, OUTPUT);
}

void loop() {
  digitalWrite(gL, HIGH);
  digitalWrite(bL, HIGH);
  digitalWrite(rL, HIGH);
  delay(1000);
  
  digitalWrite(gL, HIGH);
  digitalWrite(bL, LOW);
  digitalWrite(rL, LOW);
  delay(300);

  digitalWrite(gL, LOW);
  digitalWrite(bL, HIGH);
  digitalWrite(rL, LOW);
  delay(300);

  digitalWrite(gL, LOW);
  digitalWrite(bL, LOW);
  digitalWrite(rL, HIGH);
  delay(300);
  
}
