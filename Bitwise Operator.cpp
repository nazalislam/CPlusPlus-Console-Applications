// Naz-Al Islam 
// 02/08/2017
// Bitwise Operator

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    /* Patriots or Falcons */
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


    /* Blank or Not Blank */
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


    /* Arithmatic using Bitwise Operator */
	unsigned int value = 32;
    value = value << 2;
    std::cout << "PRODUCT: " << value << std::endl;

	return 0;
}
