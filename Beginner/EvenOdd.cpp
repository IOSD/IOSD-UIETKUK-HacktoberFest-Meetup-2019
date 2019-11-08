#include<stdio.h>

void main(){
    while(1){
        int num;
        char ch;
        printf("ENTER A NUMBER : ");
        scanf("%d",&num);
        if(num%2==0){
            printf("EVEN NUMBER\n");
        }
        else{
        printf("ODD NUMBER\n");
        }
        printf("Do you want to check more (y/n):");
        scanf(" %c",&ch);
        if(ch=='n'){
            break;
        }
    }
}
