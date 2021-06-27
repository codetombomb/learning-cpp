/* 
Linker Errors 
---------------------------

 * The linker is having trouble linking all the object files together to create an executable

 * Usually there is a library object file that is missing
 
 */

#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;

    std::cout << x;

/*
linkerErrors.cpp:18:18: error: use of undeclared identifier 'x'
std::cout << x;
                ^
1 error generated. 
*/

    return 0;
}