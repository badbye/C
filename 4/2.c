#include <stdio.h>
int main()
{
    int x=1, i=1, r=1;
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        for (r = 1; r <= i; r++)
        {
            printf("%d*%d=%-4d", r, i, r*i);
        }
        printf("\n");
    }
}
