#include <stdio.h>
#include <stdlib.h>
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permutation(char *arr, int count, int cidx)
{
    if (cidx==count)
    {
        for (int i = 0; i < count; i++)
        {
            printf("%c", arr[i]);
        }
        printf("\n");
    }
    for (int i=cidx; i<count; i++)
    {

        swap(&arr[i], &arr[cidx]);
        permutation(arr, count, cidx+1);
        swap(&arr[i], &arr[cidx]);
    }
}

int main(int argc, char const *argv[])
{
    int cidx = 0; // it will refer to the current index at which the control is present.
    int count;
    printf("Enter the length of data to be operated.\n");
    scanf("%d", &count);
    char *arr = (char *)malloc(count * sizeof(int));
    printf("Enter the data.\n");
    scanf("%s", arr);
    printf("All possible permutation of the data entered :-\n");
    permutation(arr, count, cidx);

    return 0;
}