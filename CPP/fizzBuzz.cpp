/********************************************
*@author: Angus Frisch                      *
*@discrption: Fizz Buzz. Print fizz for     *
*             multiples of 3 and buzz if    *
*	      multiples of 5. If multiples  *
*	      of both, print both.          *
*//*****************************************/

#include <iostream>
#include <stdlib.h>

int main()
{
    int i = 0;
    bool threeFlag, fiveFlag;
    for(i = 1; i<=100; i++)
    {
        threeFlag = false;
        fiveFlag = false;

        if( i%3 == 0)
        {
            std::cout << "Fizz";
            threeFlag = true;
        }
        if(i%5 == 0)
        {
            std::cout << "Buzz";
            fiveFlag = true;
        }
        if(fiveFlag == false && threeFlag == false)
            std::cout << i;
        
        if(i != 100)
            std::cout << ", ";
    }

    std::cout <<"\n";




    return 0;
}
