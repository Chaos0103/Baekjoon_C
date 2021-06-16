#include<stdio.h>

int main() {
	int num_1, num_2;

	while (scanf("%d %d", &num_1, &num_2) != EOF)
		printf("%d\n", num_1 + num_2);
}
