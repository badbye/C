#include <stdio.h>
int main()
{
	const int number = 10;
	int n;
	scanf("%d", &n);
	int num[n];
	int i = 0;
	int count[number];
	for (i; i < number; i++){
		count[i] = 0;
	}
	i = 0;
	for (i; i < n; i++){
		scanf("%d", &num[i]);
		if (num[i] == 0){
			count[0] += 1;
		}else{
			while(num[i] != 0){
				int k;
				k = num[i] % 10;
				count[k] += 1;
				num[i] /= 10;
			}
		}
	}

	int j = 0, max = 0;
	for (j; j < number; j++){
		if (count[j] > max){
			max = count[j];
		}
	}
	j = 0;
	printf("%d:", max);
	for (j; j < number; j++){
		if (count[j] == max){
			printf(" %d", j);
		}
	}
}