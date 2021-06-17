#include<stdio.h>

int main() {
	int cnt;
	float max = 0, sum = 0;
	float score[1000];

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		scanf("%f", &score[i]);
		
		if (max < score[i])
			max = score[i];
	}

	for (int i = 0; i < cnt; i++) {
		sum += score[i] / max * 100;
	}
	sum /= cnt;

	printf("%f\n", sum);
}
