#include <iostream>

using namespace std;

int main()
{
    char string[1000000]={'\0',};
    int count=0;
    cin.getline(string,1000000,'\n');

    int i=0;
    for(i=0;i<1000000;i++)
    {
        if(string[i] != ' ' && (string[i+1]==' '||string[i+1]=='\0'))
            count++;
        if(string[i]=='\0')
            break;
    }
    cout <<count-1 << endl;
    return 0;
}
