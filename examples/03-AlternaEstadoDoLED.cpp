/*
*Autor: Gustavo Freire Bicho
 *Programa: Alterna Estado do LED
 *Descrição: troca o estado do LED quando o botão
 *é pressionado
 *Data: 15/04/2026
 *Versão 1.0
 */



#include <Arduino.h>
#include <LED.h>

Led pinLedA(10); //Define pino do LED e declara como saída
const int pinbotao = 0; //Define o pino do botão

bool estadoLED = HIGH; //Define o estado do LED

void setup()
{
  pinLedA.setEstado(estadoLED); //Liga o LED
  pinMode(pinbotao, INPUT_PULLUP); //declara o botão como entrada
}

void loop()
{
  pinLedA.update(); //atualiza as saídas
  bool estadoAtualBotao = digitalRead(pinbotao); //Lê o botão
  static bool estadoAnteriorBotao = 1; //declara o estado anterior do botão

  if(!estadoAtualBotao && estadoAnteriorBotao) //verifica se o botão foi pressionado
  {
   estadoLED = !estadoLED; //troca o estado do LED
   pinLedA.setEstado(estadoLED); //aplica o estado no LED
  }
  estadoAnteriorBotao = estadoAtualBotao;
}