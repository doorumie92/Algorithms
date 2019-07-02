#include <iostream>

using namespace std;

int main()
{
    int arr[9];
    int MAX,MAXI;
    for(int i =0 ; i < 9; i++)
        cin >> arr;

    MAX = arr[0];
    MAXI = 0;
    for(int i =0; i < 9; i++)
    {
        if(MAX < arr[i])
        {
            MAX = arr[i];
            MAXI = i;
        }
    }
    cout<<MAX<<"\n";
    cout<<MAXI<<"\n";
    return 0;
}
