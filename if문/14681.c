#include<stdio.h>

int main() {
	int x_point, y_point;

	scanf("%d %d", &x_point, &y_point);

	if (x_point > 0) {
		if (y_point > 0)
			printf("1\n");
		else
			printf("4\n");
	}
	else {
		if (y_point > 0)
			printf("2\n");
		else
			printf("3\n");
	}
}
