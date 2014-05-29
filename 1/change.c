#include <stdio.h>
int main()
{
	int price = 0;
	printf("please give the number:");
	scanf("%d",&price);

	int change = 100 - price;
	
	printf("return you %d back\n", change);
	
	return 0;
}

