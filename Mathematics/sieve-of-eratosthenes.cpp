#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n)
{
	vector<bool>prime(n+1,true);

	for(int i = 2 ; i<= n ; i++)
	{
		if(prime[i])
		{
			cout << i << " ";
			for(int j = i*i ; j <=n ; j+= i)
			{
				prime[j] = false;
			}
		}
	}
}

int main()
{
	int num ;
	cin >> num;

	sieveOfEratosthenes(num);
	
	return 0;
}