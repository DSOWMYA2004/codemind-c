#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>34&&b>34&&c>34&&d>35&&e>35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}