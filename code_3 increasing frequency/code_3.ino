int led[] = {9,10, 11, 12};
int j=1000;
void setup() {
  // put your setup code here, to run once:
  int i;
  for(i = 0; i < 4; i++){
      pinMode(led[i], OUTPUT);
   }
}

void loop() {
  int i = 0;
  for(i=0;i<2;i++){
    digitalWrite(led[0], HIGH);
    delay(j);
    digitalWrite(led[0], LOW);
    delay(j);
  }
  j = j-100;
}
