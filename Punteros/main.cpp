#include <iostream>

using namespace std;

int numero  = 12;
int *puntero = &numero;

int main()
{
    cout << puntero << endl; //nos dice la posicion en la memoria
    cout << *puntero << endl; // nos da el valor
    cout << &numero << endl; //nos da la direccion de la memorias
    cin.get();
    return 0;
}
