#include<stdio.h>

void knapsack(int profit[],int weight[],int n,int W)
{
	int k[50][50],i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=W;j++)
		{
			if(i==0 || j==0)
			{	
				k[i][j]=0;
			}
			else if(j<weight[i])
			{    
				k[i][j]=k[i-1][j];
			}
			else
			{
				if(k[i-1][j]>k[i-1][j-weight[i]]+profit[i])
				{
					k[i][j]=k[i-1][j];
				}
				else
				{
				  	k[i][j]=k[i-1][j-weight[i]]+profit[i];
				}
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=W;j++)
		{
			printf("   %03d",k[i][j]);
		}
		printf("\n");
	}
	printf("\nMaximum profit= %d \n",k[n][W]);
}
void main()
{
    int profit[50], weight[50], i, j, n, W;
	printf("Capacity of Knapsack=");
	scanf("%d",&W);

	printf("No of Objects=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{       
		printf("Enter Profit & Weight of Object %d = ",i);
		scanf("%d",&profit[i]);
		scanf("%d",&weight[i]);
	}
    printf("\n");
	knapsack(profit,weight,n,W);
}