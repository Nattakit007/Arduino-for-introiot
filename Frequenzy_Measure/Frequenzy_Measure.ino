int led = 13;
float kab;
bool gg = 1;
int str1 = 30;
int str2 = 1500;
float adjx = 0.1;

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  

  // put your setup code here, to run once:

}

void loop() {
  while(gg){
    for(float i = 0;i<=str1;i= i+adjx){
    digitalWrite(led,1);
    delay(str1-i);
    digitalWrite(led,0);
    delay(str1 - i);
    kab = (str1-i)+(str1-i);
    kab/=1000;
    Serial.print("kab = ");
    Serial.println(kab);
    Serial.println(i);
    Serial.println("******************************");
  }
  gg = 0;
  
  }
  
  digitalWrite(led,1);


  // put your main code here, to run repeatedly:

}
