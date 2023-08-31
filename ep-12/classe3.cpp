#include <iostream>

using namespace std;

class Carro {
    private:
    int ano;
    float valor, km;

    public:

    Carro(int ano, float valor, float km);

    void setAno(int ano);

    int getAno();
};

int main() {
   Carro ford(1996, 10000, 150000);

   int fordAno = ford.getAno();

   cout << "Ano do meu ford: " << fordAno << endl;
   
   return 0;
}

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