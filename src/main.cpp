#include <Arduino.h>

#define SENSOR 4
#define LED 11

int est = 0;
bool ligado = false;

void setup() {
  
  Serial.begin(9600);
  pinMode(SENSOR, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  
  est = digitalRead(SENSOR);

  Serial.println(est);

  if(est == HIGH) {

    digitalWrite(LED, ligado ? LOW : HIGH);
    ligado = !ligado;
    delay(2000);
    
  } 

  delay(500);

}