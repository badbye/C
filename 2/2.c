#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int minute = a / 100 * 60 + a % 100;
	minute += b;
	printf("%d\n", minute / 60 * 100 + minute % 60);
}
