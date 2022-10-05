#include<stdio.h>
int factorial(int num)
{
        int result=1;
    for (int i = 1; i <= num; i++)
    {
        result=result*i;
    }
    return result;
}
int permutation(int n,int r)
{
    int result=factorial(n)/factorial(n-r);
    return result;
}
int combination(int n,int r)
{
    int result=factorial(n)/(factorial(r)*factorial(n-r));
}
int main(int argc, char const *argv[])
{
    int choice,result,n,r;
    printf("Enter the number of total options :- \n");
    scanf("%d",&n);
    printf("Enter the number of items selected :- \n");
    scanf("%d",&r);
    printf("Enter 1 to calculate permutation and 2 to calculate combination of the given data :- ");
    scanf("%d",&choice);
    if (choice==1)
    {
       result=permutation(n,r);
       printf("The possible permutations of the given data is %d",result);
    }
    else if (choice==2)
    {
        result=combination(n,r);
        printf("The possible combinations of the given data is %d",result);

    }
    else{
        printf("Invalid input.");
    }
    return 0;
}
