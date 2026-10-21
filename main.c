#include <stdio.h>

int main() {
    double t;
    if (scanf("%lf", &t)==1){
      if (t < 15){
        printf("LANH\n");
    } else if (15<t<=25) {
        printf("MAT\n");
    } else if (25<t <= 35){
        printf("NONG\n");
    } else If (t<35) {
        printf ("RAT NONG\n");  
    } 
  }
  return 0;
}