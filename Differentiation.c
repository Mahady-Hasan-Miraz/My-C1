#include <stdio.h>
#include <math.h>
#define f(x) (sin(x))

int main()
{
    double a, h, x, res;
    int c;

    printf("\n\tEnter 1 (Forward Difference)\n");
    printf("\tEnter 2 (Central Difference)\n");
    printf("\tEnter 3 (Backward Difference)\n");
    printf("Enter Choice: ");
    scanf("%d", &c);

    printf("Enter a and h separated by space\n");
    scanf("%lf %lf", &x, &h);
    a=(x*3.1416/180);

    switch(c)
    {
        case 1:
            res = (f(a+h)-f(a))/h;
            printf("f'(a) = %lf", res);
            break;
        case 2:
            res = (f(a+h)-f(a-h))/(2*h);
            printf("f'(a) = %lf", res);
            break;
        case 3:
            res = (f(a)-f(a-h))/h;
            printf("f'(a) = %lf", res);
            break;
        default:
            return 0;
    } 
}