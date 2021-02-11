#include<stdio.h>
int main()
{
    int day,mont,ne;
    scanf("%d %d",day,mont);
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(day<=7&&mont<=12)
    {
        ne=m[mont-1]-day;
        printf("%d",m[mont]);
    }
}
