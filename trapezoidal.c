
#include<stdio.h>
#include<math.h>
#define f(x) sqrt(x)

int main()
{
    int i,n;
    float a,b,s=0,y=0,h;
    printf("Enter the no of interval =");
    scanf("%d",&n);
    printf("Enter the lower limit=");
    scanf("%f",&a);
    printf("Enter the upper limit=");
    scanf("%f",&b);
    h=(b-a)/n;
    for(i=1;i<=n-1;i++)
    {
        s=s+f(a+i*h);
    }
    y=(f(a)+f(b)+2*s)*h/2;
    printf("the value of y is=%f",y);
}
