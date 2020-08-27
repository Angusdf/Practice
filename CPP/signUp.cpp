/********************************************
*@author: Angus Frisch                      *
*@discrption: Registration application.     *
*             Users will register w/ name   *
*             and age. User will be able to *
*	      look up other users via ID.   *
*//*****************************************/

#include <iostream>
#include <string>
#include <locale>
#include <stdlib.h>
#include <time.h>
#include <vector>
class regUser
{
    int age = 0;
    std::string name =  " ";
    int id = 0;
        
    public:
        void setInfo(int userAge, std::string userName)
        {
            age = userAge;
            name = userName;

            srand(time(NULL));
            id =  rand();
        };

        void display()
	{

        std::cout<<"\nName: " <<  name
                 <<"\nAge:" << age 
                 <<"\nID:" << id<<std::endl; 
	};

        int getId()
        {
           return id;
        }
};

regUser setUser();
void findUser(std::vector<regUser> users);


int main()
{   
    int option = 0;
    std::string input = " ";
    std::vector<regUser> apps;
    std::cout << "USER SIGNUP APPLICATION\n\n";

    while(option != 3)
    {
        std::cout << "Please select an option:\n"
                  << "1: Add user.\n2: Fetch user.\n3: Quit\n";

        std::cout << "Enter option: ";
        std::getline(std::cin,input);

        if(isdigit(input[0]) && input.length() == 1)
	{
            option = stoi (input); 
         
            switch(option){
                   case 1:
                       apps.push_back(setUser());
                       break;
                   case 2:
                       findUser(apps);
                       break;
                   case 3:
                       break;
                   default:
                       std::cout<<"INVALID\n";


            }
            
        }
    }

    return 0;
}

regUser setUser()
{
    int age = 0;
    std::string name = " ";
    regUser temp;


    std::cout << "\n\nEnter age: ";
    std::cin >> age;

    std::cin.get();
    std::cout << "Enter name: ";
    std::getline(std::cin,name);

    temp.setInfo(age, name);
    
    std::cout << "\nID: " << temp.getId() << "\n\n";
    return temp;
}


void findUser(std::vector<regUser> users)
{
    int id = 0;

    std::cout << "\nEnter ID: " ;
    std::cin >> id;
    std::cin.get();
    for(auto it = std::begin(users); it != std::end(users);++it)
    {
        if( it->getId()==id)
        {
            std::cout<<"\n\nFOUND\n\n";
            return;
        }
    }
    std::cout << "\n\nNOT FOUND\n\n";
}

