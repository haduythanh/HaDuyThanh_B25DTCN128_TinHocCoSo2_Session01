#include <stdio.h>

int main (){

    int n, i, sum = 0;

    while (n !=0){
        printf("Nhap so (0 de dung): ");
        scanf("%d", &n);

        sum += n;
    }
    printf("Tong %d", sum);
    return 0;
}