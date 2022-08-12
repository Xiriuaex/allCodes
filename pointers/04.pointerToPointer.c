//strongly typed. ie int pointer to store int variable only.
//but why not some generic typed?
// because we also use pointers to dereference addresses.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("address = %d, value = %d", p, *p);
    char *p0;
    p0 = p;

    //this will give a error because both are of different datatypes.
    //we will now use ypecasting to valid the above or to correct the error.

    p0 = (char *)p;
    printf("size of char is %d bytes\n", sizeof(char));
    printf("address = %d, value = %d", p0, *p0);

    //it will not show error. same address diff values.
    //char will read only 1 byte as the char pointer is holding a integer value.
    //only pointer arithmatic allowed is adding and substracting

    return 0;

    //void pointer--
    void *p1;
    p1 = p; //don't need typecasting. also can't dereference through it.
}
