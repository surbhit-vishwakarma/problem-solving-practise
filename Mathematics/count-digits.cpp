#include <bits/stdc++.h>
using namespace std;

// Iterative approach :- 

/*int countDigits(int n)
{	
	int res = 0;
	while(n)
	{	
		n /=10;

		res++;
	}

	return res;
}*/

// Recursive approach :-

/*int countDigits(int n)
{
	if(n == 0)
		return 0;

	return 1 + countDigits(n/10);
}
*/

// Log Method :-

int countDigits(int n)
{
	return log10(n) + 1;
}

int main()
{
	int N;
	cin >> N;

	int res = countDigits(N);
	cout << "Number of digits in the given number is: " << res << endl;

	return 0;
}