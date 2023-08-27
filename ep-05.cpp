#include <iostream>

using namespace std;

#define pi 3.14;
#define like cout << "Curta esse vídeo";

void subscribe() {
    cout << "Subscribe to the channel\n";
}

int sum(int &x, int &y) {
    int t;
    t = 1;

    int sum = x + y;
    x = 45;

    return sum;
}

int main() {
    subscribe();

    int t;
    t = 0;

    int a = 10;
    int b = 20;
    int res = sum(a, b);

    cout << "Resultado da soma: " << res << endl;
    cout << "T: " << t << endl;

    cout << "Novo valor de a: " << a << endl;


    // cout << "PI: " << pi;
    like;

    return 0;
}