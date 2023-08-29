#include <iostream>

using namespace std;

int count(int val) {
   return val/sizeof(int);
}

int main() {
   // Alocação estática

   // int vet[4];
   // vet[0] = 5;
   // vet[1] = 10;

   // int vet[4] = {5, 10, 15, 20}; 

   // cout << vet[2] << endl;

   // for (int i= 0; i <= 3; i++) {
   //    cout << "Val atual: " << vet[i] << endl;
   // }

   // int x = sizeof(vet); // in bytes

   // cout << "Tamanho do vetor: " << x << endl;
   // cout << "Quantidade de elementos do vetor: " << count(x) << endl;

   // Alocação dinâmica

   int size;

   cout << "Digite o tamanho do vetor\n";
   cin >> size;

   int* vet = new int[size];

   for (int i = 0; i < size; i++) {
      cout << "Digite o valor do elemento " << i + 1 << " no vetor";
      cin >> vet[i];
   }

   int res = 0;

   for (int i = 0; i < size; i++) {
      res+=vet[i];
   }
   
   cout << "O resultado da soma dos elementos é: " << res << endl;

   return 0;
}