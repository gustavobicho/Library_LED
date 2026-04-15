/*
 *Programa: Liga LED
 *Descrição: Define o estado do LED
 *Data: 15/04/2026
 *Versão 1.0
 */

#include <Arduino.h>
#include <LED.h>

Led pinLedA(10); //define o pino e declara como saída

void setup()
{
  pinLedA.setEstado(HIGH); //define o estado do LED
}

void loop()
{
 pinLedA.update(); //atualiza as saídas
}