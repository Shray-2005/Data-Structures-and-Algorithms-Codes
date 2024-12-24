#include <stdio.h>
#include <time.h>

int st, end, mid, n, m, d;
void bs_recursion(int arr[])
{
    if (m == arr[mid])
    {
        d = 1;
        printf("\nElement found at %d\n", mid);
        return;
    }
    else if (st > end)
        return;
    else if (m < arr[mid])
    {
        end = mid - 1;
        mid = (st + end) / 2;
    }
    else if (m > arr[mid])
    {
        st = mid + 1;
        mid = (st + end) / 2;
    }
    bs_recursion(arr);
}

int main()
{
    clock_t start, end1;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    end = n;
    mid = (st + end) / 2;
    printf("Array must be sorted in ASCENDING ORDER\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &m);
    start = clock();
    bs_recursion(arr);
    end1 = clock();
    if (d == 0)
        printf("\nElement not found\n");
    printf("Time Used: %lf", (double)(end1 - start) / CLOCKS_PER_SEC);
    return 0;
}