/* Esto es un comentario no se ejecuta
puede hacerse en varias lineas */

// o tambien solo en una linea

/* ----------------------------
En Arduino hay dos partes principales 
la primera es setup() en donde se configura el entorno
y la segunda es loop() que es un loop (teoricamente) infinito
-------------------------------
recuerda que la extension de los archivos es *.ino
y que ademas el archivo principal debe 
tener el mismo nombre de su carpeta contenedora
-------------------------------
la estructura void nombreFuncion() {}
void es una funcion que no devuelde un resultado 
-------------------------------
*/


void setup() {
 //  configuramos serial a 9600Bd baudios
  Serial.begin(9600);
 /*  -------------------------------
 Nota.- un baudio es una unidad que expresa 
        velocidad de transmision de informacion
        mediante CARACTERES / SEGUNDO.
 ---------------------------------- */
}


void loop() {
  // coloca un string en el serial
  Serial.println("Hola mundo!"); 
  // espera 1000 milisegundos (1s)
  delay(1000);
}

