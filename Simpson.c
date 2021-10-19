
#include<stdio.h>
#include<math.h>
#define f(x) (x*x+1)

int main()
{
    float a, b, s, h, x;
    int i, n;

    printf("Enter lower limit : ");
    scanf("%f", &a);
    printf("Enter upper limit : ");
    scanf("%f", &b);
    printf("Enter subintervals <greater than 4 & Even> : ");
    scanf("%d", &n);

    h = (b - a)/n;

    s = f(a) + f(b);
    for(i=1; i<= n-1; i++)
    {
        x = a + i*h;
        if(i%2==0)
        {
            s = s + 2 * f(x);
        }
        else
        {
            s = s + 4 * f(x);
        }
    }
    s = s * h/3;
    printf("\nIntegration is: %.f\n", s);
 return 0;
}
