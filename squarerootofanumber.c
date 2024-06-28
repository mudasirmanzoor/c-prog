#include<stdio.h>
int main(){
    int a;
    float ans;
    printf("enter the value of an integer\n");
    scanf("%d", &a);
    ans = sqrt(a);
    printf("the square root of an integer is %f", ans);
    return 0;
}