#include <stdio.h>

int main (){
    int age;

    printf("Nhap tuoi: ");
    scanf("%d", &age);

    if (age <= 10){
        printf("Tre em");
    } else if (age <= 30){
        printf("Nguoi lon");
    } else if (age <= 65){
        printf("Nguoi cao tuoi");
    } else {
        printf("Nguoi gia");
    }
    return 0;
}