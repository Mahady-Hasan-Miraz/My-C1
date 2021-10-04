//C Program for 0-1 Knapsack Problem :

#include<stdio.h>

#include<conio.h>

void main()

{

	int v[20],w[20],i,j,n,W;

	void knapsack(int [],int [],int,int);

//	clrscr();

	printf("No of Objects=");

	scanf("%d",&n);

	printf("Capacity of Knapsack=");

	scanf("%d",&W);

	for(i=1;i<=n;i++)

	{       printf("Enter Weight and Value of Object%d = ",i);

		scanf("%d",&w[i]);

		scanf("%d",&v[i]);

	}

	knapsack(v,w,n,W);

	getch();

}

void knapsack(int v[],int w[],int n,int W)

{

	int k[20][20],i,j;

	for(i=0;i<=n;i++)

	{

		for(j=0;j<=W;j++)

		{

			if(i==0 || j==0)

			{	k[i][j]=0;

			}

			else if(j<w[i])

			{       k[i][j]=k[i-1][j];

			}

			else

			{

			  if(k[i-1][j]>k[i-1][j-w[i]]+v[i])

			  {	k[i][j]=k[i-1][j];

			  }

			  else

			  {	k[i][j]=k[i-1][j-w[i]]+v[i];

			  }

			 }

			}

		}

		for(i=0;i<=n;i++)

		{

			for(j=0;j<=W;j++)

			{

				printf("   %d",k[i][j]);

			}

			printf("\n");

		}

printf("___________________________________________");

printf("\nYou can get maximum = %d  profit",k[n][W]);

printf("\n___________________________________________");

//getch();

}