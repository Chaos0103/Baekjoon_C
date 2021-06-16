#include<stdio.h>

int main() {
	int cnt, max, min;
	int num[1000000];

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		scanf("%d", &num[i]);

		if (i == 0) {
			max = num[i];
			min = num[i];
		}

		if (num[i] > max)
			max = num[i];
		if (num[i] < min)
			min = num[i];
	}

	printf("%d %d\n", min, max);
}
