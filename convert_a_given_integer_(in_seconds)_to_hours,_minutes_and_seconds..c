#include<stdio.h>
int main()
{
    int t,h,m,s;
    scanf("%d",&t);
    h=(t/3600);
    m=(t-(3600*h))/60;
    s=(t-(3600*h)-(m*60));
    printf("H:M:S-%d:%d:%d
",h,m,s);
}