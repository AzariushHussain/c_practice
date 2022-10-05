#include <stdio.h>
#include<stdlib.h>
void vowel_count(char* str,int len)
{   
    int count=0;
    char matches[len];
    char vowel[10]={'A','a','E','e','I','i','O','o','U','u'};
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (str[i]==vowel[j])
            {
              matches[count]=str[i];
              count++;
            }
            
        }
        
    }
    printf("The number of vowels matched is %d and the vowels matched are :-  \n",count);
    for (int i = 0; i<count; i++)
    {
        printf("%c ",matches[i]);
    }
    
    
}
int main(int argc, char const *argv[])
{   
    int len;
    printf("Enter the length of data to be entered :- ");
    scanf("%d",&len);
    char* str=(char*)malloc(len*sizeof(char));
    printf("Enter the word :- \n");
    scanf("%s",str);
    vowel_count(str,len);
    return 0;
}
