#include "dna.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    double countofC = 0;
    double countofG = 0;

    for(size_t a = 0; a < dna.size(); a++)
    {
        switch (dna[a])
        {
        
        case 'C':
        countofC += 1;
        break;

        case 'G':
        countofG += 1;
        break;
        
        default:
        break;
        }
    }
    double totalcount = (countofC + countofG) / dna.size();

    return totalcount;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    string reverse;
    for (size_t a = dna.size(); a >= 1; a--)
    {
        reverse += dna[a-1];
    }
    return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string
*/
string get_dna_complement(string dna)
{
    string reverse = get_reverse_string(dna);
    string replace;

    for (size_t a = 0; a < reverse.size(); a++)
    {
        switch(reverse[a])
        {
            case 'A':
            replace += "T";
            break;

            case 'C':
            replace += "G";
            break;

            case 'G':
            replace += "C";
            break;

            case 'T':
            replace += "A";
            break;

            default:
            break;
        }    
    }
    return replace;
    
}