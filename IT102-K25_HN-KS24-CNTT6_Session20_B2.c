#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Student student;

    printf("Nhap ten: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &student.age);

    getchar();

    printf("Nhap so dien thoai: ");
    fgets(student.phoneNumber, sizeof(student.phoneNumber), stdin);

    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s", student.phoneNumber);

    return 0;
}
