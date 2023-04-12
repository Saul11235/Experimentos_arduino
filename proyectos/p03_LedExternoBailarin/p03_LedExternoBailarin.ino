/* Este proyecto utilizará la misma secuencia del ejemplo
2 pero ahora lo hará en un 
*/


void setup() {
  /*Configuramos el led conectado al pin digital 13 como OUTPUT (salida)*/
  pinMode(13 , OUTPUT);
  /*Configuramos puerto serial*/
  Serial.begin(9600);
}

void loop() {

 /*Empieza a BAILAR*/

 digitalWrite(13 , HIGH); /*prendido*/
 delay(100); /*espera 100 ms*/
 digitalWrite(13 ,LOW); /*apagado*/
 delay(400);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(400);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(200);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(100);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(400);
 
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(400);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(400);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(200);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(100);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(400);
  
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(400);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(400);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(200);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(100);
 digitalWrite(13 , HIGH); 
 delay(100); 
 digitalWrite(13 ,LOW); 
 delay(400);

 /*termina de BAILAR*/
  
 /*envia mensaje a serial*/
 Serial.print("proy13");

}
