// Naz-Al Islam 
// 02/08/2017
// Bitwise Operator

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	/* You are writing a program that will check if a pixel belongs to a Patriots 
	   jersey or not. Patriots jersey have the color BLUE, but not the Falcons.

	   If it is a Patriots jersey, print Patriots, otherwise prints Falcons.

	   You must do it for jersey1 and jersey2 using bitwise operations
	*/
	const unsigned int RED  = 0x00FF0000;    //red
	const unsigned int GREEN= 0x0000FF00;  //green
	const unsigned int BLUE = 0x000000FF;   //blue
	const unsigned int RGB  = RED | GREEN | BLUE; 
	unsigned int jersey1 = 123;
	unsigned int jersey2 = 1048576;

    if (BLUE & jersey1) {
        std::cout << "Patriots" << std::endl;
    } else {
        std::cout << "Falcons" << std::endl;
    }
    
    if (BLUE & jersey2) {
        std::cout << "Patriots" << std::endl;
    } else {
        std::cout << "Falcons" << std::endl;
    }


	/* Check to see if the pixel is blank/white (no colors),
	   using only bitwise operation and the constants already defined 

	   You must print 'Blank', 'Not Blank' for jersey3 and jersey4
    */
	unsigned int jersey3 = 0;
	unsigned int jersey4 = 524288;
    if (jersey3 & RGB) {
        std::cout << "Not Blank" << std::endl;
    } else {
        std::cout << "Blank" << std::endl;
    }

    if (jersey4 & RGB) {
        std::cout << "Not Blank" << std::endl;
    } else {
        std::cout << "Blank" << std::endl;
    }


	//you must multiply by 4 the variable value using only bitwise operation
	//and display the result
	unsigned int value = 32;
    value = value << 2;
    std::cout << "PRODUCT: " << value << std::endl;

	return 0;
}
