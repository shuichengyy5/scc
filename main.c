//202410111303
//3331592296@qq.com
//余洋
#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int number;
    printf(" ");
    scanf("%d", &number);

    if (number < 0) {
        printf("负数没有阶乘。\n");
    } else {
        unsigned long long result = factorial(number);
        printf("%llu\n",result);
    }

    return 0;
}

unsigned long long factorial(int n) {
    unsigned long long result = 1;  
    for (int i = 1; i <= n; i++) {
        result *= i;  
    }
    return result;  
}
