#include <bits/stdc++.h>
using namespace std;

int secondMax(int arr[] , int n)
{
	int maxE = INT_MIN , secondMaxE = INT_MIN ;

	for(int i = 0 ; i < n ; i++)
	{
		maxE = max(arr[i],maxE);
	}

	//cout << maxE << endl;
	for(int i = 0 ; i < n ;i++)
	{
		if(arr[i] < maxE ){
			secondMaxE = max(secondMaxE,arr[i]);
		}
	}

	return secondMaxE;
}

int main(int argc, char const *argv[])
{
	int num ;
	cin >> num ;

	int arr[num];
	for(int i = 0 ; i < num ; i++)
	{
		cin >> arr[i];
	}

	cout << secondMax(arr,num) ;

	return 0;
}