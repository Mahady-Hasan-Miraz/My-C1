#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define    f(x)    ((x*x*x)-(4*(x*x))+(7*x)-10)
#define   g(x)   ((3*x*x)-(4*x)+7)

void main()
{
	 float x0, x1, f0, f1, g0;
	 int step = 1;

	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x0);
		  if(g0 == 0)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }
	 printf("\nStep\tXn\t\tf(Xn)\t\tf'(Xn)\t\tX(n+1)\n");
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  
		  x1 = x0 - f0/g0;
		  printf("%.2d\t%.4f\t\t%.4f\t\t%.4f\t\t%.4f\n",step++,x0,f0,g0,x1);
		  
		  x0 = x1;
		  f1 = fabs(f(x1));
		  
	 }while(f1>0.0001);
	
	 printf("\nRoot is: %.4f\n", x1);
}