#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double S_D(int a, int b) {
    if (a == b)return 0;
    int i, Powsum = 0, sum = 0, n = 0;
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    i = a;
    while (i <= b) {
        Powsum += pow(i, 2);
        sum += i;
        i++;
        n++;
    }
    double x = (n * Powsum) - pow(sum, 2);
    double y = n * (n - 1);
    return sqrt(x / y);
}

int main() {
    int i, num1, num2, n = 0;
    float sum = 0;
    scanf("%d %d", &num1, &num2);
    if (num1 <= num2) {
        i = num1;
        while (i <= num2) {
            sum += i;
            printf("%d ", i);
            i++;
            n++;
        }
        printf("\nAverage = %.1lf", sum / n);
        printf("\nSD = %.2lf", S_D(num1, num2));
    }
    else {
        i = num1;
        while (i >= num2) {
            sum += i;
            printf("%d ", i);
            i--;
            n++;
        }
        printf("\nAverage = %.1lf", sum / n);
        printf("\nSD = %.2lf", S_D(num1, num2));
    }
    return 0;
}