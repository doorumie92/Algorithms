#include <iostream>

using namespace std;
int gcd(int a,int b)
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

int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    int count=0;
    cin >> count;

    for(int i=0; i < count; i++)
    {
        cin >> a >> b;
        cout<< lcm(a,b) <<"\n";
    }
    return 0;
}
