/*
 * @Author: Julian Liu 
 * @Date: 2019-11-30 03:09:54 
 * @Last Modified by:   Julian Liu 
 * @Last Modified time: 2019-11-30 03:09:54 
 */

#include <stdio.h>
#include <stdlib.h>

char *name[] = {"Artichoke", "Beet", "Carrot"};
float price[] = {2.05, 1.15, 1.09};

int main() {
	int kinds = sizeof(name) / sizeof(char *);
	float *weight;
	int i = 0;

	float cost = 0.0;
	float weights = 0.0;
	float discount = 0.0;
	float freight = 14.0;
	weight = calloc(kinds, sizeof(float));
	while (i != 'q') {
		for (char abc = 'a'; i < kinds; i++, abc++) {
			if (!(i % 2) && i)
				putchar('\n');
			printf("%c) ", abc);
			printf("%-*s", 15, name[i]);
		}
		printf("\n%c) finish\n", 'q');
		printf("Enter your choose...");
		scanf("%c", (char *)&i);
		while (getchar() != '\n')
			;
		switch (i) {
		case 'a':
		case 'b':
		case 'c':
			i -= 'a';
			break;
		case 'q':
			continue;
		default:
			i = 0;
			printf("Wrong choose, fuck you.\n");
			continue;
		}
		float t_weight = 0.0;
		printf("Enter the weight you wanna order...");
		scanf("%f", &t_weight);
		while (getchar() != '\n')
			;
		weight[i] += t_weight;
		printf("You've just ordered a total %0.3f of %s, worth %0.3f.\n", weight[i], name[i], weight[i] * price[i]);

		for (int n = 0; n <= kinds; n++) {
			if (weight[n] != 0.0) {
				printf(" %-*s%-*.3f%-*.3f%-*.3f\n", 15, name[n], 10, price[n], 10, weight[n], 15, price[n] * weight[n]);
			}
		}
		weights += t_weight;
		printf("-Total weight: %0.3f\n", weights);
		cost += price[i] * t_weight;
		if (cost >= 100.0)
			discount = cost * 0.05;
		if (weights <= 5.0)
			freight = 6.5;
		else if (weights > 20.0)
			freight += (int)(weights - 20.0) * 0.5;
		printf("-Discount: %0.3f\n", discount);
		printf("-Freight: %0.3f\n", freight);
		printf("-Final cost: %f\n", cost - discount + freight);
		printf("\n");
		i = 0;
	}

	return 0;
}