#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int sp,cp;
    scanf("%d %d", &sp,cp);
    if(sp>cp)
    printf("Profit");
    else if(sp<cp)
    printf("Loss");
    else
    printf("No profit No Loss");

    return 0;
}