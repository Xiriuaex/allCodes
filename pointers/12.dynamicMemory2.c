/*
we can use dynamic memory in c by using 4 functions
malloc
calloc
realloc
free
in C++
1. new
2. delete

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; // goes to stack
    int *p;
    p = (int *)malloc(sizeof(int)); // malloc  asks for how much size is required in heap.
                                    // we are typecasting because malloc return void pointer and p is an integer pointer
    *p = 10;

    free(p); // in heap the memory doesn't clear automatically so we use free function to clear the memory.
    //  p = (int *)malloc(20 * sizeof(int));-- to create array in heap
    *p = 12;
    printf("%d", *p);
}
