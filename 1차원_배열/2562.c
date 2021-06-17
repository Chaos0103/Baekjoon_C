#include<stdio.h>

int main() {
	int num[9];
	int max = 0, index = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
		
		if (max < num[i]) {
			max = num[i];
			index = i;
		}
	}

	printf("%d\n", max);
	printf("%d\n", index + 1);
}
