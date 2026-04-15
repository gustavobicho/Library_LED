/*
 *Programa: Pisca LED
 *Descrição: Pisca o Led em determinada frequência
 *Data: 15/04/2026
 *Versão 1.0
 */

#include <Arduino.h>
#include <LED.h>

Led ledA(10);


void setup()
{
  ledA.piscar(2); //Pisca o Led na frequencia determinada no parenteses
}

void loop()
{
  ledA.update(); //atualiza as saídas
}