int celsius = 0;
int fahrenheit = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  fahrenheit = ((celsius * 9) / 5 + 32);
  
  Serial.print(celsius);
  Serial.print(" C, ");
  Serial.print(fahrenheit);
  Serial.println(" F");
  
  if (celsius<10){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }
  
  if (celsius>10&&celsius<25){
    digitalWrite(9, HIGH);
  }
  else{
    digitalWrite(9, LOW);
  }
  
  if (celsius>25){
    digitalWrite(10, HIGH);
  }
  else{
    digitalWrite(10, LOW);
  }
  
  delay(1000); 
}