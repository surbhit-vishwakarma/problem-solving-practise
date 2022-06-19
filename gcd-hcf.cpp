#include <bits/stdc++.h>
using namespace std;

// Long division method :-
//int findHCF(int a, int b)
//{
//	int rem = -1;
//	int bigNum , smallNum ;
//	bigNum = max(a,b);
//	smallNum = min(a,b);
//
//	while(rem != 0)
//	{
//		rem = bigNum%smallNum;
//		bigNum = smallNum;
//		smallNum = rem ;
//	}
//
//	return bigNum ;
//}

// Euclidean Method - Iterative
//int findHCF(int a , int b)
//{
//
//    while(true)
//    {
//        if(a>b)
//        {
//            a = a - b;
//        }
//        else if(b>a)
//        {
//            b = b - a;
//        }
//        else{
//            return a;
//        }
//    }
//
//}

// Euclidean Optimised
int findHCF(int a, int b)
{
    if(a==0)
        return b;

    return findHCF(b%a,a);
}

int main()
{
	int num1 , num2;
	cin >> num1 >> num2;

	cout << "HCF or GCD of given number is: " << findHCF(num1,num2)<<endl;

	return 0;
}
