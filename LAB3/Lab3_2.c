#include<stdio.h>
int P(int x) 
{
    int sum = 0;
    for (int i = 1; i <= x-1; i++)
    {
        if (x % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main() 
{
    for (int x=1; x <= 10000; x++)
        if (P(x) == x)
        {
            printf("%d\n", x);
        }
        return 0;
}