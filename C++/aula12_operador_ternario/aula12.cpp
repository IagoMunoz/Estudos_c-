#include <iostream>
using namespace std;

int main (){
    cout << "\n";

    int n1, n2, nota;
    string res;

    //(expressao) ? valor1 : valor2

    cout << "digite a primeira nota: "; cin >> n1;
    cout << "digite a nota num dois: "; cin >> n2; 

    nota = n1 + n2;

    //(nota >= 60) ? res="aprovado" : res =  "Reprovado";
    // ou
    res = (nota >= 60) ? "aprovado" : "repraovas";

    cout << "\nSituaçao do aluno: " << res << "\n";

    return 0;
}