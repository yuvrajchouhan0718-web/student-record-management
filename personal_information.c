#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;

    printf("===== PERSONAL INFORMATION =====\n");

    printf("Yuvraj: ");
    scanf("%s", name);

    printf("18: ");
    scanf("%d", &age);

    printf("1.75m: ");
    scanf("%f", &height);

    printf("\n===== DETAILS =====\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);

    return 0;
}
