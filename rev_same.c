/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i,j,pos,start=0,end,temp,pos1;
    char s[100];
    scanf("%[^\n]",s);
    for(pos1=0;s[pos1];pos1++);
    for(pos=0;s[pos];pos++)
    {
        if(s[pos]==' ')
        {
            for(i=start,j=pos-1;i<=j;i++,j--)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
            start=pos+1;
        }
    }
    for(i=start,j=pos1-1;i<=j;i++,j--)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
   
    printf("%s",s);
}
