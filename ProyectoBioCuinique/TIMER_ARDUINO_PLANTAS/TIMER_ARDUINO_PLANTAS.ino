const int ledPIN = 2;
int contador=0;
void setup() {
  Serial.begin(9600);    //iniciar puerto serie
  pinMode(ledPIN , OUTPUT);  //definir pin como salida
}
 
void loop(){
  Serial.print("Hora: ");
  digitalWrite(ledPIN , HIGH);   // poner el Pin en HIGH
  delay(120000);                   // esperar 2 minutos 
  digitalWrite(ledPIN , LOW);    // poner el Pin en LOW
  delay(7080000);                   // esperar 1 hora y 58 minutos(118 minutos) 
  contador++;
  if(contador>=7){
    delay(36000000);    //esperar 12 horas para empezar el dia siguiente(720 minutos)
    contador=0;
  }
  
}
