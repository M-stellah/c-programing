/*Area of a rectangle*/
#include <stdio.h>
int main()
{
    int length,width,Area;
    printf("enter a value to length\n:");
    scanf("%d",&length);
    printf("enter a value to width\n:");
    scanf("%d",&width);
    Area=length*width;
    printf("Area=%d",Area);
    return 0;
}
