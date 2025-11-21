// Implicit Type casting (Automatic)

    #include <stdio.h>
int main() {
    int a = 10;
    double b;
    b = a;   // int automatically converted to double
    printf("a = %dn" , a);
    printf("b = %lf\n" , b);
    return 0;
}

