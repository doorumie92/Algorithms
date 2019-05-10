#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int inputCount=0;
    cin >> inputCount;

    vector <pair<int,int>>v(inputCount);
    vector <pair<int,int>>temp(inputCount);
    for(int i=0;i<inputCount;i++)
    {
        cin>>v[i].first >>v[i].second;
        temp[i].second = v[i].first;
        temp[i].first = v[i].second;
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<inputCount;i++)
    {
        v[i].first=temp[i].second;
        v[i].second=temp[i].first;
    }
    for(int i=0;i<inputCount;i++)
    {
        cout<<v[i].first<<","<<v[i].second<<endl;
    }
}
