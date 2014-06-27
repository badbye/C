#include <stdio.h>
int main()
{
    int N, i = 0;
    double sum = 0.0,  a = 2.0,  b = 1.0;
    scanf("%d", &N);

    while(i < N)
    {
        sum += a/b;
        double t = a;
        a = a + b;
        b = t;
        i += 1;
    }
    printf("%.2f\n", sum);
}
