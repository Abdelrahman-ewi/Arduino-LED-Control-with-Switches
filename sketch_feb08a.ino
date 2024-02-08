int led1=5;
int led2=12;
int led3=11;
int led4=10;
int led5=7;
int led6=3;
int sw1=9;
int sw2=6;
int rs1=0;
int rs2=0;
void setup()
{
  Serial.begin(9600);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}

void loop()
{
 rs1= digitalRead(sw1);
 if(rs1)
 {
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH); 
 }
 else
 {
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW); 
 }
   rs2 = digitalRead(sw2) ;
 if(rs2)
 {
  digitalWrite(led4, HIGH); 
  digitalWrite(led6, HIGH); 
 }
 else
 {
  digitalWrite(led4, LOW); 
  digitalWrite(led6, LOW); 
 }
    
    
    
}
