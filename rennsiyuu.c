#include<stdio.h>

int main(void)
{
	const int MONEY = 3000;
	int pocket = MONEY;

	printf("�����S�@");
	while (pocket >= 120) {
		printf("*");
		pocket = pocket - 120;
	}
	printf("�@�]���%d�~\n", pocket);

	pocket = MONEY;
	printf("�~�J���@");
	while (pocket >= 400) {
		for (int i = 1; i <= 6; i++) {
			printf("*");
		}
		pocket = pocket - 400;
	}
	printf("�@�]���%d�~\n", pocket);
	return 0;
}