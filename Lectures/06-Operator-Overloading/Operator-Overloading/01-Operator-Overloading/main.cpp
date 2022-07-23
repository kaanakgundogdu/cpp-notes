#include <iostream>
#include "Mystring.h"


int main()
{
    Mystring empty;
    Mystring kaan{"Kaan"};
    Mystring copy_str {kaan};

    empty.display();
    kaan.display();
    copy_str.display();

	return 0;
}
