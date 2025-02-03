#include <stdio.h>
void Alfa(int *val,float pos)
{
    *val=5;
    pos=7.7;
    return;
}
void Beta(int val,float *pos)
{
    val=10;
    *pos=14.7;
}

int main(void)
{
    int a=6;
    float b=9.87;
    printf("Al principio valen a=%d b=%f\n",a,b);
    Alfa(&a,b);
    printf("Despues de Alfa valen a=%d b=%f\n",a,b);
    Beta(a,&b);
    printf("Después de Beta valen a=%d b=%f\n",a,b);
    return 0;
}