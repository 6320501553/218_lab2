#include<stdio.h>
#include<math.h>
int main()
{
    char pro;
    float min,m=0;
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
            printf("%.2f",ceil(m));
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
            printf("%.2f",ceil(m));
        }
        else
            printf("%.2f",m);
    }
    return 0;
}
