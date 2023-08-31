#include <iostream>

using namespace std;

class Propaganda {
    private:

    public:

    void inscrever() {
        cout << "Inscreva-se no canal!\n";
    }

    void curtir() {
        cout << "Curta esse vídeo e ative o sininho!\n";
    }
};

int main() {
   Propaganda canal;
   canal.inscrever();
   canal.curtir();
   
   return 0;
}