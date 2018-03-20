int buzzer = 8;
int led = 13;

void setup()
{
   pinMode (buzzer, OUTPUT); //declaramos el pin 8 como salida
   pinMode (led, OUTPUT);// declaramos el pin 13 como salida
   
}

void loop()
{
     digitalWrite(led,HIGH); // Enciende el led
   analogWrite(buzzer, 128); // emite sonido
   delay(500); //espera medio segundo
   digitalWrite(buzzer, LOW); //deja de emitir
   digitalWrite(led,LOW); // apaga el led
   delay(500) // espera medio segundo
}
 
