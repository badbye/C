#include <stdio.h>
void re(long long x, long long y, long long z)
{
	if (x + y > z)
	{
		printf("true\n");
	}else{
		printf("false\n");
	}
}
int main()
{
	int  T , i = 1;
	long long x, y, z;
	scanf("%d", &T);
	while(T > 0)
	{
		scanf("%lld %lld %lld", &x, &y, &z);
		printf("Case #%d: ", i);
		re(x, y, z);
		i += 1;
		T -= 1;
	}

}