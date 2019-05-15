#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int inputSize=0;
    int inputK=0;
    cin >> inputSize >> inputK;

    int *arr = new int[inputSize];
    
    for(int i=0;i<inputSize;i++)
        cin >> arr[i];

    sort(arr,arr+inputSize);

    cout<<arr[inputK-1]<<"\n";

    return 0;
}
