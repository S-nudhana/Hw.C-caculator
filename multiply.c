#include<stdio.h>
void main(){
  int i,j, w = 30, k, h = 15,n;
  for(i = 1;i <= h;i++){
    if(i == 1||i == h||i == 3){
      printf("\n");//ขึ้นบรรทัดใหม่
      for(j = 1;j <= w; j++){
        printf("*");//สร้างเส้นด้วย *
      }
    }else{
      printf("\n");
      for(k = 1; k <= w; k++){
        if(k == 1||k == w){
          printf("*");//สร้างความกว้างดัวย *
        }else{
          printf(" ");//เว้นที่ว่าง
        }
      }
    } 
  }
  getch();
}