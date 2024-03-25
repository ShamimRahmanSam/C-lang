/*

// Tasks by Shakib Bhai
// Date : 25-03-24





//half pyramid of numbers

#include<stdio.h>

int main()
{
    int i, j, n;

    printf("\nEnter the value: ");

    scanf("%d",&n);

    for(i = 1; i <= n; i++)
        {
            printf("\n");

            for(j = 1; j <= i; j++)
                {
                    printf(" ");
                    printf("%d",j);
                }
        }

    return 0;

}














// inverted half pyramid

#include<stdio.h>

int main()
{
    int i, j, n;

    printf("\nEnter the value: ");

    scanf("%d",&n);

    for(i = n; i >= 1; i--)
        {
            for(j = 1; j <= i; j++)
                {
                    printf(" ");
                    printf("%d",j);
                }
            printf("\n");
        }

    return 0;

}







*/










//inverted full pyramid

#include <stdio.h>
int main()
{
    int i, j, rows, k, m = 1;
    printf("Enter the number of rows: ");

    scanf("%d", &rows);

    for (i = rows; i >=1; i--)
    {
        for (j = 1; j < m; j++)
        {
            printf("  ");
        }

        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("%d ", k);
        }
        m++;

        printf("\n");
    }
    return 0;
}





