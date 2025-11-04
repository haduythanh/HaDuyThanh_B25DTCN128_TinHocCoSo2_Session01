#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, a, b;

    while(1){
        printf("-------MENU-------\n");
        printf("|1. Tinh tong    |\n");
        printf("|2. Tinh hieu    |\n");
        printf("|3. Tinh tich    |\n");
        printf("|4. Thoat        |\n");
        printf("|-----------------\n");

        printf("Chon chuc nang: ");
        scanf("%d", &n);

        if(n < 1 || n > 4){
            printf("\nNhap lai lua chon cua ban\n\n");
            continue;
        } 
        if (n == 4){
            printf("Thoat chuong trinh !");
            exit(0);
        }
        printf("Nhap so thu nhat: ");
        scanf("%d", &a);

        printf("Nhap so thu hai: ");
        scanf("%d", &b);
    switch (n)
    {
    case 1:
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case 2:
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case 3:
        printf("%d x %d = %d\n", a, b, a * b);
        break;
    case 4:
        exit(0);
    default:
        printf("\nNhap lai lua chon cua ban\n");
        break;
    }
}
}