#include <iostream>
#include <cstdlib>
using namespace std;


int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArrWithRandNumbers(int arr[100], int &length)
{
	cout << "How many numbers of the array?\n";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void addArrayElement(int arr[100], int length, int &element)
{
	arr[length - 1] = element;
}

void copyArray(int arr1[100], int arr2[100], int length)
{
	for (int i = 0; i <length ; i++)
	{
		addArrayElement(arr2, (i + 1), arr1[i]);
	}
}

void printArray(int arr[100], int length)
{
	cout << "Array Elements : ";

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], length;

	FillArrWithRandNumbers(arr1, length);
	printArray(arr1, length);
		
	copyArray(arr1, arr2, length);
	printArray(arr2, length);


	return main();
}