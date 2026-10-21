#include <stdio.h>

int main() {
    double t;
    if (scanf("%lf", &t)==1){
      if (t < 15){
        printf("LANH\n");
    } else if (t<=25) {
        printf("MAT\n");
    } else if (t <= 35){
        printf("NONG\n");
    } else {
        printf ("RAT NONG\n");  
    } 
  }
  return 0;
}