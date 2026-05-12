#include <stdio.h>
int main()
{
    int v[5]={2,4,6,8,10};
    int  *ptr;

    ptr=&v[0];
   
    for (int i=0;i<5;i++)
    {
        printf("arreglo[%d]= %d ",i,v[i]);
        ptr=&v[i];
        printf("%d\n" ,*ptr);
    }

    return 0;
}