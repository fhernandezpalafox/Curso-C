#include <iostream>
int num1=4,num2=2,suma;

using namespace std;

int sumar()
{
    return suma = num1 +  num2;
}

int sumar(int a, int b)
{
    return a + b;
}

int sumarTres(int a, int b,int c = 5)
{
    return a + b + c;
}

void  function()
{
    cout << "Funcion no regresa nada " << "\n" << endl;
}

int main()
{
    //sumar();
    function();
    //suma = sumar(num1,num2);
    suma = sumarTres(num1,num2);
    cout << suma << endl;
    cin.get();
    return 0;
}


