/* C program to find the frequency of character in a string "abcabcddd"
input: string --->  "abcabcddd"
output: The frequency of a--> is 2
        The frequency of b--> is 2
        The frequency of c--> is 2
        The frequency of d--> is 3
*/

#include<stdio.h>
#include<string.h>
void frequency(char *str, char *res,int len);
void print(char *str,char *res,int len);
int main()
{
    char str[]="abcabcddd";
    char res[100]={'\0'};
    int i=0,len,c=0,j;
    len=strlen(str);
    frequency(str,res,len);
    print(str,res,len);
    
    return 0;
}

void frequency(char *str, char *res,int len)
{
    int c=0,i=0,j;
    while(str[i] != '\0')
    {
        c=1;
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                c++;
                res[j]='0';
            }
        }
        if(res[i] != '0' )
        {
            res[i]=c;
        }
        i++;
    }
}

void print(char *str,char *res,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(res[i] != '0')
        {
            printf("The frequency of %c--> is %d\n",str[i],res[i]);
        }
    }
}