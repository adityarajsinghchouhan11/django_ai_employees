#include<stdio.h>
int main()
{
    char s='a';
    char b='A';
    for(int i=1;i<4;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c%c",s,b);
            s++;
            b++;
        }
        printf("\n");
    }
}