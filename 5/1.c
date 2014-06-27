#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d/%d", &a, &b);

    int min, f;
    if (a<b) min = a;
    else min = b;

    int  t = min;
    while(t > 1)
    {
    if (a % t == 0 && b %t == 0) {f = t; break;}
    t -= 1;
    }
    printf("%d/%d", a/t, b/t);
}
