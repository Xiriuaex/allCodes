#include<iostream>
#include<string>

using namespace std;

class joey {
	string number;
public:
	void read();
	void chk_bin();
	void ones_complement();
};

void joey::read() {
	cout << "number please: ";
	cin >> number;
}

void  joey::chk_bin() {

	for (int i = 0; i <= number.length(); i++) {			//name.length() --> for string size
		if (number.at(i) != 0 && number.at(i) != 1)
		{
			cout <<number<<" is a binary number."<<endl;
			break;
		}
		else {
			cout << number << " is not a binary number."<<endl;
			break;
		}
	}
}
void joey::ones_complement() {

	for (int x = 0; x <= number.length(); x++) {
		if (number.at(x) == 0)					  //number.at(position)--> value at that position;
			number.at(x) = '1';
		else
			number.at(x) = '0';
	}
}

int main() {
	joey tribiani;					  //first name the class. then 
									  // then syntax   name.function name();
	tribiani.read();
	tribiani.chk_bin();
	tribiani.ones_complement();

	return 0;
	system("pause>0");
}