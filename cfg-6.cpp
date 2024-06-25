#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int n,i,count0=0,count1=0;
    printf("Enter a string: ");
    scanf("%s", str);
    n=strlen(str);
     for(i=0;i<n;i++)011
     {
        if (str[i]=='0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
     }
     if(count0==count1)
     {
         printf("VALID GRAMMER");
     }
     else
     {
         printf("NOT a VALID GRAMMER");
     }
}