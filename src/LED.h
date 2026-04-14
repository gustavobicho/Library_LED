#ifndef LED_h
#define LED_h

#include <Arduino.h>

class Led
{
private:
    uint8_t pino;
    bool estado; //atributo
    bool desligarPorTempo = false;
    uint32_t desligarNoMomento;

    uint32_t tempoAnteriorPiscar;
    uint32_t tempoEspera;
    bool estadoPiscar;
    uint16_t repeticoes;

    void funcaopiscar();
    void funcaoDesligamento();

public:
    Led(uint8_t pin); // Método contrutor, deverá ter o mesmo nome da classe

    void ligar(); //OK
    void ligar(unsigned long tempoligado_ms);

    void desligar(); //OK

    void piscar(); //OK
    void piscar(float frequencia);
    void piscar(float frequencia, uint16_t repeticoes);

    bool getEstado(); //OK
    uint8_t getPino(); //OK

    void setEstado(bool estado);

    void alternar(); //OK
    
    void update(); //OK
};

#endif