#include <iostream>

using namespace std;
long long int gcd(long long int a,long long int b)
{
    int temp;
    if(a<b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while(b!=0)
    {
        temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}

long long int lcm(long long int a, long long int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    long long int a,b;

    cin >> a >> b;
    cout<< lcm(a,b) <<"\n";
    return 0;
}
