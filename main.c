#include <stdio.h>

int main() {
    double distance, value;

    if (scanf("%lf %lf", &distance, &value) != 2) {
        printf("KHONG HOP LE");
        return 0;
    }

    if (distance <= 0 || value < 0) {
        printf("KHONG HOP LE");
    } else if (value >= 300000 && distance <= 15) {
        printf("0");
    } else if (distance <= 5) {
        printf("15000");
    } else if (distance <= 15) {
        printf("25000");
    } else {
        printf("40000");
    }

    return 0;
}
