#include<stdio.h>
int main()
{
    char pro;
    float min,m=0,a;
    scanf("%c",&pro);
    scanf("%f",&min);
    if(pro=='A')
    {
        min=min-200;
        m+=199;
        if(min>0)
        {
            min=min*3;
            m=m+min;
            a=(int)m+0.5;
            if(m>=a)
            {
                m=(int)m+1;
                printf("%.2f",m);
            }
            else
                printf("%.2f",m);
        }
        else
            printf("%.2f",m);
    }
    else if(pro=='B')
    {
        m+=299;
        min=min-400;
        if(min>0)
        {
            min=min*2;
            m=m+min;
            a=(int)m+0.5;
            if(m>=a)
            {
                m=(int)m+1;
                printf("%.2f",m);
            }
            else
                printf("%.2f",m);
        }
        else
            printf("%.2f",m);
    }
    return 0;
}
