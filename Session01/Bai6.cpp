#include <stdio.h>

int main() {
    int n = 0, sum = 0, count = 0;
    float average;

    do {
        printf("Nhap so (0 de dung): ");
        scanf("%d", &n);

        if (n != 0) { 
            sum += n;
            count++;
        }
    } while (n != 0);

    if (count > 0) {
        average = (float)sum / count;
        printf("Tong = %d\n", sum);
        printf("Trung binh = %.2f\n", average);
    } else {
        printf("Khong co so nao duoc nhap\n");
    } 

    return 0;
} 
