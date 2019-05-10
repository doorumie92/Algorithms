#include <stdio.h>

int main()
{
    char number[1000001]={'\0'};
    scanf("%s",&number);

    int numberCount[10]={0};
    int temp=0;
    int max=0;

    for(int i=0;i<1000001;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(number[i]-48 == j )
                numberCount[j]++;
        }
        if(number[i+1]=='\0')
            break;

    }
    numberCount[6]+=numberCount[9];
    if(numberCount[6]%2 == 1)
        temp = 1;
    numberCount[6]/=2;
    numberCount[6]+=temp;
    numberCount[9]=0;
    max = numberCount[0];
    for(int i=1;i<10;i++)
    {
       if(max < numberCount[i]) 
           max = numberCount[i];
    }
    printf("%d\n",max);

    return 0;
}
