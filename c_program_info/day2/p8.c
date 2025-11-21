#include <stdio.h>
int main () {
    int x=30;
    int y=15;
    printf("%d > %d = %d\n",x,y,x>y);
    printf("%d > %d = %d\n",x,y,x<y);
    printf("%d >= %d = %d\n" , x, y, x >= y);
    printf("%d <=%d = %d\n" , x, y, x <= y);
    printf("%d == %d=%d\n" , x, y, x == y);
    printf("%d!= %d = %d\n" , x, y, x != y);
    return 0;
}
