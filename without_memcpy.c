/*Implement your own memcpy function 
*/


#include <stdio.h>
#include <string.h>

void myMemcopy(char *des,char *src,int len);

int main()
{
    char src[]="abc abc abc";
    char des[50];
    int len=strlen(src);
    myMemcopy(des,src,len);
    printf("Copied string is %s\n",des);
    return 0;
}
void myMemcopy(char *des,char *src,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        des[i]=src[i];
    }
    des[i]='\0';
}
