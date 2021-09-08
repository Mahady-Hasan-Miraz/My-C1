/*
	Mahady Hasan Miraz
	ID : 19352025037
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MIN(a, b) (a < b ? a : b)

typedef struct job_ {
	int id, profit, deadline;
}job;

int compare(const void *a, const void *b) { // descending
	return (((job *) a)->profit < ((job *) b)->profit);
}

void schedule(job data[], int n) {
	int i, j, check[n], ans = 0;
	memset(check, 0, sizeof(check));
	for (i = 0; i < n; i++) {
		for (j = MIN(data[i].deadline, n)-1; j >= 0; j--) {
			if (!check[j]) {
				check[j] = data[i].id;
				ans += data[i].profit;
				break;
			}
		}
	}
	printf("The sequence of job is: \n");
	for (i = 0; i < n; i++)
		if (check[i])
			printf("%d ", check[i]);
	printf("\nThe max profit is: %d\n", ans);
}

int main() {
	job data[10];
	int n, i, j=0;
	printf("Enter number of jobs: ");
	scanf("%d", &n);
	printf("Enter jobs in the order (id deadline profit):\n");

    for (i = 0; i < n; i++)
		{     
            data[i].id=i+1;
            printf("%d ",i+1);
            scanf("%d%d",  &data[i].profit, &data[i].deadline);	
        }
	qsort(data, n, sizeof(job), compare);
	schedule(data, n);
	return 0;
}