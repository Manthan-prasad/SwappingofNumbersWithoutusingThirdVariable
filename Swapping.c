#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the two numbers\n");
    scanf("%d%d",&x,&y);
    printf("\nthe nos before swapping x=%d y=%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\n after swap x=%d y=%d",x,y);
    return 0;
}
