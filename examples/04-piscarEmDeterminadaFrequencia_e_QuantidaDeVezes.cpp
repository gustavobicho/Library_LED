/*
 *Programa: Pisca LED
 *Descrição: Pisca o Led em determinada frequência
 *e em determinada quantidade de vezes, após isso
 *o LED desliga
 *Data: 15/04/2026
 *Versão 1.0
 */

#include <Arduino.h>
#include <LED.h>

Led pinLedA(10);

void setup()
{
  pinLedA.piscar(2, 10); //determina a frequencia e a quantidade
                         //de piscadas
}

void loop()
{
 pinLedA.update(); //atualiza as saidas
}