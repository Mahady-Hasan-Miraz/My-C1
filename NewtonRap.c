#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define    f(x)    3*x - cos(x) -1
#define   g(x)   3 + sin(x)

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
	 printf("\nStep\tXn\tf(Xn)\tf'(Xn)\tX(n+1)\n");
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  
		  x1 = x0 - f0/g0;
		  printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\n",step++,x0,f0,g0,x1);
		  
		  x0 = x1;
		  f1 = fabs(f(x1));
		  
	 }while(f1>0.0001);
	
	 printf("\nRoot is: %.2f\n", x1);
}