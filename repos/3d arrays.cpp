#include<iostream>

using namespace std;

int main() {

    int threeD[3][2][2] = { {{1,2},{3,4}},{{5,6},{7,8}},{{9,0},{11,12}} };

    cout << threeD[2] << endl;
    cout << &threeD[2] << endl;
    cout << *(threeD[2][0] + 0) << endl;
    cout<< 193285
    

    return 0;


}