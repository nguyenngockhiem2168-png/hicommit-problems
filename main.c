#include <stdio.h>

int main() {
    double dtb, drl;
    
    if (scanf("%lf %lf", &dtb, &drl) != 2) {
        return 0;
    
    if (dtb >= 9.0 && drl >= 90) {
        printf("HOC_BONG_XUAT_SAC\n");
    } 
    else if (dtb >= 8.0 && drl >= 80) {
        printf("HOC_BONG_GIOI\n");
    } 
    else if (dtb >= 7.0 && drl >= 70) {
        printf("HOC_BONG_KHA\n");
    } 
    else {
        printf("KHONG_DAT\n");
    }

    return 0;
}
