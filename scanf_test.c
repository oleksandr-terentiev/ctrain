#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter please two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("Second number must be greater than 0, enter please correct value:\n");
    scanf("%d", &b);
    return 0;
}
