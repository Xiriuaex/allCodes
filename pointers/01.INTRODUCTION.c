//INTRODUCTION TO POINTERS.

// every memory has an address.
// when we declare a variable, a computer allocates some amount of memory.
//int=4 bytes
//char =1 byte
//float= 4 bytes
//the value is stored as binary

//pointers are variables that store address of another variable
// a=4; --this variable a  has an unique address suppose in this case it is 204.
//we can asign a variable as int *p;
//which will store the value of the address of the integer variable a.

// int *p -- defining a pointer variable.
// p=&a; -- this is how you assign a value to a pointer variable. here &a means the address
// of 'a'.
//when we print p -- it will give the address of 'a' which is 204
//when we print &a -- it willl also give the address of 'a'(204).
//&p-- give us adrress of p;
//print *p--gives us the value of a. this is called dereferencing.
// *P=8;//we can also modify the value of a like this by modifying the value of *p.
