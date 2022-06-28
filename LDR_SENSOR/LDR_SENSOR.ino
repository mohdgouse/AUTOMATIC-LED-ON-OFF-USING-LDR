void setup() 
{
Serial.begin(9600);
pinMode(9,OUTPUT);  
}

void loop() 
{
int data = analogRead(A0);
Serial.println(" ");
Serial.print("LIGHT SENSOR VALUE=");
Serial.print(data);
if(data<1000)
{
  digitalWrite(9,HIGH);
}
else
{
  digitalWrite(9,LOW);
}
  

}
