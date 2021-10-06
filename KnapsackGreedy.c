
#include <stdio.h>

void main()
{
    int  item, i, used[100];;
    float value[]={10,5,15,10,7,6,18,3},  weight[]={2,3,5,10,7,1,4,1};
    float total_profit, no_items, total_weight, cur_weight, capacity,lastw,left;

    printf("\nEnter the capacity of knapsack: ");
    printf("\n");
    scanf("%f", &capacity);
     no_items = sizeof(weight) / sizeof(weight[0]);

    for(i=0; i<no_items; i++)
    {
        total_weight+= weight[i];
    }
    if(total_weight<=capacity)
    {
        no_items = sizeof(value) / sizeof(value[0]);
        for(i=0; i<no_items; i++)
        {
            total_profit+= value[i];
        }
        printf("\nEvery object can be added.\n\t\tTotal profit:%.2f\nTotal weight: %.2f\n",total_profit,total_weight);
      }
    else
    {
    for (i = 0; i < no_items; ++i)
        used[i] = 0;

    cur_weight = capacity;
    while (cur_weight > 0)
    {
        item = -1;
        for (i = 0; i < no_items; ++i)
            if ((used[i] == 0) &&
                ((item == -1) || ( value[i] / weight[i] >  value[item] / weight[item])))
                item = i;

        used[item] = 1;
        lastw=cur_weight;
        left=cur_weight-lastw;

        cur_weight -= weight[item];

        total_profit += value[item];
        if (cur_weight >= 0)
            printf("Added object %02d    Profit: %05.2f    Weight: %05.2f Kg    Space left: %05.2f.\n", item + 1, value[item], weight[item], cur_weight);
        else
        {
            float item_percent =  ((1 +  cur_weight / weight[item]) * value[item]);
            printf("Added object %02d    Profit: %05.2f    Weight: %05.2f Kg    Space left: %05.2f.\n", item + 1, item_percent, lastw, left);
            total_profit -= value[item];
            total_profit += (1 + cur_weight / weight[item]) * value[item];
        }
    }
    printf("\nTotal profit: %.2f .\nTotal weight: %.2f\n\n", total_profit,total_weight);
    }
}
