#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int c;
    printf("Enter the element to search: ");
    scanf("%d", &c);
    int start = 0;
    int end = (sizeof(a) / sizeof(a[0])) - 1;
    int mid = (start + end) / 2;
    int d = 0;

    while (start <= end)
    {
        if (a[mid] == c)
        {
            printf("%d found at: %d", c, mid);
            d = 1;
            break;
        }
        else if (a[mid] < c)
        {
            start = mid + 1;
            mid = (start + end) / 2;
        }
        else if (a[mid] > c)
        {
            end = mid - 1;
            mid = (start + end) / 2;
        }
    }
    if (d == 0)
    {
        printf("%d Not found in array", c);
    }

    return 0;
}