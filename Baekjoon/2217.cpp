#include <iostream>
#include <algorithm>

using namespace std;
bool desc(int a, int b)
{
    return a > b;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int inputSize=0;
    int max =0;
    cin >> inputSize;

    int *arr = new int[inputSize];
    
    for(int i=0;i<inputSize;i++)
        cin >> arr[i];

    sort(arr,arr+inputSize,desc);

    max = arr[0];
    for(int i=1;i<inputSize;i++)
    {
       if(max < arr[i]*(i+1) )
           max = arr[i]*(i+1);
       else
           ;
    }
    cout << max << "\n";

    return 0;
}
