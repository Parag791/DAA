#include <stdio.h>

int steps = 0;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    int j;

    for (j = low; j < high; j++)
    {
        steps++;

        if (a[j] < pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[high]);

    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int a[] = {43, 32, 22, 78, 63, 57, 91, 13};
    int n = 8, i;

    quickSort(a, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nNumber of steps = %d\n", steps);

    return 0;
}
2.#include <stdio.h>

int steps = 0;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    int j;

    for (j = low; j < high; j++)
    {
        steps++;

        if (a[j] < pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[high]);

    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int a[] = {43, 32, 22, 78, 63, 57, 91, 13};
    int n = 8, i;

    quickSort(a, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nNumber of steps = %d\n", steps);

    return 0;
}
