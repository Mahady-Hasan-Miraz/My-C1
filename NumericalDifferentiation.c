/*
    Mahady Hasan Miraz
    ID: 1935202037
*/
#include <stdio.h>
#include <math.h>
#define f(x) (cos(x))

int main()
{
    double a, h;
    int b,c;
    // printf("\n\tEnter 1 (Forward Difference)\n");
    // printf("\tEnter 2 (Central Difference)\n");
    // printf("\tEnter 3 (Backward Difference)\n");
    // printf("Enter Choice: ");
    // scanf("%d", &b);

    printf("1 for DEG or 2 for RAD ? ");scanf("%d", &c);
    printf("Enter a and h separated by space\n");
    scanf("%lf %lf", &a, &h);
    if(c==1)
    {
        a=(a*3.141592654/180);
    }
    // switch(b)
    // {
    //      case 1:
            printf("\nForward Difference:\n\tf'(a)= (f(a+h)-f(a))/h\n");
            printf("\tf'(a) = f(%.8lf + %.8lf) - f(%.8lf) / %.8lf\n",a,h,a,h);
            printf("\tf'(a) = f(%.8lf) - f(%.8lf) / %.8lf\n",a+h,a,h);
            printf("\tf'(a) = %.8lf - %.8lf / %.8lf\n",f(a+h),f(a),h);
            printf("\tf'(a) = %.8lf / %.8lf\n",f(a+h)-f(a),h);
            printf("\tf'(a) = %.8lf\n", (f(a+h)-f(a))/h);
            // break;
            // case 2:
            printf("\nCentral Difference:\n\tf'(a) = (f(a+h)-f(a-h))/(2*h)\n");
            printf("\tf'(a) = f(%.8lf + %.8lf) - f(%.8lf - %.8lf) / 2 * %.8lf\n",a,h,a,h,h);
            printf("\tf'(a) = f(%.8lf) - f(%.8lf) / %.8lf\n",a+h,a-h,2*h);
            printf("\tf'(a) = %.8lf - %.8lf / %.8lf\n",f(a+h),f(a-h),2*h);
            printf("\tf'(a) = %.8lf / %.8lf\n",(f(a+h)-f(a-h)),2*h);
            printf("\tf'(a) = %.8lf\n", (f(a+h)-f(a-h))/(2*h));
            // break;
            // case 3:
            printf("\nBackward Difference:\n\tf'(a)=(f(a)-f(a-h))/h\n");
            printf("\tf'(a) = f(%.8lf) - f(%.8lf - %.8lf) / %.8lf\n",a,a,h,h);
            printf("\tf'(a) = f(%.8lf) - f(%.8lf) / %.8lf\n",a,a-h,h);
            printf("\tf'(a) = %.8lf - %.8lf / %.8lf\n",f(a),f(a-h),h);
            printf("\tf'(a) = %.8lf / %.8lf\n",f(a+h)-f(a),h);
            printf("\tf'(a) = %.8lf\n", (f(a)-f(a-h))/h);
    //         break;
    //         default:
    //             return 0;
    // } 
    return 0;
}