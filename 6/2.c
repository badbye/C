#include <stdio.h>
int main()
{
    char t ;
/*    scanf("%c", &t);
    printf("%d\n", t);
    char k = 97;
    printf("%c\n", k);*/

    while (1){
        scanf("%c", &t);
        int k = t;
        if (t =='#'){
            printf("\n");
            break;
        }
        else if (k >= 65 && k <= 90){
            printf("%c", k+32);
        }
        else if (k >= 97 && k <= 122){
            printf("%c", k-32);
        }
        else{
            printf("%c", t);
        }
    }
}