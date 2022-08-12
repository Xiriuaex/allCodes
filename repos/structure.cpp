//1st one...

/*#include<iostream>
using namespace std;

struct person {
	string name;
	string birth_place;
	int age;
	int phone_number;
};


void main(){
	person one;
	one.name = "Pragyan";
	one.age = 18;
	one.birth_place = "Moran";
	cout << "My name is " << one.name << endl;
	cout << "age " << one.age << endl;
	cout << "I was born in " << one.birth_place << endl;


	system("pause>0");
}
*/

//2nd one....



#include<iostream>
using namespace std;


struct person {
	string name;
	string birth_place;
	int age;
	string phone_number;
};

void data(person database) {

	cout << "My name is " << database.name << endl;
	cout << "age " << database.age << endl;
	cout << "I was born in " << database.birth_place << endl;
	cout << "Contact " << database.phone_number << endl;
}


int main() {
	person one;
	one.name = "Pragyan Chetia";
	one.age = 18;
	one.phone_number = "6001235176";
	one.birth_place = "Moran";

	person two;
	two.name = "Joey";
	two.age = 29;
	two.phone_number = "not available";
	two.birth_place = "usa";

	data(one);
	data(two);



	system("pause>0");

}
