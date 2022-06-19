#include <bits/stdc++.h>
using namespace std;

findHCF(int a,int b)
{
	if(a==0)
		return b;

	findHCF(b%a,a);
}

int LCM(int a , int b)
{
	int hcf = findHCF(a,b);

	return (a*b/hcf);
}

int main(int argc, char const *argv[])
{
	int num1 , num2;
	cin >> num1 >> num2;

	cout << "LCM of given number is: " << LCM(num1,num2) ;

	return 0;
}