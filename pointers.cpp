/*
Daniel A Sanchez
S01368279
2/18/22
This program calculate the area using 
pointers 
*/

#include <iostream>
using namespace std;

int main()
{

	int length;	// holds length 
	int width;	// holds width 
	int area;	// holds area

	int* lengthPtr = nullptr;	// int pointer which will be set to point to length 
	int* widthPtr = nullptr;	// int pointer which will be set to point to width

	cout << "Please input the length of the rectangle" << endl;
	cin >> length;

	cout << "Please input the width of the rectangle" << endl;
	cin >> width;

	
	lengthPtr = &length; //assigning pointer lengthPtr memory address of length


	widthPtr = &width; //assigning pointer widthPtr memory address of width

	area = (*lengthPtr  *  *widthPtr); //area is calculated by dereferencing pointers
		
		cout << "The area is " << area << endl;

		//conditions are using pointers to determine witch variable is greater
		if (*lengthPtr > *widthPtr)

  
		cout << "The length is greater than the width" << endl;

	else if (*widthPtr > *lengthPtr)

		cout << "The width is greater than the length" << endl;

	else
		cout << "The width and length are the same" << endl;

		return 0;
}