void setup() {
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}
void loop()
{
  int x;
  x = analogRead(3);
  if (x<=256)
 analogWrite(9,x);
 else if (x>=256 && x<=512)
 analogWrite(10,x-256);
else 
analogWrite(11,x-512);
 }

