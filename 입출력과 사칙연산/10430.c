#include<stdio.h>

int main() {
	int num_1, num_2, num_3;
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	printf("%d\n", (num_1 + num_2) % num_3);
	printf("%d\n", ((num_1 % num_3) + (num_2 % num_3)) % num_3);
	printf("%d\n", (num_1 * num_2) % num_3);
	printf("%d\n", ((num_1 % num_3) * (num_2 % num_3)) % num_3);
}
