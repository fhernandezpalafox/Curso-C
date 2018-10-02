#include <iostream>

using namespace std;

int main()
{
    struct Personaje
    {
      int edad;
      int telefono;
    }santiago;

    santiago.edad =  17;
    santiago.telefono = 4576576;

    cout << santiago.edad <<" "<<santiago.telefono << endl;
    cin.get();
    return 0;
}
