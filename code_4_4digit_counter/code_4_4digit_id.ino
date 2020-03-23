int led[] = {9,10, 11, 12};
int a,b,c,d;
int i = 0;
void deciToBin4digits(int k);
void alloff(){
  a=b=c=d=0;
}
void allon(){
  a=b=c=d=1;
}
void setup() {
  // put your setup code here, to run once:
  int i;
  for(i = 0; i < 4; i++){
      pinMode(led[i], OUTPUT);
   }
}
void loop(){
  if(i>15){
    i=0;
  }
  else{
    deciToBin4digits(i);
  }
  digitalWrite(led[0],a);
  digitalWrite(led[1],b);
  digitalWrite(led[2],c);
  digitalWrite(led[3],d);
  delay(500);
  alloff();
  delay(500);
  i++;
}
void deciToBin4digits(int k){
  if(k==0){
    a=b=c=d=0;  
  }
  if(k==1){
    a = 0;
    b = 0;
    c = 0;
    d = 1;
  }
  if(k==2){
    a = 0;
    b = 0;
    c = 1;
    d = 0;    
  }
  if(k==3){
    a = 0;
    b = 0;
    c = 1;
    d = 1;  
  }
  if(k==4){
    a = 0;
    b = 1;
    c = 0;
    d = 0;    
  }
  if(k==5){
    a = 0;
    b = 1;
    c = 0;
    d = 1;    
  }
  if(k==6){
    a = 0;
    b = 1;
    c = 1;
    d = 0;    
  }
  if(k==7){
    a = 0;
    b = 1;
    c = 1;
    d = 1;    
  }
  if(k==8){
    a = 1;
    b = 0;
    c = 0;
    d = 0;    
  } 
  if(k==9){
    a = 1;
    b = 0;
    c = 0;
    d = 1;    
  } 
  if(k==10){
    a = 1;
    b = 0;
    c = 1;
    d = 0;    
  }
  if(k==11){
    a = 1;
    b = 0;
    c = 1;
    d = 1;    
  } 
  if(k==12){
    a = 1;
    b = 1;
    c = 0;
    d = 0;    
  }
  if(k==13){
    a = 1;
    b = 1;
    c = 0;
    d = 1;    
  } 
  if(k==14){
    a = 1;
    b = 1;
    c = 1;
    d = 0;    
  } 
  if(k==15){
    a = 1;
    b = 1;
    c = 1;
    d = 1;    
  } 
}
