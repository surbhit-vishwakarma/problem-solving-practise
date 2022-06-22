#include <iostream>
using namespace std;

int solve(int b, int p)
{
	int res = 1, curr_base = b;
	while(p > 0)
	{	
		if(p%2==1)
		{
			res *= curr_base;
		}

		curr_base *= curr_base;
		p = p >> 1;
	}

	return res;
}

int main(int argc, char const *argv[])
{
	int base , power ;
	cin >> base >> power;

	cout << "Result: " <<solve(base,power);

	return 0;
}