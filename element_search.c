#include<stdio.h>
#include<stdlib.h>
int search(char* arr,int len,char c)//this function prints only the first occurrance of the element searched.
{
       for (int i = 0; i < len; i++)
       {
        if (arr[i]==c)
        {
            return i;
        }
        
        
       }
        
    
    return 0;
    

}
int main(int argc, char const *argv[])
{
    int len,result;
    char c;
    printf("Enter the length of the data entered :- ");
    scanf("%d",&len);
    char* arr=(char*)malloc(len*sizeof(char));
    printf("Enter the data on which operation is to be performed :- ");
    scanf("%s",arr);
    fflush(stdin);
    printf("Enter the element to be searched :- ");
    scanf("%c",&c);
    result=search(arr,len,c);
    if (result==0)
    {
        printf("The element isn't present in the given data");
    }
    else
    {
        printf("The entered element %c is present at index %d",c,result);
    }
    
    return 0;
}
