  int tiempo=100;
void setup() {
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
for(int i=6;i<11;i++){
digitalWrite(i,HIGH);
delay(tiempo);
digitalWrite(i,LOW);
delay(tiempo);}
for(int i=11;i>6;i--){
digitalWrite(i,HIGH);
delay(tiempo);
digitalWrite(i,LOW);
delay(tiempo);}
}
