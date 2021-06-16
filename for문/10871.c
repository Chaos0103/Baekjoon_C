#include<stdio.h>

int main() {
	int cnt, standard;
	int num;
	
	scanf("%d %d", &cnt, &standard);

	for (int i = 0; i < cnt; i++) {
		scanf("%d", &num);

		if (num < standard)
			printf("%d ", num);
	}
}
