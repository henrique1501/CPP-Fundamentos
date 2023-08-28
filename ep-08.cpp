#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Diga um número inteiro não negativo!\n";
    cin >> n;

    int sum = 0;
    int counter = 1;

    // while(counter <= n) {
    //     sum+=counter;
    //     counter++;
    // }

    // do {
    //     sum+=counter;
    //     counter++;
    // } while (counter <= n);

    for (int j = 1; j <= n; j++) {
        sum+=j;
    }

    cout << "Soma dos números de 0 até " << n << "= " << sum << endl;


    return 0;
}