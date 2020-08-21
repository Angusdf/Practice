/********************************************
*@author: Angus Frisch                      *
*@discrption: Rcieve a full name and out    *
*             put in a formate.             *
*                                           *
*//*****************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName, lastName, age;
	
	cout << "Enter first name: ";
	getline(cin,firstName);
	cout << "\nEnter last name: ";
	getline(cin,lastName);
	cout << "\nEnter age: ";
  	getline(cin,age);

	cout << "\nHello " << firstName << " " << lastName << "\nyou are " << age 
		<< " yrs old" << endl;

	
	return 0;
}
