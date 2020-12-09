//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cin;
using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	char yn;

	do
	{
		cout<<"Please enter a number between 1-20: ";
		cin>>num;
		if (num <= 0 || num > 20)
		{
			cout<<"Number is not between 1-20 \n";
		}
	
	while (num >= 1 && num <=20)
		{
			cout<<"The factoral of "<<num<<" is "<<factorial(num);
			num = 0;
		}
	
			cout<<" Would you like to enter another number? (Y/N) ";
			cin>>yn;
	}

	while (yn == 'Y' || yn== 'y');	
	
	return 0;
}