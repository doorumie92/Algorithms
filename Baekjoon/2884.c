#include <stdio.h>

int main()
{
    int timeH,timeM;
    int totalM;
    scanf("%d",&timeH);
    scanf("%d",&timeM);

    totalM = (timeH * 60) + timeM;

    totalM -= 45;

    timeH = totalM/60;
    timeM = totalM%60;

    printf("%d %d\n",timeH,timeM);
        
    return 0;
}
