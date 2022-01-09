#include <stdio.h>

int main()
{
    printf("Input the array elements:\n");
    int a[1000], i = 0, n = 0, c, min, k;

    do
    {
        scanf_s("%d", &a[n++]);
    } while ((getchar()) != '\n');

    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (a[min] > a[j])
                min = j;
        k = a[min];
        a[min] = a[i];
        a[i] = k;
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}