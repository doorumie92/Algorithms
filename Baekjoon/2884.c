#include <stdio.h>

int main()
{
    int timeH,timeM;
    int totalM;
    scanf("%d",&timeH);
    scanf("%d",&timeM);

    totalM = (timeH * 60) + timeM;

    if(totalM < 45)
    {
        timeH = 23;
        timeM = 60 - (45-totalM);
    }
    else
    {
        totalM -= 45;
        timeH = totalM/60;
        timeM = totalM%60;
    }

    printf("%d %d\n",timeH,timeM);

    return 0;
}
