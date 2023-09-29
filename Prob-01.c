#include <stdio.h>
int main() {
    int num1,num2,max;
    printf("Input num1: ");
    scanf("%d",&num1);
    printf("Input num2: ");
    scanf("%d",&num2);
    if(num1>num2){
        printf("Number 1 is Maximum");
    }
    else{
        printf("Number 2 is Maximum");
    }
    return 0;
}
