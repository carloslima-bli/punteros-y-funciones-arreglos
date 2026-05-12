#include <stdio.h>
int main()
{
    char v[5]={'a','e','i','o','u'};
    char *ptr;

    ptr = &v[0];
    *(ptr+3)='x';

    for (int i=0;i<5;i++)
    {
        printf ("%c",v[i]);
        printf ("%c\n",*(ptr+i));
        
    }
    

    return 0;
}