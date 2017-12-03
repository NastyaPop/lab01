#include <stdio.h>
#include <math.h>

int main() {

    double x, a, d, r, p, G, F, Y, x_min = 0, x_max =0;
    int n = 1, steps;

    printf("Если хотите вычислить G нажмите 1, если хотите вычислить F нажмите 2, если хотите вычислить Y нажмите 3, выход 4\n");
    printf("Сделайте свой выбор:");
    scanf("%d", &n);

    while ((n < 4) & (n > 0)) {

        printf("Введите границы x\nот:\n");
        scanf("%lf", &x_min);
        printf("до:\n");
        scanf("%lf", &x_max);

        printf("Введите a:");
        scanf("%lf", &a);

        printf("Введите шаг:\n");
        scanf("%d", &steps);

        switch (n) {
            case 1:
                for (x = x_min; x <= x_max;) {
                    d = (-pow(a, 2) + a * x + 6*pow(x, 2));
                    if (d == 0) {
                        printf("Введите другие значения для x и a");
                        continue;
                    }
                    G = (-10 * (18 * pow(a, 2) + 11 * a * x - 24 * pow(x, 2))) / d;
                    printf("G=%f\n\n", G);
                    x += (x_max + x_min) / (steps - 1);
                }
                break;

            case 2:
                for (x = x_min; x <= x_max;) {
                    r = cosh(21 * pow(a, 2) - 34 * a * x + 9 * pow(x, 2));
                    if (r == 0) {
                        printf("Введите другие значения для x и a");
                        continue;
                    }
                    F = cosh(21 * pow(a, 2) - 34 * a * x + 9 * pow(x, 2));
                    printf("F=%f\n\n", F);
                    x += (x_max + x_min) / (steps - 1);
                }
                break;

            case 3:
                for (x = x_min; x <= x_max;) {
                    p = log(10);
                    if (p == 0) {
                        printf("Введите другие значения для x и a");
                        continue;
                }
                    Y = log(3 * pow(a, 2) - 25 * a * x + 8 * pow(x, 2) + 1) / log(10);
                    printf("Y=%f\n\n", Y);
                    x += (x_max + x_min) / (steps - 1);
                }
                break;

            default:
                printf("Вы выбрали неправильный вариант");
        }
        printf("Если хотите вычислить G нажмите 1, если хотите вычислить F нажмите 2, если хотите вычислить Y нажмите 3, выход 4\n");
        printf("Сделайте свой выбор:\n");
        scanf("%d", &n);
    }
        return 0;
    }
