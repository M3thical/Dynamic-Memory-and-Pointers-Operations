/* 
Daniel A Sanchez
S01368279
2/20/22
This program use dynamic variables
to print a name and output the sum of 3
numbers
*/

#include <iostream>
using namespace std;

const int MAXNAME = 10;

int main() {
	//variables
	int pos;
	char* name = nullptr;
	int* one = nullptr;
	int* two = nullptr;
	int* three = nullptr;
	int result;

     //allocating variables
	one = new int();
	two = new int();
	three = new int();
	name = new char();

	
	cout << "Enter your last name with exactly 10 characters." << endl;
	cout << "If your name has < 10 characters, repeat last letter. " << endl
		<< "Blanks at the end do not count." << endl;

	//input name
	for (pos = 0; pos < MAXNAME; pos++) {
		cin >> *(name + pos);
	}
	
	cout << "Hi ";

    //output name
	for (pos = 0; pos < MAXNAME; pos++) {
		cout << *(name + pos);
	}
	

	
	//using pointers input 3 numbers
	cout << endl << "Enter three integer numbers separated by blanks" << endl;
	cin >> *one;
	cin >> *two;
	cin >> *three;


    //display numbers using pointers
	cout << "The three numbers are " << endl;
    cout << *one << "," << *two << "," << *three << endl;
	
	//calculating the sum of the three numbers using pointers
	result = (*one + *two + *three);

	//output the sum of the pointers
	cout << "The sum of the three values is " << result << endl;

	//deallocating pointers 
	delete one;
	delete two;
	delete three;
	delete name;

	return 0;
}