#include <stdio.h>

void main()
{
   float TotalProfit;
    int profit[]={20,4,12,31,41,16},weight[]={1,8,7,3,4,1},
    n, no_items, cur_weight, item,i;
 
    printf("Enter the capacity of knapsack: ");
    scanf("%d", &n);
    
    no_items = sizeof(weight) / sizeof(weight[0]);
    int used[no_items];

    for (i = 0; i < no_items; i++)
    {
            used[i] = 0;
    }

    cur_weight = n;
    while (cur_weight > 0)
    {
        item = 1;
        for (i = 0; i < no_items; i++)
        {
            if ((used[i] == 0) &&((item == 1) || ((float) profit[i] / weight[i] > (float) profit[item] / weight[item])))
            {
                item = i;
            }
        }

        used[item] = 1;
        float lweight=cur_weight;       
        cur_weight -= weight[item];

        TotalProfit += profit[item];

        if (cur_weight >= 0)
        {
            printf("Object %d (Profit: %d_______Weight: %dKg). Space left: %d.\n", item + 1, profit[item], weight[item], cur_weight);
        }
        else
        {
            float lastP = (profit[item])*(1 + (float) cur_weight / weight[item]);

            printf("Object %d (Profit: %.2f____Weight: %.2fKg). Space left: %d.\n", item + 1, lastP,lweight, cur_weight+1);
            TotalProfit -= profit[item];
            TotalProfit += lastP;
        }
    }
    printf("Total profit %.2f \n", TotalProfit);
}

/*  algorithm 

knapsack (weight[],profit[],corrent_weight)
for(i=0 to size N)
    do 
     x[i]=0
    weight=0
    for i=0 to N
        if weight + weight[i]<=weight
            x[i]=1
            weight=weight + weight[i]
        else
            x[i]=(weight - weight[i])/weight[i]
            weight=weight[i]
            break
*/