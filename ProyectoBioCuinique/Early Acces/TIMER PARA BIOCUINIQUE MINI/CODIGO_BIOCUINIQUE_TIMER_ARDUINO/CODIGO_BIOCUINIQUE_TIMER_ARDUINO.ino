const int ledPIN = 2;
const int ledPIN2 = 4;
const int ledPIN3 = 7;
const int ledPIN4 = 8;
int contador=0;
void setup() {
  Serial.begin(9600);    //iniciar puerto serie
  pinMode(ledPIN , OUTPUT);  //definir pin como salida
  pinMode(ledPIN2 , OUTPUT);  //definir pin como salida
  pinMode(ledPIN3 , OUTPUT);  //definir pin como salida
  pinMode(ledPIN4 , OUTPUT);  //definir pin como salida

}
 
void loop(){
  Serial.println("HORA");
  digitalWrite(ledPIN , LOW);   // poner el Pin en HIGH
  digitalWrite(ledPIN2 , LOW);   // poner el Pin en HIGH
  digitalWrite(ledPIN3 , LOW);   // poner el Pin en HIGH
  digitalWrite(ledPIN4 , LOW);   // poner el Pin en HIGH
  delay(120000);                   // esperar 2 minutos 120000
  digitalWrite(ledPIN , HIGH);    // poner el Pin en LOW
  digitalWrite(ledPIN2 , HIGH);    // poner el Pin en LOW
  digitalWrite(ledPIN3 , HIGH);    // poner el Pin en LOW
  digitalWrite(ledPIN4 , HIGH);    // poner el Pin en LOW
  delay(7080000);                   // esperar 1 hora y 58 minutos(118 minutos) 7080000
  contador++;
  if(contador>=7){
    delay(36000000);    //esperar 12 horas para empezar el dia siguiente(720 minutos) 36000000
    contador=0;
  }
  
}
