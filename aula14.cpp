#include <iostream>
using namespace std;

int main (){

    int cont;

    cont=20;
    while (cont>0){
        cout << "Eu to com sono\n" << cont << "\n";
        cont--;
        if (cont == 10) {
            break;
        }
    
    }
cout << "\nRotina finalizada\n";

    return 0;
}