#include <iostream>
using namespace std;

int const M = 1e9+7;


int modInverseIterative(int b, int p)
{
	int res = 1, curr_num = b;

	while(p>0)
	{
		if(p&1)
		{
			res = (res * 1LL *curr_num) %M;
		}

		curr_num = (curr_num * 1LL * curr_num)%M;

		p>>=1;
	}

	return res;
}

int main(int argc, char const *argv[])
{
	int base , power;
	cin >> base >> power;

	cout << modInverseIterative(base,power);

	return 0;
}