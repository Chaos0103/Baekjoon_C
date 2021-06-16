#include<stdio.h>

int main() {
	int cnt;
	int num_1, num_2;

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		scanf("%d %d", &num_1, &num_2);

		printf("Case #%d: %d\n", i + 1, num_1 + num_2);
	}
}
