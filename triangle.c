#include <stdio.h>
int input;
int checknum(){
    printf("Make Triangle\n");
    printf("Enter hight :");
    scanf("%d", &input);
    if(input>=1){

    }
    else{
        checknum();
        input = 0;
    }
 }
int triangle(){
    int h = input;
    int i,j;
    for(int i=0;i<h;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    checknum();
    triangle();
    return 0;
}