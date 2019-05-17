#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int inputSize=0;

    cin >> inputSize;

    int *arr = new int[inputSize];
    vector<pair<int,int>>v(inputSize);
    

    for(int i=0;i<inputSize;i++)
    {
        cin>>v[i].first>>v[i].second;
        arr[i]=1;
    }

    for(int i=0; i<inputSize;i++)
    {
        for(int j=0;j<inputSize;j++)
        {
            if(v[i].first > v[j].first)
                if(v[i].second > v[j].second)
                {
                    arr[j]++;
                }
        }
    }
    for(int i=0;i<inputSize;i++)
    {
        cout<<arr[i] << " ";
    }
}
