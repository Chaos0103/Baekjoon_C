#include<stdio.h>

int main() {
	int num, multiply = 1;
	int cnt[10] = { 0, };

	for (int i = 0; i < 3; i++) {
		scanf("%d", &num);

		multiply *= num;
	}

	while (multiply != 0) {
		cnt[multiply % 10]++;
		multiply /= 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", cnt[i]);
}
