#include<stdio.h>
void print_table(int num)
{
    printf("The table is :- \n");
    for (int i =1; i <=10; i++)
    {
        printf("%d x %d = %d\n",num,i,(num*i));
    }
    

}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number whose table is required :- ");
    scanf("%d",&num);
    print_table(num);
    return 0;
}
