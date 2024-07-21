#include <iostream>
using namespace std;

int main (){
    cout << "\n";

    int val;
    cout << "Selecione uma cor: \n";
    cout << "1 -carro, 2 moto, 3 avisao,  4 helicopos\n";

    cin >> val;
    
    switch(val){
        case 0:
        case 1:
        case 2:
            cout << "terrestre\n";
            switch(val){
                case 1:
                    cout << "carro\n";
                    break;
                case 2:
                    cout << "moto\n";
                    break;
            }
            break;
            
       case 3:
       case 4:
            cout << "voador\n";
            switch(val){
                case 3:
                    cout << "viao\n";
                    break;
                case 4:
                    cout << "copos\n";
                    break;
            }
            break;

        default:
            cout << "invalido\n";
            break;
    }

    cout << "\nprograma finalizado \n";

    return 0 ; 
}