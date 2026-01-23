int buzz = 8;
int pot = A5;
int value ;
void setup() 
{
  pinMode(buzz , OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop() 
{
 value = analogRead(pot);
  Serial.println(value);
  delay(100);


if(value>=500){
  digitalWrite(buzz,HIGH);
  delay(100);
  digitalWrite(buzz,LOW);
  delay(20);
}

if(value<500) {
  digitalWrite(buzz,LOW);
}

}
