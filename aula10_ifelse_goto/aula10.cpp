#include <iostream>

using namespace std;

int main (){
    cout <<"\n";

    int n1, n2, res;
    char opc;

    //label
    inicio:

    cout << "\nvalor da nota 1: "; cin >> n1;

    cout << "\nvalor da nota 2: "; cin >> n2;

    res = n1 + n2;

    if (60 <= res){
        cout << "aluno aprovado";
    } else if(40 <= res){
        cout << "aluno de rec";   
    } else {
        cout << "rodou paizao";
    }

    cout << "\nDigitar outras notas?[s/n]: "; cin >> opc;

    if(opc == 'S' or 's'){
        goto inicio;
    }

    return 0;
}  