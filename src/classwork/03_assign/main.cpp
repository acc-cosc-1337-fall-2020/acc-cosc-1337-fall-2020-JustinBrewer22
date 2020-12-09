//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>

//Write namespace using statements for cout and cin
using std::cout;
using std::cin;

int main() 
{
	int grade;
	cout<<"Please enter your number grade to receive your letter grade: ";
	cin>>grade;

	if (grade >=0 && grade <=100)
	{
		string letterif = get_letter_grade_using_if(grade);
		string letterswitch = get_letter_grade_using_switch(grade);

		cout<<"Letter grade using If: "<<letterif<<"\n";
		cout<<"Letter grade using Switch: "<<letterswitch<<"\n";

		return 0;
	}
	else
	{
		cout<<"Number is out of range or not a number"<<"\n";
	}

}

