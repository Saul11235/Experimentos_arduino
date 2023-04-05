/* Este proyecto sera similar al anterior pero
ahora usaremos el led integrado a la placa y haremos
que repita un patron mientras que digite baila en |el
puerto serial
*/


void setup() {
  /*Configuramos el led de la placa como OUTPUT (salida)*/
  pinMode(LED_BUILTIN, OUTPUT);
  /*Configuramos puerto serial*/
  Serial.begin(9600);
}

void loop() {

 /*Empieza a BAILAR*/

 digitalWrite(LED_BUILTIN, HIGH); /*prendido*/
 delay(100); /*espera 100 ms*/
 digitalWrite(LED_BUILTIN,LOW); /*apagado*/
 delay(400);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(400);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(200);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(100);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(400);
 
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(400);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(400);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(200);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(100);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(400);
  
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(400);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(400);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(200);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(100);
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(100); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(400);

 /*termina de BAILAR*/
 
  
 /*envia mensaje a serial*/
 Serial.print("baila");

}


