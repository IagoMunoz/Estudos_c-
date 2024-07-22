#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int cont;
    cont = 20;

    //percorre o codigo e so depois faz a comparaçao

    do {
        cout << "Teste" << cont << "\n";
        cont++;
    } while(cont < 20);

    return 0;
}