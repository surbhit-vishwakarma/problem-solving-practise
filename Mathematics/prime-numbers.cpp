#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
	if(n== 3|| n == 2 )
		return true;

	if(n%2== 0 || n%3==0)
		return false;

	for(int i = 5 ; i*i <= n ; i = i + 6)
	{
		if(n%i==0 || n%(i+2)==0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int num ;
	cin >> num;

	cout << "Given number is prime: " << checkPrime(num) << endl;

	return 0;
}