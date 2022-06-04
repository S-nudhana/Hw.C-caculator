#include<stdio.h>
void main (){
    char symbol;
    float x,y;
    printf("Your symbol(+,-,*,/) :");
    scanf("%c",&symbol);
    switch (symbol){
        case '+':printf("First Number =");
                 scanf("%d",&x);
                 printf("Second Number =");
                 scanf("%d",&y);
                 printf("Answer is: %d",x+y);
        break;
        getch();
        case '-':printf("First Number =");
                 scanf("%d",&x);
                 printf("Second Number =");
                 scanf("%d",&y);
                 printf("Answer is: %d",x-y);
        break;
        getch();
        case '*':printf("First Number =");
                 scanf("%d",&x);
                 printf("Second Number =");
                 scanf("%d",&y);
                 printf("Answer is: %d",x*y);
        break;
        getch();
        case '/':printf("First Number =");
                 scanf("%d",&x);
                 printf("Second Number =");
                 scanf("%d",&y);
                 if(y == 0){
                    printf("Devide by Zero ERROR");
                 }else{
                    printf("Answer is: %.2f",x/y);
                 }
        break;
        getch();
        default:printf("Illigal Operation");
    }
    getch();
}