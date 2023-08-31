#include <iostream>
#include "carro.h"

using namespace std;

Carro::Carro(int ano = 0, float valor = -1, float km = -1) {
    this->ano = ano;
    this->valor = valor;
    this->km = km;
}


void Carro::setAno(int ano) {
    this->ano = ano;
}

int Carro::getAno() {
    return this->ano;
}