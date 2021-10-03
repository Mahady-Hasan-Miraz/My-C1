// #include <stdio.h>

// void main()
// {
//    float TotalProfit;
//     int profit[]={20,4,12,31,41,16},weight[]={1,8,7,3,4,1},
//     n, no_items, cur_weight, item,i;
 
//     printf("Enter the capacity of knapsack: ");
//     scanf("%d", &n);
    
//     no_items = sizeof(weight) / sizeof(weight[0]);
//     int used[no_items];

//     for (i = 0; i < no_items; i++)
//     {
//             used[i] = 0;
//     }

//     cur_weight = n;
//     while (cur_weight > 0)
//     {
//         item = 1;
//         for (i = 0; i < no_items; i++)
//         {
//             if ((used[i] == 0) &&((item == 1) || ((float) profit[i] / weight[i] > (float) profit[item] / weight[item])))
//             {
//                 item = i;
//             }
//         }

//         used[item] = 1;
//         float lweight=cur_weight;       
//         cur_weight -= weight[item];

//         TotalProfit += profit[item];

//         if (cur_weight >= 0)
//         {
//             printf("Object %d (Profit: %d_______Weight: %dKg). Space left: %d.\n", item + 1, profit[item], weight[item], cur_weight);
//         }
//         else
//         {
//             float lastP = (profit[item])*(1 + (float) cur_weight / weight[item]);

//             printf("Object %d (Profit: %.2f____Weight: %.2fKg). Space left: %d.\n", item + 1, lastP,lweight, cur_weight+1);
//             TotalProfit -= profit[item];
//             TotalProfit += lastP;
//         }
//     }
//     printf("Total profit %.2f \n", TotalProfit);
// }


#include <stdio.h>

void main()
{
    int capacity, no_items, cur_weight, item;

    float total_profit;
    int i;
    int used[100];
    int value[]={10,5,15,10,7,6,18,3};
    int weight[]={2,3,5,10,7,1,4,1};

    printf("Enter the capacity of knapsack: ");
    scanf("%d", &capacity);

     no_items = sizeof(weight) / sizeof(weight[0]);



    for (i = 0; i < no_items; ++i)
        used[i] = 0;

    cur_weight = capacity;
    while (cur_weight > 0)
    {
        item = -1;
        for (i = 0; i < no_items; ++i)
            if ((used[i] == 0) &&
                ((item == -1) || ((float) value[i] / weight[i] > (float) value[item] / weight[item])))
                item = i;

        used[item] = 1;
        float a=cur_weight;
        cur_weight -= weight[item];
        total_profit += value[item];
        if (cur_weight >= 0)
            printf("Added object %d (Profit: %.2f\tWeight: %.2f Kg)  |  Space left: %.2f.\n", item + 1, (float)value[item], (float)weight[item], (float)cur_weight);
        else
        {
            // int item_percent = (int) ((1 + (float) cur_weight / weight[item]) * 100);
            // printf("Added %d%% (%d Rs., %dKg) of object %d in the bag.\n", item_percent, value[item], weight[item], item + 1);
            printf("Added object %d (Profit: %.2f\tWeight: %.2f Kg)  |  Space left: %.2f.\n", item + 1, (float)value[item], a, (float)cur_weight+1);
            total_profit -= value[item];
            total_profit += (1 + (float)cur_weight / weight[item]) * value[item];
        }
    }

    printf("Filled the bag with objects worth %.2f Rs.\n", total_profit);
}
