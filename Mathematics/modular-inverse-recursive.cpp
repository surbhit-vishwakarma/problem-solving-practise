#include <iostream>
#define ll long long
const int M = 1e9+7;

using namespace std;

int powerRecursive(int b , int p)
{
    if(p==0)
        return 1;

    int temp = powerRecursive(b,p/2);

    if(p%2 == 0)
    {
        return (temp*1LL*temp)%M;
    }
    else
    {
        return (b*((temp*1LL*temp)%M))%M;
    }
}
int main(int argc, char const *argv[])
{

    int base , power;
    cin >> base >> power;

    cout << powerRecursive(base,power);

    return 0;
}
