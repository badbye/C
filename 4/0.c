#include <stdio.h>
int main()
{
    int x=1, t=0, a=0;
    scanf("%d", &x);
    int i,j,k;
    for (i=x; i<=x+3; i++)
    {
        for (j=x; j<=x+3; j++)
        {
            if (j != i)
            {
                for (k=x; k <= x+3; k++)
                {
                    if (k!=i & k!=j)
                    {
                        a = 100*i + 10*j + k;
                        t += 1;
                        if (t % 6 == 0) printf("%d\n", a);
                        else printf("%d ", a);
                    }
                }
            }
        }
    }
}

