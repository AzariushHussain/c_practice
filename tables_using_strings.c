#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void print_table(char *str_num)
{
  char **result = (char **)malloc(10 * sizeof(char*));
  for (int j = 1; j <=10; j++)
  {
        result[j]=(char*)malloc(strlen(str_num)*sizeof(char));
  for (int i = strlen(str_num) - 1; i >= 0; i++)
    {
        int calc=((int)str_num[i]-48*j);
        int carry=calc/10;
        result[j][i]=(char)(calc%10+carry*10);
    
  }
  result=realloc(result,strlen(str_num));
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%s x %d = %s\n",str_num,i+1,result[i]);
  }
  free(result);
}
int main(int argc, char const *argv[])
{
  char *str_num;
  printf("Enter the number whose table is to be printed .\n");
  scanf("%s", str_num);
  str_num = realloc(str_num, strlen(str_num));
  print_table(str_num);
  free(str_num);
  return 0;
}
