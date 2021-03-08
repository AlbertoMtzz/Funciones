#include <stdio.h>
#include <iostream>

using namespace std;

void max(int, int);

int main(){
    int n1,n2;
    cout << "Introduzca el valor del primer numero: " <<endl;
    cin>> n1;
    cout<< "Introduzca el valor del segundo numero: " <<endl;
    cin>>n2;
    max (n1,n2);
    return 0;

}
void max (int a, int b){
    if(a>b){
        cout << "Es mayor: "<<a<<endl;
    }
    else if(a<b){
        cout<< "El mayor es: " <<b<<endl;
    }
    else
        cout<< "Son iguales" <<endl;
}
