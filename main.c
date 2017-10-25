#include <stdio.h>
#include <math.h>

int main() {

    double x, a, d, G, F, Y;
    int n;

    printf("Если хотите вычислить G нажмите 1, если хотите вычислить F нажмите 2, если хотите вычислить Y нажмите 3\n");
    printf("Сделайте свой выбор:");
    scanf("%d", &n);
    printf("Введите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);

    switch (n) {
        case 1:
            if (d != 0) {
                G = (-10 * (18 * pow(a, 2) + 11 * a * x - 24 * pow(x, 2))) / (-pow(a, 2) + a * x + 6 * pow(x, 2));
                printf("G=%f\n\n", G);
            } else printf("Введите другие значения для x и a");
            break;

        case 2:
            F = cosh(21 * pow(a, 2) - 34 * a * x + 9 * pow(x, 2));
            printf("F=%f\n\n", F);
            break;

        case 3:
            Y = log(3 * pow(a, 2) - 25 * a * x + 8 * pow(x, 2) + 1) / log(10);
            printf("Y=%f\n\n", Y);
            break;

        default:
            printf("Вы выбрали неправильный вариант");
    }

    return 0;
}
