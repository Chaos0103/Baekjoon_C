#include<stdio.h>

int main() {
	int num;
	int save[10] = { 0, };
	int index = 0, sw = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);

		sw = 0;
		for (int j = 0; j < index; j++) {
			if (save[j] == num % 42) {
				sw = 1;
			}
		}
		if (sw == 0) {
			save[index++] = num % 42;
		}
	}
	
	printf("%d\n", index);
}
