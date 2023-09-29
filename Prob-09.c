#include <stdio.h>
int main() {
    char alp;
    printf("Input character: ");
    scanf("%c",&alp);
    if((alp >= 'a' && alp <= 'z') || (alp >= 'A' && alp <= 'Z')){
        printf("%c is Alphabet",alp);
    }
    else if(alp >= '0' && alp <= '9'){
        printf("%c is Degit",alp);
    }
    else{
         printf("%c is Special Char",alp);
    }
    return 0;
}
