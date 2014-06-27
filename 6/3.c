#include <stdio.h>
int main()
{
	int t;
	while (1){
		char c;
		scanf("%c", &c);
		if (c == '.'){
			if (t != 0){
				printf("%d\n", t);
			}
			break;
		}
		else if (c == ' '){
			if (t != 0){
				printf("%d ", t);
			}
			t = 0;
		}
		else {
			t += 1;
		}
	}
}