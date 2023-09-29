#include <stdio.h>
int main() {
    char alp;
    printf("Input character: ");
    scanf("%c",&alp);
    if(alp >= 'a' && alp <= 'z'){
        printf("%c is lowercase alphabet",alp);
    }
    else if(alp >= 'A' && alp <= 'Z'){
        printf("%c is uppercase alphabet",alp);
    }
    return 0;
}
