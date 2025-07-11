int led[5] = {10,9,8,7,6};
void setup() {
  for(int i = 0;i<=4;i++){
    pinMode(led[i],OUTPUT);
  }
  // put your setup code here, to run once:

}

void loop() {
  for(int i = 0;i<=4;i++){
    digitalWrite(led[i],1);
    digitalWrite(led[!i],0);
    delay(1000);
     digitalWrite(led[i],0);
  }
  for(int i = 4;i>=0;i--){
    digitalWrite(led[i],1);
    digitalWrite(led[!i],0);
    delay(1000);
     digitalWrite(led[i],0);
  }
  

  // put your main code here, to run repeatedly:

}
