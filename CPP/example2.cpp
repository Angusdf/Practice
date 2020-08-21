/********************************************
*@author: Angus Frisch                      *
*@discrption: Small application that will   *
*	      give a letter grade given     *
*             score.			    *	
*//*****************************************/
#include <iostream>
#include <string>

#define GRADE_C_THRES 25
#define GRADE_B_THRES 50
#define GRADE_A_THRES 75

using namespace std; 

int main()
{
	int userScore = 0;
	char repeat = ' ';
 	bool fail = false;
	while(repeat != 'n')
	{
		repeat = ' ';
		
		do
		{
		cout << "Enter score(0-100): "; 
		cin >> userScore;
		fail = false;

		if(cin.fail())
		{
		cin.clear();
                cin.ignore(100, '\n');
		fail = true;
                cout << "Not a number." << endl;
		}
		}while(fail);

		if(userScore < GRADE_C_THRES)
		{
			cout << "Fail" << endl;
		}                
		else if(userScore <= GRADE_B_THRES)
                {
                        cout << "C" << endl;
                }
		else if(userScore <= GRADE_A_THRES)
                {
                        cout << "B" << endl;
                }
		else 
		{
			cout << "A" << endl;
		}

		while(repeat != 'y' && repeat != 'n')
		{
			cout << "Continue?{y/n)"; 
			cin >> repeat;
		}
	}

	return 0;

}
