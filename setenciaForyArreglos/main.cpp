#include <iostream>

using namespace std;

int main()
{
    for(int i =0; i< 5;i++)
    {
        cout << "Hola mundo en :"<< i << endl;
        }
    cout << "\n\n" << endl;
    cout << "segundo ejemplo de for y arreglos " << endl;

     char c[4];
     c[0] = 'H';
     c[1] = 'O';
     c[2] = 'L';
     c[3] = 'A';

      for(int j =0; j < 4;j++)
      {
         cout << c[j];
         }
    cout << endl;
    cin.get();
    return 0;
}
