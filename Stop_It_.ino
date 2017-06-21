int led_one=2;
int led_two=3;
int winner_led=4;
int led_four=5;
int led_five=6;
int pushbutton=7;
int score=0;
void setup() {
  // put your setup code here, to run once:
 pinMode(led_one,OUTPUT);
 pinMode(led_two,OUTPUT);
 pinMode(winner_led,OUTPUT);
 pinMode(pushbutton,INPUT_PULLUP);
 pinMode(led_four,OUTPUT);
 pinMode(led_five,OUTPUT);
 Serial.begin(9600);

}
void loop() {
  // put your main code here, to run repeatedly:
   int pushbutton_value=digitalRead(pushbutton);



for (int x=1;x<=6;x++){
  digitalWrite(x,HIGH);
  delay(250);
  digitalWrite(x,LOW);
  delay(250);
  if(pushbutton_value==LOW && x==winner_led){
    score+=500;
  }
  }
  
    Serial.println(score);

}
