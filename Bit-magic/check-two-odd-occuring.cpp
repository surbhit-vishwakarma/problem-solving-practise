#include <bits/stdc++.h>
using namespace std;

vector<int> checkTwoOddOccuring(int arr[], int n)
{
	int calXor = 0;
	for(int i = 0 ; i < n ; i++)
	{
		calXor ^= arr[i];
	}
	// cout << calXor << endl;
	int res1 = 0 , res2 = 0, sn = calXor & ~(calXor-1);
	for(int i = 0 ; i < n ; i++)
	{
		if((sn & arr[i]) != 0)
			res1 ^= arr[i];
		else
			res2 ^= arr[i];
	}

	return {res1,res2};
}

int main()
{
	int size ;
	cin >> size;

	int arr[size];
	for(int i = 0 ; i < size ; i++)
	{
		cin >> arr[i];
	}

	vector<int>ans = checkTwoOddOccuring(arr,size);
	cout << "The elements are: " << ans[0] << "  " << ans[1];

	return 0;
}