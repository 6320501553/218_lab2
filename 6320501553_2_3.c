#include<stdio.h>
int main()
{
    int a[3],i=0,max,j=0;
    char b[4]={'A','B','C'},c[4];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    fflush(stdin);
    scanf("%s",&c);
    for(i=0;i<3;i++)
    {
        if(a[i]>a[i+1])
        {
            max=a[i];
            a[i]=a[i+1];
            a[i+1]=max;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(b[i]==c[j])
                printf("%d\t",a[i]);
        }
    }
    return 0;
}
