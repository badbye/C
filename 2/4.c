#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int a = x % 16;
	int b = x / 16;
	printf("%d\n", 10*b+a);

	return 0;
}
