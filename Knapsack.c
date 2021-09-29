#include <stdio.h>

void main()
{
   float profit;
    int p[]={20,4,12,31,41,16},w[]={1,8,7,3,4,1},
    n, no_items, cur_weight, item,i;
 
    printf("Enter the capacity of knapsack: ");
    scanf("%d", &n);
    
    no_items = sizeof(w) / sizeof(w[0]);
    int used[no_items];

    for (i = 0; i < no_items; ++i)
    {
            used[i] = 0;
    }

    cur_weight = n;
    while (cur_weight > 0)
    {
        item = 1;
        for (i = 0; i < no_items; ++i)
        {
            if ((used[i] == 0) &&((item == 1) || ((float) p[i] / w[i] > (float) p[item] / w[item])))
            {
                item = i;
            }
        }

        used[item] = 1;
        float bb=cur_weight;       
        cur_weight -= w[item];

        profit += p[item];

        if (cur_weight >= 0)
        {
            printf("Object %d (Profit: %d_______Weight: %dKg). Space left: %d.\n", item + 1, p[item], w[item], cur_weight);
        }
        else
        {
            float lastP = (p[item])*(1 + (float) cur_weight / w[item]);

            printf("Object %d (Profit: %.2f____Weight: %.2fKg). Space left: %d.\n", item + 1, lastP,bb, cur_weight+1);
            profit -= p[item];
            profit += lastP;
        }
    }
    printf("Total profit %.2f \n", profit);
}