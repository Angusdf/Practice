
/********************************************
*@author: Angus Frisch                      *
*@discrption: Function will output the      *
*             greater of two numbers        *
*                                           *
*//*****************************************/

#include <iostream>

using namespace std;

int max(int a, int b);

int main()
{
    int a = 0, b = 0;

    while(1)
    {
        cout << "Enter first number: " << endl;
        cin >> a;
        cout << "Enter second number: " << endl;
        cin >> b;
        
        cout << "Max is: " << max(a,b) << endl << endl;
    }



}

int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
