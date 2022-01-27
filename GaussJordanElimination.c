/*
    Mahady Hasan Miraz
    ID : 1935202037
*/   
   
   #include<stdio.h>
   #define MAX 10
   void main()
  {
    float a[MAX][MAX],x[MAX],t;
    int n,i,j,k;
    printf("\nEnter the size of matrix: ");
    scanf("%d",&n);
    printf("Enter the elements in row-wise : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n+1);j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%f",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                t=a[j][i]/a[i][i];
                for(k=0;k<(n+1);k++)
                a[j][k]=a[j][k]-(a[i][k]*t);
            }
        }
    }

    printf("\nIn Matrix form : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n+1);j++)
        {
            printf("\t %.0f",a[i][j]);
        }
        printf("\n");
    }

    printf("\nSolution is = \n");
    for(i=0;i<n;i++)
    {
        printf("\tX%d = %f \n",i+1,a[i][3]/a[i][i]);
    }   
    printf("\n");
}