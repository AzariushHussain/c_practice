#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print_table(char *str_num)
{
  int calc, carry=0;
  for (int i = 0; i < 9; i++)
  {
    char *result = (char *)malloc(1024 * sizeof(char));
    for (int j = strlen(str_num) - 1; j >= 0; j--)
    {
      calc = (((int)str_num[j] - 48) * (i + 1)) + carry;
      *(result+j) = (char)(48 + calc % 10);
      carry = calc / 10;
    }
    result = realloc(result, strlen(result));
    if (carry != 0)
    {
      printf("%s x %d = %c%s\n", str_num, i + 1, (48 + carry), result);
    }
    else
    {
      printf("%s x %d = %s\n", str_num, i + 1, result);
    }
    carry=0;
  }
  printf("%s x %d = %s%c\n", str_num, 10, str_num, '0');
}
int main(int argc, char const *argv[])
{
  char *str_num = (char *)malloc(1024 * sizeof(char));
  printf("Enter the number whose table is to be printed .\n");
  scanf("%s", str_num);
  str_num = realloc(str_num, strlen(str_num));
  print_table(str_num);
  free(str_num);
  return 0;
}
