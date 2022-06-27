#include <iostream>
using namespace std;

// Naive Approach :-
/*int countSetBits(int n)
{	
	int cnt = 0;
	
	while(n)
	{
		if(n&1)
			cnt++;

		n >>= 1;
	}

	return cnt;
}*/

// Brian and Kerningham Method :-
/*int countSetBits(int n)
{	
	int res = 0 ;
	while(n)
	{
		n = (n&(n-1));
		res++;
	}

	return res;
}*/

// Lookup Table :-
int table[256];
void intialize()
{
	table[0] = 0;
	for(int i = 1 ; i < 256 ; i++)
	{
		table[i] = (i&1) + table[(i/2)];
	}
}
int countSetBits(int n)
{
	return table[n & 0xff] + 
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
}

int main(int argc, char const *argv[])
{
	/* code */
	intialize();
	int num ;
	cin >> num;

	cout << countSetBits(num) <<endl;

	return 0;
}