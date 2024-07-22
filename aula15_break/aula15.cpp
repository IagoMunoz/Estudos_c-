#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int cont;
    cont = 0;

    while(cont < 10000) {
        cout << cont << "\n";
        
        if (cont == 5000) {
            break;
        }
        cont++;
    }  

    return 0;
}