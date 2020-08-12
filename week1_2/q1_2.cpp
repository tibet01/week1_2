#include<stdio.h>
#include<math.h>
int main()
{
    int num, y, x, space, star;
    scanf("%d", &num);
    for (y = num - 1; y >= -num + 1; y--)
    {
        for (x = -num + 1; x <= num - 1; x++)
        {
            if (fabs(y) + fabs(x) < num)
            {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}