# Saidas-dixitais-P11
Sen faltas vai mellor
/*Esta práctica é igual que anterior xa 
     que na p10 ainda que non poñía tempo
          para a saída 12 eu púxenas iguais 
              eso fixo que nesta non tivese que facer nada
*/
// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(12, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
// comprovado
