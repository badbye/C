#include <stdio.h>
int main()
{
    int number, n, times=0;
    scanf("%d %d", &number, &n);

    int you=number+1;
    while (times < n)
    {
        scanf("%d", &you);
        times += 1;

        if (you != number)        // wrong
        {
            if (you < 0) {printf("Game Over\n"); break;}
            else if (you > number) printf("Too big\n");
            else printf("Too small\n");
            if (times == n) {printf("Game Over\n"); break;}
        }
        else
        {
            if (times == 1) printf("Bingo!\n");
            else if (times <= 3) printf("Lucky You!\n");
            else printf("Good Guess!\n");
            break;
        }
    }
}
