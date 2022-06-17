#include <iostream>
using namespace std;

int countTrailingZeroes(int n)
{	
	int res = 0;
	int num = 5;

	while(num<=n)
	{
		res += n/num;

		num *= 5;
	}

	return res;
}
int main()
{
	int n;
	cin >> n;

	cout << "Trailing Zeroes in the given number's factorial: " << countTrailingZeroes(n) <<endl;

	return 0;
}