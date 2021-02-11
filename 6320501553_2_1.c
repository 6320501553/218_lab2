#include<stdio.h>
int main()
{
    int a,b,c,m;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a<=30&&b<=30&&c<=40)
    {
        m=a+b+c;
        if(m>=80&&m<=100)
            printf("A");
        else if(m>=75&&m<=79)
            printf("B+");
        else if(m>=70&&m<=74)
            printf("B");
        else if(m>=65&&m<=69)
            printf("C+");
        else if(m>=60&&m<=64)
            printf("C");
        else if(m>=55&&m<=59)
            printf("D+");
        else if(m>=50&&m<=54)
            printf("D");
        else if(m>=0&&m<=49)
            printf("F");
    }
    return 0;
}
