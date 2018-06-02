#include <stdio.h>

int main(void)

{
    int i, j, height, width;

    printf("Enter two integers for height and width: ");
    scanf("%d%d", &height, &width);

    printf("\n\n");

    for (i = 1; i <= height; i++)

    {
        if (i == 1 || i == height)

        {
            for (j = 1; j <= width; j++)
                printf("=");
        }

        else

        {
            for (j = 1; j <= width; j++)
            {
                if (j == 1 || j == width)
                    printf("*");
                else
                    printf(" ");
            }
        }
    printf("\n");
    }

    return 0;
}

