#include <stdio.h>
int main(){
	int n, x;
	scanf("%d %d", &n, &x);
	int num[n];
	int index = n, i = 0;
	for (i; i < n; i++){
		scanf("%d", &num[i]);
		if (num[i] == x){
			index = i;
		}
	}
	if (index == n){
		printf("Not Found");
	} else{
		printf("%d", index);
	}
}