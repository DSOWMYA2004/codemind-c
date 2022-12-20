#include<stdio.h>
int main()
{
    int i,n,v;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(v=1;v<=i;v++)
        {
            printf("*");
        }
        printf("
");
    }
}