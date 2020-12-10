//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::cout;
using std::cin;
using std::string;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int num = 0;
	char yn = 'y';
	string dna;
	do
	{		
		cout<<"Please enter (1) for Get CG Content, or (2) for Get DNA Complement\n";
		cin>>num;

		cout<<"Please enter DNA string: \n";
		cin>>dna;

		if (num == 1)
		{
			double content = get_gc_content(dna);
			cout<<"GC Content: "<<content<<"\n";
		}
		else if (num == 2)
		{
			string complement = get_dna_complement(dna);
			cout<<"DNA Complement: "<<complement<<"\n";
		}
		else
		{
			cout<<"Sorry I could not accept input given. ";
		}

			cout<<"Do you want to enter another DNA string? (Y/N) \n";
			cin>>yn;
	}
	while (yn == 'y' || yn == 'Y');

	return 0;
}