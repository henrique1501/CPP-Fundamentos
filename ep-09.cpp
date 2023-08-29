#include <iostream>
#include <cstddef>

using namespace std;

int main() {
   int var1;
   int* pont1;
   var1 = 5;
   pont1 = &var1;
   cout << "Valor da variável, através do seu nome: " << var1 << endl;
   cout << "Endereço armazenado no ponteiro: " << pont1 << endl;
   cout << "Valor da variável no ponteiro: " << *pont1 << endl;

   int var2;
   var2 = *pont1;
   cout << "Valor da variável 2: " << var2 << endl;

//    *pont1 = 30;
//    cout << var1 << endl;

   var2 = 50;
   // pont1 = &var2;
   // cout << *pont1 << endl;

   // int* pont2;
   // pont2 = NULL;
   // cout << *pont2 << endl;

   int* pont3 = new int;
   *pont3 = 35;
//    cout << pont3 << endl;
//    cout << *pont3 << endl;

//    *pont3 = *pont1;
   delete pont3;
   pont3 = pont1;
   cout << pont1 << endl;
   cout << pont3 << endl;
   
   return 0;
}