#include <stdio.h>
int main()
{
    int num = 5;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for(int j = 0; j < num - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
