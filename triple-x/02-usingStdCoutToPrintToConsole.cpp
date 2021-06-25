#include <iostream>
/* using namespace std; -- Shorthand to leave 
off std in cout call
*/

/* 
We are instructing the compiler to include a 
library of code called 'iostream'.

^^^^ The above is also known as a 'Header file'.
A Header File is a file that contains code.

Preprocessor Directives do not need to end with a semi-colon.
*/

int main()
{

    // std::cout << "Hello, World!\n";
    /*
    1) `std` is short for standard and 
    is the namespace where `cout` is defined.

    2) `::` is called a Scope operator.

    3) `cout` is a method defined within the 
    `std` namespace.
    */

    std::cout << "\n\nYou wake up alone trapped inside of a room with a\nbomb strapped to your chest.\n";

    
    std::cout << std::endl; // std::end signals to the compiler that the above line has ended

    std::cout << "There is an old TV monitor on the far back wall that\nsuddenly turns on and a person in a mask appears.\n";

    std::cout << std::endl;

    std::cout << "\"Hello there\", the person says in a computer generated voice. You can't be sure that\nthe person talking is a man or a woman or if it's even a live person\nat all. Could be a manequin.\n";

    std::cout << std::endl;

    std::cout << "\"Welcome to the end of the road fellow hacker! You don't\nknow me but I know you and your work very well. If you want to escape\nwith your life, you will need to put your hacker skills to the test.\"\n";

    std::cout << std::endl;

    std::cout << "\"Enter the correct code on the bomb jacket keypad to stop the bomb from\ndetonating. Good luck! HAHAHAHAHAHA!!!\"\n\n";

    return 0;
}

/*
In this lesson, we are learning about outputting 
text to the console. To do this, we need to `#include` 
a library of code at the top of the file. This is called 
a Preprocessor Directive.

A Preprocessor Directive: 
    1) Gives instruction to the compiler
    2) Is used to include a library before compiling 
    3) Is always located at the TOP/START of our file
    4) Is denoted with the `#`
*/