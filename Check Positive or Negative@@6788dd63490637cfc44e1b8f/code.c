#include <stdio.h>
int main() {
    int num;
    scanf("%u",&num);
    if (num > 0)
    {
printf("Positive");
}
else if(num < 0)
{
printf("Negative");
}
else
{
printf("Zero");
}
    return 0;
}