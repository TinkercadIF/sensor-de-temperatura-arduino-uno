int valor = 0;
int temperatura = 0;

void setup()
{
   
  Serial.begin(9600);
}

void loop()
{
  valor = analogRead(A0);
  
  temperatura= map(valor, 104, 358, 1, 125);
  Serial.print("Valor -> ");
  Serial.print(valor);
  Serial.print(" ''' Temperatura = ");
  Serial.print(temperatura);
  Serial.println("C");
  if (temperatura>50){
    ligarLED();
    }
  else{
    desligarLED();
  }
}
