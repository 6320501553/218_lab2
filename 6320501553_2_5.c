#include<stdio.h>
int main()
{
    int day,mont,ne,m;
    scanf("%d %d",day,mont);
    if(day<=7&&mont<=12)
    {
        switch(mont)
        {
            case 1: ne=31; break;
            case 2: ne=28; break;
            case 3: ne=31; break;
            case 4: ne=30; break;
            case 5: ne=31; break;
            case 6: ne=30; break;
            case 7: ne=31; break;
            case 8: ne=31; break;
            case 9: ne=30; break;
            case 10: ne=31; break;
            case 11: ne=30; break;
            case 12: ne=31; break;
        }
        m=(ne+day)%7;
        if(m==0)
            printf("7");
        else
            printf("%d",m);
    }
    return 0;
}
