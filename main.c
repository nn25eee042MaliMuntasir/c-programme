#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i;
    char str1[20],str2[20];
    printf("Enter the word:-");
    scanf("%s",&str1);
    n=strlen(str1);

    for (i=0;i<n;i++)
        {
            str2[n-i-1]=str1[i];
        }
    str2[n]='\0';
    if (strcmp(str1, str2) ==0)
       {
        printf("The entered word is palindrome");
       }
    else
       {
           printf("The entered word is not palindrome");
       }
    return 0;
}
