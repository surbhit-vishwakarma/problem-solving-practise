#include <iostream>
#include <cmath>
using namespace std;

void printPowerSet(string s)
{
	int ss = pow(2,s.length());
	cout << "empty string";
	for(int i = 1 ; i < ss ; i++)
	{	
		cout << " ";
		int k = 0 , m = i;
		while(m>0)
		{	
			if(m&1)
				cout << s[k];
			k++;
			m >>= 1;
		}
	}
}

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;

	printPowerSet(s);

	return 0;
}