#include <stdio.h>

int power(int num, int p)
{
    // scanf("%d %d", &num, &p);
    int result=1;
    while (p!=0)
    {
        result *= num;
        p -= 1;
    }
    // printf("%d\n", result);
    return result;
}


int main()
{
    int x;
    scanf("%d", &x);

    int first = power(10, x-1);
    int last = first*10 - 1;
    //printf("%d %d", first, last);
    while (first <= last)
    {
        int a = first;
        int t = 0;
        while (a != 0)
        {
            t += power(a % 10, x);
            a /= 10;
        }
        if (first == t) printf("%d\n", first);
        first += 1;
    }
}
