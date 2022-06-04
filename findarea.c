#include<stdio.h>
int main (){
    char answer;
    int high,base,radius;
    printf("find area of triangle,square,circle(a,b,c)");
    scanf("%c",&answer);
    switch (answer){
        case 'A':
        case 'a':printf("High =");
                 scanf("%d",&high);
                 printf("Base =");
                 scanf("%d",&base);
                 printf("area of triangle is: %.2f",0.5*high*base);
        break;
        getch();
        case 'B':
        case 'b':printf("High =");
                 scanf("%d",&high);
                 printf("Base =");
                 scanf("%d",&base);
                 printf("area of square is: %d",high*base);
        break;
        getch();
        case 'C':
        case 'c':printf("radius =");
                 scanf("%d",&radius);
                 printf("area of circle is: %.2f",3.14*radius*radius);
        break;
        default:printf("please type only a,b or c");

        getch();
    }
    getch();
}