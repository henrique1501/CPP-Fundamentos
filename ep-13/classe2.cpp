#include <iostream>

using namespace std;

class Carro {
    private:
    int ano;
    float valor, km;

    public:

    // Contructor
    Carro(int ano = 0, float valor = -1, float km = -1) {
        this->ano = ano;
        this->valor = valor;
        this->km = km;
    }

    void setAno(int ano) {
        this->ano = ano;
    }

    int getAno() {
        return this->ano;
    }
};

int main() {
   Carro ford(1995, 10000, 150000);

   int fordAno = ford.getAno();

   cout << "Ano do meu ford: " << fordAno << endl;
   
   return 0;
}