#include <iostream>

using namespace std;

int main() {
    float nota1, nota2;

    cout << "Informe a nota 1\n";
    cin >> nota1;

    cout << "Informe a nota 2\n";
    cin >> nota2;

    float media = (nota1 + nota2) / 2;

    if (media < 2.5) {
        cout << "Nota final: D\n";
    } else if (media < 5) {
        cout << "Nota final: C\n";
    } else if (media < 7.5) {
        cout << "Nota final: B\n";
    } else {
        cout << "Nota final: A\n";
    }

    float freq;

    cout << "Qual é a frêquencia do aluno?\n";
    cin >> freq;

    // if (media >= 5 && freq >= 75) {
    //     cout << "Aluno aprovado!\n";
    // } else {
    //     cout << "Aluno reprovado!\n";
    // }

    // if (media < 5 || freq < 75) {
    //     cout << "Aluno reprovado!\n";
    // } else {
    //     cout << "Aluno aprovado!\n";
    // }

    // Operador ternário
    (media >= 5) ? cout << "Aprovado!\n" :  cout << "Reprovado\n";

    return 0;
}