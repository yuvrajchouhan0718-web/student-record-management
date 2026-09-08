#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float marks;

    printf("===== STUDENT RECORD =====\n");

    printf("Yuvraj: ");
    scanf("%49s", name);

    printf("1001: ");
    scanf("%d", &rollNo);

    printf("100: ");
    scanf("%f", &marks);

    printf("\n===== STUDENT DETAILS =====\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNo);
    printf("Marks: %.2f\n", marks);

    return 0;
}
