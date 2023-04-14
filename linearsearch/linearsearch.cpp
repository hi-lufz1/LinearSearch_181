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

}

