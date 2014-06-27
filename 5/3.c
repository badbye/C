#include <stdio.h>

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

int chang(int x, int k)
{
    int re = 0;
    while (k!=0)
    {
        re += x*power(k-1);
        k -= 1;
    }
    return re;
}
int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    int sum = 0;
    while (n != 0)
    {
        sum += chang(a, n);
        n -= 1;
    }
    printf("%d\n", sum);
}
