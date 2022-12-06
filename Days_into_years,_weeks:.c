#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/365;
    c=(a%365)/7;
    d=(a%365)%7;
    printf("%d
",b);
    printf("%d
",c);
}