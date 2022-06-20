#include <iostream>
using namespace std;

// Iterative Methods :- 
/*void printFact(long long num)
{	
	long long res = 1;

	for(long long i = 2 ; i <= num ; i++)
	{
		res *=i;
	}

	cout << res << endl;
}
*/
long long printFact(long long n)
{
	if(n==1)
		return 1;

	return n*printFact(n-1);
}

int main()
{
	long long num ;
	cin >> num;

	cout << printFact(num) << endl;

	return 0;
}