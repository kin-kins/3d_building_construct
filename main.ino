const int lstepPin =7; 
const int ldirPin = 8; 
const int rstepPin =9; 
const int rdirPin = 10; 
const int vstepPin =12; 
const int vdirPin = 13; 

 
void setup() {
  // Sets the two pins as Outputs
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


void loop()
{
  
}




void baseForward()
{
   digitalWrite(rdirPin,HIGH);
   digitalWrite(ldirPin,HIGH); 
   // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200; x++) 
  {
    digitalWrite(lstepPin,HIGH); digitalWrite(rstepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(lstepPin,LOW); digitalWrite(rstepPin,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000);
}


void baseBackward()
{
   digitalWrite(ldirPin,LOW); 
   // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200; x++) 
  {
    digitalWrite(lstepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(lstepPin,LOW); 
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


