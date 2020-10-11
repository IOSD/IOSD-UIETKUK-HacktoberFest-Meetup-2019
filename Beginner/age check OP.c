#include<stdio.h>

void main(){
    while(1){
        int num;
        char ch;
        printf("ENTER AGE : ");
        scanf("%d",&num);
        if(num>18){
            printf("ADULT\n");
        }
        else if(num<10){
            printf("CHILD\n");
        }
        else if(num>=10 && num<=18){
            printf("TEEN\n");
        }
        printf("Do you want to check more (y/n):");
        scanf(" %c",&ch);
        if(ch=='n'){
            break;
        }
    }
}
