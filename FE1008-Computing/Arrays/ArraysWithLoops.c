#include <stdio.h>
#define ARRAY_SIZE 10

void print_array (int [], int k);
int max_array (const int [], int k);

int main (void)

{
    int a [ARRAY_SIZE] = {1, 2, 0, 0, 4, 5, 6, 9, 9, 17};
    int max;

    print_array(a, ARRAY_SIZE);

    printf("\nThe maximum value of the array is = %d", max_array(a, ARRAY_SIZE));

    return 0;
}

void print_array (int a[], int k)

{
    int i;

    for (i = 0; i < k; i++)

        printf("%d   ", a [i]);
}

int max_array (const int a[], int k)

{
    int j, min = a[0];

    for (j = 0; j < k; j++)

        {

        if (min < a[j+1])

            min = a[j];

        }

    return min;
}
