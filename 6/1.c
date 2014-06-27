#include <stdio.h>
int main()
{
    int t = 1, re = 0;
    char c;
    while (1)
    {
        if ( t % 2 == 1)
        {
            int  x;
            scanf("%d", &x);
            if (t == 1){
                re = x;
            }else if (c == '+'){
                re += x;
            }else if (c == '-'){
                re -= x;
            }else if (c == '*'){
                re *= x;
            }else if (c == '/'){
                if (x == 0){
                    printf("ERROR");
                    break;
                }else{
                    re /= x;
                }
            }else{
//                printf("c=%c\n", c);
//                printf("re=%d\n", re);
//                printf("x=%d\n", x);
                printf("ERROR");
                break;
            }
        } else
        {
            scanf("%c", &c);
        }
        if (c == '=') {
            printf("%d", re);
            break;
        }
        t += 1;
    }
   // printf("%d", re);
}
