#include <stdio.h>

int integerPower(int, int);

int main() {
    int num;
    int exp;

    printf("Enter base number:");
    scanf("%d", &num);
    printf("Enter exponent:");
    scanf("%d", &exp);

    integerPower(num, exp);

    return 0;
}
int integerPower(int base,int exponent){
    int total = 1;
    for(int i = 1; i <= exponent; i++){
        total *= base;
        printf("%d\n", total);
    }
}
