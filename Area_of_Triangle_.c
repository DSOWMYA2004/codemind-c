#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float s;
    s=(a+b+c)/2;
    float t;
    t=sqrt(s*(s-a)*(s-b)*(s-c)),2;
    printf("%0.2f",t);
}