/********************************************
*@author: Angus Frisch                      *
*@discrption: Number guessing game. User 	*
*             will input number of guess,	*
*             a min and max number. A number*
*			  is then randomly generated.   *
*//*****************************************/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void guessGame( int guessCount, int num);

int main()
{
	int guessNum = 0, max = 0, min = 0;
	
	cout << "***Number guessing game***" << endl;

	do{
		if(guessNum == 0)
		{
			cout << "Enter number of guesses: ";
			cin >> guessNum;
		}
		cout << "Enter min number: ";
		cin >> min;
		cout << "Enter max number: ";
		cin >> max;
		srand(time(NULL));
		guessGame(guessNum, rand()%(max-min+1));
		cout << "To exit the game enter \"0\""", or any number to continue: ";
		cin >> guessNum;
	}while(guessNum != 0);

}

void guessGame( int guessCount, int num)
{
	int i, guess;
	for(i = 0; i < guessCount; i++)
	{
		cout << "Enter guess number " << i+1 << " :";
		cin >> guess;
		if(guess < num)
			cout << "To low" << endl;
		else if(guess >  num)
			cout << "To high" << endl;
		else if(guess ==  num)
		{
			cout << "Good guess" << endl;
			return;
		}


	} 
	cout << "You didn't guess the number it was " 
		<< num << "." << endl; 

	return;
}
