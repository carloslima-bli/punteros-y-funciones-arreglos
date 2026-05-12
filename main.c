#include <stdio.h>
int main()
{
    int v[5]={2,4,6,8,10};
    int  *ptr;

    ptr=&v[0];
   // impresion de arreglo con punteros
    for (int i=0;i<5;i++)
    {
        printf("arreglo[%d]= %d ",i,v[i]);
       // ptr=&v[i];
        printf("%d\n" ,*(ptr+i));
    }

    return 0;
}