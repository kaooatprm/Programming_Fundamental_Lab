#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        for (int k = 0; k < (2*n-2*i)-1; k++)
        {
            printf("  ");
        }
        for (int l = 0; l < i; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < (2*n)-1; i++)
    {
        printf("* ");
    }
    printf("\n");

    int space = n-1;
    for(int i = 0; i<n-1;i++){
        for (int j = 0; j < space; j++)
        {
            printf("* ");
        }
        for (int k = 0; k < (2*i)+1; k++){
            printf("  ");
        }
        for (int l = 0; l < space; l++)
        {
            printf("* ");
        }
        space--;
        printf("\n");
    }
    return 0;
}
