#include <stdio.h>
/*int main(void)
{
    int x = 1;
    while (x <= 20)
    {
        printf("%d, %d, %d, %d, %d\n", x, x + 1, x + 2, x + 3, x + 4);
        x = x + 5;
    }
}*/
int main(void)
{
    int x;
    for (x = 1; x <= 20; x = x + 5)
        printf("%d, %d, %d, %d, %d\n", x, x + 1, x + 2, x + 3, x + 4);
}
