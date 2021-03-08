#include <iostream>

using namespace std;

void suma (int a,int b){
int c=a+b;
    cout <<"\nEl resultado de la suma es: \n" << c <<endl;
}
int main()
{
    int numero1,numero2;
    cout << "Introduzca el primer numero: " << endl;
    cin >>numero1;
    cout << "\nIntroduzca el segundo numero: " << endl;
    cin >>numero2;
    suma(numero1,numero2);

    return 0;
}
