#include <stdio.h>

int main() {
  int code;
  scanf("%d", &code);
  switch(code){
    case 1:
      puts("XEP_LOAI_XUAT_SAC");
     break;
    case 2:
      puts("XEP_LOAI_GIOI");
     break;
    case 3:
      puts("XEP_LOAI_KHA");
     break;
    case 4:
      puts("XEP_LOAI_TRUNG_BINH");
      break;
    default:
      puts("KHONG_HOP_LE");
  }
  return 0;
}