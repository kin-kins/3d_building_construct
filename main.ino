const int lstepPin =8; 
const int ldirPin = 7; 
const int rstepPin =10; 
const int rdirPin = 9; 
const int vstepPin =13; 
const int vdirPin = 12; 

 
void setup() {
  pinMode(lstepPin,OUTPUT); 
  pinMode(ldirPin,OUTPUT);
  pinMode(rstepPin,OUTPUT); 
  pinMode(rdirPin,OUTPUT);
  pinMode(vstepPin,OUTPUT); 
  pinMode(vdirPin,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(11,OUTPUT);
}

void baseForward()
{
     digitalWrite(ldirPin,LOW); 
     digitalWrite(rdirPin,LOW); 
  for(int x = 0; x < 500; x++) 
  {
    {
      digitalWrite(lstepPin,HIGH); 
      digitalWrite(rstepPin,HIGH);
    } 
      delayMicroseconds(500); 
    {
      digitalWrite(lstepPin,LOW);  
      digitalWrite(rstepPin,LOW);
    }
     delayMicroseconds(500); 
  }
    delay(1000);
}


void baseBackward()
{
     digitalWrite(ldirPin,HIGH); 
     digitalWrite(rdirPin,HIGH); 
  for(int x = 0; x < 500; x++) 
  {
    {
      digitalWrite(lstepPin,HIGH); 
      digitalWrite(rstepPin,HIGH);
    } 
      delayMicroseconds(500); 
    {
      digitalWrite(lstepPin,LOW);  
      digitalWrite(rstepPin,LOW);
    }
     delayMicroseconds(500); 
  }
    delay(1000);
}



void verticalLeft()
{
   digitalWrite(vdirPin,HIGH);
  for(int x = 0; x < 200; x++) 
  {
    digitalWrite(vstepPin,HIGH);
    delayMicroseconds(500); 
    digitalWrite(vstepPin,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000);
}


void verticalRight()
{
   digitalWrite(vdirPin,LOW); 
  for(int x = 0; x < 200; x++) 
  {
    digitalWrite(vstepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(vstepPin,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000);
}

void opens()
{
  digitalWrite(3,1);
  digitalWrite(5,0); 
  delay(3000);
  //closes();
}

void closes()
{
  digitalWrite(3,0);
  digitalWrite(5,1);
  delay(6000);
}

void height_up()
{
  digitalWrite(6,1);
  digitalWrite(11,0);
  delay(8000);
}

void height_down()
{
  digitalWrite(6,0);
  digitalWrite(11,1);
  delay(8000);
}
void height_stop()
{
  digitalWrite(6,0);
  digitalWrite(11,0);
  //delay(3000);
}


void loop()
{

//    baseForward();
//    delay(3000);
//    verticalRight();
//    delay(1000);
    opens();
    closes();
    height_down();
    height_up();  
    height_stop();
}

