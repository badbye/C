#include <stdio.h>
int main()
{
	int row, col;
	scanf("%d %d", &row, &col);

	int mount = row * col;
 	int num[mount];

 	int i = 0;
 	for (i; i < mount; i++){
 		scanf("%d", &num[i]);
 	}

 	i = 0;
 	int n = 0;
 	for (i; i < mount; i++){
 		if (i % col != 0 && (i+1) % col != 0 && i >=col && (mount - i - 1) > col){
 			if (num[i] > num[i+1] && num[i] > num[i-1] && num[i] > num[i-col] && num[i] > num[i+col]){
 				printf("%d %d %d\n", num[i], (i + 1) / col + 1, (i + 1) % col);
 				n += 1;
 			}
 		} 
 	}
 	if (n == 0){
 		printf("None %d %d", row, col);
 	}
}