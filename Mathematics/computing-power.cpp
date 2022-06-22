#include <iostream>
using namespace std;

int solve(int b , int p)
{
	if(p==0)
		return 1;

	int test = solve(b,p/2);

	test *= test;

	if(p%2==0)
		return test;
	else
		return test*b;

}

int main(int argc, char const *argv[])
{
	int base , power;
	cin >> base >> power;

	cout << "Answer: " << solve(base,power) << endl;
	
	return 0;
}