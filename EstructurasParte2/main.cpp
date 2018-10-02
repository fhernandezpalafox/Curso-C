#include <iostream>

using namespace std;

int main()
{
    struct Hogar
    {
        int numeroDireccion;
        int numeroTelefono;
        Hogar() {numeroDireccion=0;numeroTelefono=2;}
        int verDireccion(){return numeroDireccion;}
        int GuardarDireccion(int a){numeroDireccion =a;}
    }Fernandez,Gonzalez,Perez;

    Fernandez.numeroTelefono  = 103466;
    Fernandez.numeroDireccion = 6456;

    Gonzalez = Fernandez; //tenre sus mismas propíedades

      cout << Gonzalez.numeroTelefono << endl;
      cout << Perez.numeroTelefono << endl;

      Perez.GuardarDireccion(45);
      cout << Perez.verDireccion() << endl;

    return 0;
}
