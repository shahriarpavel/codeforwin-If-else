#include <stdio.h>
int main() {
    char alp;
    printf("Input character: ");
    scanf("%c",&alp);
    if((alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u' || alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U')){
        printf("%c is vowel",alp);
    }
    else if((alp >= 'a' && alp <= 'z') || (alp >= 'A' && alp <= 'Z')){
            printf("%c is constant",alp);
    }
    return 0;
}
