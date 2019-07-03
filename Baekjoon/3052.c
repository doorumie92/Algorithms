#include <stdio.h>

int main()
{
    int arr[42]={0,};
    int arrInput[10];
    int count = 0;

    for(int i=0;i<10;i++)
    {
        scanf("%d",&arrInput[i]);
        arrInput[i] %= 42;
        arr[arrInput[i]] += 1;
    }

    for(int i=0;i<42;i++)
    {
        if(arr[i] !=  0)
            count++;
    }

    
    printf("%d\n",count);

    return 0;


}
