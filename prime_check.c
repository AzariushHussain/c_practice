// Take the numbers in the form of string and check weather they are prime or not.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void prime_check(char **arr, int count)
{
    int is_prime = 0;
    int *number = (int *)calloc(count, sizeof(int));
    for (int i = 0; i < count; i++)
    {
        int digit_count = strlen(arr[i]);
        for (int j = digit_count - 1; j >= 0; j--)
        {
            number[i] = number[i]  + 10*((int)arr[i][j] - 48);
        }
      
    }
      for (int j = 0; j < count; j++)
        {

            for (int i = 2; i < number[j]; i++)
            {
                if (number[j] % i == 0)
                {
                    is_prime = 1;
                    break;
                }
            }
            if (is_prime == 1)
            {
                printf("%s isn't a prime number.\n", arr[j]);
            }
            else
            {
                printf("%s is a prime number.\n", arr[j]);
            }
            is_prime = 0;
        }
}
int main(int argc, char const *argv[])
{
    int count;
    printf("Enter the count of elements :- \n");
    scanf("%d", &count);
    char **arr = (char **)malloc(count * sizeof(char *));
    for (int i = 0; i < count; i++)
    {
        arr[i] = (char *)malloc(1024 * sizeof(char));
        printf("Enter element no. %d  :- ", i + 1);
        scanf("%s", arr[i]);
        arr[i] = realloc(arr[i], strlen(arr[i]));
    }

    prime_check(arr, count);

    return 0;
}