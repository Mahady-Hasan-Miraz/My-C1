/*
    Mahady Hasan Miraz
    ID : 1935202037
*/

#include<stdio.h>
int minimum_cost(int mat[20],int tempValue) 
{
    int x,small;
    if(tempValue==1)
        return mat[0];
    else 
    {
        small=mat[0];
        for(x=1; x<tempValue; x++) 
        {
            if(mat[x]<small) 
            {
                small = mat[x];
            }
        }
        return small;
    }
}

int main() 
{
    int tempValue,i,l,j,k,matLimit;
    int mat[30],mul[10][15]= {0},columns[15],rows[15],temp[15];
    printf("Enter total  matrix number=");
    scanf("%d",&matLimit);
    for(i=0; i<matLimit; i++) 
    {
        printf("Enter  row and collumn matrix no %d:",i+1);
        scanf("%d %d",&rows[i],&columns[i]);
    }
    for(i=0; i<matLimit; i++) 
    {
        temp[i]= rows[i];
    }
    temp[i]=columns[i-1];

    for(l=2; l<=matLimit; l++) 
    {
        for(j=l,i=1; j<=matLimit; j++,i++) 
        {
            tempValue=0;
            for(k=i; k<j; k++) 
            {
                mat[tempValue]=(mul[i][k]+mul[k+1][j])+(temp[i-1]*temp[k]*temp[j]);
                tempValue++;
            }
            mul[i][j]=minimum_cost(mat,tempValue);
        }
    }
    printf("\nMinimum scaler multiplication Result =%d\n",mul[1][matLimit]);

    return 0;
}