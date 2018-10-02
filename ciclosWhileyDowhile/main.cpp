#include <iostream>

using namespace std;

int main()
{
    cout << "while" << "\n\n" << endl;

    //intruccion while
    int i=0;
     while(i<=5)
     {
         cout << (i * 5)  << endl;
         i++;
         }

      cout << "do while" << "\n\n" << endl;
      //intruccion  do while
      int j=0;
       do
       {
           cout << (j * 5) << endl;
            j++;
           }while(j==1);
    //cout << "Hello world!" << endl;
    cin.get();
    return 0;
}
