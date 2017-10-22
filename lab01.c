#include <math.h>
#include <stdio.h>

int main() {
        double x, a, G, F, Y;
        printf("Введите x:");
        scanf("%lf", &x);
        printf("Введите a:");
        scanf("%lf", &a);
        G = (-10*(18*pow(a,2)+11*a*x-24*pow(x,2)))/(-pow(a,2)+a*x+6*pow(x,2));
        printf("G=%f\n\n", G);
        printf("Введите x:");

        scanf("%lf", &x);
        printf("Введите a:");
        scanf("%lf", &a);
        F = cosh(21*pow(a,2)-34*a*x+9*pow(x,2));
        printf ("F=%f\n\n", F);

        printf("Введите x:");
        scanf("%lf", &x);
        printf("Введите a:");
        scanf("%lf", &a);
        Y = log(3*pow(a,2)-25*a*x+8*pow(x,2)+1)/log(10);
        printf("Y=%f\n\n", Y);
    return 0;
}