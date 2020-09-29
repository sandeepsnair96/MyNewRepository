#include<stdio.h>

int main()
{
    char a = 'A';
    int x;
    x = 125;
    float p = 10.25, q = 18.76;
    printf("%c is stored at address %u. \n", a, &a);
    printf("%d is stored at address %u. \n", x, &x);
    printf("%f is stored at address %u. \n", p, &p);
    printf("%f is stored at address %u. \n", q, &q);

    printf("Hello World Added");
    return (0);
}