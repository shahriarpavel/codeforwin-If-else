#include <stdio.h>
int main() {
    int num1,num2,num3,max;
    printf("Input num1: ");
    scanf("%d",&num1);
    printf("Input num2: ");
    scanf("%d",&num2);
    printf("Input num3: ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("Number 1 is Maximum");
    }
    else if (num2>num1 && num2>num3){
         printf("Number 2 is Maximum");
    }
    else{
        printf("Number 3 is Maximum");
    }
    return 0;
}
