#include <iostream>
using namespace std;

int main(){

    cout << "\n";

    int num = 10;

    cout << num << "\n\n";

    num *=-1;

    cout << num << "\n\n";

    //isso nao é um print ta realmente invertendo
    //mas isso nao muda o valor da variaveil
    cout << -num << "\n\n";

    num  = -num;

    cout << num << "\n\n";
}