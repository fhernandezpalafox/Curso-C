#include <iostream>

using namespace std;

int array[5];
int *p;

int main()
{
    p = array; //esto es lo mismo p= &array[0]
    p++;
    cout << "Direccion array[0]:" << &array <<" Puntero: "<< p << endl;

    return 0;
}
