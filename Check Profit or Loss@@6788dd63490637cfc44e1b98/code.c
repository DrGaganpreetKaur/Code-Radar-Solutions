#include <stdio.h>
int main() {
    float sp,cp;
    scanf("%f %f\n", &cp,&sp);
    if(sp>cp)
    printf("Profit");
    else if(sp<cp)
    printf("Loss");
    else
    printf("No profit No Loss");
    return 0;
}