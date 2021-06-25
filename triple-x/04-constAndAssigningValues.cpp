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

    // c = 10; The compiler will throw an error because the variable has not been declared.

    const int a = 4;
    const int b = 6;
    const int c = 9;

    // a = a - 2; This will error due to `a` being a const.

    int sum = a + b + c;
    int product = a * b * c;

    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;


    return 0;
}

/*
                Variables 
                ---------
    1) Variables can be changed at runtime 

    2) After a variable has been declared, we
    can assign a new value to it at any point 
    in our code.

    3) Variable - "A value that is subject to change"

    4) We cannt assign a value to a variable before the
    it has been declared

    5) The compiler will not be aware that the variable exists
    if you try assigning to it before it's declaration

    6) The compiler will not allow this.



                    Const
                    -----
    1) The const keyword before a variable declaration will 
    tell the compiler that the variable cannot change. It's 
    value will remain constant through out the program;
*/
