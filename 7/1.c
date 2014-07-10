#include <stdio.h>
int main()
{
	int x, i = 1;
	scanf("%d", &x);
	int a = x / 100;
	int b = x / 10 - 10*a;
	int c = x % 10;
	while (a!=0)
	{
		printf("%c", 'B');
		a -= 1;
	}
	while(b != 0)
	{
		printf("%c", 'S');
		b -= 1;
	}
	while(i <= c)
	{
		printf("%d", i);
		i += 1;
	}
	printf("\n");
}
