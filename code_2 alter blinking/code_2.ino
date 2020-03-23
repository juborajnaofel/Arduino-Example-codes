int led[] = {9,10, 11, 12};
void setup() {
  // put your setup code here, to run once:
  int i;
  for(i = 0; i < 4; i++){
      pinMode(led[i], OUTPUT);
   }
}

void loop() {
  int i =0;
  for(i =0;i<4;i++){
    digitalWrite(led[i], HIGH);
    delay(1000);
    digitalWrite(led[i], LOW);
    delay(1000);
    digitalWrite(led[i], HIGH);
    delay(1000);
    digitalWrite(led[i], LOW);
    delay(1000);
  }
  for(i =3;i>=0;i--){
    digitalWrite(led[i], HIGH);
    delay(1000);
    digitalWrite(led[i], LOW);
    delay(1000);
    digitalWrite(led[i], HIGH);
    delay(1000);
    digitalWrite(led[i], LOW);
    delay(1000);
  }

}
