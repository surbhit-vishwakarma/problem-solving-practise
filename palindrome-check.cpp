#include <bits/stdc++.h>
using namespace std;

// Iterative Method :-
/*bool isPal(int n)
{
	int res = 0;
	int curr_num = n;
	int size = log10(n) ;

	while(n>0)
	{	
		res += (n%10)*(pow(10,size));
		size--;
		n /= 10;
	}

	cout << res << endl;
	if(res==curr_num)
		return true;
	else
		return false;
}
*/

// String Method
/*bool isPal(int n)
{
	int i = 0 , j = log10(n);
	string s = to_string(n);

	while(i<j)
	{
		if(s[i]==s[j])
		{
			i++;
			j--;
		}
		else
		{
			return false;
		}
	}

	return true;
}*/

// Recursive Method
int sum = 0;
bool isPal(int n,int &curr_num)
{	
	if(n==0){
		cout << sum << endl;
		return sum == curr_num;
	}

	int lp = log10(n);
	sum += n%10*pow(10,lp);

	return isPal(n/10,curr_num);
}

int main()
{
	int n ;
	cin >> n;
	int curr_num = n ; 

	cout << "Given number is Palindrome: " << isPal(n,curr_num) << endl;
	// cout << curr_num << endl;

	return 0;
}