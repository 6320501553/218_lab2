#include<stdio.h>
int main()
{
    int day,d;
    char cha;
    scanf("%c",&cha);
    scanf("%d",&day);
    if(cha>='A'&&cha<='Z')
    {
        if(day>0&&day<32)
    {
        d=day%2;
        if(d==0)
        {
            if(cha<='I')
            {
                printf("{@_@}");
            }
            else if(cha<='R')
            {
                printf("{*v*}");
            }
            else if(cha<='Z')
            {
                printf("{x_x}");
            }
        }
        else if(d!=0)
        {
            if(cha<='I')
            {
                printf("(^_^)");
            }
            else if(cha<='R')
            {
                printf("(*o*)");
            }
            else if(cha<='Z')
            {
                printf("\\(T_T)/");
            }
        }
    }
    }
    return 0;
}
