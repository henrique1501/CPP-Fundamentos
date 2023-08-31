#include <iostream>
#include "carro.h"

using namespace std;

int main() {
   Carro ford(2001, 10000, 150000);

   int fordAno = ford.getAno();

   cout << "Ano do meu ford: " << fordAno << endl;

   // system("pause");
   
   return 0;
}