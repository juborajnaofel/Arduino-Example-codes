int led[] = {9,10, 11, 12};
void setup() {
  // put your setup code here, to run once:
  int i;
  for(i = 0; i < 4; i++){
      pinMode(led[i], OUTPUT);
   }
}

void loop() {
  digitalWrite(led[0], HIGH);
  delay(1000);
  digitalWrite(led[1], HIGH);
  delay(1000);
  digitalWrite(led[2], HIGH);
  delay(1000);  
  digitalWrite(led[3], HIGH);
  delay(1000);  
  digitalWrite(led[3], LOW);
  delay(1000);
  digitalWrite(led[2], LOW);
  delay(1000);
  digitalWrite(led[1], LOW);
  delay(1000);  
  digitalWrite(led[0], LOW);
  delay(1000); 
}
