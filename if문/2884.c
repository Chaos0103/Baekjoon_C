#include<stdio.h>

int main() {
	int hour, minute;
	
	scanf("%d %d", &hour, &minute);

	if (minute < 45) {
		if (hour == 0)
			hour = 24;
		hour -= 1;
		minute = minute + 15; //60 - 45 = 15
	}
	else
		minute -= 45;

	printf("%d %d\n", hour, minute);
}
