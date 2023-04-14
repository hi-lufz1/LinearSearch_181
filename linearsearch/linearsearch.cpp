#include <iostream>
using namespace std;

int arr[20]; // array to be searched
int n; // number of element in the array
int i; // index pf array element


void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
		break;
		else
			cout << "\n Array should have minimum 1 and maximum 20 element.\n\n";
	}

	// accept array element
	cout << "\n----------------------------\n";
	cout << "Enter array element\n";
	cout << "----------------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];

	}
}

void LinearSearch()
{
	char ch;
	int comparison; //Number of comparisons

	do
	{
		// Accept the number to be searched
		cout << "\nEnter the element you want to search :"; //langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++)                           //langkah 2,3, dan 4
		{
			comparison++;
			if (arr[i] == item)                            //langkah 5 a found
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl;
				break;
			}
		}
		if (i == n)                 //langkah 5 b not found
			cout << "\n" << item << "not found in the array\n";
		cout << "\n Number of comparison : " << comparison << endl;

		cout << "continue search (y/n): ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'Y'));

}

