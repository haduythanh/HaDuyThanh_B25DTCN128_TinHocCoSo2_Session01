#include <stdio.h>

int main (){

    int n, i;
    int sum = 0;
    int arr[100];

    do {
        printf("Nhap so luong phan tu trong day: ");
        scanf("%d", &n);

        if(n < 1 || n > 100){
            printf("Nhap lai so trong khoang (1-100)!");
        }
    } while (n < 1 || n > 100);

    for(i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i +1);
        scanf("%d", &arr[i]);
    }
    printf("\nTong so le trong day la:\n");
    for(i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            sum += arr[i];
        }
    }
    printf("%d", sum);
    
    return 0;
}