int pin_num = 7;
int in = 8;
#define RELAY_ON LOW
#define RELAY_OFF HIGH

void setup() {
  pinMode(pin_num, OUTPUT);
  digitalWrite(pin_num, HIGH);
  pinMode(in, INPUT);
  digitalWrite(in, HIGH);
  Serial.begin(9600);
}

void loop() {
  delay(100);
  byte val = digitalRead(in);
  
  if(val==HIGH){
    Serial.println("RELAY_ON");
    digitalWrite(pin_num, RELAY_ON);
  }else{
    Serial.println("RELAY_OFF");
    digitalWrite(pin_num, RELAY_OFF);
  }
  
}
