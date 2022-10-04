#include<stdio.h>
#include<stdlib.h>
void ascending_arrange(int* arr,int num_count)
{
    for (int i = 0; i < num_count; i++)
    {
        for (int j = i+1; j < num_count; j++)
        {
           if (arr[i]>arr[j])
           {
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
           
        }
        
    }
    
}
void descending_arrange(int* arr,int num_count)
{
    for (int i = 0; i < num_count; i++)
    {
        for (int j = i+1; j < num_count; j++)
        {
           if (arr[i]<arr[j])
           {
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
           
        }
        
    }
}
int main(int argc, char const *argv[])
{
    int choice,num_count;
    int* arr;
    printf("Enter the count of number you want to enter :-\n");
    scanf("%d",&num_count);
    arr=(int*)malloc(num_count*sizeof(int));
    for (int i = 0; i < num_count; i++)
    {
        printf("Enter number %d  :-",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter 1 for ascending order arramgement and 2 for descending order arrengement of numbers:-\n");
    scanf("%d",&choice);
    if (choice==1)
    {
       ascending_arrange(arr,num_count);
       printf("Data arranged in ascending order :-\n");
       
       
    }
    else if (choice==2)
    {
        descending_arrange(arr,num_count);
        printf("Data arranged in descending order :-\n");
    }
    else
    {
        printf("Invalid input.\n");
    }
    for (int i = 0; i < num_count; i++)
       {
        printf("%d ",arr[i]);
       }
    free(arr);
    return 0;
}
