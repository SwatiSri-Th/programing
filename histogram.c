#include<stdio.h>
#include<string.h>
int main()
{
    char c[70];
    int i,freq[200]={0};
    printf("Enter a string : ");
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        freq[c[i]]++;
    }
    for(i=0;i<200;i++)
    {
        if(freq[i]!=0)
        {
            printf("\n '%c' occur %d times ",i,freq[i]);
        }
    }
}