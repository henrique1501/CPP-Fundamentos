#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a = 5, b = 2;

    int sum = a + b;

    cout << "Soma: " << sum << endl; 

    int sub = a - b;

    cout << "Subtração: " << sub << endl; 

    int mult = a * b;

    cout << "Multiplicação: " << mult << endl; 

    int quocidiv = a / b;
    int restdiv = a % b;

    cout << "Quociente da divisão: " << quocidiv << endl; 
    cout << "Resto da divisão: " << restdiv << endl; 

    float div = (float)a / (float)b;
    cout << "Divisão: " << div << endl; 

    float pot = pow(a, b);
    cout << "Potência: " << pot << endl; 

    // Incremento e Decremento

    cout << "a antigo: " << a << endl;
    // a = a + 1;
    // a+=1;
    // a++;

    // a = a - 1;
    // a-=1;
    // a--;

    // a = a * 2;
    // a*=2;
    cout << "a novo: " << a << endl;

    return 0;
}