#include<stdio.h>

int main() {
	int cnt = 0;
	int num, copy_num;

	scanf("%d", &num);
	
	copy_num = num;

	while (num != NULL) {
		copy_num = copy_num % 10 * 10 + (copy_num / 10 + copy_num % 10) % 10;
		if (copy_num == num) {
			printf("%d\n", ++cnt);
			return 0;
		}
		cnt++;
	}
}
