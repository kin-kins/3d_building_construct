


void setup() 
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(11,OUTPUT);
}
void opens()
{
  analogWrite(3,255);
  analogWrite(5,0); 
}

void closes()
{
  analogWrite(3,0);
  analogWrite(5,255);
}

void height_up()
{
  analogWrite(6,255);
  analogWrite(11,0);
}

void height_down()
{
  analogWrite(6,0);
  analogWrite(11,255);
}


void loop() 
{
{
opens();
height_up();
} 
delay(3000);
{
height_down();
closes();
}
delay(5000);

}ja
