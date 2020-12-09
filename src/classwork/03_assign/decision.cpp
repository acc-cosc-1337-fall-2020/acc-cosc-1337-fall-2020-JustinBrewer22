//cpp
#include "decision.h"
#include <iostream>
using std::string;


string get_letter_grade_using_if(int grade)
{
    string letter;

    if (grade >= 90 && grade <= 100)
    {
        letter = "A";
    }
    else if (grade >= 80 && grade <= 89)
    {
        letter = "B";
    }
    else if (grade >= 70 && grade <= 79)
    {
        letter = "C";
    }
    else if (grade >= 60 && grade <= 69)
    {
        letter = "D";
    }
    else if (grade >= 0 && grade <= 59)
    {
        letter = "F";
    }

    return letter;
}

string get_letter_grade_using_switch(int grade)
{
    switch (grade/10)
    {
        case 10:
        return "A";
        break;

        case 9:
        return "A";
        break;

        case 8:
        return "B";
        break;

        case 7:
        return "C";
        break;

        case 6:
        return "D";
        break;

        case 5:
        return "F";
        break;

        case 4:
        return "F";
        break;

        case 3:
        return "F";
        break;

        case 2:
        return "F";
        break;

        case 1:
        return "F";
        break;

        case 0:
        return "F";
        break;

        default:
        return "Please enter a valid grade (0-100)";

    }
}