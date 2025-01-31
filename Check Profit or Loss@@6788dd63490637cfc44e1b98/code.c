#include <stdio.h>
int main() {
    int sp,cp;
    scanf("%d%d", &cp,&sp);
    if(sp>cp)
    printf("Profit");
    else if(sp<cp)
    printf("Loss");
    else
    printf("No profit No Loss");
    return 0;
}