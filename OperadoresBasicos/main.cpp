#include <iostream>
#include <conio.h>


using namespace std;
bool comprobador;
char* booleanoenletra;
int num1 = 12;
int num2 = 12;

int main()
{

    comprobador = (num1 = num2);
    if(comprobador == true)
    {
        booleanoenletra = "true";
        }else
        {
            booleanoenletra = "false";
            }
    //booleanoenletra = (comprobador == true)?"true":"false";
    cout << booleanoenletra << endl;
    getch();// para no cerrar la aplicacion es de conio.h
    return 0;
}
