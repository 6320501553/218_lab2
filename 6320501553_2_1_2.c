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
        if(m<=49)
            printf("F");
        else if(m<=54)
            printf("D");
        else if(m<=59)
            printf("D+");
        else if(m<=64)
            printf("C");
        else if(m<=69)
            printf("C+");
        else if(m<=74)
            printf("B");
        else if(m<=79)
            printf("B+");
        else if(m<=100)
            printf("A");
    }
    return 0;
}
