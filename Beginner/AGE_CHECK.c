#include<stdio.h>

void main(){
    while(1){
        int age;
        char ch;
        printf("ENTER AGE OF PERSON : ");
        scanf("%d",&age);
        if(age>18){
            printf("THE PERSON IS ADULT\n");
        }
        else if(age<10){
            printf("THE PERSON IS CHILD\n");
        }
        else if(age>=10 && age<=18){
            printf("THE PERSON IS TEENAGER\n");
        }
        printf("Do you want to check more (y/n):");
        scanf(" %c",&ch);
        if(ch=='n'){
            break;
        }
    }
}
