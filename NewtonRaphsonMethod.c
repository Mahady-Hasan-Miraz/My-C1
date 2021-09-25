/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x - 4*x - 10;
}
float df (float x)
{
    return 2*x - 4;
}
/*float ddf (float x)
{
    return 6*x -10;
} */
int main()
{
    int itr, maxmitr;
    float h, x0, x1, allerr;
    printf("\nEnter x0, allowed error and maximum iterations\n");
    scanf("%f %f %d", &x0, &allerr, &maxmitr);
    for (itr=1; itr<=maxmitr; itr++)
    {
        //h=(f(x0)*df(x0))/((df(x0)*df(x0))-(f(x0)*ddf(x0)));
       // x1=x0-h;
         x1 = x0 - (f(x0)/df(x0));
        printf(" At Iteration no. %3d, x = %9.6f\n", itr, x1);
        if (fabs(x1-x0) < allerr)
        {
            printf("After %3d iterations, root = %8.6f\n", itr, x1);
            return 0;
        }
        x0=x1;
    }
    printf(" The required solution does not converge or iterations are insufficient\n");
    return 1;
}



