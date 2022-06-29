#include <iostream>
using namespace std;

int checkOddOccuring(int a[], int n)
{
	int res = 0;

	for(int i = 0 ; i < n ; i++)
	{
		res ^= a[i];
	}

	return res;
}

int main()
{
	int size;
	cin >> size;

	int arr[size];
	for(int i = 0 ; i < size ; i++)
	{
		cin >> arr[i];
	}

	cout <<"Odd occuring element in the given array is : "<<checkOddOccuring(arr,size);

	return 0;
}