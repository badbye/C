#include <stdio.h>
int prime(int x) // check whether a number is a prime number
{
    int result = 1;
    if (x == 1) {result = 0;}
    else if (x == 2) {result = 1;}
    else
    {
        int t = 2;
        while (t<=(x/2+1))
        {
            if (x % t == 0)
            {
            result = 0; break;
            }
            t += 1;
        }
    }
    return result;
}

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);

    int i = 0, n = 0, sum = 0;
    for (i = start; i<=end; i++)
    {
        if (prime(i))
        {
            n += 1;
            sum += i;
            // printf("%d\n", i);
        }
    }
    printf("%d %d\n", n, sum);
}
