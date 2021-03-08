#include <iostream>

using namespace std;

int max(int a, int b);

int main(){
    int n1,n2,n3;
    cout << "Introduzca el valor del primer termino: \n" << endl;
    cin>>n1;
    cout << "Introduzca el valor del segundo termino: \n" << endl;
    cin>>n2;
    cout << "Introduzca el valor del primer termino: \n" << endl;
    cin>>n3;
    int max1 = max(n1,n2);
    int max2 = max(max1,n3);
    cout << "El numero mayor es: "<<max2<<endl;
    return 0;
}
int max(int a, int b){
    int c;
    if(a>b){c=a;}
    else {c=b;}
    return c;
}
