#include <stdio.h>
int main() {
    char *week[]={"Monday","Tuesday","Wednesday", "Thursday", "Friday"," Saturday","Sunday"};
    int  wk;
    printf("Input week number: ");
    scanf("%d",&wk);
    if(wk > 0 && wk < 8){
        printf("%s",week[wk-1]);
    }
    else {
        printf("Invalid");
    }
    return 0;
}
