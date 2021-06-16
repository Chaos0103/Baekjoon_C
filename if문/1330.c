#include<stdio.h>

int main() {
	int num_1, num_2;
	scanf("%d %d", &num_1, &num_2);
	
	if (num_1 > num_2)
		printf(">\n");
	else if (num_1 < num_2)
		printf("<\n");
	else
		printf("==\n");
}
