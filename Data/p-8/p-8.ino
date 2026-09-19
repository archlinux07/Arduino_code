int S1=A5;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int M=analogRead(S1);
  Serial.print("Gas Read=");
  Serial.print(M);
  delay(1000);
}