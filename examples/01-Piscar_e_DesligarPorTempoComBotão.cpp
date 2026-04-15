/*
 *Autor: Gustavo Freire Bicho
 *Programa: PiscaLed com Botão
 *Descrição: Pisca o Led em determinada frequência
 *e quantidade de vezes. Quando o botão e apertado,
 *o LED liga e desliga em um tempo determinado pelo
 *usuário
 *Data: 15/04/2026
 *Versão 1.0

*/

#include <Arduino.h> //define a biblioteca Arduino.h
#include <LED.h> //define a biblioteca LED.h

Led ledA(10); //define o pino do LED
const int pinBotao = 0; //define o pino do botão

void setup()
{
  pinMode(pinBotao, INPUT_PULLUP);
  ledA.piscar(1, 10); //pisca o LED em determinada frequência
                      //e quantidade de vezes
}

void loop()
{
  ledA.update(); //atualiza as saídas
  bool EstadoAtualBotao = digitalRead(pinBotao); 
  static bool EstadoAnteriorBotao = 1;

  if (!EstadoAtualBotao && EstadoAnteriorBotao) //verifica se o botão foi pressonado
  {
    ledA.ligar(3000); //Liga e desliga o LED após 3 segundos
  }
  EstadoAnteriorBotao = EstadoAtualBotao;
}