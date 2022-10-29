#include <iostream>
using namespace std;

int main()
{
	//declare the size of array
	int arr[50], arr2[50];
	int* ptr, i, num;

	cout << "No. of array elements to be entered:" << endl;
	cin >> num;

	cout << "Enter the elements:";
	// use for loop to insert the array elements
	for (i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	ptr = &arr[0];



	cout << " Entered elements of the array are:\n" << endl;

	for (i = 0; i < num; i++)
	{
		cout << "\t" << *ptr;
		ptr++;
	}
	ptr--; // decrement ptr


	for (i = 0; i < num; i++)
	{
		arr2[i] = *ptr;
		ptr--;
	}
	ptr = &arr2[0];


	for (i = 0; i < num; i++)
	{
		arr[i] = *ptr;
		ptr++; // increment ptr
	}

	ptr = &arr[0]; // ptr hold the base address of arr[0]
	cout << "\n The reversed array elements are: \n" << endl;

	//print the array elements using ptr

	for (i = 0; i < num; i++)
	{
		cout << "\t" << *ptr << endl;
		ptr++;
	}

	return 0;
}