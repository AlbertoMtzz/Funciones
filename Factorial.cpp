#include <iostream>
#include <stdio.h>

using namespace std;

int factorial(int a);
int main(){
    int n1;
    cout << "Introduzca el numero: " << endl;
    cin >>n1;
    int fact= factorial(n1);
    cout << "El factorial es: "<<fact<<endl;

    return 0;
}
int factorial (int a){
    int i;
    int resultado = 1;
    for(i=1;i<=a;i++){
        resultado *=i;
    }
    return resultado;
}

