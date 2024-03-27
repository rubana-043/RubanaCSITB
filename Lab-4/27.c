#include<stdio.h>
void main()
{
    char str[50];
    int i=0, j, len;
    printf("Enter a String: ");
    gets(str);
    while(str[i]!='\0')
    {
        len=0;
        if(str[i]==' ')
        {
            j=i;
            while(str[j-1]!='\0')
            {
                str[j] = str[j+1];
                j++;
            }
            len = 1;
        }
        if(len==0)
            i++;
    }
    printf("String without spaces: %s", str);
}
