#include<stdio.h>

int main() {
	int num_1, num_2;
	double result = 0;
	scanf("%d %d", &num_1, &num_2);
	result = (double)num_1 / num_2;
	printf("%.9f\n", result);
}
