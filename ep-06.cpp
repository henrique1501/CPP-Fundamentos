#include <iostream>

using namespace std;

int main() {
    float nota1, nota2;

    cout << "Informe a nota 1\n";
    cin >> nota1;

    cout << "Informe a nota 2\n";
    cin >> nota2;

    float media = (nota1 + nota2) / 2;

    cout << "média: " << media << endl;

    if (media >= 5) {
        cout << "Aluno aprovado!\n";
    } else {
        cout << "Aluno reprovado!\n";
    }

    if (media < 2.5) {
        cout << "Nota final: D\n";
    } else if (media < 5) {
        cout << "Nota final: C\n";
    } else if (media < 7.5) {
        cout << "Nota final: B\n";
    } else {
        cout << "Nota final: A\n";
    }

    return 0;
}