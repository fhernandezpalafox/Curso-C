#include <iostream>

using namespace std;

int num1 = 15;
int num2 =  15;

int main()
{
    cout << "num1=" << num1 << " num2=" << num2 << endl;
    if( num1 <  num2 )
    {
        cout << "es menor" << endl;
        }else if(num1 == num2)
        {
            cout << "son iguales" << endl;
            }
        else
        {
            cout << "es mayor" << endl;
            }

    cin.get();
    return 0;
}
