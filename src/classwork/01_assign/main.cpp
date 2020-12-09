//Write the include statement for types.h here
#include "types.h"

//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>
using std::cout;
using std::cin;


int main() 
{
	cout<<"Please enter a number: ";
	int num;
	cin>>num;
	int result = multiply_numbers(num);
	cout<<"Result 1: "<<result<<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Result 2: "<<result<<"\n";

	return 0;
}

