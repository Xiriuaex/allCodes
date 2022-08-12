#include<iostream>
#include<string>
using namespace std;

struct qna {
	string question;
	string ans1;
	string	ans2;
	string ans3;
	string	ans4;
	int answer;

};
int main() {
	
	cout << "****WELCOME TO THE GAME****";
	string name;
	cout << "\nEnter your name : ";
	cin >> name;
	cout << endl;
	
	qna question1;
	question1.question =" Einstein was awarded Nobel prize for:\n";
	question1.ans1 = "1.Photoelectric Effect\n";
	question1.ans2 = "2.Special theory of relativity\n";
	question1.ans3 = "3.General theory of relativity\n";
	question1.ans4 = "4.field equation\n";

	cout<< question1.question;
	cout << question1.ans1<<endl;
	cout << question1.ans2<<endl;
	cout << question1.ans3<<endl;
	cout << question1.ans4<<endl;
	
	int a;
	cout << "answer: ";
	cin >> a;
	question1.answer = 1;

	switch (a) {
	case 1:cout << "correct answer." << endl; break;
	case 2:cout << "wrong answer." << endl; break;
	case 3:cout << "wrong answer." << endl; break;
	case 4:cout << "wrong answer." << endl; break;
	case 5:cout << "the correct answer is: " << question1.answer; break;
	};

	return 0;
	system("pause>0");
}
