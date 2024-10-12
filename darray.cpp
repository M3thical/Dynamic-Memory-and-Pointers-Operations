/*
Daniel A Sanchez
S01368279
2/20/22
This program use dynamic arrays to calculate
monthly sales
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//variables
	float* monthSales = nullptr;	// a pointer used to point to an array
									// holding monthly sales 

	float total = 0;	// total of all sales
	float average;		// average of monthly sales
	int numOfSales;		// number of sales to be processed 
	int count;			// loop counter

	cout << fixed << showpoint << setprecision(2);

	//asking the user to input the monthly sales
	cout << "How many monthly sales will be processed? ";
	cin >> numOfSales;


	//allocate memory for the array using pointer monthSales
	monthSales = new float(numOfSales);

	//cheking if memory is allocated
	if (monthSales == nullptr) {
			cout << "Error allocating memory!\n";
			return 1;
	}


	cout << "Enter the sales below\n";

	    //asking to input monthly sales
		for (count = 0; count < numOfSales; count++)
		{
			cout << "Sales for Month number"
				<< (1 + count) //number of month
				<< ":";

			cin >> monthSales[count]; //using dynamic array for input
		}

    //adding each element of the array to the total
	for (count = 0; count < numOfSales; count++)
	{
		total = total + monthSales[count];
	}

	//calculating average
	average = (total / numOfSales);
     

		cout << "Average Monthly sale is $" << average << endl;

		//deallocating memory 
		delete[]  monthSales;

	return 0;
}