#include <stdio.h>
void pinyin(int x)
{
	switch(x)
	{
		case 0: printf("ling");  break;
		case 1: printf("yi");  break;
		case 2: printf("er");  break;
		case 3: printf("san");  break;
		case 4: printf("si");  break;
		case 5: printf("wu");  break;
		case 6: printf("liu");  break;
		case 7: printf("qi");  break;
		case 8: printf("ba");  break;
		case 9: printf("jiu");  break;
	}
}

int power(int n)
{
    int re = 1;
    while(n != 0)
    {
        re = re * 10;
        n -= 1;
    }
    return re;
}

int wei(int num)
{
    int w = 0;
    while (num >= power(w))
    {
        w += 1;
    }
    if (num == 0) w = 1;
    return w;
}

int main()
{
	int sum = 0;
	char i;
	while (1){
		scanf("%c", &i);
		if (i<48 || i > 57) break;
		sum += i;
		sum -= 48;
		// printf("%d\n", i);
	}
	int m = wei(sum); // 位数
	while( m != 0)
    	{
	        int t = sum / power(m-1);
	        // printf("%d\n", t);
	        pinyin(t);
	        sum = sum % power(m-1);
	        if (m == 1) printf("\n");
	        else printf(" ");
	        m -= 1;
	}
}