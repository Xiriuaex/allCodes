/*
pointers can point to functions also.
what would be the address of a function???
the memory is divided into four segments--
a program is a set of instruction
Function is a set of instructions to perform a sub task
in memory a function will be one contiguous block of with some instructions
the address of a function which is also called th entry oint is the address of the first instruction of the instruction.
*/
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a + b;
}
int main()
{
    // pointer to function that take
    //(int,int) as argument/parameter and return int
    int c;
    int (*p)(int, int);
    p = &add;
    c = (*p)(2, 3); // de-referencing and executing the function.
                    // or c = p(2, 3);

    printf("%d", c);

    return 0;
}