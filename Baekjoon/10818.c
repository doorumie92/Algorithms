#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * arr;
    int i;
    int MAX,MIN;
    scanf("%d",&i);
    arr = (int *)malloc(sizeof(int)*i);

    for(int j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    
    MAX = arr[0];
    MIN = arr[0];

    for(int j=0;j<i;j++)
    {
        if(MAX < arr[j])
            MAX = arr[j];
        if(MIN > arr[j])
            MIN = arr[j];
    }
    printf("%d %d\n",MIN,MAX);
    return 0;

}
