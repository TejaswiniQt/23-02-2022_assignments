/*swap the values of 2 struct elements , find area by passing struct to fn 
use fn pointers , macro fn
*/

#include <stdio.h>
#define swap(a,b) a ^= b ^= a ^= b
typedef struct rect 
{
    unsigned int len;
    unsigned int wid;
    unsigned int area;
}s1;

void area_rectangle(s1 *a);

int main()
{
    s1 a={10,20};
    printf("Before swapping\n");
    printf("len=%u\n",a.len);
    printf("wid=%u\n",a.wid);
    swap(a.len, a.wid);
    printf("after swapping\n");
    printf("len=%u\n",a.len);
    printf("wid=%u\n",a.wid);
    void (*fptr) (s1 *)=area_rectangle;
    (*fptr) (&a);
    

    return 0;
}

void area_rectangle(s1 *a)
{
    a->area = (a->len) * (a->wid);
    printf("Area of rectangle=%u\n",a->area);
    
}

