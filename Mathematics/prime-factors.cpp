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

void printPrimeFactor(int n)
{
	if(checkPrime(n)){
		cout << n << endl; 
		return;
	}

	int i = 2;
	while(i*i <= n)
	{
		if(n%i==0)
		{
			n /= i;
			cout << i << " " ;
		}else
		{
			i++;
		}
	}

	if(n> 1)
		cout << n << endl;
}

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;

	cout << "Prime Factors are: " << endl;
	printPrimeFactor(num);

	return 0;
}