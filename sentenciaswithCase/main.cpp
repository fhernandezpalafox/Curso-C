#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << "Escribe una letra" << endl;
    cin >> c; // el usuario escriba se guarda en la variable

    switch (c)
    {
         case 'a':
         case 'e':
         case 'i':
         case '0':
         case 'u':
           cout << "Es una vocal" << "\n\n" << endl;
         break;
         default:
            cout << "Es una consonante" << "\n\n" << endl;
    }
    system("pause");
    return 0;
}
