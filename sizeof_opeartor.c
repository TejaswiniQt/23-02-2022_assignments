/* C program to Implement your own sizeof() function 
*/

#include<stdio.h>
int main()
{
    int x;
    printf("size of x is %zu\n",((char*)(&x+1) - (char*)(&x)));
/*Here if say, &x=1000 then if we do x+1 it becomes 1004 where next int type varible can be stored
 difference gives how many varibles of type int can be stored in that memory i.e 1 for type int
 typecasting int char* and taking the difference will give how many varibles of type char can
 be stored in the given memory space .each char requires only one byte of memory.
    */

    return 0;
}
