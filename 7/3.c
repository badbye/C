#include <stdio.h>
int isPrime(int x)
{
	int n = 2, re = 1;
	if (x == 2 || x == 3){
		re = 1;
	}else{
		while (n * n <= x)
		{
			if (x % n == 0){
				re = 0;
				break;
			}else {
				n += 1;
			}
		}
	}
	return re;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int k = 2, count = 0, enter = 0;
	while (1)
	{
		if (isPrime(k)) {
			count += 1;
			if (count >= a && count <=b){
				enter += 1;
				printf("%d", k);
				if (count == b) {
					break;
				}
				if (enter % 10){
					printf(" ");
				}else{
					printf("\n");
				}
			} 
		}
		k += 1;
	}
}