int  PUL=3;
int DIR=4;
long int num=10000;//control the circles of stepmotor
//int times=2000;
void setup() {
pinMode(PUL,OUTPUT);
pinMode(DIR,OUTPUT);
digitalWrite(DIR,LOW);
}
void Accelerate(int times) {  //acceleration
  for(num=10000;num>0;num--){
    digitalWrite(PUL,HIGH);
    delay(times);
    digitalWrite(PUL,LOW);
    delay(times);
    times--;
  if((num%5==0)&&(times>=200)){
  times-=100;  
   }
   }
void Cdirection(int times) {  //change direction
  for(num;num<=10000;num++){
    digitalWrite(PUL,HIGH);
    delay(times);
    digitalWrite(PUL,LOW);
    delay(times);
    times++;
  if((num%5==0)&&(times<=2000)){
  times+=100;  
   }
  if (times=2000){
   digitalWrite(PUL,LOW);//stop motor for 0.5s
   delay(500); //停止0.5s
   
   digitalWrite(DIR,HIGH);//decelerate and change direction
  } 
  }
   }

void loop() {
  if(num>0){
Accelerate(times);
  }
  else{
Cdirection(times);
  }
}
