/*Working of arithmetic operators*/
#include <stdio.h>
int main()
{
    int x,y, sum,sub,div,mul,modulus;
    printf("enter the values of x,y:");
    scanf("%d,%d",&x,&y);
    sum= x+y;
    printf("x+y = %d \n",sum);
    sub= x-y;
    printf("x-y = %d \n",sub);
    mul= x*y;
    printf("x*y = %d \n",mul);
    div= x/y;
    printf("x/y = %d \n",div);
    modulus = x%y;
    printf("x%y = %d\n",modulus);

    return 0;
}
