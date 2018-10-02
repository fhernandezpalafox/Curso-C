#define sumar(a,b) a+b
#define multiplicar(a,b) a*b
#define dividir(a,b) a/b

#include <iostream>


int num1 = 2;
int num2 = 4;

int suma;
int mult;
int divid;

using namespace std;

int main()
{
    suma  =  sumar(num1,num2);
    mult  =  multiplicar(num1,num2);
    divid  =  dividir(num1,num2);

    cout << "La suma es: "<< suma << "\n\n" << endl;
    cout << "La multiplicacion es: "<< mult << "\n\n" << endl;
    cout << "La division es: "<< divid << "\n\n" << endl;
    cin.get();
    return 0;
}
