#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", n);
    while (n > 9)
    {
        printf(" -> ");
        int sum = 0;
        while (n > 0)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }
        n = sum;
        printf("%d", n);
    }
    return 0;
}