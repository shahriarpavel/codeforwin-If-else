#include <stdio.h>
int main() {
    char alp;
    printf("Input character: ");
    scanf("%c",&alp);
    if((alp >= 'a' && alp <= 'z') || (alp >= 'A' && alp <= 'Z')){
        printf("'%c' is alphabet",alp);
    }
    else{
       printf("'%c' is not an alphabet",alp);
    }
    return 0;
}
