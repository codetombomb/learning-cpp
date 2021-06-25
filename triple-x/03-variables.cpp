#include <iostream>

int main()
{
    std::cout << "\n\nYou wake up alone trapped inside of a room with a\nbomb strapped to your chest.\n";

    std::cout << std::endl; // std::end signals to the compiler that the above line has ended

    std::cout << "There is an old TV monitor on the far back wall that\nsuddenly turns on and a person in a mask appears.\n";

    std::cout << std::endl;

    std::cout << "\"Hello there\", the person says in a computer generated voice. You can't be sure that\nthe person talking is a man or a woman or if it's even a live person\nat all. Could be a manequin.\n";

    std::cout << std::endl;

    std::cout << "\"Welcome to the end of the road fellow hacker! You don't\nknow me but I know you and your work very well. If you want to escape\nwith your life, you will need to put your hacker skills to the test.\"\n";

    std::cout << std::endl;

    std::cout << "\"Enter the correct code on the bomb jacket keypad to stop the bomb from\ndetonating. Good luck! HAHAHAHAHAHA!!!\"\n";

    // -------------------------------------------------------------- WORKING WITH VARIABLES --------------------------------------------------------------

    int a = 4;
    int b = 6;
    int c = 9;

    int sum = a + b + c;
    int product = a * b * c;

    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;


    return 0;
}


/* 
Variable Declaration
--------------------
Ex. int a = 0;

Variables are: 

1) Used to store data

2) Always declared before use in a C++ program
    a. You must declare the data type first 
    b. Followed by the variable name

3) Going to take up space inside of you computer's memory when declared

You can declare either initialized varaibles or uninitialized variables: 

INITIALIZED: int a = 0;

UNINITIALIZED: int a;
*/