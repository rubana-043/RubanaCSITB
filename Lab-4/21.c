//Write a program to find reverse of string without using function.
#include<stdio.h>
void main(){
char line[80], temp;
int i,l;
printf("enter the line: "); 
gets(line);
l=0;
while(line[l]!= '\0')
{
l++;
}
for(i=0;i<l/2;i++){
temp=line[i];
line[i]=line[l-1-i]; 
line[l-1-i]=temp;
}
printf("reverse is \n%s", line);
}
