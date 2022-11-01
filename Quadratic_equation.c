#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, x;
    double imagPart, realPart, x1, x2;

    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of c : ");
    scanf("%d", &c);
    x = (b * b) - 4 * a * c;

    if (x < 0)
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-x) / (2 * a);
        printf("\n");
        printf("Root1 = %.2lf+%.2lfi and Root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    else
    {
        x1 = (-b + sqrt(x)) / (2 * a);
        x2 = (-b - sqrt(x)) / (2 * a);
        printf("\n");
        printf("Root1 : %lf and Root2 : %lf", x1, x2);
    }
}
