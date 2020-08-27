/********************************************
*@author: Angus Frisch                      *
*@discrption: Ask the user for name and age,*
*             user will then be placed into *
*             groups depending on age.      *
*//*****************************************/

#include <iostream> 
#include <string>

#define SENIOR 65
#define ADULT 19
#define TEEN 12

using namespace std;

string seperate(int age);

int main()
{
	int age = 0;
	string name = " ";
	
	while(1)
	{	age = 0;
		name = " ";
		cout << "Enter name: " ;
		cin >> name;
		cout << "Enter age: " ;
		cin >> age;
		
		cout << "Welcome " << name << ". You are in group " << seperate(age);
 ;

	}



	return 0;
}

string seperate(int age)
{

	if(age > SENIOR)
		return "senior.\n";
	else if(age > ADULT)
		return "adult.\n";
	else if(age > TEEN)
        return "teen.\n";
	else
        return"kid.\n";
}
