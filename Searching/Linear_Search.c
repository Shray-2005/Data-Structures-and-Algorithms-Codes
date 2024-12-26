#include <stdio.h>

int main()
{
    int a[] = {10,25,30,45,50,65};
    int b;
    printf("Enter the element to search: ");
    scanf("%d", &b);
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i <= len; i++)
    {
        if (a[i] == b)
        {
            printf("%d found at index: %d", b, i);
            break;
        }
        else if (i == len)
        {
            printf("%d not found in array", b);
        }
    }
    return 0;
}