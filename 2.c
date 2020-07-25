#include <stdio.h>

int main()
{
//variable is something that stores data

    int x;
//above is a variable declaration
    x = 20;
//above is a variable initialization
//syntax is format of the langauge
    int y = x/2;
//above is an expression. (Anything that can be evaluated to 1 value)
//   printf(9001); does not work must include double quotes and a comma.
//%i means integer
    printf("Value 1:%i\nValue 2:%i\n", x, y);

// (The magic number COMMA and y are two seperate arguments being applied to the printf function.
    return 0;
}
