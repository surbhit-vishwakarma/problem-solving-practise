#include <bits/stdc++.h>
using namespace std;
void printDivisor(int n)
{	
	int i = 1;
	while(i*i<n)
	{
		if(n%i==0)
		{
			cout << i << " ";
		}

		i++;
	}

	i = sqrt(n);
	// cout << i ;
	while(i*i<=n and i != 0)
	{	

		if(n%i==0)
		{
			cout << n/i << " ";
		}

		i--;
	}
}
int main(int argc, char const *argv[])
{
	int num ;
	cin >> num;

	cout << "Divisors are: "<< endl; 
	printDivisor(num) ;

	return 0;
}