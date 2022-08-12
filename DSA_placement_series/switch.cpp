#include <iostream>

using namespace std;

int main()
{
    int amount, note;

    cout << "Enter the amount: " << endl;
    cin >> amount;
    cout << "Enter which notes are needed for the amount: " << endl;
    cin >> note;
    cout << "The number of " << note << " rupees notes are: ";
    switch (note)
    {

    case 100:
        cout << amount / 100 << endl;
        break;
    case 50:
        cout << amount / 50 << endl;
        break;
    case 20:
        cout << amount / 20 << endl;
        break;
    case 1:
        cout << amount / 1 << endl;
        break;

    default:
        cout << "!" << endl;
    }
    return 0;
}