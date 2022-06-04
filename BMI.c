#include<stdio.h>
int main(){
    float w,h;
    float x ;
    printf("type your Weight (Kg):");
    scanf("%f",&w);
    printf("type your Hight (Meter):");
    scanf("%f",&h);
    x = w/(h*h);
    printf("Your BMI is %.2f\n",x);
    if(x<18.6){
        printf("Under weight\n");
    }else if(x<25){
        printf("Healthy\n");
    }else if(x<30){
        printf("Over weight\n");
    }else{
        printf("obese\n");
    }
    getch();
}
