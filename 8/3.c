#include <stdio.h>

int main()
{
	const int number = 10;
	int count[number];
	// count each number
	int i = 0;
	for (i; i < number; i++){
		scanf("%d", &count[i]);
	}

	// print the smallest non-zero number  
	i = 1;
	for (i; i < number; i++){
		if (count[i] != 0){
			printf("%d", i);
			count[i] -= 1;
			break;
		}
	}

	// print 
	i = 0;
	for (i; i < number; i++){
		if (count[i] != 0){
			while(count[i] != 0){
				printf("%d", i);
				count[i] -= 1;
			}
		}
	}
}