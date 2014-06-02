#include <stdio.h>
int main()
{
        int day;
        scanf("%d", &day);
        int mod = day % 5;
        if (mod >3 | mod == 0) printf("Drying in day %d", day);
        else printf("Fishing in day %d", day);

        return 0;
}
